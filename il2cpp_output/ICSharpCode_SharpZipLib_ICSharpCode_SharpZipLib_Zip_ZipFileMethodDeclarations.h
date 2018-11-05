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

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.IO.FileStream
struct FileStream_t649;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler
struct ZipTestResultHandler_t605;
// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t582;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t581;
// ICSharpCode.SharpZipLib.Zip.IArchiveStorage
struct IArchiveStorage_t619;
// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
struct IDynamicDataSource_t620;
// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate
struct ZipUpdate_t611;
// ICSharpCode.SharpZipLib.Zip.IStaticDataSource
struct IStaticDataSource_t612;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t650;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestStra.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__0.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_15.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::OnKeysRequired(System.String)
extern "C" void ZipFile_OnKeysRequired_m3469 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::get_Key()
extern "C" ByteU5BU5D_t129* ZipFile_get_Key_m3470 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_Key(System.Byte[])
extern "C" void ZipFile_set_Key_m3471 (ZipFile_t580 * __this, ByteU5BU5D_t129* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_Password(System.String)
extern "C" void ZipFile_set_Password_m3472 (ZipFile_t580 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_HaveKeys()
extern "C" bool ZipFile_get_HaveKeys_m3473 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.String)
extern "C" void ZipFile__ctor_m3474 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.FileStream)
extern "C" void ZipFile__ctor_m3475 (ZipFile_t580 * __this, FileStream_t649 * ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.Stream)
extern "C" void ZipFile__ctor_m3476 (ZipFile_t580 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor()
extern "C" void ZipFile__ctor_m3477 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Finalize()
extern "C" void ZipFile_Finalize_m3478 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Close()
extern "C" void ZipFile_Close_m3479 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile::Create(System.String)
extern "C" ZipFile_t580 * ZipFile_Create_m3480 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile::Create(System.IO.Stream)
extern "C" ZipFile_t580 * ZipFile_Create_m3481 (Object_t * __this /* static, unused */, Stream_t506 * ___outStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsStreamOwner()
extern "C" bool ZipFile_get_IsStreamOwner_m3482 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_IsStreamOwner(System.Boolean)
extern "C" void ZipFile_set_IsStreamOwner_m3483 (ZipFile_t580 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsEmbeddedArchive()
extern "C" bool ZipFile_get_IsEmbeddedArchive_m3484 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsNewArchive()
extern "C" bool ZipFile_get_IsNewArchive_m3485 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::get_ZipFileComment()
extern "C" String_t* ZipFile_get_ZipFileComment_m3486 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::get_Name()
extern "C" String_t* ZipFile_get_Name_m3487 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::get_Size()
extern "C" int32_t ZipFile_get_Size_m3488 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::get_Count()
extern "C" int64_t ZipFile_get_Count_m3489 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile::get_EntryByIndex(System.Int32)
extern "C" ZipEntry_t591 * ZipFile_get_EntryByIndex_m3490 (ZipFile_t580 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator()
extern "C" Object_t * ZipFile_GetEnumerator_m3491 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindEntry(System.String,System.Boolean)
extern "C" int32_t ZipFile_FindEntry_m3492 (ZipFile_t580 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile::GetEntry(System.String)
extern "C" ZipEntry_t591 * ZipFile_GetEntry_m3493 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" Stream_t506 * ZipFile_GetInputStream_m3494 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(System.Int64)
extern "C" Stream_t506 * ZipFile_GetInputStream_m3495 (ZipFile_t580 * __this, int64_t ___entryIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::TestArchive(System.Boolean)
extern "C" bool ZipFile_TestArchive_m3496 (ZipFile_t580 * __this, bool ___testData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::TestArchive(System.Boolean,ICSharpCode.SharpZipLib.Zip.TestStrategy,ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler)
extern "C" bool ZipFile_TestArchive_m3497 (ZipFile_t580 * __this, bool ___testData, int32_t ___strategy, ZipTestResultHandler_t605 * ___resultHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::TestLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest)
extern "C" int64_t ZipFile_TestLocalHeader_m3498 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, int32_t ___tests, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.ZipFile::get_NameTransform()
extern "C" Object_t * ZipFile_get_NameTransform_m3499 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_NameTransform(ICSharpCode.SharpZipLib.Core.INameTransform)
extern "C" void ZipFile_set_NameTransform_m3500 (ZipFile_t580 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.ZipFile::get_EntryFactory()
extern "C" Object_t * ZipFile_get_EntryFactory_m3501 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_EntryFactory(ICSharpCode.SharpZipLib.Zip.IEntryFactory)
extern "C" void ZipFile_set_EntryFactory_m3502 (ZipFile_t580 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::get_BufferSize()
extern "C" int32_t ZipFile_get_BufferSize_m3503 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_BufferSize(System.Int32)
extern "C" void ZipFile_set_BufferSize_m3504 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsUpdating()
extern "C" bool ZipFile_get_IsUpdating_m3505 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipFile::get_UseZip64()
extern "C" int32_t ZipFile_get_UseZip64_m3506 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_UseZip64(ICSharpCode.SharpZipLib.Zip.UseZip64)
extern "C" void ZipFile_set_UseZip64_m3507 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::BeginUpdate(ICSharpCode.SharpZipLib.Zip.IArchiveStorage,ICSharpCode.SharpZipLib.Zip.IDynamicDataSource)
extern "C" void ZipFile_BeginUpdate_m3508 (ZipFile_t580 * __this, Object_t * ___archiveStorage, Object_t * ___dataSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::BeginUpdate(ICSharpCode.SharpZipLib.Zip.IArchiveStorage)
extern "C" void ZipFile_BeginUpdate_m3509 (ZipFile_t580 * __this, Object_t * ___archiveStorage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::BeginUpdate()
extern "C" void ZipFile_BeginUpdate_m3510 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CommitUpdate()
extern "C" void ZipFile_CommitUpdate_m3511 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AbortUpdate()
extern "C" void ZipFile_AbortUpdate_m3512 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::SetComment(System.String)
extern "C" void ZipFile_SetComment_m3513 (ZipFile_t580 * __this, String_t* ___comment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AddUpdate(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" void ZipFile_AddUpdate_m3514 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod,System.Boolean)
extern "C" void ZipFile_Add_m3515 (ZipFile_t580 * __this, String_t* ___fileName, int32_t ___compressionMethod, bool ___useUnicodeText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipFile_Add_m3516 (ZipFile_t580 * __this, String_t* ___fileName, int32_t ___compressionMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String)
extern "C" void ZipFile_Add_m3517 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String,System.String)
extern "C" void ZipFile_Add_m3518 (ZipFile_t580 * __this, String_t* ___fileName, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String)
extern "C" void ZipFile_Add_m3519 (ZipFile_t580 * __this, Object_t * ___dataSource, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipFile_Add_m3520 (ZipFile_t580 * __this, Object_t * ___dataSource, String_t* ___entryName, int32_t ___compressionMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod,System.Boolean)
extern "C" void ZipFile_Add_m3521 (ZipFile_t580 * __this, Object_t * ___dataSource, String_t* ___entryName, int32_t ___compressionMethod, bool ___useUnicodeText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipFile_Add_m3522 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AddDirectory(System.String)
extern "C" void ZipFile_AddDirectory_m3523 (ZipFile_t580 * __this, String_t* ___directoryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::Delete(System.String)
extern "C" bool ZipFile_Delete_m3524 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Delete(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipFile_Delete_m3525 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEShort(System.Int32)
extern "C" void ZipFile_WriteLEShort_m3526 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEUshort(System.UInt16)
extern "C" void ZipFile_WriteLEUshort_m3527 (ZipFile_t580 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEInt(System.Int32)
extern "C" void ZipFile_WriteLEInt_m3528 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEUint(System.UInt32)
extern "C" void ZipFile_WriteLEUint_m3529 (ZipFile_t580 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLeLong(System.Int64)
extern "C" void ZipFile_WriteLeLong_m3530 (ZipFile_t580 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEUlong(System.UInt64)
extern "C" void ZipFile_WriteLEUlong_m3531 (ZipFile_t580 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLocalEntryHeader(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" void ZipFile_WriteLocalEntryHeader_m3532 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::WriteCentralDirectoryHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int32_t ZipFile_WriteCentralDirectoryHeader_m3533 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::PostUpdateCleanup()
extern "C" void ZipFile_PostUpdateCleanup_m3534 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::GetTransformedFileName(System.String)
extern "C" String_t* ZipFile_GetTransformedFileName_m3535 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::GetTransformedDirectoryName(System.String)
extern "C" String_t* ZipFile_GetTransformedDirectoryName_m3536 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::GetBuffer()
extern "C" ByteU5BU5D_t129* ZipFile_GetBuffer_m3537 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyDescriptorBytes(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.IO.Stream)
extern "C" void ZipFile_CopyDescriptorBytes_m3538 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___dest, Stream_t506 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyBytes(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.IO.Stream,System.Int64,System.Boolean)
extern "C" void ZipFile_CopyBytes_m3539 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___destination, Stream_t506 * ___source, int64_t ___bytesToCopy, bool ___updateCrc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::GetDescriptorSize(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" int32_t ZipFile_GetDescriptorSize_m3540 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyDescriptorBytesDirect(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.Int64&,System.Int64)
extern "C" void ZipFile_CopyDescriptorBytesDirect_m3541 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___stream, int64_t* ___destinationPosition, int64_t ___sourcePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyEntryDataDirect(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.Boolean,System.Int64&,System.Int64&)
extern "C" void ZipFile_CopyEntryDataDirect_m3542 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___stream, bool ___updateCrc, int64_t* ___destinationPosition, int64_t* ___sourcePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindExistingUpdate(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int32_t ZipFile_FindExistingUpdate_m3543 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindExistingUpdate(System.String)
extern "C" int32_t ZipFile_FindExistingUpdate_m3544 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetOutputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" Stream_t506 * ZipFile_GetOutputStream_m3545 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AddEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" void ZipFile_AddEntry_m3546 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ModifyEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" void ZipFile_ModifyEntry_m3547 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyEntryDirect(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.Int64&)
extern "C" void ZipFile_CopyEntryDirect_m3548 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, int64_t* ___destinationPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" void ZipFile_CopyEntry_m3549 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Reopen(System.IO.Stream)
extern "C" void ZipFile_Reopen_m3550 (ZipFile_t580 * __this, Stream_t506 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Reopen()
extern "C" void ZipFile_Reopen_m3551 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::UpdateCommentOnly()
extern "C" void ZipFile_UpdateCommentOnly_m3552 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::RunUpdates()
extern "C" void ZipFile_RunUpdates_m3553 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckUpdating()
extern "C" void ZipFile_CheckUpdating_m3554 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::System.IDisposable.Dispose()
extern "C" void ZipFile_System_IDisposable_Dispose_m3555 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::DisposeInternal(System.Boolean)
extern "C" void ZipFile_DisposeInternal_m3556 (ZipFile_t580 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean)
extern "C" void ZipFile_Dispose_m3557 (ZipFile_t580 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUshort()
extern "C" uint16_t ZipFile_ReadLEUshort_m3558 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUint()
extern "C" uint32_t ZipFile_ReadLEUint_m3559 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUlong()
extern "C" uint64_t ZipFile_ReadLEUlong_m3560 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C" int64_t ZipFile_LocateBlockWithSignature_m3561 (ZipFile_t580 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ReadEntries()
extern "C" void ZipFile_ReadEntries_m3562 (ZipFile_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int64_t ZipFile_LocateEntry_m3563 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitDecryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" Stream_t506 * ZipFile_CreateAndInitDecryptionStream_m3564 (ZipFile_t580 * __this, Stream_t506 * ___baseStream, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitEncryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" Stream_t506 * ZipFile_CreateAndInitEncryptionStream_m3565 (ZipFile_t580 * __this, Stream_t506 * ___baseStream, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckClassicPassword(System.Security.Cryptography.CryptoStream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipFile_CheckClassicPassword_m3566 (Object_t * __this /* static, unused */, CryptoStream_t650 * ___classicCryptoStream, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteEncryptionHeader(System.IO.Stream,System.Int64)
extern "C" void ZipFile_WriteEncryptionHeader_m3567 (Object_t * __this /* static, unused */, Stream_t506 * ___stream, int64_t ___crcValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
