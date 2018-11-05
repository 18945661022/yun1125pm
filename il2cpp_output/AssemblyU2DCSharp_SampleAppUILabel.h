#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SampleAppUIRect
struct SampleAppUIRect_t23;
// UnityEngine.GUIStyle
struct GUIStyle_t4;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ISampleAppUIElement.h"

// SampleAppUILabel
struct  SampleAppUILabel_t26  : public ISampleAppUIElement_t15
{
	// SampleAppUIRect SampleAppUILabel::mRect
	SampleAppUIRect_t23 * ___mRect_0;
	// UnityEngine.GUIStyle SampleAppUILabel::mStyle
	GUIStyle_t4 * ___mStyle_1;
	// System.String SampleAppUILabel::mTitle
	String_t* ___mTitle_2;
	// System.Single SampleAppUILabel::mWidth
	float ___mWidth_3;
	// System.Single SampleAppUILabel::mHeight
	float ___mHeight_4;
};
