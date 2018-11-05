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

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2667;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2666;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>[]
struct KeyValuePair_2U5BU5D_t3238;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct IEnumerator_1_t3239;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2672;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct ValueCollection_t2676;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m19048_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19048(__this, method) (( void (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2__ctor_m19048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19050_gshared (Dictionary_2_t2667 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19050(__this, ___comparer, method) (( void (*) (Dictionary_2_t2667 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19050_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19052_gshared (Dictionary_2_t2667 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19052(__this, ___capacity, method) (( void (*) (Dictionary_2_t2667 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19052_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19054_gshared (Dictionary_2_t2667 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19054(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2667 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m19054_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19056_gshared (Dictionary_2_t2667 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19056(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2667 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19056_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19058_gshared (Dictionary_2_t2667 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2667 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19058_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19060_gshared (Dictionary_2_t2667 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19060(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2667 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19060_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19062_gshared (Dictionary_2_t2667 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19062(__this, ___key, method) (( void (*) (Dictionary_2_t2667 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19062_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19064_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19064(__this, method) (( bool (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19064_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19066_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19066(__this, method) (( Object_t * (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19068_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19068(__this, method) (( bool (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19070_gshared (Dictionary_2_t2667 * __this, KeyValuePair_2_t2669  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19070(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2667 *, KeyValuePair_2_t2669 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19070_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19072_gshared (Dictionary_2_t2667 * __this, KeyValuePair_2_t2669  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19072(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2667 *, KeyValuePair_2_t2669 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19072_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19074_gshared (Dictionary_2_t2667 * __this, KeyValuePair_2U5BU5D_t3238* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19074(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2667 *, KeyValuePair_2U5BU5D_t3238*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19074_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19076_gshared (Dictionary_2_t2667 * __this, KeyValuePair_2_t2669  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19076(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2667 *, KeyValuePair_2_t2669 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19076_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19078_gshared (Dictionary_2_t2667 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2667 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19078_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19080_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19080(__this, method) (( Object_t * (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19080_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19082_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19082(__this, method) (( Object_t* (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19082_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19084_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19084(__this, method) (( Object_t * (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19084_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19086_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19086(__this, method) (( int32_t (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_get_Count_m19086_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m19088_gshared (Dictionary_2_t2667 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19088(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2667 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m19088_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19090_gshared (Dictionary_2_t2667 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19090(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2667 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m19090_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19092_gshared (Dictionary_2_t2667 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19092(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2667 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19092_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19094_gshared (Dictionary_2_t2667 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19094(__this, ___size, method) (( void (*) (Dictionary_2_t2667 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19094_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19096_gshared (Dictionary_2_t2667 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2667 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19096_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2669  Dictionary_2_make_pair_m19098_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19098(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2669  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m19098_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m19100_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19100(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m19100_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m19102_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19102(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m19102_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19104_gshared (Dictionary_2_t2667 * __this, KeyValuePair_2U5BU5D_t3238* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19104(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2667 *, KeyValuePair_2U5BU5D_t3238*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19104_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m19106_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19106(__this, method) (( void (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_Resize_m19106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19108_gshared (Dictionary_2_t2667 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19108(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2667 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m19108_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m19110_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19110(__this, method) (( void (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_Clear_m19110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19112_gshared (Dictionary_2_t2667 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19112(__this, ___key, method) (( bool (*) (Dictionary_2_t2667 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m19112_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19114_gshared (Dictionary_2_t2667 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19114(__this, ___value, method) (( bool (*) (Dictionary_2_t2667 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m19114_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19116_gshared (Dictionary_2_t2667 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19116(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2667 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m19116_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19118_gshared (Dictionary_2_t2667 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19118(__this, ___sender, method) (( void (*) (Dictionary_2_t2667 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19118_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19120_gshared (Dictionary_2_t2667 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19120(__this, ___key, method) (( bool (*) (Dictionary_2_t2667 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m19120_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19122_gshared (Dictionary_2_t2667 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19122(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2667 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m19122_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Keys()
extern "C" KeyCollection_t2672 * Dictionary_2_get_Keys_m19124_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19124(__this, method) (( KeyCollection_t2672 * (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_get_Keys_m19124_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Values()
extern "C" ValueCollection_t2676 * Dictionary_2_get_Values_m19125_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19125(__this, method) (( ValueCollection_t2676 * (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_get_Values_m19125_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m19127_gshared (Dictionary_2_t2667 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19127(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2667 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19127_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m19129_gshared (Dictionary_2_t2667 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19129(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2667 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19129_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19131_gshared (Dictionary_2_t2667 * __this, KeyValuePair_2_t2669  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19131(__this, ___pair, method) (( bool (*) (Dictionary_2_t2667 *, KeyValuePair_2_t2669 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19131_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2674  Dictionary_2_GetEnumerator_m19133_gshared (Dictionary_2_t2667 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19133(__this, method) (( Enumerator_t2674  (*) (Dictionary_2_t2667 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19133_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m19135_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19135(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19135_gshared)(__this /* static, unused */, ___key, ___value, method)
