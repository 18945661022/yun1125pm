
#include <stdio.h>

#include "GlesHelper.h"
#include "UnityAppController.h"
#include "DisplayManager.h"
#include "EAGLContextHelper.h"
#include "CVTextureCache.h"
#include "iPhone_Profiler.h"



// here goes some gles magic

// we include gles3 header so we will use gles3 constants.
// sure all the actual gles3 is guarded (and constants are staying same)
#include <OpenGLES/ES3/gl.h>
#include <OpenGLES/ES3/glext.h>

// here are the prototypes for gles2 ext functions that moved to core in gles3
extern "C" void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum* attachments);
extern "C" void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern "C" void glResolveMultisampleFramebufferAPPLE(void);

#define SAFE_GL_DELETE(func, obj)	do { if(obj) { GLES_CHK(func(1,&obj)); obj = 0; } } while(0)

#define DISCARD_FBO(ctx, fbo, cnt, att)													\
do{																						\
	if(surface->context.API >= 3)	GLES_CHK(glInvalidateFramebuffer(fbo, cnt, att));	\
	else if(_supportsDiscard)		GLES_CHK(glDiscardFramebufferEXT(fbo, cnt, att));	\
} while(0)

#define CREATE_RB_AA(ctx, aa, fmt, w, h)																			\
do{																													\
	if(surface->context.API >= 3)	GLES_CHK(glRenderbufferStorageMultisample(GL_RENDERBUFFER, aa, fmt, w, h));		\
	else if(_supportsMSAA)			GLES_CHK(glRenderbufferStorageMultisampleAPPLE(GL_RENDERBUFFER, aa, fmt, w, h));\
} while(0)





extern "C" void InitEAGLLayer(void* eaglLayer, bool use32bitColor);

extern "C" void InitRenderingGLES()
{
	int api = UnitySelectedRenderingAPI();
	assert(api == apiOpenGLES2 || api == apiOpenGLES3);

	_supportsDiscard		= api == apiOpenGLES2 ? UnityHasRenderingAPIExtension("GL_EXT_discard_framebuffer")			: true;
	_supportsMSAA			= api == apiOpenGLES2 ? UnityHasRenderingAPIExtension("GL_APPLE_framebuffer_multisample")	: true;
	_supportsPackedStencil	= api == apiOpenGLES2 ? UnityHasRenderingAPIExtension("GL_OES_packed_depth_stencil")		: true;
}


extern "C" void CreateSystemRenderingSurfaceGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);
	DestroySystemRenderingSurface(surface);

	const NSString* colorFormat = surface->use32bitColor ? kEAGLColorFormatRGBA8 : kEAGLColorFormatRGB565;

	surface->layer.opaque = YES;
	surface->layer.drawableProperties = [NSDictionary dictionaryWithObjectsAndKeys:
											[NSNumber numberWithBool:FALSE], kEAGLDrawablePropertyRetainedBacking,
											colorFormat, kEAGLDrawablePropertyColorFormat,
											nil
										];


	surface->colorFormat = surface->use32bitColor ? GL_RGBA8 : GL_RGB565;

	GLES_CHK(glGenRenderbuffers(1, &surface->systemColorRB));
	GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, surface->systemColorRB));
	AllocateRenderBufferStorageFromEAGLLayer(surface->context, surface->layer);

	GLES_CHK(glGenFramebuffers(1, &surface->systemFB));
	GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->systemFB));
	GLES_CHK(glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, surface->systemColorRB));
}

extern "C" void CreateRenderingSurfaceGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);
	DestroyRenderingSurfaceGLES(surface);

	bool needRenderingSurface = surface->targetW != surface->systemW || surface->targetH != surface->systemH || surface->useCVTextureCache;
	if(needRenderingSurface)
	{
		if(surface->useCVTextureCache)
			surface->cvTextureCache = CreateCVTextureCache();

		if(surface->cvTextureCache)
		{
			surface->cvTextureCacheTexture = CreateReadableRTFromCVTextureCache(surface->cvTextureCache, surface->targetW, surface->targetH, &surface->cvPixelBuffer);
            surface->targetColorRT = GetGLTextureFromCVTextureCache(surface->cvTextureCacheTexture);
		}
		else
		{
			GLES_CHK(glGenTextures(1, &surface->targetColorRT));
		}

		GLES_CHK(glBindTexture(GL_TEXTURE_2D, surface->targetColorRT));
		GLES_CHK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GLES_UPSCALE_FILTER));
		GLES_CHK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GLES_UPSCALE_FILTER));
		GLES_CHK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE));
		GLES_CHK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE));

		if(!surface->cvTextureCache)
		{
			GLenum fmt  = surface->use32bitColor ? GL_RGBA : GL_RGB;
			GLenum type = surface->use32bitColor ? GL_UNSIGNED_BYTE : GL_UNSIGNED_SHORT_5_6_5;
			GLES_CHK(glTexImage2D(GL_TEXTURE_2D, 0, fmt, surface->targetW, surface->targetH, 0, fmt, type, 0));
		}

		GLES_CHK(glGenFramebuffers(1, &surface->targetFB));
		GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->targetFB));
		GLES_CHK(glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, surface->targetColorRT, 0));

		GLES_CHK(glBindTexture(GL_TEXTURE_2D, 0));
	}

	if(_supportsMSAA && surface->msaaSamples > 1)
	{
		GLES_CHK(glGenRenderbuffers(1, &surface->msaaColorRB));
		GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, surface->msaaColorRB));

		GLES_CHK(glGenFramebuffers(1, &surface->msaaFB));
		GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->msaaFB));

		CREATE_RB_AA(surface->context, surface->msaaSamples, surface->colorFormat, surface->targetW, surface->targetH);
		GLES_CHK(glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, surface->msaaColorRB));
	}
}

extern "C" void CreateSharedDepthbufferGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);
	DestroySharedDepthbufferGLES(surface);

	surface->depthFormat = surface->use24bitDepth ? GL_DEPTH_COMPONENT24 : GL_DEPTH_COMPONENT16;
	if(_supportsPackedStencil && surface->use24bitDepth)
		surface->depthFormat = GL_DEPTH24_STENCIL8;

	GLES_CHK(glGenRenderbuffers(1, &surface->depthRB));
	GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, surface->depthRB));

	bool needMSAA = _supportsMSAA && (surface->msaaSamples > 1);

	if(needMSAA)
		CREATE_RB_AA(surface->context, surface->msaaSamples, surface->depthFormat, surface->targetW, surface->targetH);

	if(!needMSAA)
		GLES_CHK(glRenderbufferStorage(GL_RENDERBUFFER, surface->depthFormat, surface->targetW, surface->targetH));

	if(surface->msaaFB)			GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->msaaFB));
	else if(surface->targetFB)	GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->targetFB));
	else						GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->systemFB));

	GLES_CHK(glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, surface->depthRB));
	if(_supportsPackedStencil && surface->use24bitDepth)
		GLES_CHK(glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, surface->depthRB));
}

