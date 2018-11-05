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

// ICSharpCode.SharpZipLib.Tar.TarInputStream
struct TarInputStream_t558;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Tar.TarInputStream/IEntryFactory
struct IEntryFactory_t563;
// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::.ctor(System.IO.Stream)
extern "C" void TarInputStream__ctor_m2981 (TarInputStream_t558 * __this, Stream_t506 * ___inputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::.ctor(System.IO.Stream,System.Int32)
extern "C" void TarInputStream__ctor_m2982 (TarInputStream_t558 * __this, Stream_t506 * ___inputStream, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarInputStream::get_CanRead()
extern "C" bool TarInputStream_get_CanRead_m2983 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarInputStream::get_CanSeek()
extern "C" bool TarInputStream_get_CanSeek_m2984 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarInputStream::get_CanWrite()
extern "C" bool TarInputStream_get_CanWrite_m2985 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarInputStream::get_Length()
extern "C" int64_t TarInputStream_get_Length_m2986 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarInputStream::get_Position()
extern "C" int64_t TarInputStream_get_Position_m2987 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::set_Position(System.Int64)
extern "C" void TarInputStream_set_Position_m2988 (TarInputStream_t558 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::Flush()
extern "C" void TarInputStream_Flush_m2989 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t TarInputStream_Seek_m2990 (TarInputStream_t558 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::SetLength(System.Int64)
extern "C" void TarInputStream_SetLength_m2991 (TarInputStream_t558 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void TarInputStream_Write_m2992 (TarInputStream_t558 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::WriteByte(System.Byte)
extern "C" void TarInputStream_WriteByte_m2993 (TarInputStream_t558 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarInputStream::ReadByte()
extern "C" int32_t TarInputStream_ReadByte_m2994 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarInputStream_Read_m2995 (TarInputStream_t558 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::Close()
extern "C" void TarInputStream_Close_m2996 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::SetEntryFactory(ICSharpCode.SharpZipLib.Tar.TarInputStream/IEntryFactory)
extern "C" void TarInputStream_SetEntryFactory_m2997 (TarInputStream_t558 * __this, Object_t * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarInputStream::get_RecordSize()
extern "C" int32_t TarInputStream_get_RecordSize_m2998 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarInputStream::GetRecordSize()
extern "C" int32_t TarInputStream_GetRecordSize_m2999 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarInputStream::get_Available()
extern "C" int64_t TarInputStream_get_Available_m3000 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::Skip(System.Int64)
extern "C" void TarInputStream_Skip_m3001 (TarInputStream_t558 * __this, int64_t ___skipCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarInputStream::get_IsMarkSupported()
extern "C" bool TarInputStream_get_IsMarkSupported_m3002 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::Mark(System.Int32)
extern "C" void TarInputStream_Mark_m3003 (TarInputStream_t558 * __this, int32_t ___markLimit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::Reset()
extern "C" void TarInputStream_Reset_m3004 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarInputStream::GetNextEntry()
extern "C" TarEntry_t557 * TarInputStream_GetNextEntry_m3005 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::CopyEntryContents(System.IO.Stream)
extern "C" void TarInputStream_CopyEntryContents_m3006 (TarInputStream_t558 * __this, Stream_t506 * ___outputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarInputStream::SkipToNextEntry()
extern "C" void TarInputStream_SkipToNextEntry_m3007 (TarInputStream_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
