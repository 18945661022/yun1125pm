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

// UnityEngine.AssetBundle
struct AssetBundle_t172;
// UnityEngine.Object
struct Object_t147;
struct Object_t147_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.AssetBundle::get_mainAsset()
extern "C" Object_t147 * AssetBundle_get_mainAsset_m613 (AssetBundle_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::Load(System.String,System.Type)
extern "C" Object_t147 * AssetBundle_Load_m6784 (AssetBundle_t172 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern "C" void AssetBundle_Unload_m611 (AssetBundle_t172 * __this, bool ___unloadAllLoadedObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
