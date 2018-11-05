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

// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t649;
// System.IO.StreamReader
struct StreamReader_t665;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileAttributes.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_IO_FileMode.h"

// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
extern "C" void File_Copy_m3809 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String)
extern "C" FileStream_t649 * File_Create_m3729 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32)
extern "C" FileStream_t649 * File_Create_m11533 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m3736 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m769 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
extern "C" int32_t File_GetAttributes_m11534 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::GetLastWriteTime(System.String)
extern "C" DateTime_t18  File_GetLastWriteTime_m3745 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Move(System.String,System.String)
extern "C" void File_Move_m3808 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t649 * File_Open_m11535 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t649 * File_OpenRead_m3735 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t665 * File_OpenText_m3733 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C" FileStream_t649 * File_OpenWrite_m3807 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetAttributes(System.String,System.IO.FileAttributes)
extern "C" void File_SetAttributes_m3767 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___fileAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetLastWriteTime(System.String,System.DateTime)
extern "C" void File_SetLastWriteTime_m3766 (Object_t * __this /* static, unused */, String_t* ___path, DateTime_t18  ___lastWriteTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::CheckPathExceptions(System.String)
extern "C" void File_CheckPathExceptions_m11536 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
extern "C" void File_WriteAllBytes_m768 (Object_t * __this /* static, unused */, String_t* ___path, ByteU5BU5D_t129* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.File::get_DefaultLocalFileTime()
extern "C" DateTime_t18  File_get_DefaultLocalFileTime_m11537 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
