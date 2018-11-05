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

// VideoPlaybackUIEventHandler
struct VideoPlaybackUIEventHandler_t124;
// System.Action
struct Action_t3;
// VideoPlaybackUIView
struct VideoPlaybackUIView_t125;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t41;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"

// System.Void VideoPlaybackUIEventHandler::.ctor()
extern "C" void VideoPlaybackUIEventHandler__ctor_m358 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::add_CloseView(System.Action)
extern "C" void VideoPlaybackUIEventHandler_add_CloseView_m359 (VideoPlaybackUIEventHandler_t124 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::remove_CloseView(System.Action)
extern "C" void VideoPlaybackUIEventHandler_remove_CloseView_m360 (VideoPlaybackUIEventHandler_t124 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::add_GoToAboutPage(System.Action)
extern "C" void VideoPlaybackUIEventHandler_add_GoToAboutPage_m361 (VideoPlaybackUIEventHandler_t124 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::remove_GoToAboutPage(System.Action)
extern "C" void VideoPlaybackUIEventHandler_remove_GoToAboutPage_m362 (VideoPlaybackUIEventHandler_t124 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackUIView VideoPlaybackUIEventHandler::get_View()
extern "C" VideoPlaybackUIView_t125 * VideoPlaybackUIEventHandler_get_View_m363 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::get_ExtendedTrackingIsEnabled()
extern "C" bool VideoPlaybackUIEventHandler_get_ExtendedTrackingIsEnabled_m364 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::UpdateView(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_UpdateView_m365 (VideoPlaybackUIEventHandler_t124 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::Bind()
extern "C" void VideoPlaybackUIEventHandler_Bind_m366 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::UnBind()
extern "C" void VideoPlaybackUIEventHandler_UnBind_m367 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::TriggerAutoFocus()
extern "C" void VideoPlaybackUIEventHandler_TriggerAutoFocus_m368 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoPlaybackUIEventHandler::TriggerAutoFocusAndEnableContinuousFocusIfSet()
extern "C" Object_t * VideoPlaybackUIEventHandler_TriggerAutoFocusAndEnableContinuousFocusIfSet_m369 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnPause(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnPause_m370 (VideoPlaybackUIEventHandler_t124 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedOnAboutButton(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedOnAboutButton_m371 (VideoPlaybackUIEventHandler_t124 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::EnableContinuousAutoFocus()
extern "C" void VideoPlaybackUIEventHandler_EnableContinuousAutoFocus_m372 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedOnFullscreenButton(System.Boolean)
extern "C" void VideoPlaybackUIEventHandler_OnTappedOnFullscreenButton_m373 (VideoPlaybackUIEventHandler_t124 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlaybackBehaviour VideoPlaybackUIEventHandler::PickVideo()
extern "C" VideoPlaybackBehaviour_t41 * VideoPlaybackUIEventHandler_PickVideo_m374 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::stopRunningObjectTracker()
extern "C" bool VideoPlaybackUIEventHandler_stopRunningObjectTracker_m375 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::restartRunningObjectTracker()
extern "C" bool VideoPlaybackUIEventHandler_restartRunningObjectTracker_m376 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::ResetCameraFacingToBack()
extern "C" void VideoPlaybackUIEventHandler_ResetCameraFacingToBack_m377 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::ChangeCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" bool VideoPlaybackUIEventHandler_ChangeCameraDirection_m378 (VideoPlaybackUIEventHandler_t124 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedToClose()
extern "C" void VideoPlaybackUIEventHandler_OnTappedToClose_m379 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIEventHandler::OnTappedOnCloseButton()
extern "C" void VideoPlaybackUIEventHandler_OnTappedOnCloseButton_m380 (VideoPlaybackUIEventHandler_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlaybackUIEventHandler::ExtendedTracking(System.Boolean)
extern "C" bool VideoPlaybackUIEventHandler_ExtendedTracking_m381 (VideoPlaybackUIEventHandler_t124 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
