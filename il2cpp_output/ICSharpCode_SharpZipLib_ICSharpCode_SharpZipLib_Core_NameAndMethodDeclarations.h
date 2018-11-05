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

// ICSharpCode.SharpZipLib.Core.NameAndSizeFilter
struct NameAndSizeFilter_t533;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.NameAndSizeFilter::.ctor(System.String,System.Int64,System.Int64)
extern "C" void NameAndSizeFilter__ctor_m2699 (NameAndSizeFilter_t533 * __this, String_t* ___filter, int64_t ___minSize, int64_t ___maxSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.NameAndSizeFilter::IsMatch(System.String)
extern "C" bool NameAndSizeFilter_IsMatch_m2700 (NameAndSizeFilter_t533 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Core.NameAndSizeFilter::get_MinSize()
extern "C" int64_t NameAndSizeFilter_get_MinSize_m2701 (NameAndSizeFilter_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.NameAndSizeFilter::set_MinSize(System.Int64)
extern "C" void NameAndSizeFilter_set_MinSize_m2702 (NameAndSizeFilter_t533 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Core.NameAndSizeFilter::get_MaxSize()
extern "C" int64_t NameAndSizeFilter_get_MaxSize_m2703 (NameAndSizeFilter_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.NameAndSizeFilter::set_MaxSize(System.Int64)
extern "C" void NameAndSizeFilter_set_MaxSize_m2704 (NameAndSizeFilter_t533 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
