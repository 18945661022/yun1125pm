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

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate
struct ZipUpdate_t611;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// ICSharpCode.SharpZipLib.Zip.IStaticDataSource
struct IStaticDataSource_t612;
// System.IO.Stream
struct Stream_t506;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_15.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__1.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(System.String,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipUpdate__ctor_m3411 (ZipUpdate_t611 * __this, String_t* ___fileName, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(System.String,System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipUpdate__ctor_m3412 (ZipUpdate_t611 * __this, String_t* ___fileName, String_t* ___entryName, int32_t ___compressionMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(System.String,System.String)
extern "C" void ZipUpdate__ctor_m3413 (ZipUpdate_t611 * __this, String_t* ___fileName, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" void ZipUpdate__ctor_m3414 (ZipUpdate_t611 * __this, Object_t * ___dataSource, String_t* ___entryName, int32_t ___compressionMethod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipUpdate__ctor_m3415 (ZipUpdate_t611 * __this, Object_t * ___dataSource, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipUpdate__ctor_m3416 (ZipUpdate_t611 * __this, ZipEntry_t591 * ___original, ZipEntry_t591 * ___updated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile/UpdateCommand,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipUpdate__ctor_m3417 (ZipUpdate_t611 * __this, int32_t ___command, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipUpdate__ctor_m3418 (ZipUpdate_t611 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::get_Entry()
extern "C" ZipEntry_t591 * ZipUpdate_get_Entry_m3419 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::get_OutEntry()
extern "C" ZipEntry_t591 * ZipUpdate_get_OutEntry_m3420 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipFile/UpdateCommand ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::get_Command()
extern "C" int32_t ZipUpdate_get_Command_m3421 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::get_Filename()
extern "C" String_t* ZipUpdate_get_Filename_m3422 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::get_SizePatchOffset()
extern "C" int64_t ZipUpdate_get_SizePatchOffset_m3423 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::set_SizePatchOffset(System.Int64)
extern "C" void ZipUpdate_set_SizePatchOffset_m3424 (ZipUpdate_t611 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::get_CrcPatchOffset()
extern "C" int64_t ZipUpdate_get_CrcPatchOffset_m3425 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::set_CrcPatchOffset(System.Int64)
extern "C" void ZipUpdate_set_CrcPatchOffset_m3426 (ZipUpdate_t611 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::GetSource()
extern "C" Stream_t506 * ZipUpdate_GetSource_m3427 (ZipUpdate_t611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
