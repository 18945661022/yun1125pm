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

// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct ZipHelperStream_t628;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// ICSharpCode.SharpZipLib.Zip.EntryPatchData
struct EntryPatchData_t627;
// ICSharpCode.SharpZipLib.Zip.DescriptorData
struct DescriptorData_t626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.String)
extern "C" void ZipHelperStream__ctor_m3602 (ZipHelperStream_t628 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.IO.Stream)
extern "C" void ZipHelperStream__ctor_m3603 (ZipHelperStream_t628 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_IsStreamOwner()
extern "C" bool ZipHelperStream_get_IsStreamOwner_m3604 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_IsStreamOwner(System.Boolean)
extern "C" void ZipHelperStream_set_IsStreamOwner_m3605 (ZipHelperStream_t628 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanRead()
extern "C" bool ZipHelperStream_get_CanRead_m3606 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanSeek()
extern "C" bool ZipHelperStream_get_CanSeek_m3607 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanTimeout()
extern "C" bool ZipHelperStream_get_CanTimeout_m3608 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Length()
extern "C" int64_t ZipHelperStream_get_Length_m3609 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Position()
extern "C" int64_t ZipHelperStream_get_Position_m3610 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_Position(System.Int64)
extern "C" void ZipHelperStream_set_Position_m3611 (ZipHelperStream_t628 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanWrite()
extern "C" bool ZipHelperStream_get_CanWrite_m3612 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Flush()
extern "C" void ZipHelperStream_Flush_m3613 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipHelperStream_Seek_m3614 (ZipHelperStream_t628 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::SetLength(System.Int64)
extern "C" void ZipHelperStream_SetLength_m3615 (ZipHelperStream_t628 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipHelperStream_Read_m3616 (ZipHelperStream_t628 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipHelperStream_Write_m3617 (ZipHelperStream_t628 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Close()
extern "C" void ZipHelperStream_Close_m3618 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.EntryPatchData)
extern "C" void ZipHelperStream_WriteLocalHeader_m3619 (ZipHelperStream_t628 * __this, ZipEntry_t591 * ___entry, EntryPatchData_t627 * ___patchData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C" int64_t ZipHelperStream_LocateBlockWithSignature_m3620 (ZipHelperStream_t628 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int64)
extern "C" void ZipHelperStream_WriteZip64EndOfCentralDirectory_m3621 (ZipHelperStream_t628 * __this, int64_t ___noOfEntries, int64_t ___sizeEntries, int64_t ___centralDirOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteEndOfCentralDirectory(System.Int64,System.Int64,System.Int64,System.Byte[])
extern "C" void ZipHelperStream_WriteEndOfCentralDirectory_m3622 (ZipHelperStream_t628 * __this, int64_t ___noOfEntries, int64_t ___sizeEntries, int64_t ___startOfCentralDirectory, ByteU5BU5D_t129* ___comment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEShort()
extern "C" int32_t ZipHelperStream_ReadLEShort_m3623 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEInt()
extern "C" int32_t ZipHelperStream_ReadLEInt_m3624 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLELong()
extern "C" int64_t ZipHelperStream_ReadLELong_m3625 (ZipHelperStream_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEShort(System.Int32)
extern "C" void ZipHelperStream_WriteLEShort_m3626 (ZipHelperStream_t628 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEUshort(System.UInt16)
extern "C" void ZipHelperStream_WriteLEUshort_m3627 (ZipHelperStream_t628 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEInt(System.Int32)
extern "C" void ZipHelperStream_WriteLEInt_m3628 (ZipHelperStream_t628 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEUint(System.UInt32)
extern "C" void ZipHelperStream_WriteLEUint_m3629 (ZipHelperStream_t628 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLELong(System.Int64)
extern "C" void ZipHelperStream_WriteLELong_m3630 (ZipHelperStream_t628 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEUlong(System.UInt64)
extern "C" void ZipHelperStream_WriteLEUlong_m3631 (ZipHelperStream_t628 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteDataDescriptor(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int32_t ZipHelperStream_WriteDataDescriptor_m3632 (ZipHelperStream_t628 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadDataDescriptor(System.Boolean,ICSharpCode.SharpZipLib.Zip.DescriptorData)
extern "C" void ZipHelperStream_ReadDataDescriptor_m3633 (ZipHelperStream_t628 * __this, bool ___zip64, DescriptorData_t626 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
