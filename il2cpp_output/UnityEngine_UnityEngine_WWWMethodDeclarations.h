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

// UnityEngine.WWW
struct WWW_t65;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.String[]
struct StringU5BU5D_t33;
// UnityEngine.AssetBundle
struct AssetBundle_t172;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m608 (WWW_t65 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m6522 (WWW_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m6523 (WWW_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m6524 (WWW_t65 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m6525 (WWW_t65 * __this, String_t* ___url, ByteU5BU5D_t129* ___postData, StringU5BU5D_t33* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C" AssetBundle_t172 * WWW_get_assetBundle_m610 (WWW_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
