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

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2431;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m15696_gshared (UnityAction_1_t2431 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m15696(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2431 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m15696_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15697_gshared (UnityAction_1_t2431 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15697(__this, ___arg0, method) (( void (*) (UnityAction_1_t2431 *, Object_t *, const MethodInfo*))UnityAction_1_Invoke_m15697_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15698_gshared (UnityAction_1_t2431 * __this, Object_t * ___arg0, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15698(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2431 *, Object_t *, AsyncCallback_t330 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15698_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15699_gshared (UnityAction_1_t2431 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15699(__this, ___result, method) (( void (*) (UnityAction_1_t2431 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15699_gshared)(__this, ___result, method)
