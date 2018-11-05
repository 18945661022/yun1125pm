#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t600;

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_BaseArch.h"

// ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage
struct  MemoryArchiveStorage_t625  : public BaseArchiveStorage_t623
{
	// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::temporaryStream_
	MemoryStream_t600 * ___temporaryStream__1;
	// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::finalStream_
	MemoryStream_t600 * ___finalStream__2;
};
