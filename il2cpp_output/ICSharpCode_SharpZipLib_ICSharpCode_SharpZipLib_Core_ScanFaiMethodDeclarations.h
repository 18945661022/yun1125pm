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

// ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs
struct ScanFailureEventArgs_t520;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::.ctor(System.String,System.Exception)
extern "C" void ScanFailureEventArgs__ctor_m2636 (ScanFailureEventArgs_t520 * __this, String_t* ___name, Exception_t159 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::get_Name()
extern "C" String_t* ScanFailureEventArgs_get_Name_m2637 (ScanFailureEventArgs_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::get_Exception()
extern "C" Exception_t159 * ScanFailureEventArgs_get_Exception_m2638 (ScanFailureEventArgs_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::get_ContinueRunning()
extern "C" bool ScanFailureEventArgs_get_ContinueRunning_m2639 (ScanFailureEventArgs_t520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::set_ContinueRunning(System.Boolean)
extern "C" void ScanFailureEventArgs_set_ContinueRunning_m2640 (ScanFailureEventArgs_t520 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
