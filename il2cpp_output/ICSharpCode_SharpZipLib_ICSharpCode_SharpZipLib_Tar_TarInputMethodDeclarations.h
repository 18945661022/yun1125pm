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

// ICSharpCode.SharpZipLib.Tar.TarInputStream/EntryFactoryAdapter
struct EntryFactoryAdapter_t562;
// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarInputStream/EntryFactoryAdapter::CreateEntry(System.String)
extern "C" TarEntry_t557 * EntryFactoryAdapter_CreateEntry_m2977 (EntryFactoryAdapter_t562 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarInputStream/EntryFactoryAdapter::CreateEntryFromFile(System.String)
extern "C" TarEntry_t557 * EntryFactoryAdapter_CreateEntryFromFile_m2978 (EntryFactoryAdapter_t562 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarInputStream/EntryFactoryAdapter::CreateEntry(System.Byte[])
extern "C" TarEntry_t557 * EntryFactoryAdapter_CreateEntry_m2979 (EntryFactoryAdapter_t562 * __this, ByteU5BU5D_t129* ___headerBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream/EntryFactoryAdapter::.ctor()
extern "C" void EntryFactoryAdapter__ctor_m2980 (EntryFactoryAdapter_t562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
