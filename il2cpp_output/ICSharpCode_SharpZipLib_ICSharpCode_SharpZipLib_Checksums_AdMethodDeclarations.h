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

// ICSharpCode.SharpZipLib.Checksums.Adler32
struct Adler32_t512;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Int64 ICSharpCode.SharpZipLib.Checksums.Adler32::get_Value()
extern "C" int64_t Adler32_get_Value_m2601 (Adler32_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::.ctor()
extern "C" void Adler32__ctor_m2602 (Adler32_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Reset()
extern "C" void Adler32_Reset_m2603 (Adler32_t512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Update(System.Int32)
extern "C" void Adler32_Update_m2604 (Adler32_t512 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Update(System.Byte[])
extern "C" void Adler32_Update_m2605 (Adler32_t512 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Update(System.Byte[],System.Int32,System.Int32)
extern "C" void Adler32_Update_m2606 (Adler32_t512 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
