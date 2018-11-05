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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t546;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t545;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t550;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream)
extern "C" void InflaterInputBuffer__ctor_m3031 (InflaterInputBuffer_t546 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
extern "C" void InflaterInputBuffer__ctor_m3032 (InflaterInputBuffer_t546 * __this, Stream_t506 * ___stream, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_RawLength()
extern "C" int32_t InflaterInputBuffer_get_RawLength_m3033 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_RawData()
extern "C" ByteU5BU5D_t129* InflaterInputBuffer_get_RawData_m3034 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_ClearTextLength()
extern "C" int32_t InflaterInputBuffer_get_ClearTextLength_m3035 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_ClearText()
extern "C" ByteU5BU5D_t129* InflaterInputBuffer_get_ClearText_m3036 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_Available()
extern "C" int32_t InflaterInputBuffer_get_Available_m3037 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::set_Available(System.Int32)
extern "C" void InflaterInputBuffer_set_Available_m3038 (InflaterInputBuffer_t546 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C" void InflaterInputBuffer_SetInflaterInput_m3039 (InflaterInputBuffer_t546 * __this, Inflater_t545 * ___inflater, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::Fill()
extern "C" void InflaterInputBuffer_Fill_m3040 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadRawBuffer(System.Byte[])
extern "C" int32_t InflaterInputBuffer_ReadRawBuffer_m3041 (InflaterInputBuffer_t546 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadRawBuffer(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t InflaterInputBuffer_ReadRawBuffer_m3042 (InflaterInputBuffer_t546 * __this, ByteU5BU5D_t129* ___outBuffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadClearTextBuffer(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t InflaterInputBuffer_ReadClearTextBuffer_m3043 (InflaterInputBuffer_t546 * __this, ByteU5BU5D_t129* ___outBuffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadLeByte()
extern "C" int32_t InflaterInputBuffer_ReadLeByte_m3044 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadLeShort()
extern "C" int32_t InflaterInputBuffer_ReadLeShort_m3045 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadLeInt()
extern "C" int32_t InflaterInputBuffer_ReadLeInt_m3046 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::ReadLeLong()
extern "C" int64_t InflaterInputBuffer_ReadLeLong_m3047 (InflaterInputBuffer_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::set_CryptoTransform(System.Security.Cryptography.ICryptoTransform)
extern "C" void InflaterInputBuffer_set_CryptoTransform_m3048 (InflaterInputBuffer_t546 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
