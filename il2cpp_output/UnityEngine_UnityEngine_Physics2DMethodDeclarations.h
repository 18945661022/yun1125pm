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

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t453;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m6546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m6547 (Object_t * __this /* static, unused */, Vector2_t7  ___origin, Vector2_t7  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t456 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m6548 (Object_t * __this /* static, unused */, Vector2_t7 * ___origin, Vector2_t7 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t456 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t456  Physics2D_Raycast_m2194 (Object_t * __this /* static, unused */, Vector2_t7  ___origin, Vector2_t7  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t456  Physics2D_Raycast_m6549 (Object_t * __this /* static, unused */, Vector2_t7  ___origin, Vector2_t7  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t453* Physics2D_RaycastAll_m2110 (Object_t * __this /* static, unused */, Vector2_t7  ___origin, Vector2_t7  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t453* Physics2D_INTERNAL_CALL_RaycastAll_m6550 (Object_t * __this /* static, unused */, Vector2_t7 * ___origin, Vector2_t7 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single,System.Int32)
extern "C" int32_t Physics2D_GetRayIntersectionNonAlloc_m6551 (Object_t * __this /* static, unused */, Ray_t196  ___ray, RaycastHit2DU5BU5D_t453* ___results, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionNonAlloc(UnityEngine.Ray&,UnityEngine.RaycastHit2D[],System.Single,System.Int32)
extern "C" int32_t Physics2D_INTERNAL_CALL_GetRayIntersectionNonAlloc_m6552 (Object_t * __this /* static, unused */, Ray_t196 * ___ray, RaycastHit2DU5BU5D_t453* ___results, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
