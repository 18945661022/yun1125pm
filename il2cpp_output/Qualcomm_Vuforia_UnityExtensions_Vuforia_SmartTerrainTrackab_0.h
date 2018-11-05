﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
struct List_1_t798;
// UnityEngine.Mesh
struct Mesh_t191;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t720;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"

// Vuforia.SmartTerrainTrackableImpl
struct  SmartTerrainTrackableImpl_t797  : public TrackableImpl_t704
{
	// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::mChildren
	List_1_t798 * ___mChildren_2;
	// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::mMesh
	Mesh_t191 * ___mMesh_3;
	// System.Int32 Vuforia.SmartTerrainTrackableImpl::mMeshRevision
	int32_t ___mMeshRevision_4;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.SmartTerrainTrackableImpl::mLocalPose
	PoseData_t768  ___mLocalPose_5;
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::<Parent>k__BackingField
	Object_t * ___U3CParentU3Ek__BackingField_6;
};
