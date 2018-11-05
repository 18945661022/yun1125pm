#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t4;
// AppManager
struct AppManager_t11;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_SampleInitErrorHandler_ErrorData.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// SampleInitErrorHandler
struct  SampleInitErrorHandler_t36  : public MonoBehaviour_t12
{
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorTitleMessage
	GUIStyle_t4 * ___mErrorTitleMessage_1;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorBodyMessage
	GUIStyle_t4 * ___mErrorBodyMessage_2;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorOkButton
	GUIStyle_t4 * ___mErrorOkButton_3;
	// SampleInitErrorHandler/ErrorData SampleInitErrorHandler::mCurrentError
	ErrorData_t35  ___mCurrentError_4;
	// AppManager SampleInitErrorHandler::mManager
	AppManager_t11 * ___mManager_5;
	// Vuforia.VuforiaUnity/InitError SampleInitErrorHandler::mErrorcode
	int32_t ___mErrorcode_6;
};
