﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Trackable
struct Trackable_t694;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t693;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t64  : public MonoBehaviour_t12
{
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_1;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t17  ___mPreviousScale_2;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_3;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_4;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_5;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	Object_t * ___mTrackable_6;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t693 * ___mTrackableEventHandlers_7;
};
