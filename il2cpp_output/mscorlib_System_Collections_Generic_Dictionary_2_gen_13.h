﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t193;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2356;
// Vuforia.PropAbstractBehaviour[]
struct PropAbstractBehaviourU5BU5D_t994;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t2828;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>
struct  Dictionary_2_t838  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::table
	Int32U5BU5D_t193* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::linkSlots
	LinkU5BU5D_t2356* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::keySlots
	Int32U5BU5D_t193* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::valueSlots
	PropAbstractBehaviourU5BU5D_t994* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::serialization_info
	SerializationInfo_t643 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t838_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>::<>f__am$cacheB
	Transform_1_t2828 * ___U3CU3Ef__amU24cacheB_15;
};
