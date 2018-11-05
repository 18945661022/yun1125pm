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

// Vuforia.DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t60;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t41;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.DefaultTrackableEventHandler::.ctor()
extern "C" void DefaultTrackableEventHandler__ctor_m213 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::Start()
extern "C" void DefaultTrackableEventHandler_Start_m214 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::Update()
extern "C" void DefaultTrackableEventHandler_Update_m215 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void DefaultTrackableEventHandler_OnTrackableStateChanged_m216 (DefaultTrackableEventHandler_t60 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::videoFullScreenAuto(System.String)
extern "C" void DefaultTrackableEventHandler_videoFullScreenAuto_m217 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::videoFullScreen(System.String)
extern "C" void DefaultTrackableEventHandler_videoFullScreen_m218 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::videoTextureAuto(System.String)
extern "C" void DefaultTrackableEventHandler_videoTextureAuto_m219 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::videoTexture(System.String)
extern "C" void DefaultTrackableEventHandler_videoTexture_m220 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::modelAuto(System.String)
extern "C" void DefaultTrackableEventHandler_modelAuto_m221 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::model(System.String)
extern "C" void DefaultTrackableEventHandler_model_m222 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::addFailed()
extern "C" void DefaultTrackableEventHandler_addFailed_m223 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingFound()
extern "C" void DefaultTrackableEventHandler_OnTrackingFound_m224 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Vuforia.DefaultTrackableEventHandler::LoadVideo(System.String)
extern "C" Object_t * DefaultTrackableEventHandler_LoadVideo_m225 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Vuforia.DefaultTrackableEventHandler::LoadModel(System.String)
extern "C" Object_t * DefaultTrackableEventHandler_LoadModel_m226 (DefaultTrackableEventHandler_t60 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingLost()
extern "C" void DefaultTrackableEventHandler_OnTrackingLost_m227 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C" void DefaultTrackableEventHandler_PauseOtherVideos_m228 (DefaultTrackableEventHandler_t60 * __this, VideoPlaybackBehaviour_t41 * ___currentVideo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::clearChild()
extern "C" void DefaultTrackableEventHandler_clearChild_m229 (DefaultTrackableEventHandler_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
