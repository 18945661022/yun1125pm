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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2575;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2574;
// System.Object[]
struct ObjectU5BU5D_t166;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17782_gshared (InvokableCall_1_t2575 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m17782(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2575 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m17782_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17783_gshared (InvokableCall_1_t2575 * __this, UnityAction_1_t2574 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m17783(__this, ___callback, method) (( void (*) (InvokableCall_1_t2575 *, UnityAction_1_t2574 *, const MethodInfo*))InvokableCall_1__ctor_m17783_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17784_gshared (InvokableCall_1_t2575 * __this, ObjectU5BU5D_t166* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m17784(__this, ___args, method) (( void (*) (InvokableCall_1_t2575 *, ObjectU5BU5D_t166*, const MethodInfo*))InvokableCall_1_Invoke_m17784_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17785_gshared (InvokableCall_1_t2575 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m17785(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2575 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m17785_gshared)(__this, ___targetObj, ___method, method)