extern "C" void CreateUnityRenderBuffersGLES(UnityDisplaySurfaceGLES* surface)
{
	int api = (int)surface->context.API;
	{
		int w = surface->targetW, h = surface->targetH;
		unsigned texid = 0, rbid = 0, fbo = 0;

		if(surface->msaaFB)
		{
			rbid  = surface->msaaColorRB;
			fbo = surface->msaaFB;
		}
		else if(surface->targetFB)
		{
			texid = surface->targetColorRT;
			fbo = surface->targetFB;
		}
		else
		{
			rbid  = surface->systemColorRB;
			fbo = surface->systemFB;
		}

		surface->unityColorBuffer = UnityCreateUpdateExternalColorSurfaceGLES(api, surface->unityColorBuffer, texid, rbid, w, h, surface->use32bitColor, surface->msaaSamples, true);
		surface->unityDepthBuffer = UnityCreateUpdateExternalDepthSurfaceGLES(api, surface->unityDepthBuffer, 0, surface->depthRB, w, h, surface->use24bitDepth, surface->msaaSamples, true);
		UnityRegisterFBO(api, surface->unityColorBuffer, surface->unityDepthBuffer, fbo);
	}

	if(surface->msaaFB || surface->targetFB)
	{
		int w = surface->systemW, h = surface->systemH;
		unsigned rbid = surface->systemColorRB;

		surface->systemColorBuffer = UnityCreateUpdateExternalColorSurfaceGLES(api, surface->systemColorBuffer, 0, rbid, w, h, surface->use32bitColor, 1, true);
		surface->systemDepthBuffer = UnityCreateUpdateExternalDepthSurfaceGLES(api, surface->systemDepthBuffer, 0, 0, w, h, surface->use24bitDepth, 1, true);
		UnityRegisterFBO(api, surface->systemColorBuffer, surface->systemDepthBuffer, surface->systemFB);
	}
	else
	{
		surface->systemColorBuffer = 0;
		surface->systemDepthBuffer = 0;
	}
}


extern "C" void DestroySystemRenderingSurfaceGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);

	GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, 0));
	GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, 0));

	if(surface->systemColorRB)
	{
		GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, surface->systemColorRB));
		DeallocateRenderBufferStorageFromEAGLLayer(surface->context);

		GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, 0));
		GLES_CHK(glDeleteRenderbuffers(1, &surface->systemColorRB));
		surface->systemColorRB = 0;
	}

	if(surface->targetFB == 0 && surface->msaaFB == 0)
		SAFE_GL_DELETE(glDeleteRenderbuffers, surface->depthRB);
	SAFE_GL_DELETE(glDeleteFramebuffers, surface->systemFB);
}

extern "C" void DestroyRenderingSurfaceGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);

	if(surface->targetColorRT && !surface->cvTextureCache)
	{
		GLES_CHK(glDeleteTextures(1, &surface->targetColorRT));
		surface->targetColorRT = 0;
	}

	if(surface->cvTextureCacheTexture)	CFRelease(surface->cvTextureCacheTexture);
	if(surface->cvPixelBuffer)			CFRelease(surface->cvPixelBuffer);
	if(surface->cvTextureCache)			CFRelease(surface->cvTextureCache);
	surface->cvTextureCache = 0;

	SAFE_GL_DELETE(glDeleteFramebuffers, surface->targetFB);
	SAFE_GL_DELETE(glDeleteRenderbuffers, surface->msaaColorRB);
	SAFE_GL_DELETE(glDeleteFramebuffers, surface->msaaFB);
}

extern "C" void DestroySharedDepthbufferGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);
	SAFE_GL_DELETE(glDeleteRenderbuffers, surface->depthRB);
}

extern "C" void DestroyUnityRenderBuffersGLES(UnityDisplaySurfaceGLES* surface)
{
	EAGLContextSetCurrentAutoRestore autorestore(surface->context);

	if(surface->unityColorBuffer)
		UnityDestroyExternalColorSurfaceGLES((int)surface->context.API, surface->unityColorBuffer);
	if(surface->systemColorBuffer);
		UnityDestroyExternalColorSurfaceGLES((int)surface->context.API, surface->systemColorBuffer);

	surface->unityColorBuffer = surface->systemColorBuffer = 0;


	if(surface->unityDepthBuffer)
		UnityDestroyExternalDepthSurfaceGLES((int)surface->context.API, surface->unityDepthBuffer);
	if(surface->systemDepthBuffer);
		UnityDestroyExternalDepthSurfaceGLES((int)surface->context.API, surface->systemDepthBuffer);

	surface->unityDepthBuffer = surface->systemDepthBuffer = 0;
}

