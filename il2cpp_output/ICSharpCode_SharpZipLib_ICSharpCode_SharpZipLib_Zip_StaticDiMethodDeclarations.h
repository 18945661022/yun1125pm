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

// ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource
struct StaticDiskDataSource_t621;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t506;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource::.ctor(System.String)
extern "C" void StaticDiskDataSource__ctor_m3568 (StaticDiskDataSource_t621 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource::GetSource()
extern "C" Stream_t506 * StaticDiskDataSource_GetSource_m3569 (StaticDiskDataSource_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
