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

// Vuforia.WebCamProfile
struct WebCamProfile_t861;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C" ProfileData_t858  WebCamProfile_get_Default_m5550 (WebCamProfile_t861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C" void WebCamProfile__ctor_m5551 (WebCamProfile_t861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C" ProfileData_t858  WebCamProfile_GetProfile_m5552 (WebCamProfile_t861 * __this, String_t* ___webcamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C" bool WebCamProfile_ProfileAvailable_m5553 (WebCamProfile_t861 * __this, String_t* ___webcamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
