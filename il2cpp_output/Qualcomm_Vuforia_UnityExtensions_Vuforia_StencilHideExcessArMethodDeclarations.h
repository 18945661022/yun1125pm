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

// Vuforia.StencilHideExcessAreaClipping
struct StencilHideExcessAreaClipping_t683;
// UnityEngine.GameObject
struct GameObject_t43;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t189;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C" GameObject_t43 * StencilHideExcessAreaClipping_CreateQuad_m3864 (StencilHideExcessAreaClipping_t683 * __this, GameObject_t43 * ___parent, String_t* ___name, Vector3_t17  ___position, Quaternion_t141  ___rotation, Vector3_t17  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnVuforiaStarted()
extern "C" void StencilHideExcessAreaClipping_OnVuforiaStarted_m3865 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::HasCalculationDataChanged()
extern "C" bool StencilHideExcessAreaClipping_HasCalculationDataChanged_m3866 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C" void StencilHideExcessAreaClipping__ctor_m3867 (StencilHideExcessAreaClipping_t683 * __this, GameObject_t43 * ___gameObject, Shader_t189 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C" void StencilHideExcessAreaClipping_SetPlanesRenderingActive_m3868 (StencilHideExcessAreaClipping_t683 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C" bool StencilHideExcessAreaClipping_IsPlanesRenderingActive_m3869 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPreCull()
extern "C" void StencilHideExcessAreaClipping_OnPreCull_m3870 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPostRender()
extern "C" void StencilHideExcessAreaClipping_OnPostRender_m3871 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Start()
extern "C" void StencilHideExcessAreaClipping_Start_m3872 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDisable()
extern "C" void StencilHideExcessAreaClipping_OnDisable_m3873 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnEnable()
extern "C" void StencilHideExcessAreaClipping_OnEnable_m3874 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDestroy()
extern "C" void StencilHideExcessAreaClipping_OnDestroy_m3875 (StencilHideExcessAreaClipping_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C" void StencilHideExcessAreaClipping_Update_m3876 (StencilHideExcessAreaClipping_t683 * __this, Vector3_t17  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
