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

// TrackableEventHandler
struct TrackableEventHandler_t121;
// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t41;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void TrackableEventHandler::.ctor()
extern "C" void TrackableEventHandler__ctor_m339 (TrackableEventHandler_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::Start()
extern "C" void TrackableEventHandler_Start_m340 (TrackableEventHandler_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::Update()
extern "C" void TrackableEventHandler_Update_m341 (TrackableEventHandler_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void TrackableEventHandler_OnTrackableStateChanged_m342 (TrackableEventHandler_t121 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackingFound()
extern "C" void TrackableEventHandler_OnTrackingFound_m343 (TrackableEventHandler_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::OnTrackingLost()
extern "C" void TrackableEventHandler_OnTrackingLost_m344 (TrackableEventHandler_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableEventHandler::PauseOtherVideos(VideoPlaybackBehaviour)
extern "C" void TrackableEventHandler_PauseOtherVideos_m345 (TrackableEventHandler_t121 * __this, VideoPlaybackBehaviour_t41 * ___currentVideo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
