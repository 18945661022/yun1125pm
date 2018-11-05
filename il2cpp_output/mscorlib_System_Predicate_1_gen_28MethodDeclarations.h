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

// System.Predicate`1<Vuforia.Image/PIXEL_FORMAT>
struct Predicate_1_t2690;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Predicate`1<Vuforia.Image/PIXEL_FORMAT>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19412_gshared (Predicate_1_t2690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m19412(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2690 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m19412_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.Image/PIXEL_FORMAT>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19413_gshared (Predicate_1_t2690 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19413(__this, ___obj, method) (( bool (*) (Predicate_1_t2690 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m19413_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.Image/PIXEL_FORMAT>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19414_gshared (Predicate_1_t2690 * __this, int32_t ___obj, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19414(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2690 *, int32_t, AsyncCallback_t330 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19414_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.Image/PIXEL_FORMAT>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19415_gshared (Predicate_1_t2690 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19415(__this, ___result, method) (( bool (*) (Predicate_1_t2690 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19415_gshared)(__this, ___result, method)
