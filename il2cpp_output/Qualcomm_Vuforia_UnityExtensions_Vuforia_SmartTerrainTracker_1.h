#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t800;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTracker_0.h"

// Vuforia.SmartTerrainTrackerImpl
struct  SmartTerrainTrackerImpl_t804  : public SmartTerrainTracker_t803
{
	// System.Single Vuforia.SmartTerrainTrackerImpl::mScaleToMillimeter
	float ___mScaleToMillimeter_1;
	// Vuforia.SmartTerrainBuilderImpl Vuforia.SmartTerrainTrackerImpl::mSmartTerrainBuilder
	SmartTerrainBuilderImpl_t800 * ___mSmartTerrainBuilder_2;
};
