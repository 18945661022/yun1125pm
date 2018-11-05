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

// ICSharpCode.SharpZipLib.Core.ProgressEventArgs
struct  ProgressEventArgs_t518  : public EventArgs_t517
{
	// System.String ICSharpCode.SharpZipLib.Core.ProgressEventArgs::name_
	String_t* ___name__1;
	// System.Int64 ICSharpCode.SharpZipLib.Core.ProgressEventArgs::processed_
	int64_t ___processed__2;
	// System.Int64 ICSharpCode.SharpZipLib.Core.ProgressEventArgs::target_
	int64_t ___target__3;
	// System.Boolean ICSharpCode.SharpZipLib.Core.ProgressEventArgs::continueRunning_
	bool ___continueRunning__4;
};
