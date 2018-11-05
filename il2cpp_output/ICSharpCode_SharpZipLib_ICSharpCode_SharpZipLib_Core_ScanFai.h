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
// System.Exception
struct Exception_t159;

#include "mscorlib_System_EventArgs.h"

// ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs
struct  ScanFailureEventArgs_t520  : public EventArgs_t517
{
	// System.String ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::name_
	String_t* ___name__1;
	// System.Exception ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::exception_
	Exception_t159 * ___exception__2;
	// System.Boolean ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs::continueRunning_
	bool ___continueRunning__3;
};
