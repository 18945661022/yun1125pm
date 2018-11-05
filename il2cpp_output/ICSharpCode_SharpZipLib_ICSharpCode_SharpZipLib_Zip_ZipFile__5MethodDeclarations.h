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

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator
struct ZipEntryEnumerator_t614;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t615;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntry[])
extern "C" void ZipEntryEnumerator__ctor_m3437 (ZipEntryEnumerator_t614 * __this, ZipEntryU5BU5D_t615* ___entries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::get_Current()
extern "C" Object_t * ZipEntryEnumerator_get_Current_m3438 (ZipEntryEnumerator_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::Reset()
extern "C" void ZipEntryEnumerator_Reset_m3439 (ZipEntryEnumerator_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::MoveNext()
extern "C" bool ZipEntryEnumerator_MoveNext_m3440 (ZipEntryEnumerator_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
