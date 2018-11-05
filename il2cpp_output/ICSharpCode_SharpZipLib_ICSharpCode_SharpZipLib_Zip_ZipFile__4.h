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
// System.Byte[]
struct ByteU5BU5D_t129;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString
struct  ZipString_t613  : public Object_t
{
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::comment_
	String_t* ___comment__0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::rawComment_
	ByteU5BU5D_t129* ___rawComment__1;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::isSourceString_
	bool ___isSourceString__2;
};
