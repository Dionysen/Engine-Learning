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

#ifndef _BM_MANAGERTYPE_H_
#define _BM_MANAGERTYPE_H_

#define ODBM_MANAGER_TYPES_SMART_LIST(PARAM_DEF, MAP_PARAM_DEF, ...)           \
  MAP_PARAM_DEF(FamilyMgr, 0, OdBmFamilyMgrBase)                               \
  MAP_PARAM_DEF(SketchEditMgr, 1, OdBmSketchEditMgr)                           \
  MAP_PARAM_DEF(SymbolIdMgr, 2, OdBmSymbolIdMgr)                               \
  MAP_PARAM_DEF(ViewTable, 3, OdBmViewTable)                                   \
  PARAM_DEF(SnapValue_Deprecated, 4)                                           \
  MAP_PARAM_DEF(SketchPlaneInfo, 5, OdBmSketchPlaneInfo)                       \
  MAP_PARAM_DEF(DBDrawingInfo, 6, OdBmDBDrawingInfo)                           \
  MAP_PARAM_DEF(DimSides, 7, OdBmDimSides)                                     \
  MAP_PARAM_DEF(DimStyleId, 8, OdBmDimStyleId)                                 \
  MAP_PARAM_DEF(AppearanceInfo, 9, OdBmAppearanceInfo)                         \
  MAP_PARAM_DEF(SectionNaming, 10, OdBmSectionNaming)                          \
  MAP_PARAM_DEF(FillPatternInfo, 11, OdBmFillPatternInfo)                      \
  MAP_PARAM_DEF(LightMgr, 12, OdBmLightMgr)                                    \
  PARAM_DEF(Unknown_13, 13)                                                    \
  MAP_PARAM_DEF(ElementTracking, 14, OdBmElementTracking)                      \
  MAP_PARAM_DEF(PlanTopologyIdInfo, 15, OdBmPlanTopologyIdInfo)                \
  MAP_PARAM_DEF(AlignSides, 16, OdBmAlignSides)                                \
  MAP_PARAM_DEF(NewItemNumber, 17, OdBmNewItemNumber)                          \
  MAP_PARAM_DEF(LinkedFileInfo, 18, OdBmLinkedFileInfo)                        \
  PARAM_DEF(Unknown_19, 19)                                                    \
  MAP_PARAM_DEF(SurfacePatternInfo, 20, OdBmSurfacePatternInfo)                \
  MAP_PARAM_DEF(CategoryParamTracking, 21, OdBmCategoryParamTracking)          \
  MAP_PARAM_DEF(FillPatternTracking, 22, OdBmFillPatternTracking)              \
  MAP_PARAM_DEF(WallJoinEditMgr, 23, OdBmWallJoinEditMgr)                      \
  MAP_PARAM_DEF(ZoningAppInfo, 24, OdBmZoningAppInfo)                          \
  PARAM_DEF(Unknown_25, 25)                                                    \
  MAP_PARAM_DEF(ADocWarnings, 26, OdBmADocWarnings)                            \
  MAP_PARAM_DEF(WallOffsetAppInfo, 27, OdBmWallOffsetAppInfo)                  \
  MAP_PARAM_DEF(CategoryTracking, 28, OdBmCategoryTracking)                    \
  MAP_PARAM_DEF(MassingEditMgr, 29, OdBmMassingEditMgr)                        \
  MAP_PARAM_DEF(DetailLevelMgr, 30, OdBmDetailLevelMgr)                        \
  MAP_PARAM_DEF(SFCostIdInfo, 31, OdBmSFCostIdInfo)                            \
  MAP_PARAM_DEF(ElementTrackingData, 32, OdBmElementTrackingData)              \
  MAP_PARAM_DEF(MaterialTracking, 33, OdBmMaterialTracking)                    \
  MAP_PARAM_DEF(BaseLevelAppInfo, 34, OdBmBaseLevelAppInfo)                    \
  MAP_PARAM_DEF(RefTableInfo, 35, OdBmRefTableInfo)                            \
  MAP_PARAM_DEF(AllProjectPhasesInfo, 36, OdBmAllProjectPhasesInfo)            \
  MAP_PARAM_DEF(PhaseFilterTracking, 37, OdBmPhaseFilterTracking)              \
  MAP_PARAM_DEF(PenWidthTableInfo, 38, OdBmPenWidthTableInfo)                  \
  MAP_PARAM_DEF(JoinTrackerAppInfo, 39, OdBmJoinTrackerAppInfo)                \
  MAP_PARAM_DEF(LinePatternTracking, 40, OdBmLinePatternTracking)              \
  MAP_PARAM_DEF(SiteMgr, 41, OdBmSiteMgr)                                      \
  MAP_PARAM_DEF(RoomTracking, 42, OdBmRoomTracking)                            \
  MAP_PARAM_DEF(SiteSurfaceEditMgr, 43, OdBmSiteSurfaceEditMgr)                \
  MAP_PARAM_DEF(ElementGroupAppInfo, 44, OdBmElementGroupAppInfo)              \
  MAP_PARAM_DEF(AreaMeasureTracking, 45, OdBmAreaMeasureTracking)              \
  MAP_PARAM_DEF(LightGroupTracking, 46, OdBmLightGroupTracking)                \
  MAP_PARAM_DEF(MultiSketchElemEditMgr, 47, OdBmMultiSketchElemEditMgr)        \
  MAP_PARAM_DEF(GroupEditModeMgr, 48, OdBmGroupEditModeMgr)                    \
  MAP_PARAM_DEF(Path3dEditMgr, 49, OdBmPath3dEditMgr)                          \
  MAP_PARAM_DEF(SubstitutionManager, 50, OdBmSubstitutionManager)              \
  MAP_PARAM_DEF(ScheduleInstanceTracking, 51, OdBmScheduleInstanceTracking)    \
  MAP_PARAM_DEF(LevelPlanViewTracking, 52, OdBmLevelPlanViewTracking)          \
  MAP_PARAM_DEF(DatumTracking, 53, OdBmDatumTracking)                          \
  MAP_PARAM_DEF(MoribundElemTracking, 54, OdBmMoribundElemTracking)            \
  PARAM_DEF(OpenAlignmentTracking_Deprecated, 55)                              \
  MAP_PARAM_DEF(NewElementsVisibilityInfo, 56, OdBmNewElementsVisibilityInfo)  \
  MAP_PARAM_DEF(TransientElemSetTracking, 57, OdBmTransientElemSetTracking)    \
  MAP_PARAM_DEF(ExternalParamTracking, 58, OdBmExternalParamTracking)          \
  MAP_PARAM_DEF(ConstraintDimTracking, 59, OdBmConstraintDimTracking)          \
  MAP_PARAM_DEF(GroupHelperAppInfo, 60, OdBmGroupHelperAppInfo)                \
  MAP_PARAM_DEF(UnitsTracking, 61, OdBmUnitsTracking)                          \
  MAP_PARAM_DEF(SelectionHistory, 62, OdBmSelectionHistory)                    \
  MAP_PARAM_DEF(ViewSheetSetTracking, 63, OdBmViewSheetSetTracking)            \
  MAP_PARAM_DEF(PrintSettingsTracking, 64, OdBmPrintSettingsTracking)          \
  MAP_PARAM_DEF(RvtLinkTracking, 65, OdBmRvtLinkTracking)                      \
  MAP_PARAM_DEF(RvtTargetTracking, 66, OdBmRvtTargetTracking)                  \
  MAP_PARAM_DEF(ParamBindingTracking, 67, OdBmParamBindingTracking)            \
  MAP_PARAM_DEF(ProjectParamTracking, 68, OdBmProjectParamTracking)            \
  MAP_PARAM_DEF(RvtLinkInstTracking, 69, OdBmRvtLinkInstTracking)              \
  MAP_PARAM_DEF(InEditModeInfoMgr, 70, OdBmInEditModeInfoMgr)                  \
  PARAM_DEF(WallTypeWidthMgr_Deprecated, 71)                                   \
  MAP_PARAM_DEF(UniqueElementsTracking, 72, OdBmUniqueElementsTracking)        \
  MAP_PARAM_DEF(ViewCreationTracking, 73, OdBmViewCreationTracking)            \
  MAP_PARAM_DEF(TempModeInfo, 74, OdBmTempModeInfo)                            \
  MAP_PARAM_DEF(BrowserOrganizationTracking, 75,                               \
                OdBmBrowserOrganizationTracking)                               \
  MAP_PARAM_DEF(DesignOptionMgr, 76, OdBmDesignOptionMgr)                      \
  MAP_PARAM_DEF(TemporaryElements, 77, OdBmTemporaryElements)                  \
  MAP_PARAM_DEF(TemporaryUndoableElements, 78, OdBmTemporaryUndoableElements)  \
  MAP_PARAM_DEF(DesignOptionSetTracking, 79, OdBmDesignOptionSetTracking)      \
  MAP_PARAM_DEF(KeepAtLeastOneLevel, 80, OdBmKeepAtLeastOneLevel)              \
  MAP_PARAM_DEF(BasedOnTracker, 81, OdBmBasedOnTracker)                        \
  MAP_PARAM_DEF(AbsLayoutAppInfo, 82, OdBmAbsLayoutAppInfo)                    \
  MAP_PARAM_DEF(AbsSingleCurveTracking, 83, OdBmAbsSingleCurveTracking)        \
  PARAM_DEF(Unknown_84, 84)                                                    \
  MAP_PARAM_DEF(AutoDimOptions, 85, OdBmAutoDimOptions)                        \
  MAP_PARAM_DEF(FamSymGlobalSlaveCache, 86, OdBmFamSymGlobalSlaveCache)        \
  MAP_PARAM_DEF(AllProjectRevisionsInfo, 87, OdBmAllProjectRevisions)          \
  MAP_PARAM_DEF(StructMgr, 88, OdBmStructMgr)                                  \
  MAP_PARAM_DEF(CircuitGroupAppInfo, 89, OdBmCircuitGroupAppInfo)              \
  MAP_PARAM_DEF(CircuitGroupEditModeMgr, 90, OdBmCircuitGroupEditModeMgr)      \
  MAP_PARAM_DEF(CopyWatchModeMgr, 91, OdBmCopyWatchModeMgr)                    \
  MAP_PARAM_DEF(APIAppInfo, 92, OdBmAPIAppInfo)                                \
  MAP_PARAM_DEF(RbsMechanicalDisplayAppInfo, 93,                               \
                OdBmRbsMechanicalDisplayAppInfo)                               \
  MAP_PARAM_DEF(RbsSystemNavigatorTracking, 94,                                \
                OdBmRbsSystemNavigatorTracking)                                \
  MAP_PARAM_DEF(InterferenceReportAppInfo, 95, OdBmInterferenceReportAppInfo)  \
  MAP_PARAM_DEF(OpenLoadedFamsMgr, 96, OdBmOpenLoadedFamsMgr)                  \
  PARAM_DEF(Unknown_97, 97)                                                    \
  PARAM_DEF(Unknown_98, 98)                                                    \
  MAP_PARAM_DEF(AreaReportSettingsTracking, 99,                                \
                OdBmAreaReportSettingsTracking)                                \
  PARAM_DEF(MaterialAppParamTracking_Deprecated, 100)                          \
  MAP_PARAM_DEF(MaterialPhyParamTracking, 101, OdBmMaterialPhyParamTracking)   \
  MAP_PARAM_DEF(DBViewTypesForNewLevel, 102, OdBmDBViewTypesForNewLevel)       \
  MAP_PARAM_DEF(ImportInstanceTracking, 103, OdBmImportInstanceTracking)       \
  MAP_PARAM_DEF(StructuralElemSetTracking, 104, OdBmStructuralElemSetTracking) \
  MAP_PARAM_DEF(GCSElemTracking, 105, OdBmGCSElemTracking)                     \
  MAP_PARAM_DEF(PasteEditModeMgr, 106, OdBmPasteEditModeMgr)                   \
  MAP_PARAM_DEF(AllViewFiltersAppInfo, 107, OdBmAllViewFiltersAppInfo)         \
  MAP_PARAM_DEF(KeynoteTableTracking, 108, OdBmKeynoteTableTracking)           \
  MAP_PARAM_DEF(KeynotingSystemTracking, 109, OdBmKeynotingSystemTracking)     \
  MAP_PARAM_DEF(RbsSystemInspectorAppInfo, 110, OdBmRbsSystemInspectorAppInfo) \
  MAP_PARAM_DEF(RbsSystemInspectorEditModeMgr, 111,                            \
                OdBmRbsSystemInspectorEditModeMgr)                             \
  MAP_PARAM_DEF(AllWatchElems, 112, OdBmAllWatchElems)                         \
  MAP_PARAM_DEF(SFilterEditModeMgr, 113, OdBmSFilterEditModeMgr)               \
  MAP_PARAM_DEF(ImageInstanceTracking, 114, OdBmImageInstanceTracking)         \
  MAP_PARAM_DEF(RbsLayoutPathEditModeMgr, 115, OdBmRbsLayoutPathEditModeMgr)   \
  MAP_PARAM_DEF(PreviewTempElementsTracking, 116,                              \
                OdBmPreviewTempElementsTracking)                               \
  MAP_PARAM_DEF(RegenSplitterElemTracking, 117, OdBmRegenSplitterElemTracking) \
  MAP_PARAM_DEF(RebarShapeRecordAppInfo, 118, OdBmRebarShapeRecordAppInfo)     \
  MAP_PARAM_DEF(DesignOptionConfigurationMgr, 119,                             \
                OdBmDesignOptionConfigurationMgr)                              \
  MAP_PARAM_DEF(ZoneAppInfo, 120, OdBmZoneAppInfo)                             \
  MAP_PARAM_DEF(ZoneEditModeMgr, 121, OdBmZoneEditModeMgr)                     \
  MAP_PARAM_DEF(TilePatternTracking, 122, OdBmTilePatternTracking)             \
  MAP_PARAM_DEF(ZoneSchemeTracking, 123, OdBmZoneSchemeTracking)               \
  MAP_PARAM_DEF(ZoneElementTracking, 124, OdBmZoneElementTracking)             \
  MAP_PARAM_DEF(KickAutoJoinAppInfo, 125, OdBmKickAutoJoinAppInfo)             \
  MAP_PARAM_DEF(LightGroupEditModeMgr, 126, OdBmLightGroupEditModeMgr)         \
  MAP_PARAM_DEF(StretchableSymMgr, 127, OdBmStretchableSymMgr)                 \
  MAP_PARAM_DEF(KickGCSTrackerAppInfo, 128, OdBmKickGCSTrackerAppInfo)         \
  MAP_PARAM_DEF(APIVSTAMacroElemTracking, 129, OdBmAPIVSTAMacroElemTracking)   \
  MAP_PARAM_DEF(LoadCaseElemTracking, 130, OdBmLoadCaseElemTracking)           \
  MAP_PARAM_DEF(LoadCombinationElemTracking, 131,                              \
                OdBmLoadCombinationElemTracking)                               \
  MAP_PARAM_DEF(BeamAnnotationsInfo, 132, OdBmBeamAnnotationsInfo)             \
  PARAM_DEF(SlantedColumnTracker_Deprecated, 133)                              \
  PARAM_DEF(Unknown_134, 134)                                                  \
  MAP_PARAM_DEF(HVACLoadsAppInfo, 135, OdBmHVACLoadsAppInfo)                   \
  PARAM_DEF(DavinciProtoDesignMatrixInfo_Deprecated, 136)                      \
  MAP_PARAM_DEF(RenderRegionTracking, 137, OdBmRenderRegionTracking)           \
  MAP_PARAM_DEF(RbsInsulationLiningEditModeMgr, 138,                           \
                OdBmRbsInsulationLiningEditModeMgr)                            \
  MAP_PARAM_DEF(RbsJustifySlopeRouteEditModeMgr, 139,                          \
                OdBmRbsJustifySlopeRouteEditModeMgr)                           \
  MAP_PARAM_DEF(HalftoneUnderlaySettingsAppInfo, 140,                          \
                OdBmHalftoneUnderlaySettingsAppInfo)                           \
  MAP_PARAM_DEF(XRayContext, 141, OdBmXRayContext)                             \
  PARAM_DEF(Unknown_142, 142)                                                  \
  MAP_PARAM_DEF(BuildingSiteAppInfo, 143, OdBmBuildingSiteAppInfo)             \
  MAP_PARAM_DEF(StructConnectionTypeTracking, 144,                             \
                OdBmStructConnectionTypeTracking)                              \
  MAP_PARAM_DEF(DynamicUpdateAppInfo, 145, OdBmDynamicUpdateAppInfo)           \
  MAP_PARAM_DEF(WorkPlaneViewContextAppInfo, 146,                              \
                OdBmWorkPlaneViewContextAppInfo)                               \
  MAP_PARAM_DEF(SpatialFieldTracking, 147, OdBmSpatialFieldTracking)           \
  PARAM_DEF(Unknown_148, 148)                                                  \
  MAP_PARAM_DEF(PanelScheduleTemplateEditModeMgr, 149,                         \
                OdBmPanelScheduleTemplateEditModeMgr)                          \
  MAP_PARAM_DEF(SurfaceConnectorEditModeMgr, 150,                              \
                OdBmSurfaceConnectorEditModeMgr)                               \
  MAP_PARAM_DEF(AnalysisDisplayStyleTracking, 151,                             \
                OdBmAnalysisDisplayStyleTracking)                              \
  PARAM_DEF(Unknown_152, 152)                                                  \
  MAP_PARAM_DEF(ElemsSetWithCellsTracking, 153, OdBmElemsSetWithCellsTracking) \
  PARAM_DEF(PropagationFilterTracking_Deprecated, 154)                         \
  PARAM_DEF(PropagationFilterTrackingTransient_Deprecated, 155)                \
  MAP_PARAM_DEF(PanelScheduleTemplateElementTracking, 156,                     \
                OdBmPanelScheduleTemplateElementTracking)                      \
  MAP_PARAM_DEF(MEPSystemElemSetTracking, 157, OdBmMEPSystemElemSetTracking)   \
  MAP_PARAM_DEF(AssemblyEditModeMgr, 158, OdBmAssemblyEditModeMgr)             \
  MAP_PARAM_DEF(AppearanceAssetTracking, 159, OdBmAppearanceAssetTracking)     \
  MAP_PARAM_DEF(ExportDWGSettingsTracking, 160, OdBmExportDWGSettingsTracking) \
  MAP_PARAM_DEF(ViewTagTracking, 161, OdBmViewTagTracking)                     \
  MAP_PARAM_DEF(PointCloudTypeTracking, 162, OdBmPointCloudTypeTracking)       \
  MAP_PARAM_DEF(AnalyticalModelEditModeMgr, 163,                               \
                OdBmAnalyticalModelEditModeMgr)                                \
  MAP_PARAM_DEF(FamilySymbolTracking, 164, OdBmFamilySymbolTracking)           \
  MAP_PARAM_DEF(DivisionEditModeMgr, 165, OdBmDivisionEditModeMgr)             \
  PARAM_DEF(Unknown_166, 166)                                                  \
  MAP_PARAM_DEF(WorksharingDisplaySettingsTracking, 167,                       \
                OdBmWorksharingDisplaySettingsTracking)                        \
  MAP_PARAM_DEF(PropertySetLibraryTracking, 168,                               \
                OdBmPropertySetLibraryTracking)                                \
  MAP_PARAM_DEF(PropertySetElementTracking, 169,                               \
                OdBmPropertySetElementTracking)                                \
  MAP_PARAM_DEF(PointCloudInstanceTracking, 170,                               \
                OdBmPointCloudInstanceTracking)                                \
  MAP_PARAM_DEF(ESSchemaStorage, 171, OdBmESSchemaStorage)                     \
  MAP_PARAM_DEF(CreateAssemblyViewsInfo, 172, OdBmCreateAssemblyViewsInfo)     \
  MAP_PARAM_DEF(MergedPartEditModeMgr, 173, OdBmMergedPartEditModeMgr)         \
  MAP_PARAM_DEF(ExportDGNSettingsTracking, 174, OdBmExportDGNSettingsTracking) \
  MAP_PARAM_DEF(StairsEditModeMgr, 175, OdBmStairsEditModeMgr)                 \
  MAP_PARAM_DEF(AppInfoSystemFamiliesNames, 176,                               \
                OdBmAppInfoSystemFamiliesNames)                                \
  MAP_PARAM_DEF(RailPathEditModeMgr, 177, OdBmRailPathEditModeMgr)             \
  MAP_PARAM_DEF(InteractiveRaytraceModeMgr, 178,                               \
                OdBmInteractiveRaytraceModeMgr)                                \
  MAP_PARAM_DEF(EStorageTracking, 179, OdBmEStorageTracking)                   \
  MAP_PARAM_DEF(OpenLockControlTracking, 180, OdBmOpenLockControlTracking)     \
  MAP_PARAM_DEF(DisplacementEditModeMgr, 181, OdBmDisplacementEditModeMgr)     \
  MAP_PARAM_DEF(GlobalParamTracking, 182, OdBmGlobalParamTracking)             \
  MAP_PARAM_DEF(TemporaryViewPropertiesMenu, 183,                              \
                OdBmTemporaryViewPropertiesMenu)                               \
  MAP_PARAM_DEF(ImportedDataEditMgr, 184, OdBmImportedDataEditMgr)             \
  MAP_PARAM_DEF(NumberingAppInfo, 185, OdBmNumberingAppInfo)                   \
  MAP_PARAM_DEF(ExternalResourceErrorAppInfo, 186,                             \
                OdBmExternalResourceErrorAppInfo)                              \
  MAP_PARAM_DEF(RebarSelectionEditModeMgr, 187, OdBmRebarSelectionEditModeMgr) \
  MAP_PARAM_DEF(RebarSelectionAppInfo, 188, OdBmRebarSelectionAppInfo)         \
  MAP_PARAM_DEF(PropagationFilterData, 189, OdBmPropagationFilterData)         \
  PARAM_DEF(TransientSlaveTracker_Deprecated, 190)                             \
  MAP_PARAM_DEF(TemporaryViewPropertiesVolatileData, 191,                      \
                OdBmTemporaryViewPropertiesVolatileData)                       \
  PARAM_DEF(Unknown_192, 192)                                                  \
  MAP_PARAM_DEF(StructConnectivityEditModeMgr, 193,                            \
                OdBmStructConnectivityEditModeMgr)                             \
  PARAM_DEF(StructuralConnectionHandlerEditModeMgr_Deprecated, 194)            \
  MAP_PARAM_DEF(NonInteractingTransientElemSetTracking, 195,                   \
                OdBmNonInteractingTransientElemSetTracking)                    \
  MAP_PARAM_DEF(BendFabricShapeAppInfo, 196, OdBmBendFabricShapeAppInfo)       \
  MAP_PARAM_DEF(EnergyAnalysisModelTracker, 197,                               \
                OdBmEnergyAnalysisModelTracker)                                \
  MAP_PARAM_DEF(UserSpecificSettingsTracker, 198,                              \
                OdBmUserSpecificSettingsTracker)                               \
  MAP_PARAM_DEF(FabricationConfigurationAppInfo, 199,                          \
                OdBmFabricationConfigurationAppInfo)                           \
  MAP_PARAM_DEF(FabricationPartRoutingEditModeMgr, 200,                        \
                OdBmFabricationPartRoutingEditModeMgr)                         \
  MAP_PARAM_DEF(MultistoryStairsConnectedLevelsEditModeMgr, 201,               \
                OdBmMultistoryStairsConnectedLevelsEditModeMgr)                \
  MAP_PARAM_DEF(MultistoryStairsLevelLandingsEditModeMgr, 202,                 \
                OdBmMultistoryStairsLevelLandingsEditModeMgr)                  \
  MAP_PARAM_DEF(StructuralConnectionApprovalTypeTracking, 203,                 \
                OdBmStructuralConnectionApprovalTypeTracking)                  \
  MAP_PARAM_DEF(StructuralConnectionHandlerTypeTracking, 204,                  \
                OdBmStructuralConnectionHandlerTypeTracking)                   \
  MAP_PARAM_DEF(StructuralConnectionHandlerTracking, 205,                      \
                OdBmStructuralConnectionHandlerTracking)                       \
  PARAM_DEF(Unknown_206, 206)                                                  \
  PARAM_DEF(Unknown_207, 207)                                                  \
  MAP_PARAM_DEF(ExternalResourceReferenceUpdateForWorksharingTracker, 208,     \
                OdBmExternalResourceReferenceUpdateForWorksharingTracker)

#define ODBM_MANAGER_TYPES_LIST(PARAM_DEF, ...) \
  ODBM_MANAGER_TYPES_SMART_LIST(PARAM_DEF, PARAM_DEF)

ODBM_MAPPED_ENUMERATION(ManagerType, ODBM_MANAGER_TYPES_LIST,
                        ODBM_MANAGER_TYPES_SMART_LIST)

#endif // _BM_MANAGERTYPE_H_
