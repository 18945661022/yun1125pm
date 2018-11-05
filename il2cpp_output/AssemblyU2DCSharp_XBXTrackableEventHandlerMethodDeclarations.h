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

// XBXTrackableEventHandler
struct XBXTrackableEventHandler_t140;
// UnityEngine.GameObject
struct GameObject_t43;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "AssemblyU2DCSharp_XBXTrackableEventHandler_SCENEMODE.h"

// System.Void XBXTrackableEventHandler::.ctor()
extern "C" void XBXTrackableEventHandler__ctor_m464 (XBXTrackableEventHandler_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::Start()
extern "C" void XBXTrackableEventHandler_Start_m465 (XBXTrackableEventHandler_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::Update()
extern "C" void XBXTrackableEventHandler_Update_m466 (XBXTrackableEventHandler_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void XBXTrackableEventHandler_OnTrackableStateChanged_m467 (XBXTrackableEventHandler_t140 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::stopTracker()
extern "C" void XBXTrackableEventHandler_stopTracker_m468 (XBXTrackableEventHandler_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::startTracker()
extern "C" void XBXTrackableEventHandler_startTracker_m469 (XBXTrackableEventHandler_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::OnTrackingFound(UnityEngine.GameObject,UnityEngine.GameObject,XBXTrackableEventHandler/SCENEMODE)
extern "C" void XBXTrackableEventHandler_OnTrackingFound_m470 (XBXTrackableEventHandler_t140 * __this, GameObject_t43 * ___g, GameObject_t43 * ___fbx, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXTrackableEventHandler::OnTrackingLost(UnityEngine.GameObject,UnityEngine.GameObject,XBXTrackableEventHandler/SCENEMODE)
extern "C" void XBXTrackableEventHandler_OnTrackingLost_m471 (XBXTrackableEventHandler_t140 * __this, GameObject_t43 * ___g, GameObject_t43 * ___fbx, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
