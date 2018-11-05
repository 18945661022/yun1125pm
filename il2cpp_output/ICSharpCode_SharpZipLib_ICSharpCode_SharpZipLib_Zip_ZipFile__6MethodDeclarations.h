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

// ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream
struct UncompressedStream_t616;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::.ctor(System.IO.Stream)
extern "C" void UncompressedStream__ctor_m3441 (UncompressedStream_t616 * __this, Stream_t506 * ___baseStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::Close()
extern "C" void UncompressedStream_Close_m3442 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::get_CanRead()
extern "C" bool UncompressedStream_get_CanRead_m3443 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::Flush()
extern "C" void UncompressedStream_Flush_m3444 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::get_CanWrite()
extern "C" bool UncompressedStream_get_CanWrite_m3445 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::get_CanSeek()
extern "C" bool UncompressedStream_get_CanSeek_m3446 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::get_Length()
extern "C" int64_t UncompressedStream_get_Length_m3447 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::get_Position()
extern "C" int64_t UncompressedStream_get_Position_m3448 (UncompressedStream_t616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::set_Position(System.Int64)
extern "C" void UncompressedStream_set_Position_m3449 (UncompressedStream_t616 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UncompressedStream_Read_m3450 (UncompressedStream_t616 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t UncompressedStream_Seek_m3451 (UncompressedStream_t616 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::SetLength(System.Int64)
extern "C" void UncompressedStream_SetLength_m3452 (UncompressedStream_t616 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void UncompressedStream_Write_m3453 (UncompressedStream_t616 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
