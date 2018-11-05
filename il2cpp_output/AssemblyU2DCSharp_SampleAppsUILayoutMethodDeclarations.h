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

// SampleAppsUILayout
struct SampleAppsUILayout_t27;
// UnityEngine.Font
struct Font_t143;
// SampleAppUILabel
struct SampleAppUILabel_t26;
// System.String
struct String_t;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t22;
// SampleAppUIRadioButton
struct SampleAppUIRadioButton_t29;
// System.String[]
struct StringU5BU5D_t33;
// SampleAppUIButton
struct SampleAppUIButton_t20;
// UnityEngine.Texture
struct Texture_t21;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppsUILayout::.ctor()
extern "C" void SampleAppsUILayout__ctor_m58 (SampleAppsUILayout_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font SampleAppsUILayout::get_StyleFont()
extern "C" Font_t143 * SampleAppsUILayout_get_StyleFont_m59 (SampleAppsUILayout_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::Draw()
extern "C" void SampleAppsUILayout_Draw_m60 (SampleAppsUILayout_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddLabel(System.String)
extern "C" SampleAppUILabel_t26 * SampleAppsUILayout_AddLabel_m61 (SampleAppsUILayout_t27 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddGroupLabel(System.String)
extern "C" SampleAppUILabel_t26 * SampleAppsUILayout_AddGroupLabel_m62 (SampleAppsUILayout_t27 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSimpleButton(System.String)
extern "C" SampleAppUICheckButton_t22 * SampleAppsUILayout_AddSimpleButton_m63 (SampleAppsUILayout_t27 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t22 * SampleAppsUILayout_AddSlider_m64 (SampleAppsUILayout_t27 * __this, String_t* ___title, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider_Type2(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t22 * SampleAppsUILayout_AddSlider_Type2_m65 (SampleAppsUILayout_t27 * __this, String_t* ___title, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIRadioButton SampleAppsUILayout::AddToggleOptions(System.String[],System.Int32)
extern "C" SampleAppUIRadioButton_t29 * SampleAppsUILayout_AddToggleOptions_m66 (SampleAppsUILayout_t27 * __this, StringU5BU5D_t33* ___titleList, int32_t ___selectedId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(System.String,UnityEngine.Rect)
extern "C" SampleAppUIButton_t20 * SampleAppsUILayout_AddButton_m67 (SampleAppsUILayout_t27 * __this, String_t* ___title, Rect_t19  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(UnityEngine.Texture,UnityEngine.Rect)
extern "C" SampleAppUIButton_t20 * SampleAppsUILayout_AddButton_m68 (SampleAppsUILayout_t27 * __this, Texture_t21 * ___buttonTexture, Rect_t19  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::AddGap(System.Single)
extern "C" void SampleAppsUILayout_AddGap_m69 (SampleAppsUILayout_t27 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
