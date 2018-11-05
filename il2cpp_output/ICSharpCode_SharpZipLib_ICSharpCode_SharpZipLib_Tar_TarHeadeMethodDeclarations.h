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

// ICSharpCode.SharpZipLib.Tar.TarHeader
struct TarHeader_t561;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Text.StringBuilder
struct StringBuilder_t445;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::.ctor()
extern "C" void TarHeader__ctor_m2923 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::get_Name()
extern "C" String_t* TarHeader_get_Name_m2924 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_Name(System.String)
extern "C" void TarHeader_set_Name_m2925 (TarHeader_t561 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::GetName()
extern "C" String_t* TarHeader_GetName_m2926 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::get_Mode()
extern "C" int32_t TarHeader_get_Mode_m2927 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_Mode(System.Int32)
extern "C" void TarHeader_set_Mode_m2928 (TarHeader_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::get_UserId()
extern "C" int32_t TarHeader_get_UserId_m2929 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_UserId(System.Int32)
extern "C" void TarHeader_set_UserId_m2930 (TarHeader_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::get_GroupId()
extern "C" int32_t TarHeader_get_GroupId_m2931 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_GroupId(System.Int32)
extern "C" void TarHeader_set_GroupId_m2932 (TarHeader_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarHeader::get_Size()
extern "C" int64_t TarHeader_get_Size_m2933 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_Size(System.Int64)
extern "C" void TarHeader_set_Size_m2934 (TarHeader_t561 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Tar.TarHeader::get_ModTime()
extern "C" DateTime_t18  TarHeader_get_ModTime_m2935 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_ModTime(System.DateTime)
extern "C" void TarHeader_set_ModTime_m2936 (TarHeader_t561 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::get_Checksum()
extern "C" int32_t TarHeader_get_Checksum_m2937 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarHeader::get_IsChecksumValid()
extern "C" bool TarHeader_get_IsChecksumValid_m2938 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ICSharpCode.SharpZipLib.Tar.TarHeader::get_TypeFlag()
extern "C" uint8_t TarHeader_get_TypeFlag_m2939 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_TypeFlag(System.Byte)
extern "C" void TarHeader_set_TypeFlag_m2940 (TarHeader_t561 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::get_LinkName()
extern "C" String_t* TarHeader_get_LinkName_m2941 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_LinkName(System.String)
extern "C" void TarHeader_set_LinkName_m2942 (TarHeader_t561 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::get_Magic()
extern "C" String_t* TarHeader_get_Magic_m2943 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_Magic(System.String)
extern "C" void TarHeader_set_Magic_m2944 (TarHeader_t561 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::get_Version()
extern "C" String_t* TarHeader_get_Version_m2945 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_Version(System.String)
extern "C" void TarHeader_set_Version_m2946 (TarHeader_t561 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::get_UserName()
extern "C" String_t* TarHeader_get_UserName_m2947 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_UserName(System.String)
extern "C" void TarHeader_set_UserName_m2948 (TarHeader_t561 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::get_GroupName()
extern "C" String_t* TarHeader_get_GroupName_m2949 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_GroupName(System.String)
extern "C" void TarHeader_set_GroupName_m2950 (TarHeader_t561 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::get_DevMajor()
extern "C" int32_t TarHeader_get_DevMajor_m2951 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_DevMajor(System.Int32)
extern "C" void TarHeader_set_DevMajor_m2952 (TarHeader_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::get_DevMinor()
extern "C" int32_t TarHeader_get_DevMinor_m2953 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::set_DevMinor(System.Int32)
extern "C" void TarHeader_set_DevMinor_m2954 (TarHeader_t561 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Tar.TarHeader::Clone()
extern "C" Object_t * TarHeader_Clone_m2955 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::ParseBuffer(System.Byte[])
extern "C" void TarHeader_ParseBuffer_m2956 (TarHeader_t561 * __this, ByteU5BU5D_t129* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::WriteHeader(System.Byte[])
extern "C" void TarHeader_WriteHeader_m2957 (TarHeader_t561 * __this, ByteU5BU5D_t129* ___outBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetHashCode()
extern "C" int32_t TarHeader_GetHashCode_m2958 (TarHeader_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarHeader::Equals(System.Object)
extern "C" bool TarHeader_Equals_m2959 (TarHeader_t561 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::SetValueDefaults(System.Int32,System.String,System.Int32,System.String)
extern "C" void TarHeader_SetValueDefaults_m2960 (Object_t * __this /* static, unused */, int32_t ___userId, String_t* ___userName, int32_t ___groupId, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::RestoreSetValues()
extern "C" void TarHeader_RestoreSetValues_m2961 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Tar.TarHeader::ParseOctal(System.Byte[],System.Int32,System.Int32)
extern "C" int64_t TarHeader_ParseOctal_m2962 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___header, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder ICSharpCode.SharpZipLib.Tar.TarHeader::ParseName(System.Byte[],System.Int32,System.Int32)
extern "C" StringBuilder_t445 * TarHeader_ParseName_m2963 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___header, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetNameBytes(System.Text.StringBuilder,System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetNameBytes_m2964 (Object_t * __this /* static, unused */, StringBuilder_t445 * ___name, int32_t ___nameOffset, ByteU5BU5D_t129* ___buffer, int32_t ___bufferOffset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetNameBytes(System.String,System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetNameBytes_m2965 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___nameOffset, ByteU5BU5D_t129* ___buffer, int32_t ___bufferOffset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetNameBytes(System.Text.StringBuilder,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetNameBytes_m2966 (Object_t * __this /* static, unused */, StringBuilder_t445 * ___name, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetNameBytes(System.String,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetNameBytes_m2967 (Object_t * __this /* static, unused */, String_t* ___name, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetAsciiBytes(System.String,System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetAsciiBytes_m2968 (Object_t * __this /* static, unused */, String_t* ___toAdd, int32_t ___nameOffset, ByteU5BU5D_t129* ___buffer, int32_t ___bufferOffset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetOctalBytes(System.Int64,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetOctalBytes_m2969 (Object_t * __this /* static, unused */, int64_t ___value, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetLongOctalBytes(System.Int64,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetLongOctalBytes_m2970 (Object_t * __this /* static, unused */, int64_t ___value, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetCheckSumOctalBytes(System.Int64,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TarHeader_GetCheckSumOctalBytes_m2971 (Object_t * __this /* static, unused */, int64_t ___value, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::ComputeCheckSum(System.Byte[])
extern "C" int32_t TarHeader_ComputeCheckSum_m2972 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::MakeCheckSum(System.Byte[])
extern "C" int32_t TarHeader_MakeCheckSum_m2973 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::GetCTime(System.DateTime)
extern "C" int32_t TarHeader_GetCTime_m2974 (Object_t * __this /* static, unused */, DateTime_t18  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Tar.TarHeader::GetDateTimeFromCTime(System.Int64)
extern "C" DateTime_t18  TarHeader_GetDateTimeFromCTime_m2975 (Object_t * __this /* static, unused */, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarHeader::.cctor()
extern "C" void TarHeader__cctor_m2976 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
