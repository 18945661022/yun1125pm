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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2511;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2499;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16817_gshared (ShimEnumerator_t2511 * __this, Dictionary_2_t2499 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16817(__this, ___host, method) (( void (*) (ShimEnumerator_t2511 *, Dictionary_2_t2499 *, const MethodInfo*))ShimEnumerator__ctor_m16817_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16818_gshared (ShimEnumerator_t2511 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16818(__this, method) (( bool (*) (ShimEnumerator_t2511 *, const MethodInfo*))ShimEnumerator_MoveNext_m16818_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1599  ShimEnumerator_get_Entry_m16819_gshared (ShimEnumerator_t2511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16819(__this, method) (( DictionaryEntry_t1599  (*) (ShimEnumerator_t2511 *, const MethodInfo*))ShimEnumerator_get_Entry_m16819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16820_gshared (ShimEnumerator_t2511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16820(__this, method) (( Object_t * (*) (ShimEnumerator_t2511 *, const MethodInfo*))ShimEnumerator_get_Key_m16820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16821_gshared (ShimEnumerator_t2511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16821(__this, method) (( Object_t * (*) (ShimEnumerator_t2511 *, const MethodInfo*))ShimEnumerator_get_Value_m16821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16822_gshared (ShimEnumerator_t2511 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16822(__this, method) (( Object_t * (*) (ShimEnumerator_t2511 *, const MethodInfo*))ShimEnumerator_get_Current_m16822_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m16823_gshared (ShimEnumerator_t2511 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16823(__this, method) (( void (*) (ShimEnumerator_t2511 *, const MethodInfo*))ShimEnumerator_Reset_m16823_gshared)(__this, method)
