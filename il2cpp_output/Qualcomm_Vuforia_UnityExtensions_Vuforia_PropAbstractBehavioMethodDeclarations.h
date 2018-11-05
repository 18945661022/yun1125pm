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

// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t85;
// Vuforia.Prop
struct Prop_t144;
// UnityEngine.MeshFilter
struct MeshFilter_t186;
// UnityEngine.MeshCollider
struct MeshCollider_t719;
// UnityEngine.BoxCollider
struct BoxCollider_t840;
// UnityEngine.Transform
struct Transform_t100;
// UnityEngine.GameObject
struct GameObject_t43;

#include "codegen/il2cpp-codegen.h"

// Vuforia.Prop Vuforia.PropAbstractBehaviour::get_Prop()
extern "C" Object_t * PropAbstractBehaviour_get_Prop_m5440 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::UpdateMeshAndColliders()
extern "C" void PropAbstractBehaviour_UpdateMeshAndColliders_m5441 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Start()
extern "C" void PropAbstractBehaviour_Start_m5442 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void PropAbstractBehaviour_InternalUnregisterTrackable_m5443 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.InitializeProp(Vuforia.Prop)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_InitializeProp_m5444 (PropAbstractBehaviour_t85 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshFilterToUpdate_m5445 (PropAbstractBehaviour_t85 * __this, MeshFilter_t186 * ___meshFilterToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t186 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshFilterToUpdate_m5446 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshColliderToUpdate_m5447 (PropAbstractBehaviour_t85 * __this, MeshCollider_t719 * ___meshColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t719 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshColliderToUpdate_m5448 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetBoxColliderToUpdate(UnityEngine.BoxCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetBoxColliderToUpdate_m5449 (PropAbstractBehaviour_t85 * __this, BoxCollider_t840 * ___boxColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_BoxColliderToUpdate()
extern "C" BoxCollider_t840 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_BoxColliderToUpdate_m5450 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::.ctor()
extern "C" void PropAbstractBehaviour__ctor_m670 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m5451 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m5452 (PropAbstractBehaviour_t85 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t100 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m5453 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t43 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m5454 (PropAbstractBehaviour_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
