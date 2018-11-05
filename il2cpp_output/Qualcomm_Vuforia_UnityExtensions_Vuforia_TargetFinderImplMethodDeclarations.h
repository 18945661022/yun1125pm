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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t848;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t907;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t70;
// UnityEngine.GameObject
struct GameObject_t43;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t908;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Update.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Filter.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C" void TargetFinderImpl__ctor_m5490 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C" void TargetFinderImpl_Finalize_m5491 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C" bool TargetFinderImpl_StartInit_m5492 (TargetFinderImpl_t848 * __this, String_t* ___userAuth, String_t* ___secretAuth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C" int32_t TargetFinderImpl_GetInitState_m5493 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C" bool TargetFinderImpl_Deinit_m5494 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C" bool TargetFinderImpl_StartRecognition_m5495 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C" bool TargetFinderImpl_Stop_m5496 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIScanlineColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIScanlineColor_m5497 (TargetFinderImpl_t848 * __this, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIPointColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIPointColor_m5498 (TargetFinderImpl_t848 * __this, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C" bool TargetFinderImpl_IsRequesting_m5499 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C" int32_t TargetFinderImpl_Update_m5500 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C" int32_t TargetFinderImpl_Update_m5501 (TargetFinderImpl_t848 * __this, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C" Object_t* TargetFinderImpl_GetResults_m5502 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C" ImageTargetAbstractBehaviour_t70 * TargetFinderImpl_EnableTracking_m5503 (TargetFinderImpl_t848 * __this, TargetSearchResult_t146  ___result, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t70 * TargetFinderImpl_EnableTracking_m5504 (TargetFinderImpl_t848 * __this, TargetSearchResult_t146  ___result, GameObject_t43 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C" void TargetFinderImpl_ClearTrackables_m5505 (TargetFinderImpl_t848 * __this, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C" Object_t* TargetFinderImpl_GetImageTargets_m5506 (TargetFinderImpl_t848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
