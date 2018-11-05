#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t43;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_XBXTrackableEventHandler_SCENEMODE.h"

// XBXMessage
struct  XBXMessage_t133  : public MonoBehaviour_t12
{
};
struct XBXMessage_t133_StaticFields{
	// UnityEngine.GameObject XBXMessage::parent
	GameObject_t43 * ___parent_2;
	// UnityEngine.GameObject XBXMessage::child
	GameObject_t43 * ___child_3;
	// XBXTrackableEventHandler/SCENEMODE XBXMessage::mode
	int32_t ___mode_4;
};
