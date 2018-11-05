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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25329_gshared (InternalEnumerator_1_t3084 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m25329(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3084 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m25329_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25330_gshared (InternalEnumerator_1_t3084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25330(__this, method) (( void (*) (InternalEnumerator_1_t3084 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25330_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25331_gshared (InternalEnumerator_1_t3084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25331(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3084 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25331_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25332_gshared (InternalEnumerator_1_t3084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m25332(__this, method) (( void (*) (InternalEnumerator_1_t3084 *, const MethodInfo*))InternalEnumerator_1_Dispose_m25332_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25333_gshared (InternalEnumerator_1_t3084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m25333(__this, method) (( bool (*) (InternalEnumerator_1_t3084 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m25333_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t3083  InternalEnumerator_1_get_Current_m25334_gshared (InternalEnumerator_1_t3084 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m25334(__this, method) (( KeyValuePair_2_t3083  (*) (InternalEnumerator_1_t3084 *, const MethodInfo*))InternalEnumerator_1_get_Current_m25334_gshared)(__this, method)
