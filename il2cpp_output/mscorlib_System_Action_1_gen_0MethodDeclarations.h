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

// System.Action`1<System.Int32>
struct Action_1_t34;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m15303_gshared (Action_1_t34 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m15303(__this, ___object, ___method, method) (( void (*) (Action_1_t34 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m15303_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m536_gshared (Action_1_t34 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m536(__this, ___obj, method) (( void (*) (Action_1_t34 *, int32_t, const MethodInfo*))Action_1_Invoke_m536_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15304_gshared (Action_1_t34 * __this, int32_t ___obj, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m15304(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t34 *, int32_t, AsyncCallback_t330 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m15304_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15305_gshared (Action_1_t34 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m15305(__this, ___result, method) (( void (*) (Action_1_t34 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m15305_gshared)(__this, ___result, method)
