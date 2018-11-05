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

// ICSharpCode.SharpZipLib.GZip.GZipOutputStream
struct GZipOutputStream_t552;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::.ctor(System.IO.Stream)
extern "C" void GZipOutputStream__ctor_m2808 (GZipOutputStream_t552 * __this, Stream_t506 * ___baseOutputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::.ctor(System.IO.Stream,System.Int32)
extern "C" void GZipOutputStream__ctor_m2809 (GZipOutputStream_t552 * __this, Stream_t506 * ___baseOutputStream, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::SetLevel(System.Int32)
extern "C" void GZipOutputStream_SetLevel_m2810 (GZipOutputStream_t552 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.GZip.GZipOutputStream::GetLevel()
extern "C" int32_t GZipOutputStream_GetLevel_m2811 (GZipOutputStream_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void GZipOutputStream_Write_m2812 (GZipOutputStream_t552 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::Close()
extern "C" void GZipOutputStream_Close_m2813 (GZipOutputStream_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::Finish()
extern "C" void GZipOutputStream_Finish_m2814 (GZipOutputStream_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipOutputStream::WriteHeader()
extern "C" void GZipOutputStream_WriteHeader_m2815 (GZipOutputStream_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
