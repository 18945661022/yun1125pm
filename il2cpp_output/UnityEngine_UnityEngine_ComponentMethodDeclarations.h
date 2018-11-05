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

// UnityEngine.Component
struct Component_t216;
// UnityEngine.Transform
struct Transform_t100;
// UnityEngine.Camera
struct Camera_t102;
// UnityEngine.AudioSource
struct AudioSource_t62;
// UnityEngine.GameObject
struct GameObject_t43;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t441;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t100 * Component_get_transform_m562 (Component_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::InternalGetTransform()
extern "C" Transform_t100 * Component_InternalGetTransform_m7468 (Component_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Component::get_camera()
extern "C" Camera_t102 * Component_get_camera_m2055 (Component_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityEngine.Component::get_audio()
extern "C" AudioSource_t62 * Component_get_audio_m810 (Component_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t43 * Component_get_gameObject_m545 (Component_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::InternalGetGameObject()
extern "C" GameObject_t43 * Component_InternalGetGameObject_m7469 (Component_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t216 * Component_GetComponent_m2473 (Component_t216 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t216 * Component_GetComponentInChildren_m7470 (Component_t216 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)
extern "C" void Component_GetComponentsForListInternal_m7471 (Component_t216 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m2162 (Component_t216 * __this, Type_t * ___type, List_1_t441 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
