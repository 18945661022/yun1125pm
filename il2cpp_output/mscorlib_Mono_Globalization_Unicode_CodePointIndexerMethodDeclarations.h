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

// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1672;
// System.Int32[]
struct Int32U5BU5D_t193;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C" void CodePointIndexer__ctor_m10449 (CodePointIndexer_t1672 * __this, Int32U5BU5D_t193* ___starts, Int32U5BU5D_t193* ___ends, int32_t ___defaultIndex, int32_t ___defaultCP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::ToIndex(System.Int32)
extern "C" int32_t CodePointIndexer_ToIndex_m10450 (CodePointIndexer_t1672 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
