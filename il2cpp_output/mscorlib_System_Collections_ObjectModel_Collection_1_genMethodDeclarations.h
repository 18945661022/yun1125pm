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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2387;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t166;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2602;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2386;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m15186_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1__ctor_m15186(__this, method) (( void (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1__ctor_m15186_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15187_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15187(__this, method) (( bool (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15187_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15188_gshared (Collection_1_t2387 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m15188(__this, ___array, ___index, method) (( void (*) (Collection_1_t2387 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15188_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15189_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m15189(__this, method) (( Object_t * (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15189_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15190_gshared (Collection_1_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m15190(__this, ___value, method) (( int32_t (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m15190_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m15191_gshared (Collection_1_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m15191(__this, ___value, method) (( bool (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m15191_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15192_gshared (Collection_1_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m15192(__this, ___value, method) (( int32_t (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15192_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m15193_gshared (Collection_1_t2387 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m15193(__this, ___index, ___value, method) (( void (*) (Collection_1_t2387 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m15193_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m15194_gshared (Collection_1_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m15194(__this, ___value, method) (( void (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m15194_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15195_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m15195(__this, method) (( bool (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15195_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15196_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m15196(__this, method) (( Object_t * (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15196_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15197_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m15197(__this, method) (( bool (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15197_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15198_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m15198(__this, method) (( bool (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15198_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15199_gshared (Collection_1_t2387 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m15199(__this, ___index, method) (( Object_t * (*) (Collection_1_t2387 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15199_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m15200_gshared (Collection_1_t2387 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m15200(__this, ___index, ___value, method) (( void (*) (Collection_1_t2387 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15200_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m15201_gshared (Collection_1_t2387 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m15201(__this, ___item, method) (( void (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_Add_m15201_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m15202_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_Clear_m15202(__this, method) (( void (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_Clear_m15202_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m15203_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m15203(__this, method) (( void (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_ClearItems_m15203_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m15204_gshared (Collection_1_t2387 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m15204(__this, ___item, method) (( bool (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_Contains_m15204_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m15205_gshared (Collection_1_t2387 * __this, ObjectU5BU5D_t166* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m15205(__this, ___array, ___index, method) (( void (*) (Collection_1_t2387 *, ObjectU5BU5D_t166*, int32_t, const MethodInfo*))Collection_1_CopyTo_m15205_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m15206_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m15206(__this, method) (( Object_t* (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_GetEnumerator_m15206_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15207_gshared (Collection_1_t2387 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m15207(__this, ___item, method) (( int32_t (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m15207_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m15208_gshared (Collection_1_t2387 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m15208(__this, ___index, ___item, method) (( void (*) (Collection_1_t2387 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m15208_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15209_gshared (Collection_1_t2387 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m15209(__this, ___index, ___item, method) (( void (*) (Collection_1_t2387 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m15209_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m15210_gshared (Collection_1_t2387 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m15210(__this, ___item, method) (( bool (*) (Collection_1_t2387 *, Object_t *, const MethodInfo*))Collection_1_Remove_m15210_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m15211_gshared (Collection_1_t2387 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m15211(__this, ___index, method) (( void (*) (Collection_1_t2387 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m15211_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15212_gshared (Collection_1_t2387 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m15212(__this, ___index, method) (( void (*) (Collection_1_t2387 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m15212_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m15213_gshared (Collection_1_t2387 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m15213(__this, method) (( int32_t (*) (Collection_1_t2387 *, const MethodInfo*))Collection_1_get_Count_m15213_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m15214_gshared (Collection_1_t2387 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m15214(__this, ___index, method) (( Object_t * (*) (Collection_1_t2387 *, int32_t, const MethodInfo*))Collection_1_get_Item_m15214_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m15215_gshared (Collection_1_t2387 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m15215(__this, ___index, ___value, method) (( void (*) (Collection_1_t2387 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m15215_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15216_gshared (Collection_1_t2387 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m15216(__this, ___index, ___item, method) (( void (*) (Collection_1_t2387 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m15216_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m15217_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m15217(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m15217_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m15218_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m15218(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m15218_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m15219_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m15219(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m15219_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m15220_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m15220(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m15220_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m15221_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m15221(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m15221_gshared)(__this /* static, unused */, ___list, method)
