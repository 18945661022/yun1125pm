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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t732;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t855;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t886;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl__ctor_m4226 (CloudRecoImageTargetImpl_t732 * __this, String_t* ___name, int32_t ___id, Vector3_t17  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C" int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m4227 (CloudRecoImageTargetImpl_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C" Vector3_t17  CloudRecoImageTargetImpl_GetSize_m4228 (CloudRecoImageTargetImpl_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl_SetSize_m4229 (CloudRecoImageTargetImpl_t732 * __this, Vector3_t17  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t855 * CloudRecoImageTargetImpl_CreateVirtualButton_m4230 (CloudRecoImageTargetImpl_t732 * __this, String_t* ___name, RectangleData_t725  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t855 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m4231 (CloudRecoImageTargetImpl_t732 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* CloudRecoImageTargetImpl_GetVirtualButtons_m4232 (CloudRecoImageTargetImpl_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool CloudRecoImageTargetImpl_DestroyVirtualButton_m4233 (CloudRecoImageTargetImpl_t732 * __this, VirtualButton_t855 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StartExtendedTracking_m4234 (CloudRecoImageTargetImpl_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StopExtendedTracking_m4235 (CloudRecoImageTargetImpl_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
