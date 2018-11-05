#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t21;
// UnityEngine.GUIStyle
struct GUIStyle_t4;
// System.String
struct String_t;
// System.Action
struct Action_t3;

#include "AssemblyU2DCSharp_ISampleAppUIElement.h"
#include "UnityEngine_UnityEngine_Rect.h"

// SampleAppUIButton
struct  SampleAppUIButton_t20  : public ISampleAppUIElement_t15
{
	// UnityEngine.Texture SampleAppUIButton::mButtonImage
	Texture_t21 * ___mButtonImage_0;
	// UnityEngine.Rect SampleAppUIButton::mRect
	Rect_t19  ___mRect_1;
	// UnityEngine.GUIStyle SampleAppUIButton::mStyle
	GUIStyle_t4 * ___mStyle_2;
	// System.String SampleAppUIButton::mTitle
	String_t* ___mTitle_3;
	// System.Action SampleAppUIButton::TappedOn
	Action_t3 * ___TappedOn_4;
};
