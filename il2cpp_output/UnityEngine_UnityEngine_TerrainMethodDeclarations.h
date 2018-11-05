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

// UnityEngine.Terrain
struct Terrain_t1135;
// UnityEngine.TerrainData
struct TerrainData_t1132;
// UnityEngine.Material
struct Material_t114;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t1238;
// UnityEngine.GameObject
struct GameObject_t43;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_TerrainRenderFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_TreeInstance.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TerrainChangedFlags.h"

// System.Void UnityEngine.Terrain::.ctor()
extern "C" void Terrain__ctor_m6637 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::get_InstanceObject()
extern "C" IntPtr_t Terrain_get_InstanceObject_m6638 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_InstanceObject(System.IntPtr)
extern "C" void Terrain_set_InstanceObject_m6639 (Terrain_t1135 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDestroy()
extern "C" void Terrain_OnDestroy_m6640 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::MakeSureObjectIsAlive()
extern "C" void Terrain_MakeSureObjectIsAlive_m6641 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Cleanup(System.IntPtr)
extern "C" void Terrain_Cleanup_m6642 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainRenderFlags UnityEngine.Terrain::get_editorRenderFlags()
extern "C" int32_t Terrain_get_editorRenderFlags_m6643 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)
extern "C" void Terrain_set_editorRenderFlags_m6644 (Terrain_t1135 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::GetEditorRenderFlags(System.IntPtr)
extern "C" int32_t Terrain_GetEditorRenderFlags_m6645 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetEditorRenderFlags(System.IntPtr,System.Int32)
extern "C" void Terrain_SetEditorRenderFlags_m6646 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" TerrainData_t1132 * Terrain_get_terrainData_m6647 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_terrainData(UnityEngine.TerrainData)
extern "C" void Terrain_set_terrainData_m6648 (Terrain_t1135 * __this, TerrainData_t1132 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::Internal_GetTerrainData(System.IntPtr)
extern "C" TerrainData_t1132 * Terrain_Internal_GetTerrainData_m6649 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTerrainData(System.IntPtr,UnityEngine.TerrainData)
extern "C" void Terrain_Internal_SetTerrainData_m6650 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, TerrainData_t1132 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeDistance()
extern "C" float Terrain_get_treeDistance_m6651 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
extern "C" void Terrain_set_treeDistance_m6652 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeDistance_m6653 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeDistance_m6654 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeBillboardDistance()
extern "C" float Terrain_get_treeBillboardDistance_m6655 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
extern "C" void Terrain_set_treeBillboardDistance_m6656 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeBillboardDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeBillboardDistance_m6657 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeBillboardDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeBillboardDistance_m6658 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeCrossFadeLength()
extern "C" float Terrain_get_treeCrossFadeLength_m6659 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)
extern "C" void Terrain_set_treeCrossFadeLength_m6660 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeCrossFadeLength(System.IntPtr)
extern "C" float Terrain_Internal_GetTreeCrossFadeLength_m6661 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeCrossFadeLength(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetTreeCrossFadeLength_m6662 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_treeMaximumFullLODCount()
extern "C" int32_t Terrain_get_treeMaximumFullLODCount_m6663 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
extern "C" void Terrain_set_treeMaximumFullLODCount_m6664 (Terrain_t1135 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetTreeMaximumFullLODCount(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetTreeMaximumFullLODCount_m6665 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeMaximumFullLODCount(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetTreeMaximumFullLODCount_m6666 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDistance()
extern "C" float Terrain_get_detailObjectDistance_m6667 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
extern "C" void Terrain_set_detailObjectDistance_m6668 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetDetailObjectDistance_m6669 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetDetailObjectDistance_m6670 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
extern "C" float Terrain_get_detailObjectDensity_m6671 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
extern "C" void Terrain_set_detailObjectDensity_m6672 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDensity(System.IntPtr)
extern "C" float Terrain_Internal_GetDetailObjectDensity_m6673 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDensity(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetDetailObjectDensity_m6674 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_heightmapPixelError()
extern "C" float Terrain_get_heightmapPixelError_m6675 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapPixelError(System.Single)
extern "C" void Terrain_set_heightmapPixelError_m6676 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetHeightmapPixelError(System.IntPtr)
extern "C" float Terrain_Internal_GetHeightmapPixelError_m6677 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapPixelError(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetHeightmapPixelError_m6678 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_heightmapMaximumLOD()
extern "C" int32_t Terrain_get_heightmapMaximumLOD_m6679 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)
extern "C" void Terrain_set_heightmapMaximumLOD_m6680 (Terrain_t1135 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetHeightmapMaximumLOD(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetHeightmapMaximumLOD_m6681 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapMaximumLOD(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetHeightmapMaximumLOD_m6682 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_basemapDistance()
extern "C" float Terrain_get_basemapDistance_m6683 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_basemapDistance(System.Single)
extern "C" void Terrain_set_basemapDistance_m6684 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetBasemapDistance(System.IntPtr)
extern "C" float Terrain_Internal_GetBasemapDistance_m6685 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetBasemapDistance(System.IntPtr,System.Single)
extern "C" void Terrain_Internal_SetBasemapDistance_m6686 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_splatmapDistance()
extern "C" float Terrain_get_splatmapDistance_m6687 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_splatmapDistance(System.Single)
extern "C" void Terrain_set_splatmapDistance_m6688 (Terrain_t1135 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapIndex()
extern "C" int32_t Terrain_get_lightmapIndex_m6689 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapIndex(System.Int32)
extern "C" void Terrain_set_lightmapIndex_m6690 (Terrain_t1135 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetLightmapIndex(System.Int32)
extern "C" void Terrain_SetLightmapIndex_m6691 (Terrain_t1135 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ShiftLightmapIndex(System.Int32)
extern "C" void Terrain_ShiftLightmapIndex_m6692 (Terrain_t1135 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapIndex(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetLightmapIndex_m6693 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapIndex(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetLightmapIndex_m6694 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapSize()
extern "C" int32_t Terrain_get_lightmapSize_m6695 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapSize(System.Int32)
extern "C" void Terrain_set_lightmapSize_m6696 (Terrain_t1135 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapSize(System.IntPtr)
extern "C" int32_t Terrain_Internal_GetLightmapSize_m6697 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapSize(System.IntPtr,System.Int32)
extern "C" void Terrain_Internal_SetLightmapSize_m6698 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_castShadows()
extern "C" bool Terrain_get_castShadows_m6699 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_castShadows(System.Boolean)
extern "C" void Terrain_set_castShadows_m6700 (Terrain_t1135 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCastShadows(System.IntPtr)
extern "C" bool Terrain_Internal_GetCastShadows_m6701 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCastShadows(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetCastShadows_m6702 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::get_materialTemplate()
extern "C" Material_t114 * Terrain_get_materialTemplate_m6703 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)
extern "C" void Terrain_set_materialTemplate_m6704 (Terrain_t1135 * __this, Material_t114 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::Internal_GetMaterialTemplate(System.IntPtr)
extern "C" Material_t114 * Terrain_Internal_GetMaterialTemplate_m6705 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetMaterialTemplate(System.IntPtr,UnityEngine.Material)
extern "C" void Terrain_Internal_SetMaterialTemplate_m6706 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, Material_t114 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_drawTreesAndFoliage()
extern "C" bool Terrain_get_drawTreesAndFoliage_m6707 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
extern "C" void Terrain_set_drawTreesAndFoliage_m6708 (Terrain_t1135 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetDrawTreesAndFoliage(System.IntPtr)
extern "C" bool Terrain_Internal_GetDrawTreesAndFoliage_m6709 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDrawTreesAndFoliage(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetDrawTreesAndFoliage_m6710 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_collectDetailPatches()
extern "C" bool Terrain_get_collectDetailPatches_m6711 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_collectDetailPatches(System.Boolean)
extern "C" void Terrain_set_collectDetailPatches_m6712 (Terrain_t1135 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCollectDetailPatches(System.IntPtr)
extern "C" bool Terrain_Internal_GetCollectDetailPatches_m6713 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCollectDetailPatches(System.IntPtr,System.Boolean)
extern "C" void Terrain_Internal_SetCollectDetailPatches_m6714 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C" float Terrain_SampleHeight_m6715 (Terrain_t1135 * __this, Vector3_t17  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_SampleHeight(System.IntPtr,UnityEngine.Vector3)
extern "C" float Terrain_Internal_SampleHeight_m6716 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, Vector3_t17  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::INTERNAL_CALL_Internal_SampleHeight(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector3&)
extern "C" float Terrain_INTERNAL_CALL_Internal_SampleHeight_m6717 (Object_t * __this /* static, unused */, Terrain_t1135 * ___self, IntPtr_t ___terrainInstance, Vector3_t17 * ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ApplyDelayedHeightmapModification()
extern "C" void Terrain_ApplyDelayedHeightmapModification_m6718 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_ApplyDelayedHeightmapModification(System.IntPtr)
extern "C" void Terrain_Internal_ApplyDelayedHeightmapModification_m6719 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::AddTreeInstance(UnityEngine.TreeInstance)
extern "C" void Terrain_AddTreeInstance_m6720 (Terrain_t1135 * __this, TreeInstance_t1131  ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_AddTreeInstance(System.IntPtr,UnityEngine.TreeInstance)
extern "C" void Terrain_Internal_AddTreeInstance_m6721 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, TreeInstance_t1131  ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_AddTreeInstance(UnityEngine.Terrain,System.IntPtr,UnityEngine.TreeInstance&)
extern "C" void Terrain_INTERNAL_CALL_Internal_AddTreeInstance_m6722 (Object_t * __this /* static, unused */, Terrain_t1135 * ___self, IntPtr_t ___terrainInstance, TreeInstance_t1131 * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
extern "C" void Terrain_SetNeighbors_m6723 (Terrain_t1135 * __this, Terrain_t1135 * ___left, Terrain_t1135 * ___top, Terrain_t1135 * ___right, Terrain_t1135 * ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetNeighbors(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" void Terrain_Internal_SetNeighbors_m6724 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, IntPtr_t ___left, IntPtr_t ___top, IntPtr_t ___right, IntPtr_t ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
extern "C" Vector3_t17  Terrain_GetPosition_m6725 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::Internal_GetPosition(System.IntPtr)
extern "C" Vector3_t17  Terrain_Internal_GetPosition_m6726 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Flush()
extern "C" void Terrain_Flush_m6727 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_Flush(System.IntPtr)
extern "C" void Terrain_Internal_Flush_m6728 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::RemoveTrees(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" void Terrain_RemoveTrees_m6729 (Terrain_t1135 * __this, Vector2_t7  ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_RemoveTrees(System.IntPtr,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" void Terrain_Internal_RemoveTrees_m6730 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, Vector2_t7  ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_RemoveTrees(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector2&,System.Single,System.Int32)
extern "C" void Terrain_INTERNAL_CALL_Internal_RemoveTrees_m6731 (Object_t * __this /* static, unused */, Terrain_t1135 * ___self, IntPtr_t ___terrainInstance, Vector2_t7 * ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnTerrainChanged(UnityEngine.TerrainChangedFlags)
extern "C" void Terrain_OnTerrainChanged_m6732 (Terrain_t1135 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnTerrainChanged(System.IntPtr,UnityEngine.TerrainChangedFlags)
extern "C" void Terrain_Internal_OnTerrainChanged_m6733 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::Construct()
extern "C" IntPtr_t Terrain_Construct_m6734 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnEnable()
extern "C" void Terrain_OnEnable_m6735 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnEnable(System.IntPtr)
extern "C" void Terrain_Internal_OnEnable_m6736 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDisable()
extern "C" void Terrain_OnDisable_m6737 (Terrain_t1135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnDisable(System.IntPtr)
extern "C" void Terrain_Internal_OnDisable_m6738 (Terrain_t1135 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C" Terrain_t1135 * Terrain_get_activeTerrain_m6739 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
extern "C" TerrainU5BU5D_t1238* Terrain_get_activeTerrains_m6740 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)
extern "C" GameObject_t43 * Terrain_CreateTerrainGameObject_m6741 (Object_t * __this /* static, unused */, TerrainData_t1132 * ___assignTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ReconnectTerrainData()
extern "C" void Terrain_ReconnectTerrainData_m6742 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
