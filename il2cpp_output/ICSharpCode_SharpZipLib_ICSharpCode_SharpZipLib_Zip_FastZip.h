#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct ZipOutputStream_t579;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Core.NameFilter
struct NameFilter_t529;
// ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate
struct ConfirmOverwriteDelegate_t577;
// ICSharpCode.SharpZipLib.Zip.FastZipEvents
struct FastZipEvents_t575;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t581;
// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t582;

#include "mscorlib_System_Object.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_FastZip_.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"

// ICSharpCode.SharpZipLib.Zip.FastZip
struct  FastZip_t578  : public Object_t
{
	// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::continueRunning_
	bool ___continueRunning__0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.FastZip::buffer_
	ByteU5BU5D_t129* ___buffer__1;
	// ICSharpCode.SharpZipLib.Zip.ZipOutputStream ICSharpCode.SharpZipLib.Zip.FastZip::outputStream_
	ZipOutputStream_t579 * ___outputStream__2;
	// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.FastZip::zipFile_
	ZipFile_t580 * ___zipFile__3;
	// System.String ICSharpCode.SharpZipLib.Zip.FastZip::sourceDirectory_
	String_t* ___sourceDirectory__4;
	// ICSharpCode.SharpZipLib.Core.NameFilter ICSharpCode.SharpZipLib.Zip.FastZip::fileFilter_
	NameFilter_t529 * ___fileFilter__5;
	// ICSharpCode.SharpZipLib.Core.NameFilter ICSharpCode.SharpZipLib.Zip.FastZip::directoryFilter_
	NameFilter_t529 * ___directoryFilter__6;
	// ICSharpCode.SharpZipLib.Zip.FastZip/Overwrite ICSharpCode.SharpZipLib.Zip.FastZip::overwrite_
	int32_t ___overwrite__7;
	// ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate ICSharpCode.SharpZipLib.Zip.FastZip::confirmDelegate_
	ConfirmOverwriteDelegate_t577 * ___confirmDelegate__8;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::restoreDateTimeOnExtract_
	bool ___restoreDateTimeOnExtract__9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::restoreAttributesOnExtract_
	bool ___restoreAttributesOnExtract__10;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip::createEmptyDirectories_
	bool ___createEmptyDirectories__11;
	// ICSharpCode.SharpZipLib.Zip.FastZipEvents ICSharpCode.SharpZipLib.Zip.FastZip::events_
	FastZipEvents_t575 * ___events__12;
	// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.FastZip::entryFactory_
	Object_t * ___entryFactory__13;
	// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.FastZip::extractNameTransform_
	Object_t * ___extractNameTransform__14;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.FastZip::useZip64_
	int32_t ___useZip64__15;
	// System.String ICSharpCode.SharpZipLib.Zip.FastZip::password_
	String_t* ___password__16;
};
