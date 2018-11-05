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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// TrackableEventHandler
struct  TrackableEventHandler_t121  : public MonoBehaviour_t12
{
	// Vuforia.TrackableBehaviour TrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t64 * ___mTrackableBehaviour_1;
	// System.Boolean TrackableEventHandler::mHasBeenFound
	bool ___mHasBeenFound_2;
	// System.Boolean TrackableEventHandler::mLostTracking
	bool ___mLostTracking_3;
	// System.Single TrackableEventHandler::mSecondsSinceLost
	float ___mSecondsSinceLost_4;
};
