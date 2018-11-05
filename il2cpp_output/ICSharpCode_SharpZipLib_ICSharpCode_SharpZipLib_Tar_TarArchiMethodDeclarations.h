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

// ICSharpCode.SharpZipLib.Tar.TarArchive
struct TarArchive_t556;
// ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler
struct ProgressMessageHandler_t555;
// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Tar.TarInputStream
struct TarInputStream_t558;
// ICSharpCode.SharpZipLib.Tar.TarOutputStream
struct TarOutputStream_t559;
// System.IO.Stream
struct Stream_t506;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::add_ProgressMessageEvent(ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler)
extern "C" void TarArchive_add_ProgressMessageEvent_m2828 (TarArchive_t556 * __this, ProgressMessageHandler_t555 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::remove_ProgressMessageEvent(ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler)
extern "C" void TarArchive_remove_ProgressMessageEvent_m2829 (TarArchive_t556 * __this, ProgressMessageHandler_t555 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::OnProgressMessageEvent(ICSharpCode.SharpZipLib.Tar.TarEntry,System.String)
extern "C" void TarArchive_OnProgressMessageEvent_m2830 (TarArchive_t556 * __this, TarEntry_t557 * ___entry, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::.ctor()
extern "C" void TarArchive__ctor_m2831 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::.ctor(ICSharpCode.SharpZipLib.Tar.TarInputStream)
extern "C" void TarArchive__ctor_m2832 (TarArchive_t556 * __this, TarInputStream_t558 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::.ctor(ICSharpCode.SharpZipLib.Tar.TarOutputStream)
extern "C" void TarArchive__ctor_m2833 (TarArchive_t556 * __this, TarOutputStream_t559 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarArchive ICSharpCode.SharpZipLib.Tar.TarArchive::CreateInputTarArchive(System.IO.Stream)
extern "C" TarArchive_t556 * TarArchive_CreateInputTarArchive_m2834 (Object_t * __this /* static, unused */, Stream_t506 * ___inputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarArchive ICSharpCode.SharpZipLib.Tar.TarArchive::CreateInputTarArchive(System.IO.Stream,System.Int32)
extern "C" TarArchive_t556 * TarArchive_CreateInputTarArchive_m2835 (Object_t * __this /* static, unused */, Stream_t506 * ___inputStream, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarArchive ICSharpCode.SharpZipLib.Tar.TarArchive::CreateOutputTarArchive(System.IO.Stream)
extern "C" TarArchive_t556 * TarArchive_CreateOutputTarArchive_m2836 (Object_t * __this /* static, unused */, Stream_t506 * ___outputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarArchive ICSharpCode.SharpZipLib.Tar.TarArchive::CreateOutputTarArchive(System.IO.Stream,System.Int32)
extern "C" TarArchive_t556 * TarArchive_CreateOutputTarArchive_m2837 (Object_t * __this /* static, unused */, Stream_t506 * ___outputStream, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::SetKeepOldFiles(System.Boolean)
extern "C" void TarArchive_SetKeepOldFiles_m2838 (TarArchive_t556 * __this, bool ___keepOldFiles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::get_AsciiTranslate()
extern "C" bool TarArchive_get_AsciiTranslate_m2839 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::set_AsciiTranslate(System.Boolean)
extern "C" void TarArchive_set_AsciiTranslate_m2840 (TarArchive_t556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::SetAsciiTranslation(System.Boolean)
extern "C" void TarArchive_SetAsciiTranslation_m2841 (TarArchive_t556 * __this, bool ___asciiTranslate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::get_PathPrefix()
extern "C" String_t* TarArchive_get_PathPrefix_m2842 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::set_PathPrefix(System.String)
extern "C" void TarArchive_set_PathPrefix_m2843 (TarArchive_t556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::get_RootPath()
extern "C" String_t* TarArchive_get_RootPath_m2844 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::set_RootPath(System.String)
extern "C" void TarArchive_set_RootPath_m2845 (TarArchive_t556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::SetUserInfo(System.Int32,System.String,System.Int32,System.String)
extern "C" void TarArchive_SetUserInfo_m2846 (TarArchive_t556 * __this, int32_t ___userId, String_t* ___userName, int32_t ___groupId, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::get_ApplyUserInfoOverrides()
extern "C" bool TarArchive_get_ApplyUserInfoOverrides_m2847 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::set_ApplyUserInfoOverrides(System.Boolean)
extern "C" void TarArchive_set_ApplyUserInfoOverrides_m2848 (TarArchive_t556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarArchive::get_UserId()
extern "C" int32_t TarArchive_get_UserId_m2849 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::get_UserName()
extern "C" String_t* TarArchive_get_UserName_m2850 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarArchive::get_GroupId()
extern "C" int32_t TarArchive_get_GroupId_m2851 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::get_GroupName()
extern "C" String_t* TarArchive_get_GroupName_m2852 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarArchive::get_RecordSize()
extern "C" int32_t TarArchive_get_RecordSize_m2853 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::CloseArchive()
extern "C" void TarArchive_CloseArchive_m2854 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::ListContents()
extern "C" void TarArchive_ListContents_m2855 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::ExtractContents(System.String)
extern "C" void TarArchive_ExtractContents_m2856 (TarArchive_t556 * __this, String_t* ___destinationDirectory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::ExtractEntry(System.String,ICSharpCode.SharpZipLib.Tar.TarEntry)
extern "C" void TarArchive_ExtractEntry_m2857 (TarArchive_t556 * __this, String_t* ___destDir, TarEntry_t557 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::WriteEntry(ICSharpCode.SharpZipLib.Tar.TarEntry,System.Boolean)
extern "C" void TarArchive_WriteEntry_m2858 (TarArchive_t556 * __this, TarEntry_t557 * ___sourceEntry, bool ___recurse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::WriteEntryCore(ICSharpCode.SharpZipLib.Tar.TarEntry,System.Boolean)
extern "C" void TarArchive_WriteEntryCore_m2859 (TarArchive_t556 * __this, TarEntry_t557 * ___sourceEntry, bool ___recurse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::Dispose(System.Boolean)
extern "C" void TarArchive_Dispose_m2860 (TarArchive_t556 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::Close()
extern "C" void TarArchive_Close_m2861 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::Finalize()
extern "C" void TarArchive_Finalize_m2862 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::System.IDisposable.Dispose()
extern "C" void TarArchive_System_IDisposable_Dispose_m2863 (TarArchive_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarArchive::EnsureDirectoryExists(System.String)
extern "C" void TarArchive_EnsureDirectoryExists_m2864 (Object_t * __this /* static, unused */, String_t* ___directoryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::IsBinary(System.String)
extern "C" bool TarArchive_IsBinary_m2865 (Object_t * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
