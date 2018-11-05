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

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t51;
// Vuforia.CylinderTarget
struct CylinderTarget_t721;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t710;
// UnityEngine.Transform
struct Transform_t100;
// UnityEngine.GameObject
struct GameObject_t43;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C" Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m4171 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C" float CylinderTargetAbstractBehaviour_get_SideLength_m4172 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_TopDiameter_m4173 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_BottomDiameter_m4174 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetSideLength_m4175 (CylinderTargetAbstractBehaviour_t51 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetTopDiameter_m4176 (CylinderTargetAbstractBehaviour_t51 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m4177 (CylinderTargetAbstractBehaviour_t51 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m4178 (CylinderTargetAbstractBehaviour_t51 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m4179 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m4180 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m4181 (CylinderTargetAbstractBehaviour_t51 * __this, Vector3_t17 * ___boundsMin, Vector3_t17 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m4182 (CylinderTargetAbstractBehaviour_t51 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C" float CylinderTargetAbstractBehaviour_GetScale_m4183 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetScale_m4184 (CylinderTargetAbstractBehaviour_t51 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C" void CylinderTargetAbstractBehaviour_ApplyScale_m4185 (CylinderTargetAbstractBehaviour_t51 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m4186 (CylinderTargetAbstractBehaviour_t51 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m4187 (CylinderTargetAbstractBehaviour_t51 * __this, float ___topRatio, float ___bottomRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C" void CylinderTargetAbstractBehaviour__ctor_m591 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m4188 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m4189 (CylinderTargetAbstractBehaviour_t51 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t100 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m4190 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t43 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m4191 (CylinderTargetAbstractBehaviour_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
