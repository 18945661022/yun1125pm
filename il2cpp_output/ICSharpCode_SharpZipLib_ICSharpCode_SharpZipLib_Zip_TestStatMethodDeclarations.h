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

// ICSharpCode.SharpZipLib.Zip.TestStatus
struct TestStatus_t604;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestOper.h"

// System.Void ICSharpCode.SharpZipLib.Zip.TestStatus::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile)
extern "C" void TestStatus__ctor_m3390 (TestStatus_t604 * __this, ZipFile_t580 * ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.TestOperation ICSharpCode.SharpZipLib.Zip.TestStatus::get_Operation()
extern "C" int32_t TestStatus_get_Operation_m3391 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.TestStatus::get_File()
extern "C" ZipFile_t580 * TestStatus_get_File_m3392 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.TestStatus::get_Entry()
extern "C" ZipEntry_t591 * TestStatus_get_Entry_m3393 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.TestStatus::get_ErrorCount()
extern "C" int32_t TestStatus_get_ErrorCount_m3394 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.TestStatus::get_BytesTested()
extern "C" int64_t TestStatus_get_BytesTested_m3395 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.TestStatus::get_EntryValid()
extern "C" bool TestStatus_get_EntryValid_m3396 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.TestStatus::AddError()
extern "C" void TestStatus_AddError_m3397 (TestStatus_t604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.TestStatus::SetOperation(ICSharpCode.SharpZipLib.Zip.TestOperation)
extern "C" void TestStatus_SetOperation_m3398 (TestStatus_t604 * __this, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.TestStatus::SetEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void TestStatus_SetEntry_m3399 (TestStatus_t604 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.TestStatus::SetBytesTested(System.Int64)
extern "C" void TestStatus_SetBytesTested_m3400 (TestStatus_t604 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
