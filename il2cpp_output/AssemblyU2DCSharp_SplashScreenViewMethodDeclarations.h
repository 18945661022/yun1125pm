#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SplashScreenView
struct SplashScreenView_t14;
// UnityEngine.Texture2D
struct Texture2D_t38;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t39;

#include "codegen/il2cpp-codegen.h"

// System.Void SplashScreenView::.ctor()
extern "C" void SplashScreenView__ctor_m92 (SplashScreenView_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::LoadView()
extern "C" void SplashScreenView_LoadView_m93 (SplashScreenView_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::UnLoadView()
extern "C" void SplashScreenView_UnLoadView_m94 (SplashScreenView_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::UpdateUI(System.Boolean)
extern "C" void SplashScreenView_UpdateUI_m95 (SplashScreenView_t14 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D SplashScreenView::PickImageWithBestAspect(UnityEngine.Texture2D[])
extern "C" Texture2D_t38 * SplashScreenView_PickImageWithBestAspect_m96 (SplashScreenView_t14 * __this, Texture2DU5BU5D_t39* ___splashImages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
