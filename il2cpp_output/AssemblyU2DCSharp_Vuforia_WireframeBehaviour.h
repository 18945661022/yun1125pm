#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t114;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t113  : public MonoBehaviour_t12
{
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t114 * ___mLineMaterial_1;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_2;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t115  ___LineColor_3;
};
