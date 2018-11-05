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

// ICSharpCode.SharpZipLib.Checksums.StrangeCRC
struct StrangeCRC_t515;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Checksums.StrangeCRC::.ctor()
extern "C" void StrangeCRC__ctor_m2616 (StrangeCRC_t515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.StrangeCRC::Reset()
extern "C" void StrangeCRC_Reset_m2617 (StrangeCRC_t515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Checksums.StrangeCRC::get_Value()
extern "C" int64_t StrangeCRC_get_Value_m2618 (StrangeCRC_t515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.StrangeCRC::Update(System.Int32)
extern "C" void StrangeCRC_Update_m2619 (StrangeCRC_t515 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.StrangeCRC::Update(System.Byte[])
extern "C" void StrangeCRC_Update_m2620 (StrangeCRC_t515 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.StrangeCRC::Update(System.Byte[],System.Int32,System.Int32)
extern "C" void StrangeCRC_Update_m2621 (StrangeCRC_t515 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Checksums.StrangeCRC::.cctor()
extern "C" void StrangeCRC__cctor_m2622 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
