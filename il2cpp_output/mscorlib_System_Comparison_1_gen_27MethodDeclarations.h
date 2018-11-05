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

// System.Comparison`1<Vuforia.Image/PIXEL_FORMAT>
struct Comparison_1_t2693;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Comparison`1<Vuforia.Image/PIXEL_FORMAT>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m19422_gshared (Comparison_1_t2693 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m19422(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2693 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m19422_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Vuforia.Image/PIXEL_FORMAT>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m19423_gshared (Comparison_1_t2693 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m19423(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2693 *, int32_t, int32_t, const MethodInfo*))Comparison_1_Invoke_m19423_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Vuforia.Image/PIXEL_FORMAT>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m19424_gshared (Comparison_1_t2693 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m19424(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2693 *, int32_t, int32_t, AsyncCallback_t330 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m19424_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Vuforia.Image/PIXEL_FORMAT>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m19425_gshared (Comparison_1_t2693 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m19425(__this, ___result, method) (( int32_t (*) (Comparison_1_t2693 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m19425_gshared)(__this, ___result, method)
