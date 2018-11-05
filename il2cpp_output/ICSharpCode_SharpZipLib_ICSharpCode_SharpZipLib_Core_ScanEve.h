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

#include "mscorlib_System_EventArgs.h"

// ICSharpCode.SharpZipLib.Core.ScanEventArgs
struct  ScanEventArgs_t516  : public EventArgs_t517
{
	// System.String ICSharpCode.SharpZipLib.Core.ScanEventArgs::name_
	String_t* ___name__1;
	// System.Boolean ICSharpCode.SharpZipLib.Core.ScanEventArgs::continueRunning_
	bool ___continueRunning__2;
};
