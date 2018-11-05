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

// UnityEngine.Object
struct Object_t147;
struct Object_t147_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1141;
struct AsyncOperation_t1141_marshaled;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" Object_t147 * Resources_Load_m475 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t147 * Resources_Load_m6807 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C" Object_t147 * Resources_GetBuiltinResource_m6808 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Resources::UnloadAsset(UnityEngine.Object)
extern "C" void Resources_UnloadAsset_m552 (Object_t * __this /* static, unused */, Object_t147 * ___assetToUnload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C" AsyncOperation_t1141 * Resources_UnloadUnusedAssets_m612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
