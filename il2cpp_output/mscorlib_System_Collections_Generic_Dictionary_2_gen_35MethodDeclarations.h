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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3081;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3311;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3312;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t3085;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t3089;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m25241_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25241(__this, method) (( void (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2__ctor_m25241_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25242_gshared (Dictionary_2_t3081 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25242(__this, ___comparer, method) (( void (*) (Dictionary_2_t3081 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25242_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25244_gshared (Dictionary_2_t3081 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25244(__this, ___capacity, method) (( void (*) (Dictionary_2_t3081 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25244_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25246_gshared (Dictionary_2_t3081 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25246(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3081 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m25246_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25248_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25248(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25248_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25250_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25250(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3081 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25250_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25252_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25252(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3081 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25252_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25254_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25254(__this, ___key, method) (( void (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25254_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25256_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25256(__this, method) (( bool (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25256_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25258_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25258(__this, method) (( Object_t * (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25258_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25260_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25260(__this, method) (( bool (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25262_gshared (Dictionary_2_t3081 * __this, KeyValuePair_2_t3083  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25262(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3081 *, KeyValuePair_2_t3083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25262_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25264_gshared (Dictionary_2_t3081 * __this, KeyValuePair_2_t3083  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25264(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3081 *, KeyValuePair_2_t3083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25264_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25266_gshared (Dictionary_2_t3081 * __this, KeyValuePair_2U5BU5D_t3311* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25266(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3081 *, KeyValuePair_2U5BU5D_t3311*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25266_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25268_gshared (Dictionary_2_t3081 * __this, KeyValuePair_2_t3083  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25268(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3081 *, KeyValuePair_2_t3083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25268_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25270_gshared (Dictionary_2_t3081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25270(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3081 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25270_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25272_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25272(__this, method) (( Object_t * (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25272_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25274_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25274(__this, method) (( Object_t* (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25274_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25276_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25276(__this, method) (( Object_t * (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25276_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25278_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25278(__this, method) (( int32_t (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_get_Count_m25278_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m25280_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25280(__this, ___key, method) (( bool (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m25280_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25282_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25282(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3081 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m25282_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25284_gshared (Dictionary_2_t3081 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25284(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3081 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25284_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25286_gshared (Dictionary_2_t3081 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25286(__this, ___size, method) (( void (*) (Dictionary_2_t3081 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25286_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25288_gshared (Dictionary_2_t3081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25288(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3081 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25288_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3083  Dictionary_2_make_pair_m25290_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25290(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3083  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m25290_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25292_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25292(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m25292_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m25294_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25294(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m25294_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25296_gshared (Dictionary_2_t3081 * __this, KeyValuePair_2U5BU5D_t3311* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25296(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3081 *, KeyValuePair_2U5BU5D_t3311*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25296_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m25298_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25298(__this, method) (( void (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_Resize_m25298_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25300_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25300(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3081 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m25300_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m25302_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25302(__this, method) (( void (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_Clear_m25302_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25304_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25304(__this, ___key, method) (( bool (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m25304_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25306_gshared (Dictionary_2_t3081 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25306(__this, ___value, method) (( bool (*) (Dictionary_2_t3081 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m25306_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25308_gshared (Dictionary_2_t3081 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25308(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3081 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m25308_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25310_gshared (Dictionary_2_t3081 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25310(__this, ___sender, method) (( void (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25310_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25312_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25312(__this, ___key, method) (( bool (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m25312_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25314_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25314(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3081 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m25314_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t3085 * Dictionary_2_get_Keys_m25316_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25316(__this, method) (( KeyCollection_t3085 * (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_get_Keys_m25316_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t3089 * Dictionary_2_get_Values_m25318_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25318(__this, method) (( ValueCollection_t3089 * (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_get_Values_m25318_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25320_gshared (Dictionary_2_t3081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25320(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25320_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m25322_gshared (Dictionary_2_t3081 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25322(__this, ___value, method) (( bool (*) (Dictionary_2_t3081 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25322_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25324_gshared (Dictionary_2_t3081 * __this, KeyValuePair_2_t3083  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25324(__this, ___pair, method) (( bool (*) (Dictionary_2_t3081 *, KeyValuePair_2_t3083 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25324_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t3087  Dictionary_2_GetEnumerator_m25326_gshared (Dictionary_2_t3081 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25326(__this, method) (( Enumerator_t3087  (*) (Dictionary_2_t3081 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25326_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m25328_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25328(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25328_gshared)(__this /* static, unused */, ___key, ___value, method)
