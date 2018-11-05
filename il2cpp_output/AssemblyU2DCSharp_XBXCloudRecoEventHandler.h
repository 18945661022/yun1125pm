#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.CloudRecoBehaviour
struct CloudRecoBehaviour_t48;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t43;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// XBXCloudRecoEventHandler
struct  XBXCloudRecoEventHandler_t126  : public MonoBehaviour_t12
{
	// Vuforia.CloudRecoBehaviour XBXCloudRecoEventHandler::mCloudRecoBehaviour
	CloudRecoBehaviour_t48 * ___mCloudRecoBehaviour_1;
	// System.String XBXCloudRecoEventHandler::mTargetMetadata
	String_t* ___mTargetMetadata_2;
	// UnityEngine.GameObject XBXCloudRecoEventHandler::ImageTargetObject
	GameObject_t43 * ___ImageTargetObject_3;
	// System.String XBXCloudRecoEventHandler::lastId
	String_t* ___lastId_4;
};
