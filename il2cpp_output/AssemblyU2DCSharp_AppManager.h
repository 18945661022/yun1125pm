#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ISampleAppUIEventHandler
struct ISampleAppUIEventHandler_t13;
// SplashScreenView
struct SplashScreenView_t14;
// AboutScreenView
struct AboutScreenView_t1;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_AppManager_ViewType.h"

// AppManager
struct  AppManager_t11  : public MonoBehaviour_t12
{
	// System.String AppManager::TitleForAboutPage
	String_t* ___TitleForAboutPage_1;
	// ISampleAppUIEventHandler AppManager::m_UIEventHandler
	ISampleAppUIEventHandler_t13 * ___m_UIEventHandler_2;
	// SplashScreenView AppManager::mSplashView
	SplashScreenView_t14 * ___mSplashView_4;
	// AboutScreenView AppManager::mAboutView
	AboutScreenView_t1 * ___mAboutView_5;
	// System.Single AppManager::mSecondsVisible
	float ___mSecondsVisible_6;
};
struct AppManager_t11_StaticFields{
	// AppManager/ViewType AppManager::mActiveViewType
	int32_t ___mActiveViewType_3;
};
