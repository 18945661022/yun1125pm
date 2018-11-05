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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t544;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t545;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream)
extern "C" void InflaterInputStream__ctor_m2752 (InflaterInputStream_t544 * __this, Stream_t506 * ___baseInputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C" void InflaterInputStream__ctor_m2753 (InflaterInputStream_t544 * __this, Stream_t506 * ___baseInputStream, Inflater_t545 * ___inf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater,System.Int32)
extern "C" void InflaterInputStream__ctor_m2754 (InflaterInputStream_t544 * __this, Stream_t506 * ___baseInputStream, Inflater_t545 * ___inflater, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_IsStreamOwner()
extern "C" bool InflaterInputStream_get_IsStreamOwner_m2755 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::set_IsStreamOwner(System.Boolean)
extern "C" void InflaterInputStream_set_IsStreamOwner_m2756 (InflaterInputStream_t544 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Skip(System.Int64)
extern "C" int64_t InflaterInputStream_Skip_m2757 (InflaterInputStream_t544 * __this, int64_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::StopDecrypting()
extern "C" void InflaterInputStream_StopDecrypting_m2758 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Available()
extern "C" int32_t InflaterInputStream_get_Available_m2759 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Fill()
extern "C" void InflaterInputStream_Fill_m2760 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanRead()
extern "C" bool InflaterInputStream_get_CanRead_m2761 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanSeek()
extern "C" bool InflaterInputStream_get_CanSeek_m2762 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanWrite()
extern "C" bool InflaterInputStream_get_CanWrite_m2763 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Length()
extern "C" int64_t InflaterInputStream_get_Length_m2764 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Position()
extern "C" int64_t InflaterInputStream_get_Position_m2765 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::set_Position(System.Int64)
extern "C" void InflaterInputStream_set_Position_m2766 (InflaterInputStream_t544 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Flush()
extern "C" void InflaterInputStream_Flush_m2767 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t InflaterInputStream_Seek_m2768 (InflaterInputStream_t544 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::SetLength(System.Int64)
extern "C" void InflaterInputStream_SetLength_m2769 (InflaterInputStream_t544 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void InflaterInputStream_Write_m2770 (InflaterInputStream_t544 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::WriteByte(System.Byte)
extern "C" void InflaterInputStream_WriteByte_m2771 (InflaterInputStream_t544 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * InflaterInputStream_BeginWrite_m2772 (InflaterInputStream_t544 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t330 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Close()
extern "C" void InflaterInputStream_Close_m2773 (InflaterInputStream_t544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t InflaterInputStream_Read_m2774 (InflaterInputStream_t544 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
