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
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.ZipConstants
struct ZipConstants_t588;

#include "codegen/il2cpp-codegen.h"

// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipConstants::get_DefaultCodePage()
extern "C" int32_t ZipConstants_get_DefaultCodePage_m3235 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipConstants::set_DefaultCodePage(System.Int32)
extern "C" void ZipConstants_set_DefaultCodePage_m3236 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToString(System.Byte[],System.Int32)
extern "C" String_t* ZipConstants_ConvertToString_m3237 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___data, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToString(System.Byte[])
extern "C" String_t* ZipConstants_ConvertToString_m3238 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToStringExt(System.Int32,System.Byte[],System.Int32)
extern "C" String_t* ZipConstants_ConvertToStringExt_m3239 (Object_t * __this /* static, unused */, int32_t ___flags, ByteU5BU5D_t129* ___data, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToStringExt(System.Int32,System.Byte[])
extern "C" String_t* ZipConstants_ConvertToStringExt_m3240 (Object_t * __this /* static, unused */, int32_t ___flags, ByteU5BU5D_t129* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToArray(System.String)
extern "C" ByteU5BU5D_t129* ZipConstants_ConvertToArray_m3241 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToArray(System.Int32,System.String)
extern "C" ByteU5BU5D_t129* ZipConstants_ConvertToArray_m3242 (Object_t * __this /* static, unused */, int32_t ___flags, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipConstants::.ctor()
extern "C" void ZipConstants__ctor_m3243 (ZipConstants_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipConstants::.cctor()
extern "C" void ZipConstants__cctor_m3244 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
