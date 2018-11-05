#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t64;
// UnityEngine.GameObject
struct GameObject_t43;
// UnityEngine.Transform
struct Transform_t100;
// XBXMessageInit
struct XBXMessageInit_t134;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// XBXTrackableEventHandler
struct  XBXTrackableEventHandler_t140  : public MonoBehaviour_t12
{
	// Vuforia.TrackableBehaviour XBXTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t64 * ___mTrackableBehaviour_1;
	// UnityEngine.GameObject XBXTrackableEventHandler::arCamera
	GameObject_t43 * ___arCamera_2;
	// System.Boolean XBXTrackableEventHandler::startFlag
	bool ___startFlag_3;
	// System.Boolean XBXTrackableEventHandler::foundFlag
	bool ___foundFlag_4;
	// UnityEngine.Transform XBXTrackableEventHandler::target
	Transform_t100 * ___target_5;
	// UnityEngine.Vector3 XBXTrackableEventHandler::scale
	Vector3_t17  ___scale_6;
	// UnityEngine.Quaternion XBXTrackableEventHandler::origrotation
	Quaternion_t141  ___origrotation_7;
	// UnityEngine.GameObject XBXTrackableEventHandler::cartoon
	GameObject_t43 * ___cartoon_8;
	// XBXMessageInit XBXTrackableEventHandler::init
	XBXMessageInit_t134 * ___init_9;
};
