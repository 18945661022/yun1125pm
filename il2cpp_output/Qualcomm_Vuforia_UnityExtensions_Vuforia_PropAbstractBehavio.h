#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Prop
struct Prop_t144;
// UnityEngine.BoxCollider
struct BoxCollider_t840;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTrackab.h"

// Vuforia.PropAbstractBehaviour
struct  PropAbstractBehaviour_t85  : public SmartTerrainTrackableBehaviour_t718
{
	// Vuforia.Prop Vuforia.PropAbstractBehaviour::mProp
	Object_t * ___mProp_12;
	// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::mBoxColliderToUpdate
	BoxCollider_t840 * ___mBoxColliderToUpdate_13;
};
