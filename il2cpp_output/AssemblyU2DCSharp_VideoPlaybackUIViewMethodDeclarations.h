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

// VideoPlaybackUIView
struct VideoPlaybackUIView_t125;
// System.Action
struct Action_t3;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"

// System.Void VideoPlaybackUIView::.ctor()
extern "C" void VideoPlaybackUIView__ctor_m382 (VideoPlaybackUIView_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::add_TappedToClose(System.Action)
extern "C" void VideoPlaybackUIView_add_TappedToClose_m383 (VideoPlaybackUIView_t125 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::remove_TappedToClose(System.Action)
extern "C" void VideoPlaybackUIView_remove_TappedToClose_m384 (VideoPlaybackUIView_t125 * __this, Action_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/FocusMode VideoPlaybackUIView::get_FocusMode()
extern "C" int32_t VideoPlaybackUIView_get_FocusMode_m385 (VideoPlaybackUIView_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::set_FocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" void VideoPlaybackUIView_set_FocusMode_m386 (VideoPlaybackUIView_t125 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::LoadView()
extern "C" void VideoPlaybackUIView_LoadView_m387 (VideoPlaybackUIView_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::UnLoadView()
extern "C" void VideoPlaybackUIView_UnLoadView_m388 (VideoPlaybackUIView_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::UpdateUI(System.Boolean)
extern "C" void VideoPlaybackUIView_UpdateUI_m389 (VideoPlaybackUIView_t125 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlaybackUIView::OnTappedToClose()
extern "C" void VideoPlaybackUIView_OnTappedToClose_m390 (VideoPlaybackUIView_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
