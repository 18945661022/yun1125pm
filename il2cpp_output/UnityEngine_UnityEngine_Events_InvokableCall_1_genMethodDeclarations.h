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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2462;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2431;
// System.Object[]
struct ObjectU5BU5D_t166;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16156_gshared (InvokableCall_1_t2462 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m16156(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2462 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m16156_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16157_gshared (InvokableCall_1_t2462 * __this, UnityAction_1_t2431 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m16157(__this, ___callback, method) (( void (*) (InvokableCall_1_t2462 *, UnityAction_1_t2431 *, const MethodInfo*))InvokableCall_1__ctor_m16157_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16158_gshared (InvokableCall_1_t2462 * __this, ObjectU5BU5D_t166* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m16158(__this, ___args, method) (( void (*) (InvokableCall_1_t2462 *, ObjectU5BU5D_t166*, const MethodInfo*))InvokableCall_1_Invoke_m16158_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16159_gshared (InvokableCall_1_t2462 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m16159(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2462 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m16159_gshared)(__this, ___targetObj, ___method, method)
