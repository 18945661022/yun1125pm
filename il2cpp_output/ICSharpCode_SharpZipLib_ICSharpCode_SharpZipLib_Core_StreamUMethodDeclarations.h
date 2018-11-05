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

// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Core.ProgressHandler
struct ProgressHandler_t523;
// System.Object
struct Object_t;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Core.StreamUtils
struct StreamUtils_t534;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[])
extern "C" void StreamUtils_ReadFully_m2705 (Object_t * __this /* static, unused */, Stream_t506 * ___stream, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C" void StreamUtils_ReadFully_m2706 (Object_t * __this /* static, unused */, Stream_t506 * ___stream, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[])
extern "C" void StreamUtils_Copy_m2707 (Object_t * __this /* static, unused */, Stream_t506 * ___source, Stream_t506 * ___destination, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[],ICSharpCode.SharpZipLib.Core.ProgressHandler,System.TimeSpan,System.Object,System.String)
extern "C" void StreamUtils_Copy_m2708 (Object_t * __this /* static, unused */, Stream_t506 * ___source, Stream_t506 * ___destination, ByteU5BU5D_t129* ___buffer, ProgressHandler_t523 * ___progressHandler, TimeSpan_t156  ___updateInterval, Object_t * ___sender, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[],ICSharpCode.SharpZipLib.Core.ProgressHandler,System.TimeSpan,System.Object,System.String,System.Int64)
extern "C" void StreamUtils_Copy_m2709 (Object_t * __this /* static, unused */, Stream_t506 * ___source, Stream_t506 * ___destination, ByteU5BU5D_t129* ___buffer, ProgressHandler_t523 * ___progressHandler, TimeSpan_t156  ___updateInterval, Object_t * ___sender, String_t* ___name, int64_t ___fixedTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::.ctor()
extern "C" void StreamUtils__ctor_m2710 (StreamUtils_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
