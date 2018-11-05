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

// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct ZipExtraData_t599;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.ITaggedData
struct ITaggedData_t648;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::.ctor()
extern "C" void ZipExtraData__ctor_m3354 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::.ctor(System.Byte[])
extern "C" void ZipExtraData__ctor_m3355 (ZipExtraData_t599 * __this, ByteU5BU5D_t129* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipExtraData::GetEntryData()
extern "C" ByteU5BU5D_t129* ZipExtraData_GetEntryData_m3356 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Clear()
extern "C" void ZipExtraData_Clear_m3357 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_Length()
extern "C" int32_t ZipExtraData_get_Length_m3358 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipExtraData::GetStreamForTag(System.Int32)
extern "C" Stream_t506 * ZipExtraData_GetStreamForTag_m3359 (ZipExtraData_t599 * __this, int32_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ITaggedData ICSharpCode.SharpZipLib.Zip.ZipExtraData::GetData(System.Int16)
extern "C" Object_t * ZipExtraData_GetData_m3360 (ZipExtraData_t599 * __this, int16_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ITaggedData ICSharpCode.SharpZipLib.Zip.ZipExtraData::Create(System.Int16,System.Byte[],System.Int32,System.Int32)
extern "C" Object_t * ZipExtraData_Create_m3361 (Object_t * __this /* static, unused */, int16_t ___tag, ByteU5BU5D_t129* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_ValueLength()
extern "C" int32_t ZipExtraData_get_ValueLength_m3362 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_CurrentReadIndex()
extern "C" int32_t ZipExtraData_get_CurrentReadIndex_m3363 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_UnreadCount()
extern "C" int32_t ZipExtraData_get_UnreadCount_m3364 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Find(System.Int32)
extern "C" bool ZipExtraData_Find_m3365 (ZipExtraData_t599 * __this, int32_t ___headerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddEntry(ICSharpCode.SharpZipLib.Zip.ITaggedData)
extern "C" void ZipExtraData_AddEntry_m3366 (ZipExtraData_t599 * __this, Object_t * ___taggedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddEntry(System.Int32,System.Byte[])
extern "C" void ZipExtraData_AddEntry_m3367 (ZipExtraData_t599 * __this, int32_t ___headerID, ByteU5BU5D_t129* ___fieldData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::StartNewEntry()
extern "C" void ZipExtraData_StartNewEntry_m3368 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddNewEntry(System.Int32)
extern "C" void ZipExtraData_AddNewEntry_m3369 (ZipExtraData_t599 * __this, int32_t ___headerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddData(System.Byte)
extern "C" void ZipExtraData_AddData_m3370 (ZipExtraData_t599 * __this, uint8_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddData(System.Byte[])
extern "C" void ZipExtraData_AddData_m3371 (ZipExtraData_t599 * __this, ByteU5BU5D_t129* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddLeShort(System.Int32)
extern "C" void ZipExtraData_AddLeShort_m3372 (ZipExtraData_t599 * __this, int32_t ___toAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddLeInt(System.Int32)
extern "C" void ZipExtraData_AddLeInt_m3373 (ZipExtraData_t599 * __this, int32_t ___toAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddLeLong(System.Int64)
extern "C" void ZipExtraData_AddLeLong_m3374 (ZipExtraData_t599 * __this, int64_t ___toAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Delete(System.Int32)
extern "C" bool ZipExtraData_Delete_m3375 (ZipExtraData_t599 * __this, int32_t ___headerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadLong()
extern "C" int64_t ZipExtraData_ReadLong_m3376 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadInt()
extern "C" int32_t ZipExtraData_ReadInt_m3377 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShort()
extern "C" int32_t ZipExtraData_ReadShort_m3378 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadByte()
extern "C" int32_t ZipExtraData_ReadByte_m3379 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Skip(System.Int32)
extern "C" void ZipExtraData_Skip_m3380 (ZipExtraData_t599 * __this, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadCheck(System.Int32)
extern "C" void ZipExtraData_ReadCheck_m3381 (ZipExtraData_t599 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShortInternal()
extern "C" int32_t ZipExtraData_ReadShortInternal_m3382 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::SetShort(System.Int32&,System.Int32)
extern "C" void ZipExtraData_SetShort_m3383 (ZipExtraData_t599 * __this, int32_t* ___index, int32_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Dispose()
extern "C" void ZipExtraData_Dispose_m3384 (ZipExtraData_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
