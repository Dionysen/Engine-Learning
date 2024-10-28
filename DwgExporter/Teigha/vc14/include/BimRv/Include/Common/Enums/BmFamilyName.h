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

#ifndef _BM_FAMILYNAME_H_
#define _BM_FAMILYNAME_H_

#define ODBM_FAMILYNAME(PARAM_DEF, ...)                                      \
  PARAM_DEF(Unknown,                         -1, L"Unknown")                        \
  PARAM_DEF(Floor,                           0,  L"Floor")                          \
  PARAM_DEF(Level,                           1,  L"Level")                          \
  PARAM_DEF(BasicRoof,                       2,  L"Basic Roof")                     \
  PARAM_DEF(SlopedGlazing,                   3,  L"Sloped Glazing")                 \
  PARAM_DEF(BasicWall,                       4,  L"Basic Wall")                     \
  PARAM_DEF(CurtainWall,                     5,  L"Curtain Wall")                   \
  PARAM_DEF(RectangularCurtainWall,          6,  L"Rectangular Curtain Wall")       \
  PARAM_DEF(NRCurtainWall,                   7,  L"Non-Rectangular Curtain Wall")   \
  PARAM_DEF(StackedWall,                     8,  L"Stacked Wall")                   \
  PARAM_DEF(ReferencePlane,                  9,  L"Reference Plane")                \
  PARAM_DEF(HandrailType,                    10, L"Handrail Type")                  \
  PARAM_DEF(TopRailType,                     11, L"Top Rail Type")                  \
  PARAM_DEF(Railing,                         12, L"Railing")                        \
  PARAM_DEF(Pad,                             13, L"Pad")                            \
  PARAM_DEF(BasicCeiling,                    14, L"Basic Ceiling")                  \
  PARAM_DEF(CompoundCeiling,                 15, L"Compound Ceiling")               \
  PARAM_DEF(RoofSoffit,                      16, L"Roof Soffit")                    \
  PARAM_DEF(FoundationSlab,                  17, L"Foundation Slab")                \
  PARAM_DEF(ModelGroup,                      18, L"Model Group")                    \
  PARAM_DEF(DetailGroup,                     19, L"Detail Group")                   \
  PARAM_DEF(ContourLabels,                   20, L"Contour Labels")                 \
  PARAM_DEF(CurtainSystem,                   21, L"Curtain System")                 \
  PARAM_DEF(FilledRegion,                    22, L"Filled region")                  \
  PARAM_DEF(ElevationTag,                    23, L"Elevation Tag")                  \
  PARAM_DEF(SectionTag,                      24, L"Section Tag")                    \
  PARAM_DEF(NonMonolithicRun,                25, L"Non-Monolithic Run")             \
  PARAM_DEF(MonolithicRun,                   26, L"Monolithic Run")                 \
  PARAM_DEF(AssembledStair,                  27, L"Assembled Stair")                \
  PARAM_DEF(PrecastStair,                    28, L"Precast Stair")                  \
  PARAM_DEF(CastInPlaceStair,                29, L"Cast-In-Place Stair")            \
  PARAM_DEF(FixedUpDirection,                30, L"Fixed Up Direction")             \
  PARAM_DEF(ContFootingType,                 31, L"Wall Foundation")                \
  PARAM_DEF(AutomaticUpDownDirection,        32, L"Automatic Up / Down Direction")  \
  PARAM_DEF(Label,                           33, L"Label")                          \
  PARAM_DEF(Grid,                            34, L"Grid")                           \
  PARAM_DEF(Text,                            35, L"Text")                           \
  PARAM_DEF(RectangularDuct,                 36, L"Rectangular Duct")               \
  PARAM_DEF(RoundDuct,                       37, L"Round Duct")                     \
  PARAM_DEF(OvalDuct,                        38, L"Oval Duct")                      \
  PARAM_DEF(DBView_ThreeDimensional,         39, L"3D View")                        \
  PARAM_DEF(DBViews_ThreeDimensional,        40, L"3D Views")                       \
  PARAM_DEF(DBView_Walkthrough,              41, L"Walkthrough")                    \
  PARAM_DEF(DBViews_Walkthrough,             42, L"Walkthroughs")                   \
  PARAM_DEF(DBView_ImageView,                43, L"Rendering")                      \
  PARAM_DEF(DBViews_ImageView,               44, L"Renderings")                     \
  PARAM_DEF(DBView_Schedule,                 45, L"Schedule")                       \
  PARAM_DEF(DBViews_Schedule,                46, L"Schedules")                      \
  PARAM_DEF(DBView_CostReport,               47, L"Cost Report")                    \
  PARAM_DEF(DBViews_CostReport,              48, L"Cost Reports")                   \
  PARAM_DEF(DBView_Sheet,                    49, L"Sheet")                          \
  PARAM_DEF(DBViews_Sheet,                   50, L"Sheets")                         \
  PARAM_DEF(DBView_Drafting,                 51, L"Drafting View")                  \
  PARAM_DEF(DBViews_Drafting,                52, L"Drafting Views")                 \
  PARAM_DEF(DBView_FloorPlan,                53, L"Floor Plan")                     \
  PARAM_DEF(DBViews_FloorPlan,               54, L"Floor Plans")                    \
  PARAM_DEF(DBView_AreaPlan,                 55, L"Area Plan")                      \
  PARAM_DEF(DBViews_AreaPlan,                56, L"Area Plans")                     \
  PARAM_DEF(DBView_CeilingPlan,              57, L"Ceiling Plan")                   \
  PARAM_DEF(DBViews_CeilingPlan,             58, L"Ceiling Plans")                  \
  PARAM_DEF(DBView_Section,                  59, L"Section")                        \
  PARAM_DEF(DBViews_Section,                 60, L"Sections")                       \
  PARAM_DEF(DBView_Detail,                   61, L"Detail View")                    \
  PARAM_DEF(DBViews_Detail,                  62, L"Detail Views")                   \
  PARAM_DEF(DBView_Elevation,                63, L"Elevation")                      \
  PARAM_DEF(DBViews_Elevation,               64, L"Elevations")                     \
  PARAM_DEF(DBView_LoadsReport,              65, L"Loads Report")                   \
  PARAM_DEF(DBViews_LoadsReport,             66, L"Loads Reports")                  \
  PARAM_DEF(DBView_PressureLossReport,       67, L"Pressure Loss Report")           \
  PARAM_DEF(DBViews_PressureLossReport,      68, L"Pressure Loss Reports")          \
  PARAM_DEF(DBView_Legend,                   69, L"Legend")                         \
  PARAM_DEF(DBViews_Legend,                  70, L"Legends")                        \
  PARAM_DEF(DBView_PanelSchedule,            71, L"Panel Schedule")                 \
  PARAM_DEF(DBViews_PanelSchedule,           72, L"Panel Schedules")                \
  PARAM_DEF(DBView_GraphicalColumnSchedule,  73, L"Graphical Column Schedule")      \
  PARAM_DEF(DBViews_GraphicalColumnSchedule, 74, L"Graphical Column Schedules")     \
  PARAM_DEF(DBView_StructuralPlan,           75, L"Structural Plan")                \
  PARAM_DEF(DBViews_StructuralPlan,          76, L"Structural Plans")               \
  PARAM_DEF(RebarBarType,                    77, L"Rebar Bar")                      \
  PARAM_DEF(DBView_AnalysisReport,           78, L"Analysis Report")                \
  PARAM_DEF(DBViews_AnalysisReport,          79, L"Analysis Reports")               \
  PARAM_DEF(RebarShape,                      80, L"Rebar Shape")                    \
  PARAM_DEF(RbsPipeType,                     81, L"Pipe Types")                     \
  PARAM_DEF(RbsCableTrayType,                82, L"Cable Tray with Fittings")       \
  PARAM_DEF(RbsConduitType,                  83, L"Conduit with Fittings")          \
  PARAM_DEF(AbsFlexDuctType,                 84, L"Flex Duct Rectangular")          \
  PARAM_DEF(AnalyticalLinkType,              85, L"Analytical Link")                \
  PARAM_DEF(AnalyticalModelBeam,             86, L"")                               \
  PARAM_DEF(AppearanceAssetElem,             87, L"System-Zones")                   \
  PARAM_DEF(AreaLoadType,                    88, L"Area Loads")                     \
  PARAM_DEF(AreaReinforcementType,           89, L"Structural Area Reinforcement")  \
  PARAM_DEF(AssemblyType,                    90, L"Parts Assembly")                 \
  PARAM_DEF(BrowserOrganization,             91, L"Browser - Views")                \
  PARAM_DEF(CalloutTag,                      92, L"Callout Tag")                    \
  PARAM_DEF(CategoryElem,                    93, L"Mechanical Equipment Sets")      \
  PARAM_DEF(ColorFillSymbol,                 94, L"Color Fill Legend")              \
  PARAM_DEF(ComponentRepeaterSlotSpecialType,95, L" Repeated Component Type")       \
  PARAM_DEF(ConceptualConstructionType,      96, L"Mass Walls")                     \
  PARAM_DEF(ConduitFittingCenterLine,        97, L"Conduit Elbow - without Fittings1")\
  PARAM_DEF(ConduitStandardType,             98, L"Conduit Standard Types")         \
  PARAM_DEF(ConstructionSet,                 99, L"Construction Types")             \
  PARAM_DEF(ConstructionSetProject,          100, L"Construction Types")            \
  PARAM_DEF(CorniceAttr,                     101, L"Wall Sweep")                    \
  PARAM_DEF(CoverType,                       102, L"Rebar Cover Settings")          \
  PARAM_DEF(CutMarkType,                     103, L"Stair Cut Mark")                \
  PARAM_DEF(DecalType,                       104, L"Decal")                         \
  PARAM_DEF(DimensionStyle,                  105, L"Linear Dimension Style")        \
  PARAM_DEF(DirectShapeType,                 106, L"Coordination Model")            \
  PARAM_DEF(DivisionRule,                    107, L"Rectangular Grid")              \
  PARAM_DEF(DuctFittingCenterLine,           108, L"Sattelstutzen rund")            \
  PARAM_DEF(EdgeSlabAttr,                    109, L"Slab Edge")                     \
  PARAM_DEF(EndTreatmentType,                110, L"End Treatment")                 \
  PARAM_DEF(FabricAreaType,                  111, L"Structural Fabric Area")        \
  PARAM_DEF(FabricSheetType,                 112, L"Fabric Sheet")                  \
  PARAM_DEF(FabricWireType,                  113, L"Fabric Wire")                   \
  PARAM_DEF(FamilyInstance,                  114, L"")                              \
  PARAM_DEF(FasciaAttr,                      115, L"Fascia")                        \
  PARAM_DEF(FlexCenterLine,                  116, L"Flex Duct Round")               \
  PARAM_DEF(GStyleElem,                      117, L"Analysis Report")               \
  PARAM_DEF(GutterAttr,                      118, L"Gutter")                        \
  PARAM_DEF(ImageHolder,                     119, L"Decal")                         \
  PARAM_DEF(ImageSymbol,                     120, L"Raster image")                  \
  PARAM_DEF(JoistSystemAttr,                 121, L"Structural Beam System")        \
  PARAM_DEF(LeaderStyle,                     122, L"Arrowhead")                     \
  PARAM_DEF(LineLoadType,                    123, L"Line Loads")                    \
  PARAM_DEF(LinePatternElem,                 124, L"Analysis Report")               \
  PARAM_DEF(MasterImportSymbol,              125, L"Import Symbol")                 \
  PARAM_DEF(MechanicalEquipmentSetType,      126, L"Mechanical Equipment Sets")     \
  PARAM_DEF(MEPAnalyticalConnectionElementType, 127,  L"Analytical Pipe Connections")\
  PARAM_DEF(MEPSystemZoneType,               128, L"System-Zones")                  \
  PARAM_DEF(MultiReferenceAnnotationType,    129, L"Multi-Rebar Annotations")       \
  PARAM_DEF(MultistoryStairsType,            130, L"Multistory Stairs")             \
  PARAM_DEF(PathReinforcementType,           131, L"Structural Path Reinforcement") \
  PARAM_DEF(PipeFittingCenterLine,           132, L"Bogen - allgemein")             \
  PARAM_DEF(PointLoadType,                   133, L"Point Loads")                   \
  PARAM_DEF(PropertyAttr,                    134, L"Property Lines")                \
  PARAM_DEF(RampAttributes,                  135, L"Ramp")                          \
  PARAM_DEF(RbsDistributionSysType,          136, L"Distribution System")           \
  PARAM_DEF(RbsDuctInsulationType,           137, L"Duct Insulation")               \
  PARAM_DEF(RbsDuctLiningType,               138, L"Duct Lining")                   \
  PARAM_DEF(RbsFlexPipeType,                 139, L"Flex Pipe Round")               \
  PARAM_DEF(RbsFluidType,                    140, L"Fluid Types")                   \
  PARAM_DEF(RbsHvacSystemType,               141, L"Duct System")                   \
  PARAM_DEF(RbsPipeConnectionType,           142, L"Pipe Connection Types")         \
  PARAM_DEF(RbsPipeInsulationType,           143, L"Pipe Insulation")               \
  PARAM_DEF(RbsPipeMaterialType,             144, L"Pipe Material Types")           \
  PARAM_DEF(RbsPipeScheduleType,             145, L"Pipe Schedule Types")           \
  PARAM_DEF(RbsPipingSystemType,             146, L"Piping System")                 \
  PARAM_DEF(RbsVoltageType,                  147, L"Voltage Types")                 \
  PARAM_DEF(RbsWireInsulationType,           148, L"Wire Insulation Types")         \
  PARAM_DEF(RbsWireMaterialType,             149, L"Wire Material Types")           \
  PARAM_DEF(RbsWireTemperatureRatingType,    150, L"Wire Temperature Rating Types") \
  PARAM_DEF(RbsWireType,                     151, L"Wire Types")                    \
  PARAM_DEF(RebarContainerType,              152, L"Structural Rebar Container")    \
  PARAM_DEF(RebarHookType,                   153, L"Rebar Hook")                    \
  PARAM_DEF(RebarInSystem,                   154, L"")                              \
  PARAM_DEF(ReferenceViewerAttributes,       155, L"View Reference")                \
  PARAM_DEF(RepeatingDetailAttributes,       156, L"Repeating Detail")              \
  PARAM_DEF(RevealAttr,                      157, L"Reveal")                        \
  PARAM_DEF(RevisionCloudAttr,               158, L"Revision Clouds")               \
  PARAM_DEF(RvtLinkSymbol,                   159, L"Linked Revit Model")            \
  PARAM_DEF(SegmentCenterLine,               160, L"Pipe Types")                    \
  PARAM_DEF(SharedSymbol,                    161, L"Fabric Sheet")                  \
  PARAM_DEF(SlaveImportSymbol,               162, L"Import Symbol")                 \
  PARAM_DEF(SpotElevationStyle,              163, L"Spot Elevations")               \
  PARAM_DEF(StairsAttributes,                164, L"Stair")                         \
  PARAM_DEF(StairsLanding,                   165, L"")                              \
  PARAM_DEF(StairsLandingType,               166, L"Monolithic Landing")            \
  PARAM_DEF(StairsSupportType,               167, L"Stringer")                      \
  PARAM_DEF(StructuralConnectionHandlerType, 168, L"Grundplatte Rohr")              \
  PARAM_DEF(Text3dAttrSymbol,                169, L"Model Text")                    \
  PARAM_DEF(TilePatternType,                 170, L"_No Pattern")                   \
  PARAM_DEF(ViewportAttributes,              171, L"Viewport")                      \































































































































ODBM_ENUMERATION(FamilyName, ODBM_FAMILYNAME)

#endif // _BM_FAMILYNAME_H_
