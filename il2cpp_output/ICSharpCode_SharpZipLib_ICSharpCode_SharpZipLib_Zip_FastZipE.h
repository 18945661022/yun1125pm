#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler
struct ProcessDirectoryHandler_t521;
// ICSharpCode.SharpZipLib.Core.ProcessFileHandler
struct ProcessFileHandler_t522;
// ICSharpCode.SharpZipLib.Core.ProgressHandler
struct ProgressHandler_t523;
// ICSharpCode.SharpZipLib.Core.CompletedFileHandler
struct CompletedFileHandler_t524;
// ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler
struct DirectoryFailureHandler_t525;
// ICSharpCode.SharpZipLib.Core.FileFailureHandler
struct FileFailureHandler_t526;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_TimeSpan.h"

// ICSharpCode.SharpZipLib.Zip.FastZipEvents
struct  FastZipEvents_t575  : public Object_t
{
	// ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler ICSharpCode.SharpZipLib.Zip.FastZipEvents::ProcessDirectory
	ProcessDirectoryHandler_t521 * ___ProcessDirectory_0;
	// ICSharpCode.SharpZipLib.Core.ProcessFileHandler ICSharpCode.SharpZipLib.Zip.FastZipEvents::ProcessFile
	ProcessFileHandler_t522 * ___ProcessFile_1;
	// ICSharpCode.SharpZipLib.Core.ProgressHandler ICSharpCode.SharpZipLib.Zip.FastZipEvents::Progress
	ProgressHandler_t523 * ___Progress_2;
	// ICSharpCode.SharpZipLib.Core.CompletedFileHandler ICSharpCode.SharpZipLib.Zip.FastZipEvents::CompletedFile
	CompletedFileHandler_t524 * ___CompletedFile_3;
	// ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler ICSharpCode.SharpZipLib.Zip.FastZipEvents::DirectoryFailure
	DirectoryFailureHandler_t525 * ___DirectoryFailure_4;
	// ICSharpCode.SharpZipLib.Core.FileFailureHandler ICSharpCode.SharpZipLib.Zip.FastZipEvents::FileFailure
	FileFailureHandler_t526 * ___FileFailure_5;
	// System.TimeSpan ICSharpCode.SharpZipLib.Zip.FastZipEvents::progressInterval_
	TimeSpan_t156  ___progressInterval__6;
};
