///////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2002-2020, Open Design Alliance (the "Alliance").
// All rights reserved.
//
// This software and its documentation and related materials are owned by
// the Alliance. The software may only be incorporated into application
// programs owned by members of the Alliance, subject to a signed
// Membership Agreement and Supplemental Software License Agreement with the
// Alliance. The structure and organization of this software are the valuable
// trade secrets of the Alliance and its suppliers. The software is also
// protected by copyright law and international treaty provisions. Application
// programs incorporating this software must include the following statement
// with their copyright notices:
//
//   This application incorporates Open Design Alliance software pursuant to a license
//   agreement with Open Design Alliance.
//   Open Design Alliance Copyright (C) 2002-2020 by Open Design Alliance.
//   All rights reserved.
//
// By use of this software, its documentation or related materials, you
// acknowledge and accept the above terms.
///////////////////////////////////////////////////////////////////////////////

#ifndef _BM_UNIQUEELEMENTTYPE_H_
#define _BM_UNIQUEELEMENTTYPE_H_

#define ODBM_UNIQUEELEMENTTYPES_SMART_LIST(PARAM_DEF, MAP_PARAM_DEF, ...)      \
  MAP_PARAM_DEF(ViewReferencing, 0, OdBmViewReferencing)                       \
  MAP_PARAM_DEF(ViewRegenTrigger, 1, OdBmViewRegenTrigger)                     \
  MAP_PARAM_DEF(ProjectInfo, 2, OdBmProjectInfo)                               \
  MAP_PARAM_DEF(AreaSettingsElem, 3, OdBmAreaSettingsElem)                     \
  MAP_PARAM_DEF(ReactionsUpToDateElem, 4, OdBmReactionsUpToDateElem)           \
  MAP_PARAM_DEF(CoordinateSystemDisplayElem, 5,                                \
                OdBmCoordinateSystemDisplayElem)                               \
  MAP_PARAM_DEF(AnalyticalSupportTracker, 6, OdBmAnalyticalSupportTracker)     \
  MAP_PARAM_DEF(WallJoinDefaultSetting, 7, OdBmWallJoinDefaultSetting)         \
  MAP_PARAM_DEF(GridSettings, 8, OdBmGridSettings)                             \
  MAP_PARAM_DEF(DGNSATExportSettingsElem, 9, OdBmDwg2dExportUserSettingsData)  \
  MAP_PARAM_DEF(AutoCamSettingsElem, 10, OdBmAutoCamSettingsElem)              \
  MAP_PARAM_DEF(AutoJoinTracker, 11, OdBmAutoJoinTracker)                      \
  MAP_PARAM_DEF(AnalyticalSetTracker, 12, OdBmAnalyticalSetTracker)            \
  MAP_PARAM_DEF(AnalyticalAutofixTracker, 13, OdBmAnalyticalAutofixTracker)    \
  MAP_PARAM_DEF(AnalyticalOctreeTracker, 14, OdBmAnalyticalOctreeTracker)      \
  MAP_PARAM_DEF(GCSTracker, 15, OdBmGCSTracker)                                \
  MAP_PARAM_DEF(ActiveGeoLocationTrackingElement, 16,                          \
                OdBmActiveGeoLocationTrackingElement)                          \
  MAP_PARAM_DEF(WorksetVisibilitySettingsElem, 17,                             \
                OdBmWorksetVisibilitySettingsElem)                             \
  MAP_PARAM_DEF(ProjectCopySettingsElem, 18, OdBmProjectCopySettingsElem)      \
  MAP_PARAM_DEF(EnergyDataSettings, 19, OdBmEnergyDataSettings)                \
  MAP_PARAM_DEF(ConceptualSurfaceTypeInteriorWall, 20,                         \
                OdBmConceptualSurfaceTypeInteriorWall)                         \
  MAP_PARAM_DEF(ConceptualSurfaceTypeExteriorWall, 21,                         \
                OdBmConceptualSurfaceTypeExteriorWall)                         \
  MAP_PARAM_DEF(ConceptualSurfaceTypeExteriorWallUnderground, 22,              \
                OdBmConceptualSurfaceTypeExteriorWallUnderground)              \
  MAP_PARAM_DEF(ConceptualSurfaceTypeRoof, 23, OdBmConceptualSurfaceTypeRoof)  \
  MAP_PARAM_DEF(ConceptualSurfaceTypeRoofUndergroundObsolete, 24,              \
                OdBmConceptualSurfaceTypeRoofUndergroundObsolete)              \
  MAP_PARAM_DEF(ConceptualSurfaceTypeFloor, 25,                                \
                OdBmConceptualSurfaceTypeFloor)                                \
  MAP_PARAM_DEF(ConceptualSurfaceTypeSlab, 26, OdBmConceptualSurfaceTypeSlab)  \
  MAP_PARAM_DEF(ConceptualSurfaceTypeOpening, 27,                              \
                OdBmConceptualSurfaceTypeOpening)                              \
  MAP_PARAM_DEF(ConceptualSurfaceTypeWindow, 28,                               \
                OdBmConceptualSurfaceTypeWindow)                               \
  MAP_PARAM_DEF(ConceptualSurfaceTypeSkylights, 29,                            \
                OdBmConceptualSurfaceTypeSkylights)                            \
  MAP_PARAM_DEF(ConceptualSurfaceTypeShade, 30,                                \
                OdBmConceptualSurfaceTypeShade)                                \
  MAP_PARAM_DEF(ListConceptualSurfaceTypes, 31,                                \
                OdBmListConceptualSurfaceTypes)                                \
  MAP_PARAM_DEF(ReconcileBrowserSettingsElem, 32,                              \
                OdBmReconcileBrowserSettingsElem)                              \
  MAP_PARAM_DEF(StructuralSettings, 33, OdBmStructSettingsElem)                \
  MAP_PARAM_DEF(ConceptualSurfaceTypeExteriorFloorObsolete, 34,                \
                OdBmConceptualSurfaceTypeExteriorFloorObsolete)                \
  MAP_PARAM_DEF(ConceptualSurfaceTypeInteriorSlabObsolete, 35,                 \
                OdBmConceptualSurfaceTypeInteriorSlabObsolete)                 \
  MAP_PARAM_DEF(MEPSystemTracker, 36, OdBmMEPSystemTracker)                    \
  MAP_PARAM_DEF(WorksharingViewModeSettingsObsolete, 37,                       \
                OdBmWorksharingViewModeSettingsObsolete)                       \
  MAP_PARAM_DEF(AssemblyTracker, 38, OdBmAssemblyTracker)                      \
  MAP_PARAM_DEF(VolumeDividerTracker, 39, OdBmVolumeDividerTracker)            \
  MAP_PARAM_DEF(SketchGridAppearanceParentElem, 40,                            \
                OdBmSketchGridAppearanceParentElem)                            \
  MAP_PARAM_DEF(RvtLinkInstanceAppearanceParentElem, 41,                       \
                OdBmRvtLinkInstanceAppearanceParentElem)                       \
  MAP_PARAM_DEF(HubsTracker, 42, OdBmHubsTracker)                              \
  MAP_PARAM_DEF(InitialViewSettings, 43, OdBmInitialViewSettings)              \
  MAP_PARAM_DEF(RbsPipeSettingsElem, 44, OdBmRbsPipeSettingsElem)              \
  MAP_PARAM_DEF(RbsPipeSizesElem, 45, OdBmRbsPipeSizesElem)                    \
  MAP_PARAM_DEF(UniqueEmptySlotInstance, 46, OdBmUniqueEmptySlotInstance)      \
  MAP_PARAM_DEF(UniqueDefaultSlotInstance, 47, OdBmUniqueDefaultSlotInstance)  \
  MAP_PARAM_DEF(RbsDuctSizesElem, 48, OdBmRbsDuctSizesElem)                    \
  MAP_PARAM_DEF(StairsSettings, 49, OdBmStairsSettings)                        \
  PARAM_DEF(AnalyticSpacesVoxelModel_Deprecated, 50)                           \
  MAP_PARAM_DEF(ReinforcementSettings, 51, OdBmReinforcementSettings)          \
  PARAM_DEF(AnalyticGeometryElem_Deprecated, 52)                               \
  MAP_PARAM_DEF(RbsWireSettingsElem, 53, OdBmRbsWireSettingsElem)              \
  MAP_PARAM_DEF(RevisionCloudsOnSheetsTracker, 54,                             \
                OdBmRevisionCloudsOnSheetsTracker)                             \
  MAP_PARAM_DEF(RbsWireSizesElem, 55, OdBmRbsWireSizesElem)                    \
  MAP_PARAM_DEF(RbsDuctSettingsElem, 56, OdBmRbsDuctSettingsElem)              \
  MAP_PARAM_DEF(KeynoteTagsOnSheetsTracker, 57,                                \
                OdBmKeynoteTagsOnSheetsTracker)                                \
  MAP_PARAM_DEF(MEPComponentTracker, 58, OdBmMEPComponentTracker)              \
  MAP_PARAM_DEF(ElectricalSetting, 59, OdBmElectricalSetting)                  \
  MAP_PARAM_DEF(DefaultDivideSettings, 60, OdBmDefaultDivideSettings)          \
  MAP_PARAM_DEF(FabricationConfiguration, 61, OdBmFabricationSettings)         \
  MAP_PARAM_DEF(RevisionSettings, 62, OdBmRevisionSettings)                    \
  MAP_PARAM_DEF(LayoutNodesTracker, 63, OdBmLayoutNodesTracker)                \
  MAP_PARAM_DEF(AssemblyCodeTable, 64, OdBmAssemblyCodeTable)                  \
  MAP_PARAM_DEF(KeynoteTable, 65, OdBmKeynoteTable)                            \
  MAP_PARAM_DEF(CableTraySizesElem, 66, OdBmCableTraySizesElem)                \
  MAP_PARAM_DEF(ConduitSizesElem, 67, OdBmConduitSizesElem)                    \
  MAP_PARAM_DEF(FamilySlaveTrackerGlobal, 68, OdBmFamilySlaveTrackerGlobal)    \
  MAP_PARAM_DEF(FabricationSettingsElement, 69,                                \
                OdBmFabricationSettingsElement)                                \
  MAP_PARAM_DEF(StructuralConnectionSettings, 70,                              \
                OdBmStructuralConnectionSettings)                              \
  MAP_PARAM_DEF(CableTraySettingsElem, 71, OdBmCableTraySettingsElem)          \
  MAP_PARAM_DEF(ConduitSettingsElem, 72, OdBmConduitSettingsElem)              \
  MAP_PARAM_DEF(MEPNetworkTracker, 73, OdBmMEPNetworkTracker)                  \
  MAP_PARAM_DEF(AllProjectPahses, 74, OdBmAllProjectPhases)                    \
  PARAM_DEF(Unknown_75, 75)                                                    \
  PARAM_DEF(LynxTracker_Deprecated, 76)                                        \
  PARAM_DEF(Unknown_77, 77)                                                    \
  PARAM_DEF(Unknown_78, 78)                                                    \
  MAP_PARAM_DEF(CircuitNamingTypeSetting, 79, OdBmCircuitNamingTypeSetting)    \
  MAP_PARAM_DEF(ForgeConnectionTracker, 80, OdBmForgeConnectionTracker)

#define ODBM_UNIQUEELEMENTTYPES_LIST(PARAM_DEF, ...) \
  ODBM_UNIQUEELEMENTTYPES_SMART_LIST(PARAM_DEF, PARAM_DEF)

ODBM_MAPPED_ENUMERATION(UniqueElementType, ODBM_UNIQUEELEMENTTYPES_LIST,
                        ODBM_UNIQUEELEMENTTYPES_SMART_LIST)

#endif // _BM_UNIQUEELEMENTTYPE_H_
