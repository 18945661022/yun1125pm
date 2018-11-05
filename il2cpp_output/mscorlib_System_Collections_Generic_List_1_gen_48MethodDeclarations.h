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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1086;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3299;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3300;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3301;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t3003;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1234;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3007;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3010;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m24168_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1__ctor_m24168(__this, method) (( void (*) (List_1_t1086 *, const MethodInfo*))List_1__ctor_m24168_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24169_gshared (List_1_t1086 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24169(__this, ___collection, method) (( void (*) (List_1_t1086 *, Object_t*, const MethodInfo*))List_1__ctor_m24169_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m7527_gshared (List_1_t1086 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m7527(__this, ___capacity, method) (( void (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1__ctor_m7527_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m24170_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24170(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24170_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24171_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24171(__this, method) (( Object_t* (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24171_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24172_gshared (List_1_t1086 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24172(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1086 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24172_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24173_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24173(__this, method) (( Object_t * (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24173_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24174_gshared (List_1_t1086 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24174(__this, ___item, method) (( int32_t (*) (List_1_t1086 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24174_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24175_gshared (List_1_t1086 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24175(__this, ___item, method) (( bool (*) (List_1_t1086 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24175_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24176_gshared (List_1_t1086 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24176(__this, ___item, method) (( int32_t (*) (List_1_t1086 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24177_gshared (List_1_t1086 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24177(__this, ___index, ___item, method) (( void (*) (List_1_t1086 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24177_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24178_gshared (List_1_t1086 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24178(__this, ___item, method) (( void (*) (List_1_t1086 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24178_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24179_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24179(__this, method) (( bool (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m24180_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24180(__this, method) (( bool (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m24180_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24181_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24181(__this, method) (( Object_t * (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24181_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m24182_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24182(__this, method) (( bool (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m24182_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m24183_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m24183(__this, method) (( bool (*) (List_1_t1086 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m24183_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24184_gshared (List_1_t1086 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24184(__this, ___index, method) (( Object_t * (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24184_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24185_gshared (List_1_t1086 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24185(__this, ___index, ___value, method) (( void (*) (List_1_t1086 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24185_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m24186_gshared (List_1_t1086 * __this, UICharInfo_t480  ___item, const MethodInfo* method);
#define List_1_Add_m24186(__this, ___item, method) (( void (*) (List_1_t1086 *, UICharInfo_t480 , const MethodInfo*))List_1_Add_m24186_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24187_gshared (List_1_t1086 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24187(__this, ___newCount, method) (( void (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24187_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24188_gshared (List_1_t1086 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24188(__this, ___collection, method) (( void (*) (List_1_t1086 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24188_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24189_gshared (List_1_t1086 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24189(__this, ___enumerable, method) (( void (*) (List_1_t1086 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24189_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m24190_gshared (List_1_t1086 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m24190(__this, ___collection, method) (( void (*) (List_1_t1086 *, Object_t*, const MethodInfo*))List_1_AddRange_m24190_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3003 * List_1_AsReadOnly_m24191_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24191(__this, method) (( ReadOnlyCollection_1_t3003 * (*) (List_1_t1086 *, const MethodInfo*))List_1_AsReadOnly_m24191_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m24192_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_Clear_m24192(__this, method) (( void (*) (List_1_t1086 *, const MethodInfo*))List_1_Clear_m24192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m24193_gshared (List_1_t1086 * __this, UICharInfo_t480  ___item, const MethodInfo* method);
#define List_1_Contains_m24193(__this, ___item, method) (( bool (*) (List_1_t1086 *, UICharInfo_t480 , const MethodInfo*))List_1_Contains_m24193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24194_gshared (List_1_t1086 * __this, UICharInfoU5BU5D_t1234* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24194(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1086 *, UICharInfoU5BU5D_t1234*, int32_t, const MethodInfo*))List_1_CopyTo_m24194_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t480  List_1_Find_m24195_gshared (List_1_t1086 * __this, Predicate_1_t3007 * ___match, const MethodInfo* method);
#define List_1_Find_m24195(__this, ___match, method) (( UICharInfo_t480  (*) (List_1_t1086 *, Predicate_1_t3007 *, const MethodInfo*))List_1_Find_m24195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24196_gshared (Object_t * __this /* static, unused */, Predicate_1_t3007 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24196(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3007 *, const MethodInfo*))List_1_CheckMatch_m24196_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24197_gshared (List_1_t1086 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3007 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24197(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1086 *, int32_t, int32_t, Predicate_1_t3007 *, const MethodInfo*))List_1_GetIndex_m24197_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t3002  List_1_GetEnumerator_m24198_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24198(__this, method) (( Enumerator_t3002  (*) (List_1_t1086 *, const MethodInfo*))List_1_GetEnumerator_m24198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24199_gshared (List_1_t1086 * __this, UICharInfo_t480  ___item, const MethodInfo* method);
#define List_1_IndexOf_m24199(__this, ___item, method) (( int32_t (*) (List_1_t1086 *, UICharInfo_t480 , const MethodInfo*))List_1_IndexOf_m24199_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24200_gshared (List_1_t1086 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24200(__this, ___start, ___delta, method) (( void (*) (List_1_t1086 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24200_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24201_gshared (List_1_t1086 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24201(__this, ___index, method) (( void (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24201_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24202_gshared (List_1_t1086 * __this, int32_t ___index, UICharInfo_t480  ___item, const MethodInfo* method);
#define List_1_Insert_m24202(__this, ___index, ___item, method) (( void (*) (List_1_t1086 *, int32_t, UICharInfo_t480 , const MethodInfo*))List_1_Insert_m24202_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24203_gshared (List_1_t1086 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24203(__this, ___collection, method) (( void (*) (List_1_t1086 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24203_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m24204_gshared (List_1_t1086 * __this, UICharInfo_t480  ___item, const MethodInfo* method);
#define List_1_Remove_m24204(__this, ___item, method) (( bool (*) (List_1_t1086 *, UICharInfo_t480 , const MethodInfo*))List_1_Remove_m24204_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24205_gshared (List_1_t1086 * __this, Predicate_1_t3007 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24205(__this, ___match, method) (( int32_t (*) (List_1_t1086 *, Predicate_1_t3007 *, const MethodInfo*))List_1_RemoveAll_m24205_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24206_gshared (List_1_t1086 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24206(__this, ___index, method) (( void (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24206_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m24207_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_Reverse_m24207(__this, method) (( void (*) (List_1_t1086 *, const MethodInfo*))List_1_Reverse_m24207_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m24208_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_Sort_m24208(__this, method) (( void (*) (List_1_t1086 *, const MethodInfo*))List_1_Sort_m24208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24209_gshared (List_1_t1086 * __this, Comparison_1_t3010 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24209(__this, ___comparison, method) (( void (*) (List_1_t1086 *, Comparison_1_t3010 *, const MethodInfo*))List_1_Sort_m24209_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1234* List_1_ToArray_m24210_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_ToArray_m24210(__this, method) (( UICharInfoU5BU5D_t1234* (*) (List_1_t1086 *, const MethodInfo*))List_1_ToArray_m24210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m24211_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24211(__this, method) (( void (*) (List_1_t1086 *, const MethodInfo*))List_1_TrimExcess_m24211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24212_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24212(__this, method) (( int32_t (*) (List_1_t1086 *, const MethodInfo*))List_1_get_Capacity_m24212_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24213_gshared (List_1_t1086 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24213(__this, ___value, method) (( void (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24213_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m24214_gshared (List_1_t1086 * __this, const MethodInfo* method);
#define List_1_get_Count_m24214(__this, method) (( int32_t (*) (List_1_t1086 *, const MethodInfo*))List_1_get_Count_m24214_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t480  List_1_get_Item_m24215_gshared (List_1_t1086 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24215(__this, ___index, method) (( UICharInfo_t480  (*) (List_1_t1086 *, int32_t, const MethodInfo*))List_1_get_Item_m24215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24216_gshared (List_1_t1086 * __this, int32_t ___index, UICharInfo_t480  ___value, const MethodInfo* method);
#define List_1_set_Item_m24216(__this, ___index, ___value, method) (( void (*) (List_1_t1086 *, int32_t, UICharInfo_t480 , const MethodInfo*))List_1_set_Item_m24216_gshared)(__this, ___index, ___value, method)
