﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t306;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t307;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t304;

#include "mscorlib_System_Object.h"

// UnityEngine.UI.GraphicRegistry
struct  GraphicRegistry_t306  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>> UnityEngine.UI.GraphicRegistry::m_Graphics
	Dictionary_2_t307 * ___m_Graphics_1;
};
struct GraphicRegistry_t306_StaticFields{
	// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::s_Instance
	GraphicRegistry_t306 * ___s_Instance_0;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::s_EmptyList
	List_1_t304 * ___s_EmptyList_2;
};
