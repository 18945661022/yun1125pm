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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2498;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2602;
// System.Object[]
struct ObjectU5BU5D_t166;
// System.Predicate`1<System.Object>
struct Predicate_1_t2388;
// System.Comparison`1<System.Object>
struct Comparison_1_t2393;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m16659_gshared (IndexedSet_1_t2498 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m16659(__this, method) (( void (*) (IndexedSet_1_t2498 *, const MethodInfo*))IndexedSet_1__ctor_m16659_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16661_gshared (IndexedSet_1_t2498 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16661(__this, method) (( Object_t * (*) (IndexedSet_1_t2498 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16661_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m16663_gshared (IndexedSet_1_t2498 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m16663(__this, ___item, method) (( void (*) (IndexedSet_1_t2498 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m16663_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m16665_gshared (IndexedSet_1_t2498 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m16665(__this, ___item, method) (( bool (*) (IndexedSet_1_t2498 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m16665_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m16667_gshared (IndexedSet_1_t2498 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m16667(__this, method) (( Object_t* (*) (IndexedSet_1_t2498 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m16667_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m16669_gshared (IndexedSet_1_t2498 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m16669(__this, method) (( void (*) (IndexedSet_1_t2498 *, const MethodInfo*))IndexedSet_1_Clear_m16669_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m16671_gshared (IndexedSet_1_t2498 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m16671(__this, ___item, method) (( bool (*) (IndexedSet_1_t2498 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m16671_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m16673_gshared (IndexedSet_1_t2498 * __this, ObjectU5BU5D_t166* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m16673(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2498 *, ObjectU5BU5D_t166*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m16673_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m16675_gshared (IndexedSet_1_t2498 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m16675(__this, method) (( int32_t (*) (IndexedSet_1_t2498 *, const MethodInfo*))IndexedSet_1_get_Count_m16675_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m16677_gshared (IndexedSet_1_t2498 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m16677(__this, method) (( bool (*) (IndexedSet_1_t2498 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m16677_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m16679_gshared (IndexedSet_1_t2498 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m16679(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2498 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m16679_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m16681_gshared (IndexedSet_1_t2498 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m16681(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2498 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m16681_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m16683_gshared (IndexedSet_1_t2498 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m16683(__this, ___index, method) (( void (*) (IndexedSet_1_t2498 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m16683_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m16685_gshared (IndexedSet_1_t2498 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m16685(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2498 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m16685_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m16687_gshared (IndexedSet_1_t2498 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m16687(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2498 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m16687_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m16688_gshared (IndexedSet_1_t2498 * __this, Predicate_1_t2388 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m16688(__this, ___match, method) (( void (*) (IndexedSet_1_t2498 *, Predicate_1_t2388 *, const MethodInfo*))IndexedSet_1_RemoveAll_m16688_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m16689_gshared (IndexedSet_1_t2498 * __this, Comparison_1_t2393 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m16689(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2498 *, Comparison_1_t2393 *, const MethodInfo*))IndexedSet_1_Sort_m16689_gshared)(__this, ___sortLayoutFunction, method)
