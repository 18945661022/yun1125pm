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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t709;
// Vuforia.CylinderTarget
struct CylinderTarget_t721;
// Vuforia.ImageTarget
struct ImageTarget_t857;
// Vuforia.MultiTarget
struct MultiTarget_t864;
// Vuforia.Trackable
struct Trackable_t694;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m4097 (ReconstructionFromTargetImpl_t709 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4098 (ReconstructionFromTargetImpl_t709 * __this, Object_t * ___cylinderTarget, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4099 (ReconstructionFromTargetImpl_t709 * __this, Object_t * ___cylinderTarget, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, Vector3_t17  ___offsetToOccluderOrigin, Quaternion_t141  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4100 (ReconstructionFromTargetImpl_t709 * __this, Object_t * ___imageTarget, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4101 (ReconstructionFromTargetImpl_t709 * __this, Object_t * ___imageTarget, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, Vector3_t17  ___offsetToOccluderOrigin, Quaternion_t141  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4102 (ReconstructionFromTargetImpl_t709 * __this, Object_t * ___multiTarget, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4103 (ReconstructionFromTargetImpl_t709 * __this, Object_t * ___multiTarget, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, Vector3_t17  ___offsetToOccluderOrigin, Quaternion_t141  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m4104 (ReconstructionFromTargetImpl_t709 * __this, Vector3_t17 * ___occluderMin, Vector3_t17 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m4105 (ReconstructionFromTargetImpl_t709 * __this, Vector3_t17 * ___occluderMin, Vector3_t17 * ___occluderMax, Vector3_t17 * ___offsetToOccluderOrigin, Quaternion_t141 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m4106 (ReconstructionFromTargetImpl_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m4107 (ReconstructionFromTargetImpl_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4108 (ReconstructionFromTargetImpl_t709 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t17  ___occluderMin, Vector3_t17  ___occluderMax, Vector3_t17  ___offsetToOccluderOrigin, Quaternion_t141  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m4109 (ReconstructionFromTargetImpl_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m4110 (ReconstructionFromTargetImpl_t709 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
