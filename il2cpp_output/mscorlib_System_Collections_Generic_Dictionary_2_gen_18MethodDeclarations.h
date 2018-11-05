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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1004;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>[]
struct KeyValuePair_2U5BU5D_t3275;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct IEnumerator_1_t3276;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct KeyCollection_t2852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct ValueCollection_t2856;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor()
extern "C" void Dictionary_2__ctor_m6134_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m6134(__this, method) (( void (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2__ctor_m6134_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22253_gshared (Dictionary_2_t1004 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22253(__this, ___comparer, method) (( void (*) (Dictionary_2_t1004 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22253_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22254_gshared (Dictionary_2_t1004 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22254(__this, ___capacity, method) (( void (*) (Dictionary_2_t1004 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22254_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22255_gshared (Dictionary_2_t1004 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22255(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1004 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m22255_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22256_gshared (Dictionary_2_t1004 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22256(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22256_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22257_gshared (Dictionary_2_t1004 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22257(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1004 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22257_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22258_gshared (Dictionary_2_t1004 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22258(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1004 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22258_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22259_gshared (Dictionary_2_t1004 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22259(__this, ___key, method) (( void (*) (Dictionary_2_t1004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22259_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22260_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22260(__this, method) (( bool (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22260_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22261_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22261(__this, method) (( Object_t * (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22262_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22262(__this, method) (( bool (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22263_gshared (Dictionary_2_t1004 * __this, KeyValuePair_2_t2850  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22263(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1004 *, KeyValuePair_2_t2850 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22263_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22264_gshared (Dictionary_2_t1004 * __this, KeyValuePair_2_t2850  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22264(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1004 *, KeyValuePair_2_t2850 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22264_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22265_gshared (Dictionary_2_t1004 * __this, KeyValuePair_2U5BU5D_t3275* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22265(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1004 *, KeyValuePair_2U5BU5D_t3275*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22265_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22266_gshared (Dictionary_2_t1004 * __this, KeyValuePair_2_t2850  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22266(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1004 *, KeyValuePair_2_t2850 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22266_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22267_gshared (Dictionary_2_t1004 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22267(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1004 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22267_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22268_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22268(__this, method) (( Object_t * (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22268_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22269_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22269(__this, method) (( Object_t* (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22269_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22270_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22270(__this, method) (( Object_t * (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22271_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22271(__this, method) (( int32_t (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_get_Count_m22271_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Item(TKey)
extern "C" TrackableResultData_t769  Dictionary_2_get_Item_m22272_gshared (Dictionary_2_t1004 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22272(__this, ___key, method) (( TrackableResultData_t769  (*) (Dictionary_2_t1004 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m22272_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22273_gshared (Dictionary_2_t1004 * __this, int32_t ___key, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22273(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1004 *, int32_t, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_set_Item_m22273_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22274_gshared (Dictionary_2_t1004 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22274(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1004 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22274_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22275_gshared (Dictionary_2_t1004 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22275(__this, ___size, method) (( void (*) (Dictionary_2_t1004 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22275_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22276_gshared (Dictionary_2_t1004 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22276(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1004 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22276_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2850  Dictionary_2_make_pair_m22277_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22277(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2850  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_make_pair_m22277_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m22278_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22278(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_pick_key_m22278_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_value(TKey,TValue)
extern "C" TrackableResultData_t769  Dictionary_2_pick_value_m22279_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22279(__this /* static, unused */, ___key, ___value, method) (( TrackableResultData_t769  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_pick_value_m22279_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22280_gshared (Dictionary_2_t1004 * __this, KeyValuePair_2U5BU5D_t3275* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22280(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1004 *, KeyValuePair_2U5BU5D_t3275*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22280_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Resize()
extern "C" void Dictionary_2_Resize_m22281_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22281(__this, method) (( void (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_Resize_m22281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22282_gshared (Dictionary_2_t1004 * __this, int32_t ___key, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22282(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1004 *, int32_t, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_Add_m22282_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Clear()
extern "C" void Dictionary_2_Clear_m22283_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22283(__this, method) (( void (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_Clear_m22283_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22284_gshared (Dictionary_2_t1004 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22284(__this, ___key, method) (( bool (*) (Dictionary_2_t1004 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m22284_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22285_gshared (Dictionary_2_t1004 * __this, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22285(__this, ___value, method) (( bool (*) (Dictionary_2_t1004 *, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_ContainsValue_m22285_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22286_gshared (Dictionary_2_t1004 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22286(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1004 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m22286_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22287_gshared (Dictionary_2_t1004 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22287(__this, ___sender, method) (( void (*) (Dictionary_2_t1004 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22287_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22288_gshared (Dictionary_2_t1004 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22288(__this, ___key, method) (( bool (*) (Dictionary_2_t1004 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m22288_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22289_gshared (Dictionary_2_t1004 * __this, int32_t ___key, TrackableResultData_t769 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22289(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1004 *, int32_t, TrackableResultData_t769 *, const MethodInfo*))Dictionary_2_TryGetValue_m22289_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Keys()
extern "C" KeyCollection_t2852 * Dictionary_2_get_Keys_m22290_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22290(__this, method) (( KeyCollection_t2852 * (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_get_Keys_m22290_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Values()
extern "C" ValueCollection_t2856 * Dictionary_2_get_Values_m22291_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22291(__this, method) (( ValueCollection_t2856 * (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_get_Values_m22291_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m22292_gshared (Dictionary_2_t1004 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22292(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1004 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22292_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTValue(System.Object)
extern "C" TrackableResultData_t769  Dictionary_2_ToTValue_m22293_gshared (Dictionary_2_t1004 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22293(__this, ___value, method) (( TrackableResultData_t769  (*) (Dictionary_2_t1004 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22293_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22294_gshared (Dictionary_2_t1004 * __this, KeyValuePair_2_t2850  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22294(__this, ___pair, method) (( bool (*) (Dictionary_2_t1004 *, KeyValuePair_2_t2850 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22294_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetEnumerator()
extern "C" Enumerator_t2854  Dictionary_2_GetEnumerator_m22295_gshared (Dictionary_2_t1004 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22295(__this, method) (( Enumerator_t2854  (*) (Dictionary_2_t1004 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22295_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m22296_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t769  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22296(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t769 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22296_gshared)(__this /* static, unused */, ___key, ___value, method)
