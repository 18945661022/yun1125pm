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

// ICSharpCode.SharpZipLib.Core.ExtendedPathFilter
struct ExtendedPathFilter_t532;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::.ctor(System.String,System.Int64,System.Int64)
extern "C" void ExtendedPathFilter__ctor_m2687 (ExtendedPathFilter_t532 * __this, String_t* ___filter, int64_t ___minSize, int64_t ___maxSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::.ctor(System.String,System.DateTime,System.DateTime)
extern "C" void ExtendedPathFilter__ctor_m2688 (ExtendedPathFilter_t532 * __this, String_t* ___filter, DateTime_t18  ___minDate, DateTime_t18  ___maxDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::.ctor(System.String,System.Int64,System.Int64,System.DateTime,System.DateTime)
extern "C" void ExtendedPathFilter__ctor_m2689 (ExtendedPathFilter_t532 * __this, String_t* ___filter, int64_t ___minSize, int64_t ___maxSize, DateTime_t18  ___minDate, DateTime_t18  ___maxDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::IsMatch(System.String)
extern "C" bool ExtendedPathFilter_IsMatch_m2690 (ExtendedPathFilter_t532 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::get_MinSize()
extern "C" int64_t ExtendedPathFilter_get_MinSize_m2691 (ExtendedPathFilter_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::set_MinSize(System.Int64)
extern "C" void ExtendedPathFilter_set_MinSize_m2692 (ExtendedPathFilter_t532 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::get_MaxSize()
extern "C" int64_t ExtendedPathFilter_get_MaxSize_m2693 (ExtendedPathFilter_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::set_MaxSize(System.Int64)
extern "C" void ExtendedPathFilter_set_MaxSize_m2694 (ExtendedPathFilter_t532 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::get_MinDate()
extern "C" DateTime_t18  ExtendedPathFilter_get_MinDate_m2695 (ExtendedPathFilter_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::set_MinDate(System.DateTime)
extern "C" void ExtendedPathFilter_set_MinDate_m2696 (ExtendedPathFilter_t532 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::get_MaxDate()
extern "C" DateTime_t18  ExtendedPathFilter_get_MaxDate_m2697 (ExtendedPathFilter_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ExtendedPathFilter::set_MaxDate(System.DateTime)
extern "C" void ExtendedPathFilter_set_MaxDate_m2698 (ExtendedPathFilter_t532 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
