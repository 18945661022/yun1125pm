﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t1564;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t1563;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern "C" void IntervalCollection__ctor_m9215 (IntervalCollection_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern "C" Interval_t1560  IntervalCollection_get_Item_m9216 (IntervalCollection_t1564 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern "C" void IntervalCollection_Add_m9217 (IntervalCollection_t1564 * __this, Interval_t1560  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern "C" void IntervalCollection_Normalize_m9218 (IntervalCollection_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C" IntervalCollection_t1564 * IntervalCollection_GetMetaCollection_m9219 (IntervalCollection_t1564 * __this, CostDelegate_t1563 * ___cost_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C" void IntervalCollection_Optimize_m9220 (IntervalCollection_t1564 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t1564 * ___meta, CostDelegate_t1563 * ___cost_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C" int32_t IntervalCollection_get_Count_m9221 (IntervalCollection_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern "C" bool IntervalCollection_get_IsSynchronized_m9222 (IntervalCollection_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern "C" Object_t * IntervalCollection_get_SyncRoot_m9223 (IntervalCollection_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern "C" void IntervalCollection_CopyTo_m9224 (IntervalCollection_t1564 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern "C" Object_t * IntervalCollection_GetEnumerator_m9225 (IntervalCollection_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
