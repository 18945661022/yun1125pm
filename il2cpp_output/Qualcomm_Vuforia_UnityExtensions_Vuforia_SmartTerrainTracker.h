#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.SmartTerrainTrackerAbstractBehaviour
struct  SmartTerrainTrackerAbstractBehaviour_t90  : public MonoBehaviour_t12
{
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitTracker
	bool ___mAutoInitTracker_1;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoStartTracker
	bool ___mAutoStartTracker_2;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mAutoInitBuilder
	bool ___mAutoInitBuilder_3;
	// System.Single Vuforia.SmartTerrainTrackerAbstractBehaviour::mSceneUnitsToMillimeter
	float ___mSceneUnitsToMillimeter_4;
	// System.Action Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerStarted
	Action_t3 * ___mTrackerStarted_5;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_6;
	// System.Boolean Vuforia.SmartTerrainTrackerAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_7;
};
