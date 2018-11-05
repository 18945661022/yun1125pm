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

// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
struct PartialInputStream_t617;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile,System.Int64,System.Int64)
extern "C" void PartialInputStream__ctor_m3454 (PartialInputStream_t617 * __this, ZipFile_t580 * ___zipFile, int64_t ___start, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::ReadByte()
extern "C" int32_t PartialInputStream_ReadByte_m3455 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Close()
extern "C" void PartialInputStream_Close_m3456 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t PartialInputStream_Read_m3457 (PartialInputStream_t617 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void PartialInputStream_Write_m3458 (PartialInputStream_t617 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::SetLength(System.Int64)
extern "C" void PartialInputStream_SetLength_m3459 (PartialInputStream_t617 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t PartialInputStream_Seek_m3460 (PartialInputStream_t617 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Flush()
extern "C" void PartialInputStream_Flush_m3461 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Position()
extern "C" int64_t PartialInputStream_get_Position_m3462 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::set_Position(System.Int64)
extern "C" void PartialInputStream_set_Position_m3463 (PartialInputStream_t617 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Length()
extern "C" int64_t PartialInputStream_get_Length_m3464 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanWrite()
extern "C" bool PartialInputStream_get_CanWrite_m3465 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanSeek()
extern "C" bool PartialInputStream_get_CanSeek_m3466 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanRead()
extern "C" bool PartialInputStream_get_CanRead_m3467 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanTimeout()
extern "C" bool PartialInputStream_get_CanTimeout_m3468 (PartialInputStream_t617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
