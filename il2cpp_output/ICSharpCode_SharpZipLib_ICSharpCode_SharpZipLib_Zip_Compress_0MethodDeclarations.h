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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct DeflaterOutputStream_t548;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t549;
// System.String
struct String_t;
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

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream)
extern "C" void DeflaterOutputStream__ctor_m2780 (DeflaterOutputStream_t548 * __this, Stream_t506 * ___baseOutputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater)
extern "C" void DeflaterOutputStream__ctor_m2781 (DeflaterOutputStream_t548 * __this, Stream_t506 * ___baseOutputStream, Deflater_t549 * ___deflater, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater,System.Int32)
extern "C" void DeflaterOutputStream__ctor_m2782 (DeflaterOutputStream_t548 * __this, Stream_t506 * ___baseOutputStream, Deflater_t549 * ___deflater, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Finish()
extern "C" void DeflaterOutputStream_Finish_m2783 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_IsStreamOwner()
extern "C" bool DeflaterOutputStream_get_IsStreamOwner_m2784 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::set_IsStreamOwner(System.Boolean)
extern "C" void DeflaterOutputStream_set_IsStreamOwner_m2785 (DeflaterOutputStream_t548 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanPatchEntries()
extern "C" bool DeflaterOutputStream_get_CanPatchEntries_m2786 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_Password()
extern "C" String_t* DeflaterOutputStream_get_Password_m2787 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::set_Password(System.String)
extern "C" void DeflaterOutputStream_set_Password_m2788 (DeflaterOutputStream_t548 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::EncryptBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflaterOutputStream_EncryptBlock_m2789 (DeflaterOutputStream_t548 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::InitializePassword(System.String)
extern "C" void DeflaterOutputStream_InitializePassword_m2790 (DeflaterOutputStream_t548 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Deflate()
extern "C" void DeflaterOutputStream_Deflate_m2791 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanRead()
extern "C" bool DeflaterOutputStream_get_CanRead_m2792 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanSeek()
extern "C" bool DeflaterOutputStream_get_CanSeek_m2793 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanWrite()
extern "C" bool DeflaterOutputStream_get_CanWrite_m2794 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_Length()
extern "C" int64_t DeflaterOutputStream_get_Length_m2795 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_Position()
extern "C" int64_t DeflaterOutputStream_get_Position_m2796 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::set_Position(System.Int64)
extern "C" void DeflaterOutputStream_set_Position_m2797 (DeflaterOutputStream_t548 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t DeflaterOutputStream_Seek_m2798 (DeflaterOutputStream_t548 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::SetLength(System.Int64)
extern "C" void DeflaterOutputStream_SetLength_m2799 (DeflaterOutputStream_t548 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::ReadByte()
extern "C" int32_t DeflaterOutputStream_ReadByte_m2800 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t DeflaterOutputStream_Read_m2801 (DeflaterOutputStream_t548 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DeflaterOutputStream_BeginRead_m2802 (DeflaterOutputStream_t548 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t330 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * DeflaterOutputStream_BeginWrite_m2803 (DeflaterOutputStream_t548 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t330 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Flush()
extern "C" void DeflaterOutputStream_Flush_m2804 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Close()
extern "C" void DeflaterOutputStream_Close_m2805 (DeflaterOutputStream_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::WriteByte(System.Byte)
extern "C" void DeflaterOutputStream_WriteByte_m2806 (DeflaterOutputStream_t548 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflaterOutputStream_Write_m2807 (DeflaterOutputStream_t548 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
