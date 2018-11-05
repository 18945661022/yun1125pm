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

// ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer
struct PendingBuffer_t572;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::.ctor()
extern "C" void PendingBuffer__ctor_m3136 (PendingBuffer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::.ctor(System.Int32)
extern "C" void PendingBuffer__ctor_m3137 (PendingBuffer_t572 * __this, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::Reset()
extern "C" void PendingBuffer_Reset_m3138 (PendingBuffer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::WriteByte(System.Int32)
extern "C" void PendingBuffer_WriteByte_m3139 (PendingBuffer_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::WriteShort(System.Int32)
extern "C" void PendingBuffer_WriteShort_m3140 (PendingBuffer_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::WriteInt(System.Int32)
extern "C" void PendingBuffer_WriteInt_m3141 (PendingBuffer_t572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::WriteBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void PendingBuffer_WriteBlock_m3142 (PendingBuffer_t572 * __this, ByteU5BU5D_t129* ___block, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::get_BitCount()
extern "C" int32_t PendingBuffer_get_BitCount_m3143 (PendingBuffer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::AlignToByte()
extern "C" void PendingBuffer_AlignToByte_m3144 (PendingBuffer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::WriteBits(System.Int32,System.Int32)
extern "C" void PendingBuffer_WriteBits_m3145 (PendingBuffer_t572 * __this, int32_t ___b, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::WriteShortMSB(System.Int32)
extern "C" void PendingBuffer_WriteShortMSB_m3146 (PendingBuffer_t572 * __this, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::get_IsFlushed()
extern "C" bool PendingBuffer_get_IsFlushed_m3147 (PendingBuffer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::Flush(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t PendingBuffer_Flush_m3148 (PendingBuffer_t572 * __this, ByteU5BU5D_t129* ___output, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::ToByteArray()
extern "C" ByteU5BU5D_t129* PendingBuffer_ToByteArray_m3149 (PendingBuffer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
