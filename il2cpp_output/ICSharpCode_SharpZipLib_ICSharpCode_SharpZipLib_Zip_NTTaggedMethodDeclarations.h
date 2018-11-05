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

// ICSharpCode.SharpZipLib.Zip.NTTaggedData
struct NTTaggedData_t598;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Int16 ICSharpCode.SharpZipLib.Zip.NTTaggedData::get_TagID()
extern "C" int16_t NTTaggedData_get_TagID_m3343 (NTTaggedData_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.NTTaggedData::SetData(System.Byte[],System.Int32,System.Int32)
extern "C" void NTTaggedData_SetData_m3344 (NTTaggedData_t598 * __this, ByteU5BU5D_t129* ___data, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.NTTaggedData::GetData()
extern "C" ByteU5BU5D_t129* NTTaggedData_GetData_m3345 (NTTaggedData_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.NTTaggedData::IsValidValue(System.DateTime)
extern "C" bool NTTaggedData_IsValidValue_m3346 (Object_t * __this /* static, unused */, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Zip.NTTaggedData::get_LastModificationTime()
extern "C" DateTime_t18  NTTaggedData_get_LastModificationTime_m3347 (NTTaggedData_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.NTTaggedData::set_LastModificationTime(System.DateTime)
extern "C" void NTTaggedData_set_LastModificationTime_m3348 (NTTaggedData_t598 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Zip.NTTaggedData::get_CreateTime()
extern "C" DateTime_t18  NTTaggedData_get_CreateTime_m3349 (NTTaggedData_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.NTTaggedData::set_CreateTime(System.DateTime)
extern "C" void NTTaggedData_set_CreateTime_m3350 (NTTaggedData_t598 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ICSharpCode.SharpZipLib.Zip.NTTaggedData::get_LastAccessTime()
extern "C" DateTime_t18  NTTaggedData_get_LastAccessTime_m3351 (NTTaggedData_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.NTTaggedData::set_LastAccessTime(System.DateTime)
extern "C" void NTTaggedData_set_LastAccessTime_m3352 (NTTaggedData_t598 * __this, DateTime_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.NTTaggedData::.ctor()
extern "C" void NTTaggedData__ctor_m3353 (NTTaggedData_t598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
