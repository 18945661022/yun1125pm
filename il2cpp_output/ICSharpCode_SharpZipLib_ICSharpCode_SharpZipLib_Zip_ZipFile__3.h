#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// ICSharpCode.SharpZipLib.Zip.IStaticDataSource
struct IStaticDataSource_t612;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__1.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate
struct  ZipUpdate_t611  : public Object_t
{
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::entry_
	ZipEntry_t591 * ___entry__0;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::outEntry_
	ZipEntry_t591 * ___outEntry__1;
	// ICSharpCode.SharpZipLib.Zip.ZipFile/UpdateCommand ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::command_
	int32_t ___command__2;
	// ICSharpCode.SharpZipLib.Zip.IStaticDataSource ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::dataSource_
	Object_t * ___dataSource__3;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::filename_
	String_t* ___filename__4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::sizePatchOffset_
	int64_t ___sizePatchOffset__5;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate::crcPatchOffset_
	int64_t ___crcPatchOffset__6;
};
