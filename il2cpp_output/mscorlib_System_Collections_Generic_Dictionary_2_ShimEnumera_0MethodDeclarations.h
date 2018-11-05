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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2483;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1057;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16471_gshared (ShimEnumerator_t2483 * __this, Dictionary_2_t1057 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16471(__this, ___host, method) (( void (*) (ShimEnumerator_t2483 *, Dictionary_2_t1057 *, const MethodInfo*))ShimEnumerator__ctor_m16471_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16472_gshared (ShimEnumerator_t2483 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16472(__this, method) (( bool (*) (ShimEnumerator_t2483 *, const MethodInfo*))ShimEnumerator_MoveNext_m16472_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1599  ShimEnumerator_get_Entry_m16473_gshared (ShimEnumerator_t2483 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16473(__this, method) (( DictionaryEntry_t1599  (*) (ShimEnumerator_t2483 *, const MethodInfo*))ShimEnumerator_get_Entry_m16473_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16474_gshared (ShimEnumerator_t2483 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16474(__this, method) (( Object_t * (*) (ShimEnumerator_t2483 *, const MethodInfo*))ShimEnumerator_get_Key_m16474_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16475_gshared (ShimEnumerator_t2483 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16475(__this, method) (( Object_t * (*) (ShimEnumerator_t2483 *, const MethodInfo*))ShimEnumerator_get_Value_m16475_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16476_gshared (ShimEnumerator_t2483 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16476(__this, method) (( Object_t * (*) (ShimEnumerator_t2483 *, const MethodInfo*))ShimEnumerator_get_Current_m16476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m16477_gshared (ShimEnumerator_t2483 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16477(__this, method) (( void (*) (ShimEnumerator_t2483 *, const MethodInfo*))ShimEnumerator_Reset_m16477_gshared)(__this, method)
