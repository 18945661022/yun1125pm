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

// ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage
struct MemoryArchiveStorage_t625;
// System.IO.MemoryStream
struct MemoryStream_t600;
// System.IO.Stream
struct Stream_t506;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_FileUpda.h"

// System.Void ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::.ctor()
extern "C" void MemoryArchiveStorage__ctor_m3582 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.FileUpdateMode)
extern "C" void MemoryArchiveStorage__ctor_m3583 (MemoryArchiveStorage_t625 * __this, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::get_FinalStream()
extern "C" MemoryStream_t600 * MemoryArchiveStorage_get_FinalStream_m3584 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::GetTemporaryOutput()
extern "C" Stream_t506 * MemoryArchiveStorage_GetTemporaryOutput_m3585 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::ConvertTemporaryToFinal()
extern "C" Stream_t506 * MemoryArchiveStorage_ConvertTemporaryToFinal_m3586 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::MakeTemporaryCopy(System.IO.Stream)
extern "C" Stream_t506 * MemoryArchiveStorage_MakeTemporaryCopy_m3587 (MemoryArchiveStorage_t625 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::OpenForDirectUpdate(System.IO.Stream)
extern "C" Stream_t506 * MemoryArchiveStorage_OpenForDirectUpdate_m3588 (MemoryArchiveStorage_t625 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::Dispose()
extern "C" void MemoryArchiveStorage_Dispose_m3589 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
