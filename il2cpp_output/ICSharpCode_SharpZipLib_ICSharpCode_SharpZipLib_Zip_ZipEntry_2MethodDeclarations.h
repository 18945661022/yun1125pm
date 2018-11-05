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

// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory
struct ZipEntryFactory_t593;
// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t582;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_1.h"
#include "mscorlib_System_DateTime.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::.ctor()
extern "C" void ZipEntryFactory__ctor_m3300 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntryFactory/TimeSetting)
extern "C" void ZipEntryFactory__ctor_m3301 (ZipEntryFactory_t593 * __this, int32_t ___timeSetting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::.ctor(System.DateTime)
extern "C" void ZipEntryFactory__ctor_m3302 (ZipEntryFactory_t593 * __this, DateTime_t18  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::get_NameTransform()
extern "C" Object_t * ZipEntryFactory_get_NameTransform_m3303 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::set_NameTransform(ICSharpCode.SharpZipLib.Core.INameTransform)
extern "C" void ZipEntryFactory_set_NameTransform_m3304 (ZipEntryFactory_t593 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory/TimeSetting ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::get_Setting()
extern "C" int32_t ZipEntryFactory_get_Setting_m3305 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::set_Setting(ICSharpCode.SharpZipLib.Zip.ZipEntryFactory/TimeSetting)
extern "C" void ZipEntryFactory_set_Setting_m3306 (ZipEntryFactory_t593 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::get_FixedDateTime()
extern "C" DateTime_t18  ZipEntryFactory_get_FixedDateTime_m3307 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::set_FixedDateTime(System.DateTime)
extern "C" void ZipEntryFactory_set_FixedDateTime_m3308 (ZipEntryFactory_t593 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::get_GetAttributes()
extern "C" int32_t ZipEntryFactory_get_GetAttributes_m3309 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::set_GetAttributes(System.Int32)
extern "C" void ZipEntryFactory_set_GetAttributes_m3310 (ZipEntryFactory_t593 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::get_SetAttributes()
extern "C" int32_t ZipEntryFactory_get_SetAttributes_m3311 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::set_SetAttributes(System.Int32)
extern "C" void ZipEntryFactory_set_SetAttributes_m3312 (ZipEntryFactory_t593 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::get_IsUnicodeText()
extern "C" bool ZipEntryFactory_get_IsUnicodeText_m3313 (ZipEntryFactory_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::set_IsUnicodeText(System.Boolean)
extern "C" void ZipEntryFactory_set_IsUnicodeText_m3314 (ZipEntryFactory_t593 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::MakeFileEntry(System.String)
extern "C" ZipEntry_t591 * ZipEntryFactory_MakeFileEntry_m3315 (ZipEntryFactory_t593 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::MakeFileEntry(System.String,System.Boolean)
extern "C" ZipEntry_t591 * ZipEntryFactory_MakeFileEntry_m3316 (ZipEntryFactory_t593 * __this, String_t* ___fileName, bool ___useFileSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::MakeDirectoryEntry(System.String)
extern "C" ZipEntry_t591 * ZipEntryFactory_MakeDirectoryEntry_m3317 (ZipEntryFactory_t593 * __this, String_t* ___directoryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::MakeDirectoryEntry(System.String,System.Boolean)
extern "C" ZipEntry_t591 * ZipEntryFactory_MakeDirectoryEntry_m3318 (ZipEntryFactory_t593 * __this, String_t* ___directoryName, bool ___useFileSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
