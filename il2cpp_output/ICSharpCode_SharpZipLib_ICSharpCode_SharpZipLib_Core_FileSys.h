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
// ICSharpCode.SharpZipLib.Core.CompletedFileHandler
struct CompletedFileHandler_t524;
// ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler
struct DirectoryFailureHandler_t525;
// ICSharpCode.SharpZipLib.Core.FileFailureHandler
struct FileFailureHandler_t526;
// ICSharpCode.SharpZipLib.Core.IScanFilter
struct IScanFilter_t528;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Core.FileSystemScanner
struct  FileSystemScanner_t527  : public Object_t
{
	// ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler ICSharpCode.SharpZipLib.Core.FileSystemScanner::ProcessDirectory
	ProcessDirectoryHandler_t521 * ___ProcessDirectory_0;
	// ICSharpCode.SharpZipLib.Core.ProcessFileHandler ICSharpCode.SharpZipLib.Core.FileSystemScanner::ProcessFile
	ProcessFileHandler_t522 * ___ProcessFile_1;
	// ICSharpCode.SharpZipLib.Core.CompletedFileHandler ICSharpCode.SharpZipLib.Core.FileSystemScanner::CompletedFile
	CompletedFileHandler_t524 * ___CompletedFile_2;
	// ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler ICSharpCode.SharpZipLib.Core.FileSystemScanner::DirectoryFailure
	DirectoryFailureHandler_t525 * ___DirectoryFailure_3;
	// ICSharpCode.SharpZipLib.Core.FileFailureHandler ICSharpCode.SharpZipLib.Core.FileSystemScanner::FileFailure
	FileFailureHandler_t526 * ___FileFailure_4;
	// ICSharpCode.SharpZipLib.Core.IScanFilter ICSharpCode.SharpZipLib.Core.FileSystemScanner::fileFilter_
	Object_t * ___fileFilter__5;
	// ICSharpCode.SharpZipLib.Core.IScanFilter ICSharpCode.SharpZipLib.Core.FileSystemScanner::directoryFilter_
	Object_t * ___directoryFilter__6;
	// System.Boolean ICSharpCode.SharpZipLib.Core.FileSystemScanner::alive_
	bool ___alive__7;
};
