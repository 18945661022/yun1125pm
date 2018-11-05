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

// ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage
struct DiskArchiveStorage_t624;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// System.IO.Stream
struct Stream_t506;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_FileUpda.h"

// System.Void ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.FileUpdateMode)
extern "C" void DiskArchiveStorage__ctor_m3574 (DiskArchiveStorage_t624 * __this, ZipFile_t580 * ___file, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile)
extern "C" void DiskArchiveStorage__ctor_m3575 (DiskArchiveStorage_t624 * __this, ZipFile_t580 * ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::GetTemporaryOutput()
extern "C" Stream_t506 * DiskArchiveStorage_GetTemporaryOutput_m3576 (DiskArchiveStorage_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::ConvertTemporaryToFinal()
extern "C" Stream_t506 * DiskArchiveStorage_ConvertTemporaryToFinal_m3577 (DiskArchiveStorage_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::MakeTemporaryCopy(System.IO.Stream)
extern "C" Stream_t506 * DiskArchiveStorage_MakeTemporaryCopy_m3578 (DiskArchiveStorage_t624 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::OpenForDirectUpdate(System.IO.Stream)
extern "C" Stream_t506 * DiskArchiveStorage_OpenForDirectUpdate_m3579 (DiskArchiveStorage_t624 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::Dispose()
extern "C" void DiskArchiveStorage_Dispose_m3580 (DiskArchiveStorage_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::GetTempFileName(System.String,System.Boolean)
extern "C" String_t* DiskArchiveStorage_GetTempFileName_m3581 (Object_t * __this /* static, unused */, String_t* ___original, bool ___makeTempFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
