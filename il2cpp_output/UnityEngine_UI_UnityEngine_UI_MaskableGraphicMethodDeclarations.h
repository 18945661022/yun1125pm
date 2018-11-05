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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t316;
// UnityEngine.Material
struct Material_t114;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C" void MaskableGraphic__ctor_m1457 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
extern "C" bool MaskableGraphic_get_maskable_m1458 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
extern "C" void MaskableGraphic_set_maskable_m1459 (MaskableGraphic_t316 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::get_material()
extern "C" Material_t114 * MaskableGraphic_get_material_m1460 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_material(UnityEngine.Material)
extern "C" void MaskableGraphic_set_material_m1461 (MaskableGraphic_t316 * __this, Material_t114 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateInternalState()
extern "C" void MaskableGraphic_UpdateInternalState_m1462 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
extern "C" void MaskableGraphic_OnEnable_m1463 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
extern "C" void MaskableGraphic_OnDisable_m1464 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnTransformParentChanged()
extern "C" void MaskableGraphic_OnTransformParentChanged_m1465 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ParentMaskStateChanged()
extern "C" void MaskableGraphic_ParentMaskStateChanged_m1466 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ClearMaskMaterial()
extern "C" void MaskableGraphic_ClearMaskMaterial_m1467 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::SetMaterialDirty()
extern "C" void MaskableGraphic_SetMaterialDirty_m1468 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskableGraphic::GetStencilForGraphic()
extern "C" int32_t MaskableGraphic_GetStencilForGraphic_m1469 (MaskableGraphic_t316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
