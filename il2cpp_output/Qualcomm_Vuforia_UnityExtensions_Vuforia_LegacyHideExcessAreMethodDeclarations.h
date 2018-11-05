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

// Vuforia.LegacyHideExcessAreaClipping
struct LegacyHideExcessAreaClipping_t684;
// UnityEngine.GameObject
struct GameObject_t43;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t189;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C" GameObject_t43 * LegacyHideExcessAreaClipping_CreateQuad_m3877 (LegacyHideExcessAreaClipping_t684 * __this, GameObject_t43 * ___parent, String_t* ___name, Vector3_t17  ___position, Quaternion_t141  ___rotation, Vector3_t17  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnVuforiaStarted()
extern "C" void LegacyHideExcessAreaClipping_OnVuforiaStarted_m3878 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::HasCalculationDataChanged()
extern "C" bool LegacyHideExcessAreaClipping_HasCalculationDataChanged_m3879 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C" void LegacyHideExcessAreaClipping__ctor_m3880 (LegacyHideExcessAreaClipping_t684 * __this, GameObject_t43 * ___gameObject, Shader_t189 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C" void LegacyHideExcessAreaClipping_SetPlanesRenderingActive_m3881 (LegacyHideExcessAreaClipping_t684 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C" bool LegacyHideExcessAreaClipping_IsPlanesRenderingActive_m3882 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPreCull()
extern "C" void LegacyHideExcessAreaClipping_OnPreCull_m3883 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPostRender()
extern "C" void LegacyHideExcessAreaClipping_OnPostRender_m3884 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Start()
extern "C" void LegacyHideExcessAreaClipping_Start_m3885 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDisable()
extern "C" void LegacyHideExcessAreaClipping_OnDisable_m3886 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnEnable()
extern "C" void LegacyHideExcessAreaClipping_OnEnable_m3887 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDestroy()
extern "C" void LegacyHideExcessAreaClipping_OnDestroy_m3888 (LegacyHideExcessAreaClipping_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C" void LegacyHideExcessAreaClipping_Update_m3889 (LegacyHideExcessAreaClipping_t684 * __this, Vector3_t17  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
