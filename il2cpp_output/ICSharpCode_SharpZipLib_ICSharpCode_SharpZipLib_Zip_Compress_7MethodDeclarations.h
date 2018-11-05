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

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct DeflaterEngine_t567;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t566;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_6.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::.ctor(ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending)
extern "C" void DeflaterEngine__ctor_m3092 (DeflaterEngine_t567 * __this, DeflaterPending_t566 * ___pending, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::Deflate(System.Boolean,System.Boolean)
extern "C" bool DeflaterEngine_Deflate_m3093 (DeflaterEngine_t567 * __this, bool ___flush, bool ___finish, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflaterEngine_SetInput_m3094 (DeflaterEngine_t567 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::NeedsInput()
extern "C" bool DeflaterEngine_NeedsInput_m3095 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::SetDictionary(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflaterEngine_SetDictionary_m3096 (DeflaterEngine_t567 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::Reset()
extern "C" void DeflaterEngine_Reset_m3097 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::ResetAdler()
extern "C" void DeflaterEngine_ResetAdler_m3098 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::get_Adler()
extern "C" int32_t DeflaterEngine_get_Adler_m3099 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::get_TotalIn()
extern "C" int64_t DeflaterEngine_get_TotalIn_m3100 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflateStrategy ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::get_Strategy()
extern "C" int32_t DeflaterEngine_get_Strategy_m3101 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::set_Strategy(ICSharpCode.SharpZipLib.Zip.Compression.DeflateStrategy)
extern "C" void DeflaterEngine_set_Strategy_m3102 (DeflaterEngine_t567 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::SetLevel(System.Int32)
extern "C" void DeflaterEngine_SetLevel_m3103 (DeflaterEngine_t567 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::FillWindow()
extern "C" void DeflaterEngine_FillWindow_m3104 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::UpdateHash()
extern "C" void DeflaterEngine_UpdateHash_m3105 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::InsertString()
extern "C" int32_t DeflaterEngine_InsertString_m3106 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::SlideWindow()
extern "C" void DeflaterEngine_SlideWindow_m3107 (DeflaterEngine_t567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::FindLongestMatch(System.Int32)
extern "C" bool DeflaterEngine_FindLongestMatch_m3108 (DeflaterEngine_t567 * __this, int32_t ___curMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::DeflateStored(System.Boolean,System.Boolean)
extern "C" bool DeflaterEngine_DeflateStored_m3109 (DeflaterEngine_t567 * __this, bool ___flush, bool ___finish, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::DeflateFast(System.Boolean,System.Boolean)
extern "C" bool DeflaterEngine_DeflateFast_m3110 (DeflaterEngine_t567 * __this, bool ___flush, bool ___finish, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::DeflateSlow(System.Boolean,System.Boolean)
extern "C" bool DeflaterEngine_DeflateSlow_m3111 (DeflaterEngine_t567 * __this, bool ___flush, bool ___finish, const MethodInfo* method) IL2CPP_METHOD_ATTR;
