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

// SampleAppUIRadioButton
struct SampleAppUIRadioButton_t29;
// System.String[]
struct StringU5BU5D_t33;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t32;
// System.Action`1<System.Int32>
struct Action_1_t34;

#include "codegen/il2cpp-codegen.h"

// System.Void SampleAppUIRadioButton::.ctor(System.Single,System.Int32,System.String[],UnityEngine.GUIStyle[])
extern "C" void SampleAppUIRadioButton__ctor_m70 (SampleAppUIRadioButton_t29 * __this, float ___index, int32_t ___selectedId, StringU5BU5D_t33* ___title, GUIStyleU5BU5D_t32* ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIRadioButton::add_TappedOnOption(System.Action`1<System.Int32>)
extern "C" void SampleAppUIRadioButton_add_TappedOnOption_m71 (SampleAppUIRadioButton_t29 * __this, Action_1_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIRadioButton::remove_TappedOnOption(System.Action`1<System.Int32>)
extern "C" void SampleAppUIRadioButton_remove_TappedOnOption_m72 (SampleAppUIRadioButton_t29 * __this, Action_1_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SampleAppUIRadioButton::get_Width()
extern "C" float SampleAppUIRadioButton_get_Width_m73 (SampleAppUIRadioButton_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SampleAppUIRadioButton::get_Height()
extern "C" float SampleAppUIRadioButton_get_Height_m74 (SampleAppUIRadioButton_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIRadioButton::EnableIndex(System.Int32)
extern "C" void SampleAppUIRadioButton_EnableIndex_m75 (SampleAppUIRadioButton_t29 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SampleAppUIRadioButton::SetToTrue()
extern "C" bool SampleAppUIRadioButton_SetToTrue_m76 (SampleAppUIRadioButton_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIRadioButton::Draw()
extern "C" void SampleAppUIRadioButton_Draw_m77 (SampleAppUIRadioButton_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
