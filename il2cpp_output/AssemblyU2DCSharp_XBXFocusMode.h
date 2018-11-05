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
// UnityEngine.GameObject
struct GameObject_t43;
// UnityEngine.Texture2D
struct Texture2D_t38;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"

// XBXFocusMode
struct  XBXFocusMode_t130  : public MonoBehaviour_t12
{
	// System.Single XBXFocusMode::width
	float ___width_1;
	// System.Single XBXFocusMode::height
	float ___height_2;
	// System.Single XBXFocusMode::interval
	float ___interval_3;
	// System.Single XBXFocusMode::widthX
	float ___widthX_4;
	// System.Single XBXFocusMode::heightY1
	float ___heightY1_5;
	// System.Single XBXFocusMode::heightY2
	float ___heightY2_6;
	// System.Single XBXFocusMode::HeightY
	float ___HeightY_7;
	// System.Single XBXFocusMode::rate
	float ___rate_8;
	// System.Single XBXFocusMode::qmpHeight
	float ___qmpHeight_9;
	// System.Boolean XBXFocusMode::shotPressed
	bool ___shotPressed_10;
	// System.Boolean XBXFocusMode::sharePressed
	bool ___sharePressed_11;
	// System.Boolean XBXFocusMode::anti_shake
	bool ___anti_shake_12;
	// UnityEngine.Texture XBXFocusMode::shareTexture
	Texture_t21 * ___shareTexture_13;
	// UnityEngine.Texture XBXFocusMode::backTexture
	Texture_t21 * ___backTexture_14;
	// UnityEngine.Texture XBXFocusMode::shotTexture
	Texture_t21 * ___shotTexture_15;
	// UnityEngine.Texture XBXFocusMode::xingzouTexture
	Texture_t21 * ___xingzouTexture_16;
	// UnityEngine.Texture XBXFocusMode::tingzhiTexture
	Texture_t21 * ___tingzhiTexture_17;
	// UnityEngine.GameObject XBXFocusMode::ImageTargetObject
	GameObject_t43 * ___ImageTargetObject_18;
	// UnityEngine.Rect XBXFocusMode::rect
	Rect_t19  ___rect_19;
	// UnityEngine.Texture2D XBXFocusMode::screenShot
	Texture2D_t38 * ___screenShot_20;
	// System.Boolean XBXFocusMode::ShareButtonHided
	bool ___ShareButtonHided_21;
};
