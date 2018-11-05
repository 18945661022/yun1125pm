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

// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t2890;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m22763_gshared (Predicate_1_t2890 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m22763(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2890 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22763_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m22764_gshared (Predicate_1_t2890 * __this, TargetSearchResult_t146  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m22764(__this, ___obj, method) (( bool (*) (Predicate_1_t2890 *, TargetSearchResult_t146 , const MethodInfo*))Predicate_1_Invoke_m22764_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m22765_gshared (Predicate_1_t2890 * __this, TargetSearchResult_t146  ___obj, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m22765(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2890 *, TargetSearchResult_t146 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22765_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m22766_gshared (Predicate_1_t2890 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m22766(__this, ___result, method) (( bool (*) (Predicate_1_t2890 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22766_gshared)(__this, ___result, method)
