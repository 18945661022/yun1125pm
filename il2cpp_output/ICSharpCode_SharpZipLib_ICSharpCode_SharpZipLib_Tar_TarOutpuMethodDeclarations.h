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

// ICSharpCode.SharpZipLib.Tar.TarOutputStream
struct TarOutputStream_t559;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::.ctor(System.IO.Stream)
extern "C" void TarOutputStream__ctor_m3008 (TarOutputStream_t559 * __this, Stream_t506 * ___outputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::.ctor(System.IO.Stream,System.Int32)
extern "C" void TarOutputStream__ctor_m3009 (TarOutputStream_t559 * __this, Stream_t506 * ___outputStream, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_CanRead()
extern "C" bool TarOutputStream_get_CanRead_m3010 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_CanSeek()
extern "C" bool TarOutputStream_get_CanSeek_m3011 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_CanWrite()
extern "C" bool TarOutputStream_get_CanWrite_m3012 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_Length()
extern "C" int64_t TarOutputStream_get_Length_m3013 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_Position()
extern "C" int64_t TarOutputStream_get_Position_m3014 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::set_Position(System.Int64)
extern "C" void TarOutputStream_set_Position_m3015 (TarOutputStream_t559 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t TarOutputStream_Seek_m3016 (TarOutputStream_t559 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::SetLength(System.Int64)
extern "C" void TarOutputStream_SetLength_m3017 (TarOutputStream_t559 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarOutputStream::ReadByte()
extern "C" int32_t TarOutputStream_ReadByte_m3018 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarOutputStream_Read_m3019 (TarOutputStream_t559 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::Flush()
extern "C" void TarOutputStream_Flush_m3020 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::Finish()
extern "C" void TarOutputStream_Finish_m3021 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::Close()
extern "C" void TarOutputStream_Close_m3022 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_RecordSize()
extern "C" int32_t TarOutputStream_get_RecordSize_m3023 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarOutputStream::GetRecordSize()
extern "C" int32_t TarOutputStream_GetRecordSize_m3024 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarOutputStream::get_IsEntryOpen()
extern "C" bool TarOutputStream_get_IsEntryOpen_m3025 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::PutNextEntry(ICSharpCode.SharpZipLib.Tar.TarEntry)
extern "C" void TarOutputStream_PutNextEntry_m3026 (TarOutputStream_t559 * __this, TarEntry_t557 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::CloseEntry()
extern "C" void TarOutputStream_CloseEntry_m3027 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::WriteByte(System.Byte)
extern "C" void TarOutputStream_WriteByte_m3028 (TarOutputStream_t559 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void TarOutputStream_Write_m3029 (TarOutputStream_t559 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarOutputStream::WriteEofBlock()
extern "C" void TarOutputStream_WriteEofBlock_m3030 (TarOutputStream_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
