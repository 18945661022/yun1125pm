#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.WebCamImpl
struct WebCamImpl_t741;
// UnityEngine.Camera[]
struct CameraU5BU5D_t190;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t747;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamImpl_get_DidUpdateThisFrame_m5529 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C" bool WebCamImpl_get_IsPlaying_m5530 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C" int32_t WebCamImpl_get_ActualWidth_m5531 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C" int32_t WebCamImpl_get_ActualHeight_m5532 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C" bool WebCamImpl_get_IsTextureSizeAvailable_m5533 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C" void WebCamImpl_set_IsTextureSizeAvailable_m5534 (WebCamImpl_t741 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C" bool WebCamImpl_get_FlipHorizontally_m5535 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C" Vec2I_t792  WebCamImpl_get_ResampledTextureSize_m5536 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C" void WebCamImpl_ComputeResampledTextureSize_m5537 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C" void WebCamImpl__ctor_m5538 (WebCamImpl_t741 * __this, CameraU5BU5D_t190* ___arCameras, int32_t ___renderTextureLayer, String_t* ___webcamDeviceName, bool ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C" void WebCamImpl_StartCamera_m5539 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C" void WebCamImpl_StopCamera_m5540 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C" void WebCamImpl_ResetPlaying_m5541 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C" Color32U5BU5D_t747* WebCamImpl_GetPixels32AndBufferFrame_m5542 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C" void WebCamImpl_RenderFrame_m5543 (WebCamImpl_t741 * __this, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C" VideoModeData_t699  WebCamImpl_GetVideoMode_m5544 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t678  WebCamImpl_GetVideoTextureInfo_m5545 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C" bool WebCamImpl_IsRendererDirty_m5546 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C" void WebCamImpl_OnDestroy_m5547 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C" void WebCamImpl_Update_m5548 (WebCamImpl_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
