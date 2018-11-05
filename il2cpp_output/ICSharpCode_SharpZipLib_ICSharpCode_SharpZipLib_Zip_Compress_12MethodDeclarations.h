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

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t545;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.ctor()
extern "C" void Inflater__ctor_m3151 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.ctor(System.Boolean)
extern "C" void Inflater__ctor_m3152 (Inflater_t545 * __this, bool ___noHeader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Reset()
extern "C" void Inflater_Reset_m3153 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHeader()
extern "C" bool Inflater_DecodeHeader_m3154 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeDict()
extern "C" bool Inflater_DecodeDict_m3155 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHuffman()
extern "C" bool Inflater_DecodeHuffman_m3156 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeChksum()
extern "C" bool Inflater_DecodeChksum_m3157 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Decode()
extern "C" bool Inflater_Decode_m3158 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetDictionary(System.Byte[])
extern "C" void Inflater_SetDictionary_m3159 (Inflater_t545 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetDictionary(System.Byte[],System.Int32,System.Int32)
extern "C" void Inflater_SetDictionary_m3160 (Inflater_t545 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetInput(System.Byte[])
extern "C" void Inflater_SetInput_m3161 (Inflater_t545 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void Inflater_SetInput_m3162 (Inflater_t545 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Inflate(System.Byte[])
extern "C" int32_t Inflater_Inflate_m3163 (Inflater_t545 * __this, ByteU5BU5D_t129* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Inflater_Inflate_m3164 (Inflater_t545 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingInput()
extern "C" bool Inflater_get_IsNeedingInput_m3165 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingDictionary()
extern "C" bool Inflater_get_IsNeedingDictionary_m3166 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsFinished()
extern "C" bool Inflater_get_IsFinished_m3167 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_Adler()
extern "C" int32_t Inflater_get_Adler_m3168 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_TotalOut()
extern "C" int64_t Inflater_get_TotalOut_m3169 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_TotalIn()
extern "C" int64_t Inflater_get_TotalIn_m3170 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_RemainingInput()
extern "C" int32_t Inflater_get_RemainingInput_m3171 (Inflater_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.cctor()
extern "C" void Inflater__cctor_m3172 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
