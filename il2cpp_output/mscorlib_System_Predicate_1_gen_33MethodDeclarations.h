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

// System.Predicate`1<System.Int32>
struct Predicate_1_t2737;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20260_gshared (Predicate_1_t2737 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20260(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2737 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20260_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20261_gshared (Predicate_1_t2737 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20261(__this, ___obj, method) (( bool (*) (Predicate_1_t2737 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m20261_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20262_gshared (Predicate_1_t2737 * __this, int32_t ___obj, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20262(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2737 *, int32_t, AsyncCallback_t330 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20262_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20263_gshared (Predicate_1_t2737 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20263(__this, ___result, method) (( bool (*) (Predicate_1_t2737 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20263_gshared)(__this, ___result, method)
