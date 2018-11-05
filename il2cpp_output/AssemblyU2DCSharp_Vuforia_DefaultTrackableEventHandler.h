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
// UnityEngine.WWW
struct WWW_t65;
// UnityEngine.GameObject
struct GameObject_t43;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t60  : public MonoBehaviour_t12
{
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t64 * ___mTrackableBehaviour_1;
	// System.Boolean Vuforia.DefaultTrackableEventHandler::mLostTracking
	bool ___mLostTracking_2;
	// System.Boolean Vuforia.DefaultTrackableEventHandler::mHasBeenFound
	bool ___mHasBeenFound_3;
	// System.Single Vuforia.DefaultTrackableEventHandler::mSecondsSinceLost
	float ___mSecondsSinceLost_4;
	// System.Single Vuforia.DefaultTrackableEventHandler::position_x
	float ___position_x_5;
	// System.Single Vuforia.DefaultTrackableEventHandler::position_y
	float ___position_y_6;
	// System.Single Vuforia.DefaultTrackableEventHandler::position_z
	float ___position_z_7;
	// System.Single Vuforia.DefaultTrackableEventHandler::rotation_x
	float ___rotation_x_8;
	// System.Single Vuforia.DefaultTrackableEventHandler::rotation_y
	float ___rotation_y_9;
	// System.Single Vuforia.DefaultTrackableEventHandler::rotation_z
	float ___rotation_z_10;
	// System.Single Vuforia.DefaultTrackableEventHandler::scale_x
	float ___scale_x_11;
	// System.Single Vuforia.DefaultTrackableEventHandler::scale_y
	float ___scale_y_12;
	// System.Single Vuforia.DefaultTrackableEventHandler::scale_z
	float ___scale_z_13;
	// UnityEngine.WWW Vuforia.DefaultTrackableEventHandler::bundle
	WWW_t65 * ___bundle_14;
	// UnityEngine.GameObject Vuforia.DefaultTrackableEventHandler::obj
	GameObject_t43 * ___obj_15;
	// System.String Vuforia.DefaultTrackableEventHandler::id
	String_t* ___id_16;
};
