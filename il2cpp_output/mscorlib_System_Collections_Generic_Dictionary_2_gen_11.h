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
// Vuforia.WordAbstractBehaviour[]
struct WordAbstractBehaviourU5BU5D_t959;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t2794;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct  Dictionary_2_t820  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::table
	Int32U5BU5D_t193* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::linkSlots
	LinkU5BU5D_t2356* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::keySlots
	Int32U5BU5D_t193* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::valueSlots
	WordAbstractBehaviourU5BU5D_t959* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::serialization_info
	SerializationInfo_t643 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t820_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>::<>f__am$cacheB
	Transform_1_t2794 * ___U3CU3Ef__amU24cacheB_15;
};
