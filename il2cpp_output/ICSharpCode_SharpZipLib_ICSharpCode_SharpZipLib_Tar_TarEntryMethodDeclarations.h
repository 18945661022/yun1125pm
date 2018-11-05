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

// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Tar.TarHeader
struct TarHeader_t561;
// System.Object
struct Object_t;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Tar.TarEntry[]
struct TarEntryU5BU5D_t646;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::.ctor()
extern "C" void TarEntry__ctor_m2890 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::.ctor(System.Byte[])
extern "C" void TarEntry__ctor_m2891 (TarEntry_t557 * __this, ByteU5BU5D_t129* ___headerBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::.ctor(ICSharpCode.SharpZipLib.Tar.TarHeader)
extern "C" void TarEntry__ctor_m2892 (TarEntry_t557 * __this, TarHeader_t561 * ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Tar.TarEntry::Clone()
extern "C" Object_t * TarEntry_Clone_m2893 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarEntry::CreateTarEntry(System.String)
extern "C" TarEntry_t557 * TarEntry_CreateTarEntry_m2894 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarEntry::CreateEntryFromFile(System.String)
extern "C" TarEntry_t557 * TarEntry_CreateEntryFromFile_m2895 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarEntry::Equals(System.Object)
extern "C" bool TarEntry_Equals_m2896 (TarEntry_t557 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarEntry::GetHashCode()
extern "C" int32_t TarEntry_GetHashCode_m2897 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarEntry::IsDescendent(ICSharpCode.SharpZipLib.Tar.TarEntry)
extern "C" bool TarEntry_IsDescendent_m2898 (TarEntry_t557 * __this, TarEntry_t557 * ___toTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarHeader ICSharpCode.SharpZipLib.Tar.TarEntry::get_TarHeader()
extern "C" TarHeader_t561 * TarEntry_get_TarHeader_m2899 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarEntry::get_Name()
extern "C" String_t* TarEntry_get_Name_m2900 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_Name(System.String)
extern "C" void TarEntry_set_Name_m2901 (TarEntry_t557 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarEntry::get_UserId()
extern "C" int32_t TarEntry_get_UserId_m2902 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_UserId(System.Int32)
extern "C" void TarEntry_set_UserId_m2903 (TarEntry_t557 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarEntry::get_GroupId()
extern "C" int32_t TarEntry_get_GroupId_m2904 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_GroupId(System.Int32)
extern "C" void TarEntry_set_GroupId_m2905 (TarEntry_t557 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarEntry::get_UserName()
extern "C" String_t* TarEntry_get_UserName_m2906 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_UserName(System.String)
extern "C" void TarEntry_set_UserName_m2907 (TarEntry_t557 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarEntry::get_GroupName()
extern "C" String_t* TarEntry_get_GroupName_m2908 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_GroupName(System.String)
extern "C" void TarEntry_set_GroupName_m2909 (TarEntry_t557 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::SetIds(System.Int32,System.Int32)
extern "C" void TarEntry_SetIds_m2910 (TarEntry_t557 * __this, int32_t ___userId, int32_t ___groupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::SetNames(System.String,System.String)
extern "C" void TarEntry_SetNames_m2911 (TarEntry_t557 * __this, String_t* ___userName, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Tar.TarEntry::get_ModTime()
extern "C" DateTime_t18  TarEntry_get_ModTime_m2912 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_ModTime(System.DateTime)
extern "C" void TarEntry_set_ModTime_m2913 (TarEntry_t557 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarEntry::get_File()
extern "C" String_t* TarEntry_get_File_m2914 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarEntry::get_Size()
extern "C" int64_t TarEntry_get_Size_m2915 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::set_Size(System.Int64)
extern "C" void TarEntry_set_Size_m2916 (TarEntry_t557 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarEntry::get_IsDirectory()
extern "C" bool TarEntry_get_IsDirectory_m2917 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::GetFileTarHeader(ICSharpCode.SharpZipLib.Tar.TarHeader,System.String)
extern "C" void TarEntry_GetFileTarHeader_m2918 (TarEntry_t557 * __this, TarHeader_t561 * ___header, String_t* ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarEntry[] ICSharpCode.SharpZipLib.Tar.TarEntry::GetDirectoryEntries()
extern "C" TarEntryU5BU5D_t646* TarEntry_GetDirectoryEntries_m2919 (TarEntry_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::WriteEntryHeader(System.Byte[])
extern "C" void TarEntry_WriteEntryHeader_m2920 (TarEntry_t557 * __this, ByteU5BU5D_t129* ___outBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::AdjustEntryName(System.Byte[],System.String)
extern "C" void TarEntry_AdjustEntryName_m2921 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___buffer, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarEntry::NameTarHeader(ICSharpCode.SharpZipLib.Tar.TarHeader,System.String)
extern "C" void TarEntry_NameTarHeader_m2922 (Object_t * __this /* static, unused */, TarHeader_t561 * ___header, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
