#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppManager
struct AppManager_t11;
// SampleInitErrorHandler
struct SampleInitErrorHandler_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SceneViewManager
struct  SceneViewManager_t37  : public MonoBehaviour_t12
{
	// AppManager SceneViewManager::mAppManager
	AppManager_t11 * ___mAppManager_1;
	// SampleInitErrorHandler SceneViewManager::mPopUpMsg
	SampleInitErrorHandler_t36 * ___mPopUpMsg_2;
	// System.Boolean SceneViewManager::mErrorOccurred
	bool ___mErrorOccurred_3;
};
