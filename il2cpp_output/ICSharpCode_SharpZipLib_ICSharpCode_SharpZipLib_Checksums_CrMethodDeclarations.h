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

// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t513;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.UInt32 ICSharpCode.SharpZipLib.Checksums.Crc32::ComputeCrc32(System.UInt32,System.Byte)
extern "C" uint32_t Crc32_ComputeCrc32_m2607 (Object_t * __this /* static, unused */, uint32_t ___oldCrc, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Checksums.Crc32::get_Value()
extern "C" int64_t Crc32_get_Value_m2608 (Crc32_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::set_Value(System.Int64)
extern "C" void Crc32_set_Value_m2609 (Crc32_t513 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::Reset()
extern "C" void Crc32_Reset_m2610 (Crc32_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::Update(System.Int32)
extern "C" void Crc32_Update_m2611 (Crc32_t513 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::Update(System.Byte[])
extern "C" void Crc32_Update_m2612 (Crc32_t513 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::Update(System.Byte[],System.Int32,System.Int32)
extern "C" void Crc32_Update_m2613 (Crc32_t513 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::.ctor()
extern "C" void Crc32__ctor_m2614 (Crc32_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::.cctor()
extern "C" void Crc32__cctor_m2615 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
