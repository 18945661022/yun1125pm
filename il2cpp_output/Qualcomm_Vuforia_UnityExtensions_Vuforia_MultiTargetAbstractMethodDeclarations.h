﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t82;
// Vuforia.MultiTarget
struct MultiTarget_t864;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t710;
// UnityEngine.Transform
struct Transform_t100;
// UnityEngine.GameObject
struct GameObject_t43;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C" Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m5589 (MultiTargetAbstractBehaviour_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m5590 (MultiTargetAbstractBehaviour_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m5591 (MultiTargetAbstractBehaviour_t82 * __this, Vector3_t17 * ___boundsMin, Vector3_t17 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m5592 (MultiTargetAbstractBehaviour_t82 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m5593 (MultiTargetAbstractBehaviour_t82 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C" void MultiTargetAbstractBehaviour__ctor_m668 (MultiTargetAbstractBehaviour_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m5594 (MultiTargetAbstractBehaviour_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m5595 (MultiTargetAbstractBehaviour_t82 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t100 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m5596 (MultiTargetAbstractBehaviour_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t43 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m5597 (MultiTargetAbstractBehaviour_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
