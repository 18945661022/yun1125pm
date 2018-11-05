#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Tar.TarHeader
struct TarHeader_t561;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Tar.TarEntry
struct  TarEntry_t557  : public Object_t
{
	// System.String ICSharpCode.SharpZipLib.Tar.TarEntry::file
	String_t* ___file_0;
	// ICSharpCode.SharpZipLib.Tar.TarHeader ICSharpCode.SharpZipLib.Tar.TarEntry::header
	TarHeader_t561 * ___header_1;
};
