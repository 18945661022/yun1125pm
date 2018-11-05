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

// PlayVideo
struct PlayVideo_t120;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t41;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PlayVideo::.ctor()
extern "C" void PlayVideo__ctor_m328 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::Start()
extern "C" void PlayVideo_Start_m329 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::Update()
extern "C" void PlayVideo_Update_m330 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::OnApplicationPause(System.Boolean)
extern "C" void PlayVideo_OnApplicationPause_m331 (PlayVideo_t120 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::HandleDoubleTap()
extern "C" void PlayVideo_HandleDoubleTap_m332 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::HandleSingleTap()
extern "C" void PlayVideo_HandleSingleTap_m333 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayVideo::PlayFullscreenVideoAtEndOfFrame(VideoPlaybackBehaviour)
extern "C" Object_t * PlayVideo_PlayFullscreenVideoAtEndOfFrame_m334 (Object_t * __this /* static, unused */, VideoPlaybackBehaviour_t41 * ___video, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::UpdateFlashSettingsInUIView()
extern "C" void PlayVideo_UpdateFlashSettingsInUIView_m335 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayVideo::IsFullScreenModeEnabled()
extern "C" bool PlayVideo_IsFullScreenModeEnabled_m336 (PlayVideo_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackBehaviour PlayVideo::PickVideo(UnityEngine.Vector3)
extern "C" VideoPlaybackBehaviour_t41 * PlayVideo_PickVideo_m337 (PlayVideo_t120 * __this, Vector3_t17  ___screenPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayVideo::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C" void PlayVideo_PauseOtherVideos_m338 (PlayVideo_t120 * __this, VideoPlaybackBehaviour_t41 * ___currentVideo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
