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

// SampleAppUIButton
struct SampleAppUIButton_t20;
// UnityEngine.GUIStyle
struct GUIStyle_t4;
// UnityEngine.Texture
struct Texture_t21;
// System.String
struct String_t;
// System.Action
struct Action_t3;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppUIButton::.ctor(UnityEngine.Rect,UnityEngine.GUIStyle,UnityEngine.Texture)
extern "C" void SampleAppUIButton__ctor_m37 (SampleAppUIButton_t20 * __this, Rect_t19  ___rect, GUIStyle_t4 * ___style, Texture_t21 * ___buttonTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::.ctor(UnityEngine.Rect,UnityEngine.GUIStyle,System.String)
extern "C" void SampleAppUIButton__ctor_m38 (SampleAppUIButton_t20 * __this, Rect_t19  ___rect, GUIStyle_t4 * ___style, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::add_TappedOn(System.Action)
extern "C" void SampleAppUIButton_add_TappedOn_m39 (SampleAppUIButton_t20 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::remove_TappedOn(System.Action)
extern "C" void SampleAppUIButton_remove_TappedOn_m40 (SampleAppUIButton_t20 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::Draw()
extern "C" void SampleAppUIButton_Draw_m41 (SampleAppUIButton_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
