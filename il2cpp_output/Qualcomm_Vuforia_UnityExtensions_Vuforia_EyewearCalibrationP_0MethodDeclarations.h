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

// Vuforia.EyewearCalibrationProfileManagerImpl
struct EyewearCalibrationProfileManagerImpl_t677;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Eyewear_EyeID.h"

// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C" int32_t EyewearCalibrationProfileManagerImpl_getMaxCount_m3817 (EyewearCalibrationProfileManagerImpl_t677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C" int32_t EyewearCalibrationProfileManagerImpl_getUsedCount_m3818 (EyewearCalibrationProfileManagerImpl_t677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C" bool EyewearCalibrationProfileManagerImpl_isProfileUsed_m3819 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C" int32_t EyewearCalibrationProfileManagerImpl_getActiveProfile_m3820 (EyewearCalibrationProfileManagerImpl_t677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C" bool EyewearCalibrationProfileManagerImpl_setActiveProfile_m3821 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getProjectionMatrix(System.Int32,Vuforia.Eyewear/EyeID)
extern "C" Matrix4x4_t101  EyewearCalibrationProfileManagerImpl_getProjectionMatrix_m3822 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProjectionMatrix(System.Int32,Vuforia.Eyewear/EyeID,UnityEngine.Matrix4x4)
extern "C" bool EyewearCalibrationProfileManagerImpl_setProjectionMatrix_m3823 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t101  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.EyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C" String_t* EyewearCalibrationProfileManagerImpl_getProfileName_m3824 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C" bool EyewearCalibrationProfileManagerImpl_setProfileName_m3825 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C" bool EyewearCalibrationProfileManagerImpl_clearProfile_m3826 (EyewearCalibrationProfileManagerImpl_t677 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearCalibrationProfileManagerImpl::.ctor()
extern "C" void EyewearCalibrationProfileManagerImpl__ctor_m3827 (EyewearCalibrationProfileManagerImpl_t677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
