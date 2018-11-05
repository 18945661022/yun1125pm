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

// UnityEngine.Texture
struct Texture_t21;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FilterMode.h"
#include "UnityEngine_UnityEngine_TextureWrapMode.h"

// System.Void UnityEngine.Texture::.ctor()
extern "C" void Texture__ctor_m6871 (Texture_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m6872 (Object_t * __this /* static, unused */, Texture_t21 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m6873 (Object_t * __this /* static, unused */, Texture_t21 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_width()
extern "C" int32_t Texture_get_width_m6874 (Texture_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m6875 (Texture_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" void Texture_set_filterMode_m576 (Texture_t21 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" void Texture_set_wrapMode_m577 (Texture_t21 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::GetNativeTextureID()
extern "C" int32_t Texture_GetNativeTextureID_m570 (Texture_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
