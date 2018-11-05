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

// ICSharpCode.SharpZipLib.GZip.GZipInputStream
struct GZipInputStream_t547;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.GZip.GZipInputStream::.ctor(System.IO.Stream)
extern "C" void GZipInputStream__ctor_m2775 (GZipInputStream_t547 * __this, Stream_t506 * ___baseInputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipInputStream::.ctor(System.IO.Stream,System.Int32)
extern "C" void GZipInputStream__ctor_m2776 (GZipInputStream_t547 * __this, Stream_t506 * ___baseInputStream, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.GZip.GZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t GZipInputStream_Read_m2777 (GZipInputStream_t547 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipInputStream::ReadHeader()
extern "C" void GZipInputStream_ReadHeader_m2778 (GZipInputStream_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipInputStream::ReadFooter()
extern "C" void GZipInputStream_ReadFooter_m2779 (GZipInputStream_t547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
