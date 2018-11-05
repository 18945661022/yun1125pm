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

// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t549;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_6.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::.ctor()
extern "C" void Deflater__ctor_m3070 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::.ctor(System.Int32)
extern "C" void Deflater__ctor_m3071 (Deflater_t549 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::.ctor(System.Int32,System.Boolean)
extern "C" void Deflater__ctor_m3072 (Deflater_t549 * __this, int32_t ___level, bool ___noZlibHeaderOrFooter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Reset()
extern "C" void Deflater_Reset_m3073 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_Adler()
extern "C" int32_t Deflater_get_Adler_m3074 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_TotalIn()
extern "C" int64_t Deflater_get_TotalIn_m3075 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_TotalOut()
extern "C" int64_t Deflater_get_TotalOut_m3076 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Flush()
extern "C" void Deflater_Flush_m3077 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Finish()
extern "C" void Deflater_Finish_m3078 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_IsFinished()
extern "C" bool Deflater_get_IsFinished_m3079 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_IsNeedingInput()
extern "C" bool Deflater_get_IsNeedingInput_m3080 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetInput(System.Byte[])
extern "C" void Deflater_SetInput_m3081 (Deflater_t549 * __this, ByteU5BU5D_t129* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void Deflater_SetInput_m3082 (Deflater_t549 * __this, ByteU5BU5D_t129* ___input, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetLevel(System.Int32)
extern "C" void Deflater_SetLevel_m3083 (Deflater_t549 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::GetLevel()
extern "C" int32_t Deflater_GetLevel_m3084 (Deflater_t549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetStrategy(ICSharpCode.SharpZipLib.Zip.Compression.DeflateStrategy)
extern "C" void Deflater_SetStrategy_m3085 (Deflater_t549 * __this, int32_t ___strategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Deflate(System.Byte[])
extern "C" int32_t Deflater_Deflate_m3086 (Deflater_t549 * __this, ByteU5BU5D_t129* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Deflate(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Deflater_Deflate_m3087 (Deflater_t549 * __this, ByteU5BU5D_t129* ___output, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetDictionary(System.Byte[])
extern "C" void Deflater_SetDictionary_m3088 (Deflater_t549 * __this, ByteU5BU5D_t129* ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetDictionary(System.Byte[],System.Int32,System.Int32)
extern "C" void Deflater_SetDictionary_m3089 (Deflater_t549 * __this, ByteU5BU5D_t129* ___dictionary, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
