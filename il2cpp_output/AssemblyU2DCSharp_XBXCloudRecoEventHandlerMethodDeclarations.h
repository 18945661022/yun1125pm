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

// XBXCloudRecoEventHandler
struct XBXCloudRecoEventHandler_t126;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Update.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void XBXCloudRecoEventHandler::.ctor()
extern "C" void XBXCloudRecoEventHandler__ctor_m391 (XBXCloudRecoEventHandler_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::targetFoundCallback(System.String)
extern "C" void XBXCloudRecoEventHandler_targetFoundCallback_m392 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::initErrorCallback(System.String)
extern "C" void XBXCloudRecoEventHandler_initErrorCallback_m393 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::updateErrorCallback(System.String)
extern "C" void XBXCloudRecoEventHandler_updateErrorCallback_m394 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::Start()
extern "C" void XBXCloudRecoEventHandler_Start_m395 (XBXCloudRecoEventHandler_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::OnInitialized()
extern "C" void XBXCloudRecoEventHandler_OnInitialized_m396 (XBXCloudRecoEventHandler_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::OnInitError(Vuforia.TargetFinder/InitState)
extern "C" void XBXCloudRecoEventHandler_OnInitError_m397 (XBXCloudRecoEventHandler_t126 * __this, int32_t ___initError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::OnUpdateError(Vuforia.TargetFinder/UpdateState)
extern "C" void XBXCloudRecoEventHandler_OnUpdateError_m398 (XBXCloudRecoEventHandler_t126 * __this, int32_t ___updateError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::OnStateChanged(System.Boolean)
extern "C" void XBXCloudRecoEventHandler_OnStateChanged_m399 (XBXCloudRecoEventHandler_t126 * __this, bool ___scanning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::Update()
extern "C" void XBXCloudRecoEventHandler_Update_m400 (XBXCloudRecoEventHandler_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XBXCloudRecoEventHandler::OnNewSearchResult(Vuforia.TargetFinder/TargetSearchResult)
extern "C" void XBXCloudRecoEventHandler_OnNewSearchResult_m401 (XBXCloudRecoEventHandler_t126 * __this, TargetSearchResult_t146  ___targetSearchResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
