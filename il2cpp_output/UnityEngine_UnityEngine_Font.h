#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t461;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t1174;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t143  : public Object_t147
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t1174 * ___m_FontTextureRebuildCallback_2;
};
struct Font_t143_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t461 * ___textureRebuilt_1;
};