extern "C" void PreparePresentGLES(UnityDisplaySurfaceGLES* surface)
{
	{
		EAGLContextSetCurrentAutoRestore autorestore(surface->context);

		if(surface->msaaSamples > 1 && _supportsMSAA)
		{
			Profiler_StartMSAAResolve();

			GLuint targetFB = surface->targetFB ? surface->targetFB : surface->systemFB;
			GLES_CHK(glBindFramebuffer(GL_READ_FRAMEBUFFER, surface->msaaFB));
			GLES_CHK(glBindFramebuffer(GL_DRAW_FRAMEBUFFER, targetFB));

			GLenum	discardAttach[] = {GL_DEPTH_ATTACHMENT, GL_STENCIL_ATTACHMENT};
			DISCARD_FBO(surface->context, GL_READ_FRAMEBUFFER, 2, discardAttach);

			if(surface->context.API < 3)
			{
				GLES_CHK(glResolveMultisampleFramebufferAPPLE());
			}
			else
			{
				const GLint w = surface->targetW, h = surface->targetH;
				GLES_CHK(glBlitFramebuffer(0,0,w,h, 0,0,w,h, GL_COLOR_BUFFER_BIT, GL_NEAREST));
			}

			Profiler_EndMSAAResolve();
		}

		if(surface->allowScreenshot && UnityIsCaptureScreenshotRequested())
		{
			GLint targetFB = surface->targetFB ? surface->targetFB : surface->systemFB;
			GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, targetFB));
			UnityCaptureScreenshot();
		}
	}

	AppController_RenderPluginMethod(@selector(onFrameResolved));

	if(surface->targetColorRT)
	{
		// shaders are bound to context
		EAGLContextSetCurrentAutoRestore autorestore(UnityGetMainScreenContextGLES());

		assert(surface->systemColorBuffer != 0 && surface->systemDepthBuffer != 0);
		UnitySetDefaultFBO((int)surface->context.API, surface->systemColorBuffer, surface->systemDepthBuffer);
		UnityBlitToSystemFB(surface->targetColorRT, surface->targetW, surface->targetH, surface->systemW, surface->systemH);
	}

	if(_supportsDiscard)
	{
		EAGLContextSetCurrentAutoRestore autorestore(surface->context);

		GLenum	discardAttach[] = {GL_COLOR_ATTACHMENT0, GL_DEPTH_ATTACHMENT, GL_STENCIL_ATTACHMENT};

		if(surface->msaaFB)
			DISCARD_FBO(surface->context, GL_READ_FRAMEBUFFER, 3, discardAttach);

		if(surface->targetFB)
		{
			GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->targetFB));
			DISCARD_FBO(surface->context, GL_FRAMEBUFFER, 3, discardAttach);
		}

		GLES_CHK(glBindFramebuffer(GL_FRAMEBUFFER, surface->systemFB));
		DISCARD_FBO(surface->context, GL_FRAMEBUFFER, 2, &discardAttach[1]);
	}
}
extern "C" void PresentGLES(UnityDisplaySurfaceGLES* surface)
{
	if(surface->context && surface->systemColorRB)
	{
		EAGLContextSetCurrentAutoRestore autorestore(surface->context);
		GLES_CHK(glBindRenderbuffer(GL_RENDERBUFFER, surface->systemColorRB));
		[surface->context presentRenderbuffer:GL_RENDERBUFFER];
	}
}

extern "C" void PrepareRenderingGLES(UnityDisplaySurfaceGLES* /*surface*/)
{
}
extern "C" void TeardownRenderingGLES(UnityDisplaySurfaceGLES* /*surface*/)
{
}

extern "C" void PrepareFrameRenderingGLES()
{
	UnityDisplaySurfaceGLES* surf = (UnityDisplaySurfaceGLES*)GetMainDisplaySurface();
	UnitySetDefaultFBO((int)surf->context.API, surf->unityColorBuffer, surf->unityDepthBuffer);
}
extern "C" void TeardownFrameRenderingGLES()
{
}

void CheckGLESError(const char* file, int line)
{
	GLenum e = glGetError();
	if( e )
		printf_console ("OpenGLES error 0x%04X in %s:%i\n", e, file, line);
}

