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

// ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource
struct DynamicDiskDataSource_t622;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource::.ctor()
extern "C" void DynamicDiskDataSource__ctor_m3570 (DynamicDiskDataSource_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource::GetSource(ICSharpCode.SharpZipLib.Zip.ZipEntry,System.String)
extern "C" Stream_t506 * DynamicDiskDataSource_GetSource_m3571 (DynamicDiskDataSource_t622 * __this, ZipEntry_t591 * ___entry, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
