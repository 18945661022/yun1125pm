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
// ICSharpCode.SharpZipLib.BZip2.BZip2
struct BZip2_t500;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2::Decompress(System.IO.Stream,System.IO.Stream)
extern "C" void BZip2_Decompress_m2497 (Object_t * __this /* static, unused */, Stream_t506 * ___inStream, Stream_t506 * ___outStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2::Compress(System.IO.Stream,System.IO.Stream,System.Int32)
extern "C" void BZip2_Compress_m2498 (Object_t * __this /* static, unused */, Stream_t506 * ___inStream, Stream_t506 * ___outStream, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2::.ctor()
extern "C" void BZip2__ctor_m2499 (BZip2_t500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
