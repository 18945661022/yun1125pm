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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2768;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2759;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t3255;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object
struct Object_t;
// System.UInt16[]
struct UInt16U5BU5D_t1486;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_41.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m20640_gshared (ValueCollection_t2768 * __this, Dictionary_2_t2759 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m20640(__this, ___dictionary, method) (( void (*) (ValueCollection_t2768 *, Dictionary_2_t2759 *, const MethodInfo*))ValueCollection__ctor_m20640_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20641_gshared (ValueCollection_t2768 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20641(__this, ___item, method) (( void (*) (ValueCollection_t2768 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20641_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20642_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20642(__this, method) (( void (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20643_gshared (ValueCollection_t2768 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20643(__this, ___item, method) (( bool (*) (ValueCollection_t2768 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20643_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20644_gshared (ValueCollection_t2768 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20644(__this, ___item, method) (( bool (*) (ValueCollection_t2768 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20644_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20645_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20645(__this, method) (( Object_t* (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m20646_gshared (ValueCollection_t2768 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m20646(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2768 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m20646_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20647_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20647(__this, method) (( Object_t * (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20648_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20648(__this, method) (( bool (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20649_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20649(__this, method) (( bool (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20649_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m20650_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m20650(__this, method) (( Object_t * (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m20650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m20651_gshared (ValueCollection_t2768 * __this, UInt16U5BU5D_t1486* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m20651(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2768 *, UInt16U5BU5D_t1486*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m20651_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2769  ValueCollection_GetEnumerator_m20652_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m20652(__this, method) (( Enumerator_t2769  (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_GetEnumerator_m20652_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m20653_gshared (ValueCollection_t2768 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m20653(__this, method) (( int32_t (*) (ValueCollection_t2768 *, const MethodInfo*))ValueCollection_get_Count_m20653_gshared)(__this, method)
