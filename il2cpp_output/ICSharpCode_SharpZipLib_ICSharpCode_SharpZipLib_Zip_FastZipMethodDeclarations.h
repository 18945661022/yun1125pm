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

// ICSharpCode.SharpZipLib.Zip.FastZip
struct FastZip_t578;
// ICSharpCode.SharpZipLib.Zip.FastZipEvents
struct FastZipEvents_t575;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t582;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t581;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate
struct ConfirmOverwriteDelegate_t577;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Core.DirectoryEventArgs
struct DirectoryEventArgs_t519;
// ICSharpCode.SharpZipLib.Core.ScanEventArgs
struct ScanEventArgs_t516;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.IO.FileInfo
struct FileInfo_t647;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_FastZip_.h"

// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::.ctor()
extern "C" void FastZip__ctor_m3194 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::.ctor(ICSharpCode.SharpZipLib.Zip.FastZipEvents)
extern "C" void FastZip__ctor_m3195 (FastZip_t578 * __this, FastZipEvents_t575 * ___events, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::get_CreateEmptyDirectories()
extern "C" bool FastZip_get_CreateEmptyDirectories_m3196 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_CreateEmptyDirectories(System.Boolean)
extern "C" void FastZip_set_CreateEmptyDirectories_m3197 (FastZip_t578 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.FastZip::get_Password()
extern "C" String_t* FastZip_get_Password_m3198 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_Password(System.String)
extern "C" void FastZip_set_Password_m3199 (FastZip_t578 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.FastZip::get_NameTransform()
extern "C" Object_t * FastZip_get_NameTransform_m3200 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_NameTransform(ICSharpCode.SharpZipLib.Core.INameTransform)
extern "C" void FastZip_set_NameTransform_m3201 (FastZip_t578 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.FastZip::get_EntryFactory()
extern "C" Object_t * FastZip_get_EntryFactory_m3202 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_EntryFactory(ICSharpCode.SharpZipLib.Zip.IEntryFactory)
extern "C" void FastZip_set_EntryFactory_m3203 (FastZip_t578 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.FastZip::get_UseZip64()
extern "C" int32_t FastZip_get_UseZip64_m3204 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_UseZip64(ICSharpCode.SharpZipLib.Zip.UseZip64)
extern "C" void FastZip_set_UseZip64_m3205 (FastZip_t578 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::get_RestoreDateTimeOnExtract()
extern "C" bool FastZip_get_RestoreDateTimeOnExtract_m3206 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_RestoreDateTimeOnExtract(System.Boolean)
extern "C" void FastZip_set_RestoreDateTimeOnExtract_m3207 (FastZip_t578 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::get_RestoreAttributesOnExtract()
extern "C" bool FastZip_get_RestoreAttributesOnExtract_m3208 (FastZip_t578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::set_RestoreAttributesOnExtract(System.Boolean)
extern "C" void FastZip_set_RestoreAttributesOnExtract_m3209 (FastZip_t578 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::CreateZip(System.String,System.String,System.Boolean,System.String,System.String)
extern "C" void FastZip_CreateZip_m3210 (FastZip_t578 * __this, String_t* ___zipFileName, String_t* ___sourceDirectory, bool ___recurse, String_t* ___fileFilter, String_t* ___directoryFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::CreateZip(System.String,System.String,System.Boolean,System.String)
extern "C" void FastZip_CreateZip_m3211 (FastZip_t578 * __this, String_t* ___zipFileName, String_t* ___sourceDirectory, bool ___recurse, String_t* ___fileFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::CreateZip(System.IO.Stream,System.String,System.Boolean,System.String,System.String)
extern "C" void FastZip_CreateZip_m3212 (FastZip_t578 * __this, Stream_t506 * ___outputStream, String_t* ___sourceDirectory, bool ___recurse, String_t* ___fileFilter, String_t* ___directoryFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::ExtractZip(System.String,System.String,System.String)
extern "C" void FastZip_ExtractZip_m3213 (FastZip_t578 * __this, String_t* ___zipFileName, String_t* ___targetDirectory, String_t* ___fileFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::ExtractZip(System.String,System.String,ICSharpCode.SharpZipLib.Zip.FastZip/Overwrite,ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate,System.String,System.String,System.Boolean)
extern "C" void FastZip_ExtractZip_m3214 (FastZip_t578 * __this, String_t* ___zipFileName, String_t* ___targetDirectory, int32_t ___overwrite, ConfirmOverwriteDelegate_t577 * ___confirmDelegate, String_t* ___fileFilter, String_t* ___directoryFilter, bool ___restoreDateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::ProcessDirectory(System.Object,ICSharpCode.SharpZipLib.Core.DirectoryEventArgs)
extern "C" void FastZip_ProcessDirectory_m3215 (FastZip_t578 * __this, Object_t * ___sender, DirectoryEventArgs_t519 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::ProcessFile(System.Object,ICSharpCode.SharpZipLib.Core.ScanEventArgs)
extern "C" void FastZip_ProcessFile_m3216 (FastZip_t578 * __this, Object_t * ___sender, ScanEventArgs_t516 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::AddFileContents(System.String,System.IO.Stream)
extern "C" void FastZip_AddFileContents_m3217 (FastZip_t578 * __this, String_t* ___name, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::ExtractFileEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry,System.String)
extern "C" void FastZip_ExtractFileEntry_m3218 (FastZip_t578 * __this, ZipEntry_t591 * ___entry, String_t* ___targetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZip::ExtractEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void FastZip_ExtractEntry_m3219 (FastZip_t578 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.FastZip::MakeExternalAttributes(System.IO.FileInfo)
extern "C" int32_t FastZip_MakeExternalAttributes_m3220 (Object_t * __this /* static, unused */, FileInfo_t647 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::NameIsValid(System.String)
extern "C" bool FastZip_NameIsValid_m3221 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
