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

#include "mscorlib_System_EventArgs.h"

// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct  KeysRequiredEventArgs_t601  : public EventArgs_t517
{
	// System.String ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::fileName
	String_t* ___fileName_1;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::key
	ByteU5BU5D_t129* ___key_2;
};
