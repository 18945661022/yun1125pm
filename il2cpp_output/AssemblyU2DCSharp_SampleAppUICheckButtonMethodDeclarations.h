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

// SampleAppUICheckButton
struct SampleAppUICheckButton_t22;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t4;
// System.Action`1<System.Boolean>
struct Action_1_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void SampleAppUICheckButton::.ctor(System.Single,System.String,System.Boolean,UnityEngine.GUIStyle)
extern "C" void SampleAppUICheckButton__ctor_m42 (SampleAppUICheckButton_t22 * __this, float ___index, String_t* ___title, bool ___selected, GUIStyle_t4 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::add_TappedOn(System.Action`1<System.Boolean>)
extern "C" void SampleAppUICheckButton_add_TappedOn_m43 (SampleAppUICheckButton_t22 * __this, Action_1_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::remove_TappedOn(System.Action`1<System.Boolean>)
extern "C" void SampleAppUICheckButton_remove_TappedOn_m44 (SampleAppUICheckButton_t22 * __this, Action_1_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SampleAppUICheckButton::get_Title()
extern "C" String_t* SampleAppUICheckButton_get_Title_m45 (SampleAppUICheckButton_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::set_Title(System.String)
extern "C" void SampleAppUICheckButton_set_Title_m46 (SampleAppUICheckButton_t22 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SampleAppUICheckButton::get_Width()
extern "C" float SampleAppUICheckButton_get_Width_m47 (SampleAppUICheckButton_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SampleAppUICheckButton::get_Height()
extern "C" float SampleAppUICheckButton_get_Height_m48 (SampleAppUICheckButton_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::Enable(System.Boolean)
extern "C" void SampleAppUICheckButton_Enable_m49 (SampleAppUICheckButton_t22 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SampleAppUICheckButton::get_IsEnabled()
extern "C" bool SampleAppUICheckButton_get_IsEnabled_m50 (SampleAppUICheckButton_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUICheckButton::Draw()
extern "C" void SampleAppUICheckButton_Draw_m51 (SampleAppUICheckButton_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
