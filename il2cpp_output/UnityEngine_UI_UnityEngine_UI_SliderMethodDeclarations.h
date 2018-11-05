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

// UnityEngine.UI.Slider
struct Slider_t368;
// UnityEngine.RectTransform
struct RectTransform_t295;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t366;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t260;
// UnityEngine.Camera
struct Camera_t102;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t257;
// UnityEngine.UI.Selectable
struct Selectable_t284;
// UnityEngine.Transform
struct Transform_t100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C" void Slider__ctor_m1657 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C" RectTransform_t295 * Slider_get_fillRect_m1658 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C" void Slider_set_fillRect_m1659 (Slider_t368 * __this, RectTransform_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C" RectTransform_t295 * Slider_get_handleRect_m1660 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C" void Slider_set_handleRect_m1661 (Slider_t368 * __this, RectTransform_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C" int32_t Slider_get_direction_m1662 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C" void Slider_set_direction_m1663 (Slider_t368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C" float Slider_get_minValue_m1664 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C" void Slider_set_minValue_m1665 (Slider_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C" float Slider_get_maxValue_m1666 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C" void Slider_set_maxValue_m1667 (Slider_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C" bool Slider_get_wholeNumbers_m1668 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C" void Slider_set_wholeNumbers_m1669 (Slider_t368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C" float Slider_get_value_m1670 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C" void Slider_set_value_m1671 (Slider_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C" float Slider_get_normalizedValue_m1672 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C" void Slider_set_normalizedValue_m1673 (Slider_t368 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C" SliderEvent_t366 * Slider_get_onValueChanged_m1674 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C" void Slider_set_onValueChanged_m1675 (Slider_t368 * __this, SliderEvent_t366 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C" float Slider_get_stepSize_m1676 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Slider_Rebuild_m1677 (Slider_t368 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C" void Slider_OnEnable_m1678 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C" void Slider_OnDisable_m1679 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C" void Slider_UpdateCachedReferences_m1680 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C" void Slider_Set_m1681 (Slider_t368 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C" void Slider_Set_m1682 (Slider_t368 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C" void Slider_OnRectTransformDimensionsChange_m1683 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C" int32_t Slider_get_axis_m1684 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C" bool Slider_get_reverseValue_m1685 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C" void Slider_UpdateVisuals_m1686 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C" void Slider_UpdateDrag_m1687 (Slider_t368 * __this, PointerEventData_t260 * ___eventData, Camera_t102 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Slider_MayDrag_m1688 (Slider_t368 * __this, PointerEventData_t260 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnPointerDown_m1689 (Slider_t368 * __this, PointerEventData_t260 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnDrag_m1690 (Slider_t368 * __this, PointerEventData_t260 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Slider_OnMove_m1691 (Slider_t368 * __this, AxisEventData_t257 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C" Selectable_t284 * Slider_FindSelectableOnLeft_m1692 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C" Selectable_t284 * Slider_FindSelectableOnRight_m1693 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C" Selectable_t284 * Slider_FindSelectableOnUp_m1694 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C" Selectable_t284 * Slider_FindSelectableOnDown_m1695 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnInitializePotentialDrag_m1696 (Slider_t368 * __this, PointerEventData_t260 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C" void Slider_SetDirection_m1697 (Slider_t368 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m1698 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t100 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m1699 (Slider_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
