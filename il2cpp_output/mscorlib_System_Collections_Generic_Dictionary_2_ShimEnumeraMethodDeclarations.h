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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2376;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2359;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14971_gshared (ShimEnumerator_t2376 * __this, Dictionary_2_t2359 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14971(__this, ___host, method) (( void (*) (ShimEnumerator_t2376 *, Dictionary_2_t2359 *, const MethodInfo*))ShimEnumerator__ctor_m14971_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14972_gshared (ShimEnumerator_t2376 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14972(__this, method) (( bool (*) (ShimEnumerator_t2376 *, const MethodInfo*))ShimEnumerator_MoveNext_m14972_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1599  ShimEnumerator_get_Entry_m14973_gshared (ShimEnumerator_t2376 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14973(__this, method) (( DictionaryEntry_t1599  (*) (ShimEnumerator_t2376 *, const MethodInfo*))ShimEnumerator_get_Entry_m14973_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14974_gshared (ShimEnumerator_t2376 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14974(__this, method) (( Object_t * (*) (ShimEnumerator_t2376 *, const MethodInfo*))ShimEnumerator_get_Key_m14974_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14975_gshared (ShimEnumerator_t2376 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14975(__this, method) (( Object_t * (*) (ShimEnumerator_t2376 *, const MethodInfo*))ShimEnumerator_get_Value_m14975_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14976_gshared (ShimEnumerator_t2376 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14976(__this, method) (( Object_t * (*) (ShimEnumerator_t2376 *, const MethodInfo*))ShimEnumerator_get_Current_m14976_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14977_gshared (ShimEnumerator_t2376 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14977(__this, method) (( void (*) (ShimEnumerator_t2376 *, const MethodInfo*))ShimEnumerator_Reset_m14977_gshared)(__this, method)
