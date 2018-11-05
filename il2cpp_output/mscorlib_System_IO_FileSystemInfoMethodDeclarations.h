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

// System.IO.FileSystemInfo
struct FileSystemInfo_t1788;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_IO_FileAttributes.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C" void FileSystemInfo__ctor_m11598 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo__ctor_m11599 (FileSystemInfo_t1788 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileSystemInfo_GetObjectData_m11600 (FileSystemInfo_t1788 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C" String_t* FileSystemInfo_get_FullName_m11601 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.FileSystemInfo::get_Attributes()
extern "C" int32_t FileSystemInfo_get_Attributes_m3728 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_CreationTime()
extern "C" DateTime_t18  FileSystemInfo_get_CreationTime_m3787 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_CreationTimeUtc()
extern "C" DateTime_t18  FileSystemInfo_get_CreationTimeUtc_m3788 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastAccessTime()
extern "C" DateTime_t18  FileSystemInfo_get_LastAccessTime_m3789 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastAccessTimeUtc()
extern "C" DateTime_t18  FileSystemInfo_get_LastAccessTimeUtc_m3790 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
extern "C" DateTime_t18  FileSystemInfo_get_LastWriteTime_m3710 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTimeUtc()
extern "C" DateTime_t18  FileSystemInfo_get_LastWriteTimeUtc_m3791 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C" void FileSystemInfo_Refresh_m11602 (FileSystemInfo_t1788 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C" void FileSystemInfo_InternalRefresh_m11603 (FileSystemInfo_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C" void FileSystemInfo_CheckPath_m11604 (FileSystemInfo_t1788 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
