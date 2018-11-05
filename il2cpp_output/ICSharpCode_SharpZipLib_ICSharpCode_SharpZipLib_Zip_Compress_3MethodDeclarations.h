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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t565;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::.ctor()
extern "C" void StreamManipulator__ctor_m3059 (StreamManipulator_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
extern "C" int32_t StreamManipulator_PeekBits_m3060 (StreamManipulator_t565 * __this, int32_t ___bitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
extern "C" void StreamManipulator_DropBits_m3061 (StreamManipulator_t565 * __this, int32_t ___bitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::GetBits(System.Int32)
extern "C" int32_t StreamManipulator_GetBits_m3062 (StreamManipulator_t565 * __this, int32_t ___bitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBits()
extern "C" int32_t StreamManipulator_get_AvailableBits_m3063 (StreamManipulator_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
extern "C" int32_t StreamManipulator_get_AvailableBytes_m3064 (StreamManipulator_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SkipToByteBoundary()
extern "C" void StreamManipulator_SkipToByteBoundary_m3065 (StreamManipulator_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_IsNeedingInput()
extern "C" bool StreamManipulator_get_IsNeedingInput_m3066 (StreamManipulator_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t StreamManipulator_CopyBytes_m3067 (StreamManipulator_t565 * __this, ByteU5BU5D_t129* ___output, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::Reset()
extern "C" void StreamManipulator_Reset_m3068 (StreamManipulator_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void StreamManipulator_SetInput_m3069 (StreamManipulator_t565 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
