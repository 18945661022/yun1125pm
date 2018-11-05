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

// ICSharpCode.SharpZipLib.Core.NameFilter
struct NameFilter_t529;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t33;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.NameFilter::.ctor(System.String)
extern "C" void NameFilter__ctor_m2676 (NameFilter_t529 * __this, String_t* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.NameFilter::IsValidExpression(System.String)
extern "C" bool NameFilter_IsValidExpression_m2677 (Object_t * __this /* static, unused */, String_t* ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.NameFilter::IsValidFilterExpression(System.String)
extern "C" bool NameFilter_IsValidFilterExpression_m2678 (Object_t * __this /* static, unused */, String_t* ___toTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ICSharpCode.SharpZipLib.Core.NameFilter::SplitQuoted(System.String)
extern "C" StringU5BU5D_t33* NameFilter_SplitQuoted_m2679 (Object_t * __this /* static, unused */, String_t* ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Core.NameFilter::ToString()
extern "C" String_t* NameFilter_ToString_m2680 (NameFilter_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.NameFilter::IsIncluded(System.String)
extern "C" bool NameFilter_IsIncluded_m2681 (NameFilter_t529 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.NameFilter::IsExcluded(System.String)
extern "C" bool NameFilter_IsExcluded_m2682 (NameFilter_t529 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.NameFilter::IsMatch(System.String)
extern "C" bool NameFilter_IsMatch_m2683 (NameFilter_t529 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.NameFilter::Compile()
extern "C" void NameFilter_Compile_m2684 (NameFilter_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
