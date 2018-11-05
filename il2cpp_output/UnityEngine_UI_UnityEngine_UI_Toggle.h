#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Graphic
struct Graphic_t294;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t376;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t373;

#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransition.h"

// UnityEngine.UI.Toggle
struct  Toggle_t375  : public Selectable_t284
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_15;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t294 * ___graphic_16;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t376 * ___m_Group_17;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t373 * ___onValueChanged_18;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_19;
};
