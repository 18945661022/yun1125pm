#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;

#include "mscorlib_System_Object.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestOper.h"

// ICSharpCode.SharpZipLib.Zip.TestStatus
struct  TestStatus_t604  : public Object_t
{
	// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.TestStatus::file_
	ZipFile_t580 * ___file__0;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.TestStatus::entry_
	ZipEntry_t591 * ___entry__1;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.TestStatus::entryValid_
	bool ___entryValid__2;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.TestStatus::errorCount_
	int32_t ___errorCount__3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.TestStatus::bytesTested_
	int64_t ___bytesTested__4;
	// ICSharpCode.SharpZipLib.Zip.TestOperation ICSharpCode.SharpZipLib.Zip.TestStatus::operation_
	int32_t ___operation__5;
};
