#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t135;
// UnityEngine.AudioSource
struct AudioSource_t62;
// UnityEngine.GameObject
struct GameObject_t43;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_XBXTrackableEventHandler_SCENEMODE.h"

// XBXMessageInit
struct  XBXMessageInit_t134  : public MonoBehaviour_t12
{
	// XBXTrackableEventHandler/SCENEMODE XBXMessageInit::mode
	int32_t ___mode_1;
	// UnityEngine.AudioClip XBXMessageInit::myClip
	AudioClip_t135 * ___myClip_2;
	// UnityEngine.AudioSource XBXMessageInit::mySource
	AudioSource_t62 * ___mySource_3;
	// UnityEngine.GameObject XBXMessageInit::emptyParent
	GameObject_t43 * ___emptyParent_4;
};
