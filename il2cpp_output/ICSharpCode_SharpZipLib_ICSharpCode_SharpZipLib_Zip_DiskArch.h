#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t506;
// System.String
struct String_t;

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_BaseArch.h"

// ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage
struct  DiskArchiveStorage_t624  : public BaseArchiveStorage_t623
{
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::temporaryStream_
	Stream_t506 * ___temporaryStream__1;
	// System.String ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::fileName_
	String_t* ___fileName__2;
	// System.String ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::temporaryName_
	String_t* ___temporaryName__3;
};
