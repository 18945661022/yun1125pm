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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_FullScreenMovieControlMode.h"
#include "UnityEngine_UnityEngine_FullScreenMovieScalingMode.h"

// System.Boolean UnityEngine.Handheld::PlayFullScreenMovie(System.String,UnityEngine.Color,UnityEngine.FullScreenMovieControlMode,UnityEngine.FullScreenMovieScalingMode)
extern "C" bool Handheld_PlayFullScreenMovie_m587 (Object_t * __this /* static, unused */, String_t* ___path, Color_t115  ___bgColor, int32_t ___controlMode, int32_t ___scalingMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Handheld::INTERNAL_CALL_PlayFullScreenMovie(System.String,UnityEngine.Color&,UnityEngine.FullScreenMovieControlMode,UnityEngine.FullScreenMovieScalingMode)
extern "C" bool Handheld_INTERNAL_CALL_PlayFullScreenMovie_m7188 (Object_t * __this /* static, unused */, String_t* ___path, Color_t115 * ___bgColor, int32_t ___controlMode, int32_t ___scalingMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
