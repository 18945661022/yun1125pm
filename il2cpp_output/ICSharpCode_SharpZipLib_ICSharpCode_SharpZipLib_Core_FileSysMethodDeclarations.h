#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ICSharpCode.SharpZipLib.Core.FileSystemScanner
struct FileSystemScanner_t527;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Core.IScanFilter
struct IScanFilter_t528;
// System.Exception
struct Exception_t159;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::.ctor(System.String)
extern "C" void FileSystemScanner__ctor_m2665 (FileSystemScanner_t527 * __this, String_t* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::.ctor(System.String,System.String)
extern "C" void FileSystemScanner__ctor_m2666 (FileSystemScanner_t527 * __this, String_t* ___fileFilter, String_t* ___directoryFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::.ctor(ICSharpCode.SharpZipLib.Core.IScanFilter)
extern "C" void FileSystemScanner__ctor_m2667 (FileSystemScanner_t527 * __this, Object_t * ___fileFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::.ctor(ICSharpCode.SharpZipLib.Core.IScanFilter,ICSharpCode.SharpZipLib.Core.IScanFilter)
extern "C" void FileSystemScanner__ctor_m2668 (FileSystemScanner_t527 * __this, Object_t * ___fileFilter, Object_t * ___directoryFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.FileSystemScanner::OnDirectoryFailure(System.String,System.Exception)
extern "C" bool FileSystemScanner_OnDirectoryFailure_m2669 (FileSystemScanner_t527 * __this, String_t* ___directory, Exception_t159 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.FileSystemScanner::OnFileFailure(System.String,System.Exception)
extern "C" bool FileSystemScanner_OnFileFailure_m2670 (FileSystemScanner_t527 * __this, String_t* ___file, Exception_t159 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::OnProcessFile(System.String)
extern "C" void FileSystemScanner_OnProcessFile_m2671 (FileSystemScanner_t527 * __this, String_t* ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::OnCompleteFile(System.String)
extern "C" void FileSystemScanner_OnCompleteFile_m2672 (FileSystemScanner_t527 * __this, String_t* ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::OnProcessDirectory(System.String,System.Boolean)
extern "C" void FileSystemScanner_OnProcessDirectory_m2673 (FileSystemScanner_t527 * __this, String_t* ___directory, bool ___hasMatchingFiles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::Scan(System.String,System.Boolean)
extern "C" void FileSystemScanner_Scan_m2674 (FileSystemScanner_t527 * __this, String_t* ___directory, bool ___recurse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileSystemScanner::ScanDir(System.String,System.Boolean)
extern "C" void FileSystemScanner_ScanDir_m2675 (FileSystemScanner_t527 * __this, String_t* ___directory, bool ___recurse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
