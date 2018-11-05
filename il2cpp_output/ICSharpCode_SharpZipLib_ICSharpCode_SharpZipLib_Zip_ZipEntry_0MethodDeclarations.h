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

// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_15.h"
#include "mscorlib_System_DateTime.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String)
extern "C" void ZipEntry__ctor_m3245 (ZipEntry_t591 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String,System.Int32)
extern "C" void ZipEntry__ctor_m3246 (ZipEntry_t591 * __this, String_t* ___name, int32_t ___versionRequiredToExtract, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String,System.Int32,System.Int32,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipEntry__ctor_m3247 (ZipEntry_t591 * __this, String_t* ___name, int32_t ___versionRequiredToExtract, int32_t ___madeByInfo, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipEntry__ctor_m3248 (ZipEntry_t591 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HasCrc()
extern "C" bool ZipEntry_get_HasCrc_m3249 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsCrypted()
extern "C" bool ZipEntry_get_IsCrypted_m3250 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_IsCrypted(System.Boolean)
extern "C" void ZipEntry_set_IsCrypted_m3251 (ZipEntry_t591 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsUnicodeText()
extern "C" bool ZipEntry_get_IsUnicodeText_m3252 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_IsUnicodeText(System.Boolean)
extern "C" void ZipEntry_set_IsUnicodeText_m3253 (ZipEntry_t591 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CryptoCheckValue()
extern "C" uint8_t ZipEntry_get_CryptoCheckValue_m3254 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CryptoCheckValue(System.Byte)
extern "C" void ZipEntry_set_CryptoCheckValue_m3255 (ZipEntry_t591 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Flags()
extern "C" int32_t ZipEntry_get_Flags_m3256 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Flags(System.Int32)
extern "C" void ZipEntry_set_Flags_m3257 (ZipEntry_t591 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ZipFileIndex()
extern "C" int64_t ZipEntry_get_ZipFileIndex_m3258 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ZipFileIndex(System.Int64)
extern "C" void ZipEntry_set_ZipFileIndex_m3259 (ZipEntry_t591 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Offset()
extern "C" int64_t ZipEntry_get_Offset_m3260 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Offset(System.Int64)
extern "C" void ZipEntry_set_Offset_m3261 (ZipEntry_t591 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExternalFileAttributes()
extern "C" int32_t ZipEntry_get_ExternalFileAttributes_m3262 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExternalFileAttributes(System.Int32)
extern "C" void ZipEntry_set_ExternalFileAttributes_m3263 (ZipEntry_t591 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_VersionMadeBy()
extern "C" int32_t ZipEntry_get_VersionMadeBy_m3264 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsDOSEntry()
extern "C" bool ZipEntry_get_IsDOSEntry_m3265 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::HasDosAttributes(System.Int32)
extern "C" bool ZipEntry_HasDosAttributes_m3266 (ZipEntry_t591 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HostSystem()
extern "C" int32_t ZipEntry_get_HostSystem_m3267 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_HostSystem(System.Int32)
extern "C" void ZipEntry_set_HostSystem_m3268 (ZipEntry_t591 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Version()
extern "C" int32_t ZipEntry_get_Version_m3269 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CanDecompress()
extern "C" bool ZipEntry_get_CanDecompress_m3270 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::ForceZip64()
extern "C" void ZipEntry_ForceZip64_m3271 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsZip64Forced()
extern "C" bool ZipEntry_IsZip64Forced_m3272 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_LocalHeaderRequiresZip64()
extern "C" bool ZipEntry_get_LocalHeaderRequiresZip64_m3273 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CentralHeaderRequiresZip64()
extern "C" bool ZipEntry_get_CentralHeaderRequiresZip64_m3274 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_DosTime()
extern "C" int64_t ZipEntry_get_DosTime_m3275 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DosTime(System.Int64)
extern "C" void ZipEntry_set_DosTime_m3276 (ZipEntry_t591 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Zip.ZipEntry::get_DateTime()
extern "C" DateTime_t18  ZipEntry_get_DateTime_m3277 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DateTime(System.DateTime)
extern "C" void ZipEntry_set_DateTime_m3278 (ZipEntry_t591 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Name()
extern "C" String_t* ZipEntry_get_Name_m3279 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Size()
extern "C" int64_t ZipEntry_get_Size_m3280 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Size(System.Int64)
extern "C" void ZipEntry_set_Size_m3281 (ZipEntry_t591 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressedSize()
extern "C" int64_t ZipEntry_get_CompressedSize_m3282 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressedSize(System.Int64)
extern "C" void ZipEntry_set_CompressedSize_m3283 (ZipEntry_t591 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Crc()
extern "C" int64_t ZipEntry_get_Crc_m3284 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Crc(System.Int64)
extern "C" void ZipEntry_set_Crc_m3285 (ZipEntry_t591 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressionMethod()
extern "C" int32_t ZipEntry_get_CompressionMethod_m3286 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressionMethod(ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipEntry_set_CompressionMethod_m3287 (ZipEntry_t591 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExtraData()
extern "C" ByteU5BU5D_t129* ZipEntry_get_ExtraData_m3288 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExtraData(System.Byte[])
extern "C" void ZipEntry_set_ExtraData_m3289 (ZipEntry_t591 * __this, ByteU5BU5D_t129* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::ProcessExtraData(System.Boolean)
extern "C" void ZipEntry_ProcessExtraData_m3290 (ZipEntry_t591 * __this, bool ___localHeader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Comment()
extern "C" String_t* ZipEntry_get_Comment_m3291 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Comment(System.String)
extern "C" void ZipEntry_set_Comment_m3292 (ZipEntry_t591 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsDirectory()
extern "C" bool ZipEntry_get_IsDirectory_m3293 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsFile()
extern "C" bool ZipEntry_get_IsFile_m3294 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported()
extern "C" bool ZipEntry_IsCompressionMethodSupported_m3295 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Zip.ZipEntry::Clone()
extern "C" Object_t * ZipEntry_Clone_m3296 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::ToString()
extern "C" String_t* ZipEntry_ToString_m3297 (ZipEntry_t591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported(ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" bool ZipEntry_IsCompressionMethodSupported_m3298 (Object_t * __this /* static, unused */, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::CleanName(System.String)
extern "C" String_t* ZipEntry_CleanName_m3299 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
