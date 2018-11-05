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
// UnityEngine.UI.Graphic
struct Graphic_t294;
// UnityEngine.RectTransform
struct RectTransform_t295;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.UI.Mask
struct  Mask_t404  : public UIBehaviour_t220
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_1;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t114 * ___m_RenderMaterial_2;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t294 * ___m_Graphic_3;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t295 * ___m_RectTransform_4;
};
