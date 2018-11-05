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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t843;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1030;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3212;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3251;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2734;
// System.Int32[]
struct Int32U5BU5D_t193;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2737;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2741;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m6035_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1__ctor_m6035(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1__ctor_m6035_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m5967_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m5967(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1__ctor_m5967_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m20143_gshared (List_1_t843 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m20143(__this, ___capacity, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1__ctor_m20143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m20144_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20144(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20145_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20145(__this, method) (( Object_t* (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20145_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20146_gshared (List_1_t843 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20146(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t843 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20146_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20147_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20147(__this, method) (( Object_t * (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20147_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20148_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20148(__this, ___item, method) (( int32_t (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20148_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20149_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20149(__this, ___item, method) (( bool (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20149_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20150_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20150(__this, ___item, method) (( int32_t (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20150_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20151_gshared (List_1_t843 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20151(__this, ___index, ___item, method) (( void (*) (List_1_t843 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20151_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20152_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20152(__this, ___item, method) (( void (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20153_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20153(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20154_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20154(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20154_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20155_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20155(__this, method) (( Object_t * (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20156_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20156(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20156_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20157_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20157(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20157_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20158_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20158(__this, ___index, method) (( Object_t * (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20159_gshared (List_1_t843 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20159(__this, ___index, ___value, method) (( void (*) (List_1_t843 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20159_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m20160_gshared (List_1_t843 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m20160(__this, ___item, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_Add_m20160_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20161_gshared (List_1_t843 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20161(__this, ___newCount, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20161_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20162_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20162(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20162_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20163_gshared (List_1_t843 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20163(__this, ___enumerable, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20163_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20164_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20164(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_AddRange_m20164_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2734 * List_1_AsReadOnly_m20165_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20165(__this, method) (( ReadOnlyCollection_1_t2734 * (*) (List_1_t843 *, const MethodInfo*))List_1_AsReadOnly_m20165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m20166_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_Clear_m20166(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_Clear_m20166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m20167_gshared (List_1_t843 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m20167(__this, ___item, method) (( bool (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_Contains_m20167_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20168_gshared (List_1_t843 * __this, Int32U5BU5D_t193* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20168(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t843 *, Int32U5BU5D_t193*, int32_t, const MethodInfo*))List_1_CopyTo_m20168_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m20169_gshared (List_1_t843 * __this, Predicate_1_t2737 * ___match, const MethodInfo* method);
#define List_1_Find_m20169(__this, ___match, method) (( int32_t (*) (List_1_t843 *, Predicate_1_t2737 *, const MethodInfo*))List_1_Find_m20169_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20170_gshared (Object_t * __this /* static, unused */, Predicate_1_t2737 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20170(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2737 *, const MethodInfo*))List_1_CheckMatch_m20170_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20171_gshared (List_1_t843 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2737 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20171(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t843 *, int32_t, int32_t, Predicate_1_t2737 *, const MethodInfo*))List_1_GetIndex_m20171_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t944  List_1_GetEnumerator_m5968_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m5968(__this, method) (( Enumerator_t944  (*) (List_1_t843 *, const MethodInfo*))List_1_GetEnumerator_m5968_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20172_gshared (List_1_t843 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m20172(__this, ___item, method) (( int32_t (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_IndexOf_m20172_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20173_gshared (List_1_t843 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20173(__this, ___start, ___delta, method) (( void (*) (List_1_t843 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20173_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20174_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20174(__this, ___index, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20174_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20175_gshared (List_1_t843 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m20175(__this, ___index, ___item, method) (( void (*) (List_1_t843 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m20175_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20176_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20176(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20176_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m20177_gshared (List_1_t843 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m20177(__this, ___item, method) (( bool (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_Remove_m20177_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20178_gshared (List_1_t843 * __this, Predicate_1_t2737 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20178(__this, ___match, method) (( int32_t (*) (List_1_t843 *, Predicate_1_t2737 *, const MethodInfo*))List_1_RemoveAll_m20178_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20179_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20179(__this, ___index, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m20180_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_Reverse_m20180(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_Reverse_m20180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m20181_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_Sort_m20181(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_Sort_m20181_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20182_gshared (List_1_t843 * __this, Comparison_1_t2741 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20182(__this, ___comparison, method) (( void (*) (List_1_t843 *, Comparison_1_t2741 *, const MethodInfo*))List_1_Sort_m20182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t193* List_1_ToArray_m20183_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_ToArray_m20183(__this, method) (( Int32U5BU5D_t193* (*) (List_1_t843 *, const MethodInfo*))List_1_ToArray_m20183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m20184_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20184(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_TrimExcess_m20184_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20185_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20185(__this, method) (( int32_t (*) (List_1_t843 *, const MethodInfo*))List_1_get_Capacity_m20185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20186_gshared (List_1_t843 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20186(__this, ___value, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20186_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m20187_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_get_Count_m20187(__this, method) (( int32_t (*) (List_1_t843 *, const MethodInfo*))List_1_get_Count_m20187_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m20188_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20188(__this, ___index, method) (( int32_t (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_get_Item_m20188_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20189_gshared (List_1_t843 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m20189(__this, ___index, ___value, method) (( void (*) (List_1_t843 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m20189_gshared)(__this, ___index, ___value, method)
