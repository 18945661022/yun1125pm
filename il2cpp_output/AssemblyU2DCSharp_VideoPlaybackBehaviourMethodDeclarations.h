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

// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t41;
// VideoPlayerHelper
struct VideoPlayerHelper_t42;
// UnityEngine.Texture
struct Texture_t21;
// System.Collections.IEnumerator
struct IEnumerator_t142;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType.h"

// System.Void VideoPlaybackBehaviour::.ctor()
extern "C" void VideoPlaybackBehaviour__ctor_m103 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper VideoPlaybackBehaviour::get_VideoPlayer()
extern "C" VideoPlayerHelper_t42 * VideoPlaybackBehaviour_get_VideoPlayer_m104 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlaybackBehaviour::get_CurrentState()
extern "C" int32_t VideoPlaybackBehaviour_get_CurrentState_m105 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaType VideoPlaybackBehaviour::get_MediaType()
extern "C" int32_t VideoPlaybackBehaviour_get_MediaType_m106 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::set_MediaType(VideoPlayerHelper/MediaType)
extern "C" void VideoPlaybackBehaviour_set_MediaType_m107 (VideoPlaybackBehaviour_t41 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture VideoPlaybackBehaviour::get_KeyframeTexture()
extern "C" Texture_t21 * VideoPlaybackBehaviour_get_KeyframeTexture_m108 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::set_KeyframeTexture(UnityEngine.Texture)
extern "C" void VideoPlaybackBehaviour_set_KeyframeTexture_m109 (VideoPlaybackBehaviour_t41 * __this, Texture_t21 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackBehaviour::get_AutoPlay()
extern "C" bool VideoPlaybackBehaviour_get_AutoPlay_m110 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::Start()
extern "C" void VideoPlaybackBehaviour_Start_m111 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnRenderObject()
extern "C" void VideoPlaybackBehaviour_OnRenderObject_m112 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnApplicationPause(System.Boolean)
extern "C" void VideoPlaybackBehaviour_OnApplicationPause_m113 (VideoPlaybackBehaviour_t41 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::OnDestroy()
extern "C" void VideoPlaybackBehaviour_OnDestroy_m114 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ShowBusyIcon()
extern "C" void VideoPlaybackBehaviour_ShowBusyIcon_m115 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::InitVideoTexture()
extern "C" void VideoPlaybackBehaviour_InitVideoTexture_m116 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::HandleStateChange(VideoPlayerHelper/MediaState)
extern "C" void VideoPlaybackBehaviour_HandleStateChange_m117 (VideoPlaybackBehaviour_t41 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackBehaviour::ResetToPortraitSmoothly()
extern "C" Object_t * VideoPlaybackBehaviour_ResetToPortraitSmoothly_m118 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::ScaleIcon()
extern "C" void VideoPlaybackBehaviour_ScaleIcon_m119 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackBehaviour::CheckIconPlaneVisibility()
extern "C" void VideoPlaybackBehaviour_CheckIconPlaneVisibility_m120 (VideoPlaybackBehaviour_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
