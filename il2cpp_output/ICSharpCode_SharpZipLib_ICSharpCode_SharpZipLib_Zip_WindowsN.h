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
// System.Char[]
struct CharU5BU5D_t341;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.WindowsNameTransform
struct  WindowsNameTransform_t583  : public Object_t
{
	// System.String ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::baseDirectory_
	String_t* ___baseDirectory__1;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::trimIncomingPaths_
	bool ___trimIncomingPaths__2;
	// System.Char ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::replacementChar_
	uint16_t ___replacementChar__3;
};
struct WindowsNameTransform_t583_StaticFields{
	// System.Char[] ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::InvalidEntryChars
	CharU5BU5D_t341* ___InvalidEntryChars_4;
};
