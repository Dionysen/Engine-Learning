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

#ifndef __BM_BUILTINCATEGORY_H__
#define __BM_BUILTINCATEGORY_H__

#include "Base/BmObjectId.h"
#include "Common/BmExtendedEnum.h"

#define ODBM_ACTUAL_BUILTIN_CATEGORIES(DEF, ...)                                                                                                                                                          \
/********************************************************************************************************************************************************************************************************/\
/*DEF(NAME,                                                   VALUE,     PARENT CATEGORY,               KIND,            IS CUTTABLE, HAS PHASES,  DISCIPLINES, DEFAULT LABEL)                          */\
/********************************************************************************************************************************************************************************************************/\
  DEF(OST_MatchAll,                                           -2000002,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MatchModel,                                         -2000003,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MatchAnnotation,                                    -2000004,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MatchDetail,                                        -2000005,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MatchProfile,                                       -2000006,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MatchSiteComponent,                                 -2000007,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ScheduleViewParamGroup,                             -2000008,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSRegenerationFailure,                             -2000010,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Walls,                                              -2000011,  not_std::nullopt,              Model,           true,        true,        3,           L"Walls")                                 \
  DEF(OST_WallsCutOutlines,                                   -2000012,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WallsProjectionOutlines,                            -2000013,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Windows,                                            -2000014,  not_std::nullopt,              Model,           true,        true,        1,           L"Windows")                               \
  DEF(OST_WindowsGlassCut,                                    -2000015,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WindowsGlassProjection,                             -2000016,  OST_Windows,                   Model,           false,       false,       0,           L"Glass")                                 \
  DEF(OST_WindowsFrameMullionCut,                             -2000017,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WindowsFrameMullionProjection,                      -2000018,  OST_Windows,                   Model,           false,       false,       0,           L"Frame/Mullion")                         \
  DEF(OST_WindowsSillHeadCut,                                 -2000019,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WindowsSillHeadProjection,                          -2000020,  OST_Windows,                   Model,           false,       false,       0,           L"Sill/Head")                             \
  DEF(OST_WindowsOpeningCut,                                  -2000021,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WindowsOpeningProjection,                           -2000022,  OST_Windows,                   Model,           false,       false,       0,           L"Opening")                               \
  DEF(OST_Doors,                                              -2000023,  not_std::nullopt,              Model,           true,        true,        1,           L"Doors")                                 \
  DEF(OST_DoorsPanelCut,                                      -2000024,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DoorsPanelProjection,                               -2000025,  OST_Doors,                     Model,           false,       false,       0,           L"Panel")                                 \
  DEF(OST_DoorsOpeningCut,                                    -2000026,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DoorsOpeningProjection,                             -2000027,  OST_Doors,                     Model,           false,       false,       0,           L"Opening")                               \
  DEF(OST_DoorsFrameMullionCut,                               -2000028,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DoorsFrameMullionProjection,                        -2000029,  OST_Doors,                     Model,           false,       false,       0,           L"Frame/Mullion")                         \
  DEF(OST_DoorsGlassCut,                                      -2000030,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DoorsGlassProjection,                               -2000031,  OST_Doors,                     Model,           false,       false,       0,           L"Glass")                                 \
  DEF(OST_Floors,                                             -2000032,  not_std::nullopt,              Model,           true,        true,        3,           L"Floors")                                \
  DEF(OST_FloorsCut,                                          -2000033,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FloorsProjection,                                   -2000034,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Roofs,                                              -2000035,  not_std::nullopt,              Model,           true,        true,        3,           L"Roofs")                                 \
  DEF(OST_RoofsCut,                                           -2000036,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RoofsProjection,                                    -2000037,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Ceilings,                                           -2000038,  not_std::nullopt,              Model,           true,        true,        1,           L"Ceilings")                              \
  DEF(OST_CeilingsCut,                                        -2000039,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CeilingsProjection,                                 -2000040,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Curves,                                             -2000041,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurvesThinLines,                                    -2000042,  OST_Lines,                     Model,           false,       false,       0,           L"<Thin Lines>")                          \
  DEF(OST_CurvesMediumLines,                                  -2000043,  OST_Lines,                     Model,           false,       false,       0,           L"<Medium Lines>")                        \
  DEF(OST_CurvesWideLines,                                    -2000044,  OST_Lines,                     Model,           false,       false,       0,           L"<Wide Lines>")                          \
  DEF(OST_SketchLines,                                        -2000045,  OST_Lines,                     Model,           false,       false,       0,           L"<Sketch>")                              \
  DEF(OST_IOSRegeneratedElements,                             -2000046,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSBackedUpElements,                                -2000047,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSAligningLine,                                    -2000048,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSAlignmentGraphics,                               -2000049,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSConstructionLine,                                -2000050,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Lines,                                              -2000051,  not_std::nullopt,              Model,           false,       true,        31,          L"Lines")                                 \
  DEF(OST_IOSDatumPlane,                                      -2000052,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSFreeSnapLine,                                    -2000053,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSuspendedSketch_obsolete,                        -2000054,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSketchGrid,                                      -2000055,  OST_IOS,                       Internal,        false,       false,       0,           L"Work Plane Grid")                       \
  DEF(OST_IOSFlipControl,                                     -2000056,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSThinPixel,                                       -2000057,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CutOutlines,                                        -2000058,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOS,                                                -2000059,  not_std::nullopt,              Internal,        false,       false,       0,           L"Internal Object Styles")                \
  DEF(OST_Extrusions,                                         -2000060,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSThinPixel_Dot,                                   -2000061,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSThinPixel_Dash,                                  -2000062,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSThinPixel_DashDot,                               -2000063,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_InvisibleLines,                                     -2000064,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AxisOfRotation,                                     -2000065,  OST_Lines,                     Model,           false,       false,       0,           L"<Axis of Rotation>")                    \
  DEF(OST_RoomSeparationLines,                                -2000066,  OST_Lines,                     Model,           false,       true,        0,           L"<Room Separation>")                     \
  DEF(OST_StairsSketchBoundaryLines,                          -2000067,  OST_Lines,                     Model,           false,       false,       0,           L"<Stair/Ramp Sketch: Boundary>")         \
  DEF(OST_StairsSketchRiserLines,                             -2000068,  OST_Lines,                     Model,           false,       false,       0,           L"<Stair/Ramp Sketch: Riser>")            \
  DEF(OST_StairsSketchRunLines,                               -2000069,  OST_Lines,                     Model,           false,       false,       0,           L"<Stair/Ramp Sketch: Run>")              \
  DEF(OST_StairsSketchLandingCenterLines,                     -2000070,  OST_Lines,                     Model,           false,       false,       0,           L"<Stair/Ramp Sketch: Landing Center>")   \
  DEF(OST_IOSGhost,                                           -2000071,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSGroups,                                          -2000072,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSCrashGraphics,                                   -2000073,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSCuttingGeometry,                                 -2000074,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSRoomPerimeterLines,                              -2000075,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CloudLines,                                         -2000076,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_InsulationLines,                                    -2000077,  OST_Lines,                     Model,           false,       false,       0,           L"<Insulation Batting Lines>")            \
  DEF(OST_GenericLines,                                       -2000078,  OST_Lines,                     Model,           false,       false,       0,           L"<Lines>")                               \
  DEF(OST_AreaSchemeLines,                                    -2000079,  OST_Lines,                     Model,           false,       false,       0,           L"<Area Boundary>")                       \
  DEF(OST_Furniture,                                          -2000080,  not_std::nullopt,              Model,           false,       true,        1,           L"Furniture")                             \
  DEF(OST_FillPatterns,                                       -2000081,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSNotSilhouette,                                   -2000082,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ReferenceLines,                                     -2000083,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Reference Lines")                       \
  DEF(OST_IOSSlabShapeEditorExplitCrease,                     -2000084,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSlabShapeEditorAutoCrease,                       -2000085,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSlabShapeEditorBoundary,                         -2000086,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSlabShapeEditorPointBoundary,                    -2000087,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSlabShapeEditorPointInterior,                    -2000088,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSBBoxScreenSize,                                  -2000089,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Curtain_Systems,                                    -2000090,  not_std::nullopt,              Internal,        false,       false,       0,           L"Ruled Curtain System")                  \
  DEF(OST_IOSArrays,                                          -2000091,  not_std::nullopt,              Internal,        false,       false,       0,           L"Array")                                 \
  DEF(OST_IOSMeasureLine,                                     -2000092,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSWallCoreBoundary,                                -2000093,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSSuspendedSketch,                                 -2000094,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSModelGroups,                                     -2000095,  not_std::nullopt,              Internal,        false,       false,       0,           L"Model Groups")                          \
  DEF(OST_IOSDetailGroups,                                    -2000096,  not_std::nullopt,              Internal,        false,       false,       0,           L"Detail Groups")                         \
  DEF(OST_IOSAttachedDetailGroups,                            -2000097,  not_std::nullopt,              Internal,        false,       false,       0,           L"Attached Detail Groups")                \
  DEF(OST_IOSRoomTagToRoomLines,                              -2000098,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSRebarSystemSpanSymbolCtrl,                       -2000099,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Columns,                                            -2000100,  not_std::nullopt,              Model,           true,        true,        3,           L"Columns")                               \
  DEF(OST_IOSMeasureLineScreenSize,                           -2000101,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_EPS_Existing,                                       -2000102,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_EPS_Demolished,                                     -2000103,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_EPS_New,                                            -2000104,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_EPS_Temporary,                                      -2000105,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_EPS_Future,                                         -2000106,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_GuideGrid,                                          -2000107,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Guide Grid")                            \
  DEF(OST_IOSFabricReinSpanSymbolCtrl,                        -2000109,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOS_GeoLocations,                                   -2000110,  not_std::nullopt,              Internal,        false,       false,       0,           L"Shared Site")                           \
  DEF(OST_IOS_GeoSite,                                        -2000111,  not_std::nullopt,              Internal,        false,       false,       0,           L"Location Data")                         \
  DEF(OST_Phases,                                             -2000112,  not_std::nullopt,              Internal,        false,       false,       0,           L"Phases")                                \
  DEF(OST_IOSDragBox,                                         -2000113,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSDragBoxInverted,                                 -2000114,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSRoomUpperLowerLines,                             -2000115,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSRoomComputationHeight,                           -2000116,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSNavWheelPivotBall,                               -2000117,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Stairs,                                             -2000120,  not_std::nullopt,              Model,           true,        true,        3,           L"Stairs")                                \
  DEF(OST_StairsAboveCut_ToBeDeprecated,                      -2000122,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StairsStringerCarriage,                             -2000123,  OST_Stairs,                    Model,           false,       true,        0,           L"Supports")                              \
  DEF(OST_StairsSupportsAboveCut,                             -2000124,  OST_Stairs,                    Model,           false,       false,       0,           L"<Above> Supports")                      \
  DEF(OST_StairsUpText,                                       -2000125,  OST_StairsPaths,               Annotation,      false,       false,       0,           L"UP Text")                               \
  DEF(OST_StairsRailing,                                      -2000126,  not_std::nullopt,              Model,           true,        true,        1,           L"Railings")                              \
  DEF(OST_StairsRailingBaluster,                              -2000127,  OST_StairsRailing,             Model,           true,        false,       0,           L"Balusters")                             \
  DEF(OST_StairsRailingRail,                                  -2000128,  OST_StairsRailing,             Model,           false,       false,       0,           L"Rails")                                 \
  DEF(OST_StairsDownText,                                     -2000129,  OST_StairsPaths,               Annotation,      false,       false,       0,           L"DOWN Text")                             \
  DEF(OST_StairsUpArrows,                                     -2000130,  OST_StairsPaths,               Annotation,      false,       false,       0,           L"Up Arrows")                             \
  DEF(OST_StairsDownArrows,                                   -2000131,  OST_StairsPaths,               Annotation,      false,       false,       0,           L"Down Arrows")                           \
  DEF(OST_StairsRailingAboveCut,                              -2000132,  OST_StairsRailing,             Model,           false,       false,       0,           L"<Above> Railings Cut Line")             \
  DEF(OST_StairsRailingTags,                                  -2000133,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Railing Tags")                          \
  DEF(OST_Fixtures,                                           -2000140,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_GenericAnnotation,                                  -2000150,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Generic Annotations")                   \
  DEF(OST_GenericModel,                                       -2000151,  not_std::nullopt,              Model,           true,        true,        31,          L"Generic Models")                        \
  DEF(OST_Rooms,                                              -2000160,  not_std::nullopt,              Model,           false,       false,       29,          L"Rooms")                                 \
  DEF(OST_RoomInteriorFillVisibility,                         -2000161,  OST_Rooms,                     Model,           false,       false,       0,           L"Interior Fill")                         \
  DEF(OST_RoomReferenceVisibility,                            -2000162,  OST_Rooms,                     Model,           false,       false,       0,           L"Reference")                             \
  DEF(OST_AreaInteriorFillVisibility,                         -2000163,  OST_Areas,                     Model,           false,       false,       0,           L"Interior Fill")                         \
  DEF(OST_AreaReferenceVisibility,                            -2000164,  OST_Areas,                     Model,           false,       false,       0,           L"Reference")                             \
  DEF(OST_AreaColorFill,                                      -2000165,  OST_Areas,                     Model,           false,       false,       0,           L"Color Fill")                            \
  DEF(OST_RoomInteriorFill,                                   -2000166,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RoomReference,                                      -2000167,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaInteriorFill,                                   -2000168,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaReference,                                      -2000169,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurtainWallPanels,                                  -2000170,  not_std::nullopt,              Model,           true,        true,        1,           L"Curtain Panels")                        \
  DEF(OST_CurtainWallMullions,                                -2000171,  not_std::nullopt,              Model,           true,        true,        1,           L"Curtain Wall Mullions")                 \
  DEF(OST_CurtainWallMullionsCut,                             -2000172,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurtainGrids,                                       -2000173,  not_std::nullopt,              Model,           false,       false,       0,           L"Curtain Grids")                         \
  DEF(OST_Railings,                                           -2000175,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingBalusterRail,                                -2000176,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingBalusterRailCut,                             -2000177,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Ramps,                                              -2000180,  not_std::nullopt,              Model,           true,        true,        3,           L"Ramps")                                 \
  DEF(OST_Cornices,                                           -2000181,  OST_Walls,                     Model,           false,       true,        0,           L"Wall Sweeps")                           \
  DEF(OST_Reveals,                                            -2000182,  OST_Walls,                     Model,           false,       false,       0,           L"Reveals")                               \
  DEF(OST_Massing,                                            -2000185,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassingCutOutlines,                                 -2000186,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassingProjectionOutlines,                          -2000187,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FilledRegion,                                       -2000190,  not_std::nullopt,              Model,           false,       false,       0,           L"Filled region")                         \
  DEF(OST_PlanRegion,                                         -2000191,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Plan Region")                           \
  DEF(OST_FaceSplitter,                                       -2000192,  not_std::nullopt,              Internal,        false,       false,       0,           L"Split Face")                            \
  DEF(OST_Matchline,                                          -2000193,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Matchline")                             \
  DEF(OST_MaskingRegion,                                      -2000194,  not_std::nullopt,              Model,           false,       false,       0,           L"Masking Region")                        \
  DEF(OST_ModelText,                                          -2000195,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ImportObjectStyles,                                 -2000196,  not_std::nullopt,              Model,           false,       false,       0,           L"Imports in Families")                   \
  DEF(OST_ReferenceViewerSymbol,                              -2000197,  not_std::nullopt,              Annotation,      false,       false,       0,           L"View Reference")                        \
  DEF(OST_ReferenceViewer,                                    -2000198,  not_std::nullopt,              Annotation,      false,       false,       31,          L"View Reference")                        \
  DEF(OST_Sections,                                           -2000200,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Sections")                              \
  DEF(OST_SectionLine,                                        -2000201,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Section Line")                          \
  DEF(OST_BrokenSectionLine,                                  -2000202,  OST_SectionLine,               Annotation,      false,       false,       0,           L"Broken Section Line")                   \
  DEF(OST_Grids,                                              -2000220,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Grids")                                 \
  DEF(OST_GridChains,                                         -2000221,  OST_Grids,                     Annotation,      false,       false,       0,           L"Multi-segmented Grid")                  \
  DEF(OST_DisplacementElements,                               -2000222,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Displacement Set")                      \
  DEF(OST_DisplacementPath,                                   -2000223,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Displacement Path")                     \
  DEF(OST_Levels,                                             -2000240,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Levels")                                \
  DEF(OST_Dimensions,                                         -2000260,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Dimensions")                            \
  DEF(OST_WeakDims,                                           -2000261,  OST_Dimensions,                Annotation,      false,       false,       0,           L"Automatic Sketch Dimensions")           \
  DEF(OST_Constraints,                                        -2000262,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Constraints")                           \
  DEF(OST_SpotElevations,                                     -2000263,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Spot Elevations")                       \
  DEF(OST_SpotCoordinates,                                    -2000264,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Spot Coordinates")                      \
  DEF(OST_SpotSlopes,                                         -2000265,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Spot Slopes")                           \
  DEF(OST_RoofTags,                                           -2000266,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Roof Tags")                             \
  DEF(OST_Assemblies,                                         -2000267,  not_std::nullopt,              Internal,        true,        true,        0,           L"Assemblies")                            \
  DEF(OST_AssemblyTags,                                       -2000268,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Assembly Tags")                         \
  DEF(OST_Parts,                                              -2000269,  not_std::nullopt,              Model,           true,        true,        31,          L"Parts")                                 \
  DEF(OST_PartTags,                                           -2000270,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Part Tags")                             \
  DEF(OST_PartHiddenLines,                                    -2000271,  OST_Parts,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_Viewers,                                            -2000278,  not_std::nullopt,              Internal,        false,       false,       0,           L"Views")                                 \
  DEF(OST_Views,                                              -2000279,  not_std::nullopt,              Internal,        false,       false,       0,           L"Views")                                 \
  DEF(OST_TitleBlocks,                                        -2000280,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Title Blocks")                          \
  DEF(OST_TitleBlockThinLines,                                -2000281,  OST_TitleBlocks,               Annotation,      false,       false,       0,           L"<Thin Lines>")                          \
  DEF(OST_TitleBlockMediumLines,                              -2000282,  OST_TitleBlocks,               Annotation,      false,       false,       0,           L"<Medium Lines>")                        \
  DEF(OST_TitleBlockWideLines,                                -2000283,  OST_TitleBlocks,               Annotation,      false,       false,       0,           L"<Wide Lines>")                          \
  DEF(OST_OverheadLines,                                      -2000284,  OST_Lines,                     Model,           false,       false,       0,           L"<Overhead>")                            \
  DEF(OST_DemolishedLines,                                    -2000285,  OST_Lines,                     Model,           false,       false,       0,           L"<Demolished>")                          \
  DEF(OST_HiddenLines,                                        -2000286,  OST_Lines,                     Model,           false,       false,       0,           L"<Hidden>")                              \
  DEF(OST_LinesBeyond,                                        -2000287,  OST_Lines,                     Model,           false,       false,       0,           L"<Beyond>")                              \
  DEF(OST_CenterLines,                                        -2000288,  OST_Lines,                     Model,           false,       false,       0,           L"<Centerline>")                          \
  DEF(OST_DirectionEdgeLines,                                 -2000289,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Catalogs,                                           -2000290,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Divisions,                                          -2000291,  not_std::nullopt,              Model,           false,       false,       0,           L"Divisions")                             \
  DEF(OST_TextNotes,                                          -2000300,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Text Notes")                            \
  DEF(OST_SectionBox,                                         -2000301,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Section Boxes")                         \
  DEF(OST_RenderRegions,                                      -2000302,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Render Regions")                        \
  DEF(OST_AnalysisResults,                                    -2000303,  not_std::nullopt,              Model,           false,       false,       0,           L"Analysis Results")                      \
  DEF(OST_AnalysisDisplayStyle,                               -2000304,  not_std::nullopt,              Model,           false,       false,       0,           L"Analysis Display Style")                \
  DEF(OST_HostFin,                                            -2000310,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_HostFinFloor,                                       -2000311,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_HostFinRoof,                                        -2000312,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_HostFinCeiling,                                     -2000313,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_HostFinWall,                                        -2000314,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_HostFinHF,                                          -2000315,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurtainGridsRoof,                                   -2000320,  OST_Roofs,                     Model,           false,       true,        0,           L"Curtain Roof Grids")                    \
  DEF(OST_CurtainGridsWall,                                   -2000321,  OST_Walls,                     Model,           false,       true,        0,           L"Curtain Wall Grids")                    \
  DEF(OST_CurtainGridsSystem,                                 -2000322,  OST_Curtain_Systems,           Internal,        false,       false,       0,           L"Curtain System Grids")                  \
  DEF(OST_CurtainGridsCurtaSystem,                            -2000323,  OST_CurtaSystem,               Model,           false,       true,        0,           L"Curtain System Grids")                  \
  DEF(OST_AreaReport_Triangle,                                -2000325,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaReport_Boundary,                                -2000326,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaReport_Arc_Plus,                                -2000327,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaReport_Arc_Minus,                               -2000328,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurtaSystem,                                        -2000340,  not_std::nullopt,              Model,           true,        true,        1,           L"Curtain Systems")                       \
  DEF(OST_CurtaSystemFaceManager,                             -2000341,  not_std::nullopt,              Model,           false,       false,       0,           L"Curtain System Grid Layout")            \
  DEF(OST_ContourLabels,                                      -2000350,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Contour Labels")                        \
  DEF(OST_SectionHeads,                                       -2000400,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Section Marks")                         \
  DEF(OST_SectionHeadThinLines,                               -2000401,  OST_SectionHeads,              Annotation,      false,       false,       0,           L"<Thin Lines>")                          \
  DEF(OST_SectionHeadMediumLines,                             -2000403,  OST_SectionHeads,              Annotation,      false,       false,       0,           L"<Medium Lines>")                        \
  DEF(OST_SectionHeadWideLines,                               -2000404,  OST_SectionHeads,              Annotation,      false,       false,       0,           L"<Wide Lines>")                          \
  DEF(OST_WindowTags,                                         -2000450,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Window Tags")                           \
  DEF(OST_DoorTags,                                           -2000460,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Door Tags")                             \
  DEF(OST_RoomTags,                                           -2000480,  not_std::nullopt,              Annotation,      false,       false,       29,          L"Room Tags")                             \
  DEF(OST_MEPSpaceTags,                                       -2000485,  not_std::nullopt,              Annotation,      false,       false,       28,          L"Space Tags")                            \
  DEF(OST_Cameras,                                            -2000500,  not_std::nullopt,              Model,           false,       false,       0,           L"Cameras")                               \
  DEF(OST_Camera_Lines,                                       -2000501,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Cameras")                               \
  DEF(OST_Viewports,                                          -2000510,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Viewports")                             \
  DEF(OST_ViewportLabel,                                      -2000515,  not_std::nullopt,              Annotation,      false,       false,       31,          L"View Titles")                           \
  DEF(OST_Lights,                                             -2000520,  not_std::nullopt,              Model,           false,       false,       0,           L"Lights")                                \
  DEF(OST_CLines,                                             -2000530,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Reference Planes")                      \
  DEF(OST_AxisX,                                              -2000531,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AxisY,                                              -2000532,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AxisZ,                                              -2000533,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Elev,                                               -2000535,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Elevations")                            \
  DEF(OST_CropBoundary,                                       -2000536,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Crop Boundaries")                       \
  DEF(OST_Callouts,                                           -2000537,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Callouts")                              \
  DEF(OST_CalloutHeads,                                       -2000538,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Callout Heads")                         \
  DEF(OST_CalloutBoundary,                                    -2000539,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Callout Boundary")                      \
  DEF(OST_WallsSurfacePattern,                                -2000540,  OST_Walls,                     Model,           false,       false,       0,           L"Surface Pattern")                       \
  DEF(OST_FloorsSurfacePattern,                               -2000541,  OST_Floors,                    Model,           false,       false,       0,           L"Surface Pattern")                       \
  DEF(OST_RoofsSurfacePattern,                                -2000542,  OST_Roofs,                     Model,           false,       false,       0,           L"Surface Pattern")                       \
  DEF(OST_CeilingsSurfacePattern,                             -2000543,  OST_Ceilings,                  Model,           false,       false,       0,           L"Surface Pattern")                       \
  DEF(OST_CalloutLeaderLine,                                  -2000544,  OST_CalloutBoundary,           Annotation,      false,       false,       0,           L"Callout Leader Line")                   \
  DEF(OST_WallsAnalyticalGeometry,                            -2000545,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FloorsAnalyticalGeometry,                           -2000546,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AnnotationCrop,                                     -2000547,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Annotation Crop Boundary")              \
  DEF(OST_CropBoundarySpecial,                                -2000548,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Crop Boundaries")                       \
  DEF(OST_AnnotationCropSpecial,                              -2000549,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Annotation Crop Boundary")              \
  DEF(OST_ColorFillLegends,                                   -2000550,  not_std::nullopt,              Annotation,      false,       false,       29,          L"Color Fill Legends")                    \
  DEF(OST_RoomColorFill,                                      -2000551,  OST_Rooms,                     Model,           false,       false,       0,           L"Color Fill")                            \
  DEF(OST_ColorFillSchema,                                    -2000552,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Color Fill Schema")                     \
  DEF(OST_RasterImages,                                       -2000560,  not_std::nullopt,              Model,           false,       false,       31,          L"Raster Images")                         \
  DEF(OST_ScheduleGraphics,                                   -2000570,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Schedule Graphics")                     \
  DEF(OST_Schedules,                                          -2000573,  not_std::nullopt,              Internal,        false,       false,       0,           L"Schedules")                             \
  DEF(OST_LegendComponents,                                   -2000575,  not_std::nullopt,              Model,           false,       false,       0,           L"Legend Components")                     \
  DEF(OST_PreviewLegendComponents,                            -2000576,  not_std::nullopt,              Model,           false,       false,       0,           L"Legend Components")                     \
  DEF(OST_WallsMembrane,                                      -2000580,  OST_Walls,                     Model,           false,       false,       0,           L"Membrane Layer")                        \
  DEF(OST_WallsStructure,                                     -2000581,  OST_Walls,                     Model,           false,       false,       0,           L"Structure [1]")                         \
  DEF(OST_WallsInsulation,                                    -2000582,  OST_Walls,                     Model,           false,       false,       0,           L"Thermal/Air Layer [3]")                 \
  DEF(OST_WallsSubstrate,                                     -2000583,  OST_Walls,                     Model,           false,       false,       0,           L"Substrate [2]")                         \
  DEF(OST_WallsFinish1,                                       -2000584,  OST_Walls,                     Model,           false,       false,       0,           L"Finish 1 [4]")                          \
  DEF(OST_WallsFinish2,                                       -2000585,  OST_Walls,                     Model,           false,       false,       0,           L"Finish 2 [5]")                          \
  DEF(OST_WallsDefault,                                       -2000586,  OST_Walls,                     Model,           false,       false,       0,           L"Common Edges")                          \
  DEF(OST_HiddenWallLines,                                    -2000587,  OST_Walls,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_WallsCutPattern,                                    -2000588,  OST_Walls,                     Model,           false,       false,       0,           L"Cut Pattern")                           \
  DEF(OST_RoofsMembrane,                                      -2000590,  OST_Roofs,                     Model,           false,       false,       0,           L"Membrane Layer")                        \
  DEF(OST_RoofsStructure,                                     -2000591,  OST_Roofs,                     Model,           false,       false,       0,           L"Structure [1]")                         \
  DEF(OST_RoofsInsulation,                                    -2000592,  OST_Roofs,                     Model,           false,       false,       0,           L"Thermal/Air Layer [3]")                 \
  DEF(OST_RoofsSubstrate,                                     -2000593,  OST_Roofs,                     Model,           false,       false,       0,           L"Substrate [2]")                         \
  DEF(OST_RoofsFinish1,                                       -2000594,  OST_Roofs,                     Model,           false,       false,       0,           L"Finish 1 [4]")                          \
  DEF(OST_RoofsFinish2,                                       -2000595,  OST_Roofs,                     Model,           false,       false,       0,           L"Finish 2 [5]")                          \
  DEF(OST_RoofsDefault,                                       -2000596,  OST_Roofs,                     Model,           false,       false,       0,           L"Common Edges")                          \
  DEF(OST_RoofsCutPattern,                                    -2000597,  OST_Roofs,                     Model,           false,       false,       0,           L"Cut Pattern")                           \
  DEF(OST_RoofsInteriorEdges,                                 -2000598,  OST_Roofs,                     Model,           false,       false,       0,           L"Interior Edges")                        \
  DEF(OST_FloorsMembrane,                                     -2000600,  OST_Floors,                    Model,           false,       false,       0,           L"Membrane Layer")                        \
  DEF(OST_FloorsStructure,                                    -2000601,  OST_Floors,                    Model,           false,       false,       0,           L"Structure [1]")                         \
  DEF(OST_FloorsInsulation,                                   -2000602,  OST_Floors,                    Model,           false,       false,       0,           L"Thermal/Air Layer [3]")                 \
  DEF(OST_FloorsSubstrate,                                    -2000603,  OST_Floors,                    Model,           false,       false,       0,           L"Substrate [2]")                         \
  DEF(OST_FloorsFinish1,                                      -2000604,  OST_Floors,                    Model,           false,       false,       0,           L"Finish 1 [4]")                          \
  DEF(OST_FloorsFinish2,                                      -2000605,  OST_Floors,                    Model,           false,       false,       0,           L"Finish 2 [5]")                          \
  DEF(OST_FloorsDefault,                                      -2000606,  OST_Floors,                    Model,           false,       false,       0,           L"Common Edges")                          \
  DEF(OST_HiddenFloorLines,                                   -2000607,  OST_Floors,                    Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_FloorsCutPattern,                                   -2000608,  OST_Floors,                    Model,           false,       false,       0,           L"Cut Pattern")                           \
  DEF(OST_FloorsInteriorEdges,                                -2000609,  OST_Floors,                    Model,           false,       false,       0,           L"Interior Edges")                        \
  DEF(OST_CeilingsMembrane,                                   -2000610,  OST_Ceilings,                  Model,           false,       false,       0,           L"Membrane Layer")                        \
  DEF(OST_CeilingsStructure,                                  -2000611,  OST_Ceilings,                  Model,           false,       false,       0,           L"Structure [1]")                         \
  DEF(OST_CeilingsInsulation,                                 -2000612,  OST_Ceilings,                  Model,           false,       false,       0,           L"Thermal/Air Layer [3]")                 \
  DEF(OST_CeilingsSubstrate,                                  -2000613,  OST_Ceilings,                  Model,           false,       false,       0,           L"Substrate [2]")                         \
  DEF(OST_CeilingsFinish1,                                    -2000614,  OST_Ceilings,                  Model,           false,       false,       0,           L"Finish 1 [4]")                          \
  DEF(OST_CeilingsFinish2,                                    -2000615,  OST_Ceilings,                  Model,           false,       false,       0,           L"Finish 2 [5]")                          \
  DEF(OST_CeilingsDefault,                                    -2000616,  OST_Ceilings,                  Model,           false,       false,       0,           L"Common Edges")                          \
  DEF(OST_CeilingsCutPattern,                                 -2000617,  OST_Ceilings,                  Model,           false,       false,       0,           L"Cut Pattern")                           \
  DEF(OST_Materials,                                          -2000700,  not_std::nullopt,              Model,           false,       false,       0,           L"Materials")                             \
  DEF(OST_ReferencePoints,                                    -2000710,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Reference Points")                      \
  DEF(OST_ReferencePoints_Points,                             -2000711,  OST_ReferencePoints,           Annotation,      false,       false,       0,           L"Points")                                \
  DEF(OST_ReferencePoints_Planes,                             -2000712,  OST_ReferencePoints,           Annotation,      false,       false,       0,           L"Planes")                                \
  DEF(OST_ReferencePoints_Lines,                              -2000713,  OST_ReferencePoints,           Annotation,      false,       false,       0,           L"Lines")                                 \
  DEF(OST_ReferencePoints_HiddenLines,                        -2000714,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_XRayProfileEdge,                                    -2000715,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_XRaySideEdge,                                       -2000716,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_XRayPathCurve,                                      -2000717,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_XRayPathPoint,                                      -2000718,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_XRayImplicitPathCurve,                              -2000719,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_XRayConstrainedProfileEdge,                         -2000720,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ControlAxisX,                                       -2000721,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ControlAxisY,                                       -2000772,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ControlAxisZ,                                       -2000773,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ControlLocal,                                       -2000774,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_IOSTilePatternGrid,                                 -2000800,  OST_IOS,                       Internal,        false,       false,       0,           L"Tile pattern grids")                    \
  DEF(OST_IOSOpening,                                         -2000810,  OST_IOS,                       Internal,        false,       false,       0,           L"Opening cut")                           \
  DEF(OST_RemovedGridSeg,                                     -2000827,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_InstanceDrivenLineStyle,                            -2000828,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RoomPolylines,                                      -2000829,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaPolylines,                                      -2000830,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSpaceSeparationLines,                            -2000831,  OST_Lines,                     Model,           false,       true,        0,           L"<Space Separation>")                    \
  DEF(OST_DimLockControlLeader,                               -2000832,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PathOfTravelLines,                                  -2000833,  OST_Lines,                     Model,           false,       false,       0,           L"<Path of Travel Lines>")                \
  DEF(OST_PathOfTravelTags,                                   -2000834,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Path of Travel Tags")                   \
  DEF(OST_StructLocationLineControl,                          -2000880,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WallRefPlanes,                                      -2000896,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RoofOpening,                                        -2000897,  OST_Roofs,                     Model,           false,       true,        0,           L"Roof opening cut")                      \
  DEF(OST_FloorOpening,                                       -2000898,  OST_Floors,                    Model,           false,       true,        0,           L"Floor opening cut")                     \
  DEF(OST_CeilingOpening,                                     -2000899,  OST_Ceilings,                  Model,           false,       false,       0,           L"Ceiling opening cut")                   \
  DEF(OST_AdaptivePoints,                                     -2000900,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Adaptive Points")                       \
  DEF(OST_AdaptivePoints_Points,                              -2000901,  OST_AdaptivePoints,            Annotation,      false,       false,       0,           L"Points")                                \
  DEF(OST_AdaptivePoints_Planes,                              -2000902,  OST_AdaptivePoints,            Annotation,      false,       false,       0,           L"Planes")                                \
  DEF(OST_AdaptivePoints_Lines,                               -2000903,  OST_AdaptivePoints,            Annotation,      false,       false,       0,           L"Lines")                                 \
  DEF(OST_AdaptivePoints_HiddenLines,                         -2000904,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystem,                                      -2000905,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemSegment,                               -2000906,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemPost,                                  -2000907,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemBaluster,                              -2000908,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemPanel,                                 -2000909,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemHardware,                              -2000910,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemHandRail,                              -2000911,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemHandRailBracket,                       -2000912,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemTopRail,                               -2000913,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemRail,                                  -2000914,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemTermination,                           -2000915,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemTransition,                            -2000916,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingSystemTags,                                  -2000917,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StairsRuns,                                         -2000919,  OST_Stairs,                    Model,           true,        true,        0,           L"Runs")                                  \
  DEF(OST_StairsLandings,                                     -2000920,  OST_Stairs,                    Model,           true,        true,        0,           L"Landings")                              \
  DEF(OST_StairsTrisers,                                      -2000921,  OST_Stairs,                    Model,           false,       false,       0,           L"Treads/Risers")                         \
  DEF(OST_AppearanceAsset,                                    -2000923,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PropertySet,                                        -2000924,  not_std::nullopt,              Model,           false,       false,       0,           L"Material Assets")                       \
  DEF(OST_IOSRoomCalculationPoint,                            -2000925,  OST_IOS,                       Internal,        false,       false,       0,           L"Room Calculation Point")                \
  DEF(OST_DividedPath,                                        -2000926,  OST_Mass,                      Internal,        false,       false,       0,           L"Divided Path")                          \
  DEF(OST_ComponentRepeater,                                  -2000927,  not_std::nullopt,              Internal,        false,       false,       0,           L"Repeater")                              \
  DEF(OST_ComponentRepeaterSlot,                              -2000928,  not_std::nullopt,              Internal,        false,       false,       0,           L"Repeated Component")                    \
  DEF(OST_StairsCutMarks,                                     -2000930,  OST_Stairs,                    Model,           false,       false,       0,           L"Cut Marks")                             \
  DEF(OST_StairsCutMarksAboveCut,                             -2000931,  OST_Stairs,                    Model,           false,       false,       0,           L"<Above> Cut Marks")                     \
  DEF(OST_StairsNosingLines,                                  -2000932,  OST_Stairs,                    Model,           false,       false,       0,           L"Nosing Lines")                          \
  DEF(OST_StairsNosingLinesAboveCut,                          -2000933,  OST_Stairs,                    Model,           false,       false,       0,           L"<Above> Nosing Lines")                  \
  DEF(OST_StairsOutlines,                                     -2000934,  OST_Stairs,                    Model,           false,       false,       0,           L"Outlines")                              \
  DEF(OST_StairsOutlinesAboveCut,                             -2000935,  OST_Stairs,                    Model,           false,       false,       0,           L"<Above> Outlines")                      \
  DEF(OST_StairsRiserLines,                                   -2000936,  OST_Stairs,                    Model,           false,       false,       0,           L"Riser Lines")                           \
  DEF(OST_StairsRiserLinesAboveCut,                           -2000937,  OST_Stairs,                    Model,           false,       false,       0,           L"<Above> Riser Lines")                   \
  DEF(OST_StairsPaths,                                        -2000938,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Stair Paths")                           \
  DEF(OST_StairsPathsAboveCut,                                -2000939,  OST_StairsPaths,               Annotation,      false,       false,       0,           L"<Above> Up Arrows")                     \
  DEF(OST_StairsRunTags,                                      -2000940,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Stair Run Tags")                        \
  DEF(OST_StairsLandingTags,                                  -2000941,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Stair Landing Tags")                    \
  DEF(OST_StairsSupportTags,                                  -2000942,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Stair Support Tags")                    \
  DEF(OST_StairsTriserTags,                                   -2000943,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StairsTriserNumbers,                                -2000944,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Stair Tread/Riser Numbers")             \
  DEF(OST_StairsSketchPathLines,                              -2000945,  OST_Lines,                     Model,           false,       false,       0,           L"<Stair/Ramp Sketch: Stair Path>")       \
  DEF(OST_RailingTopRail,                                     -2000946,  OST_StairsRailing,             Model,           true,        true,        0,           L"Top Rails")                             \
  DEF(OST_RailingHandRail,                                    -2000947,  OST_StairsRailing,             Model,           true,        true,        0,           L"Handrails")                             \
  DEF(OST_RailingSupport,                                     -2000948,  OST_StairsRailing,             Model,           true,        false,       0,           L"Supports")                              \
  DEF(OST_RailingTermination,                                 -2000949,  OST_StairsRailing,             Model,           true,        false,       0,           L"Terminations")                          \
  DEF(OST_RailingTopRailAboveCut,                             -2000950,  OST_StairsRailing,             Model,           false,       false,       0,           L"<Above> Top Rails")                     \
  DEF(OST_RailingHandRailAboveCut,                            -2000951,  OST_StairsRailing,             Model,           false,       false,       0,           L"<Above> Handrails")                     \
  DEF(OST_StairsSupports,                                     -2000952,  OST_Stairs,                    Model,           false,       false,       0,           L"Supports")                              \
  DEF(OST_RailingRailPathLines,                               -2000953,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RailingRailPathExtensionLines,                      -2000954,  OST_Lines,                     Model,           false,       false,       0,           L"Railing Rail Path Extension Lines")     \
  DEF(OST_LinkAnalyticalTags,                                 -2000955,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Link Tags")                  \
  DEF(OST_NodeAnalyticalTags,                                 -2000956,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Node Tags")                  \
  DEF(OST_DSR_LineAndTextAttrCategoryId,                      -2000960,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_LineAndTextAttrFontId,                          -2000961,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_DimStyleTickCategoryId,                         -2000962,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_DimStyleHeavyEndCatId,                          -2000963,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_DimStyleHeavyEndCategoryId,                     -2000964,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_CenterlinePatternCatId,                         -2000965,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_CenterlineTickMarkStyleId,                      -2000966,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_ArrowHeadStyleId,                               -2000967,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_InteriorTickMarkStyleId,                        -2000968,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DSR_LeaderTickMarkStyleId,                          -2000969,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MultiReferenceAnnotations,                          -2000970,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Multi-Rebar Annotations")               \
  DEF(OST_BeamLocalCoordSys,                                  -2000971,  OST_BeamAnalytical,            AnalyticalModel, false,       true,        0,           L"Local Coordinate System")               \
  DEF(OST_ColumnLocalCoordSys,                                -2000972,  OST_ColumnAnalytical,          AnalyticalModel, false,       true,        0,           L"Local Coordinate System")               \
  DEF(OST_BraceLocalCoordSys,                                 -2000973,  OST_BraceAnalytical,           AnalyticalModel, false,       true,        0,           L"Local Coordinate System")               \
  DEF(OST_WallLocalCoordSys,                                  -2000974,  OST_WallAnalytical,            AnalyticalModel, false,       true,        0,           L"Local Coordinate System")               \
  DEF(OST_FloorLocalCoordSys,                                 -2000975,  OST_FloorAnalytical,           AnalyticalModel, false,       true,        0,           L"Local Coordinate System")               \
  DEF(OST_FndSlabLocalCoordSys,                               -2000976,  OST_FoundationSlabAnalytical,  AnalyticalModel, false,       true,        0,           L"Local Coordinate System")               \
  DEF(OST_CoordinateSystem,                                   -2000977,  OST_Site,                      Model,           false,       false,       0,           L"Internal Origin")                       \
  DEF(OST_MultistoryStairs,                                   -2000980,  not_std::nullopt,              Model,           false,       false,       0,           L"Multistory Stairs")                     \
  DEF(OST_Coordination_Model,                                 -2000982,  not_std::nullopt,              Model,           false,       true,        0,           L"Coordination Model")                    \
  DEF(OST_AnalyticalPipeConnections,                          -2000983,  not_std::nullopt,              AnalyticalModel, false,       false,       16,          L"Analytical Pipe Connections")           \
  DEF(OST_AnalyticalPipeConnectionLineSymbol,                 -2000984,  OST_AnalyticalPipeConnections, AnalyticalModel, false,       false,       0,           L"Connection Line Symbol")                \
  DEF(OST_MechanicalEquipmentSet,                             -2000985,  not_std::nullopt,              Model,           false,       false,       0,           L"Mechanical Equipment Sets")             \
  DEF(OST_MechanicalEquipmentSetTags,                         -2000986,  not_std::nullopt,              Annotation,      false,       false,       20,          L"Mechanical Equipment Set Tags")         \
  DEF(OST_MechanicalEquipmentSetBoundaryLines,                -2000987,  not_std::nullopt,              Annotation,      false,       false,       20,          L"Mechanical Equipment Set Boundary Lines")\
  DEF(OST_PipeHydronicSeparationSymbols,                      -2000988,  OST_PipeCurves,                Model,           false,       false,       0,           L"Hydraulic Separation Symbols")          \
  DEF(OST_RiseDropSymbols,                                    -2000989,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ColumnOpening,                                      -2000994,  OST_StructuralColumns,         Model,           false,       false,       0,           L"Structural opening cut")                \
  DEF(OST_StructuralFramingOpening,                           -2000995,  OST_StructuralFraming,         Model,           false,       true,        0,           L"Structural opening cut")                \
  DEF(OST_ShaftOpening,                                       -2000996,  not_std::nullopt,              Model,           false,       true,        3,           L"Shaft Openings")                        \
  DEF(OST_SWallRectOpening,                                   -2000997,  OST_Walls,                     Model,           false,       true,        0,           L"Rectangular Straight Wall Opening")     \
  DEF(OST_DormerOpeningIncomplete,                            -2000998,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ArcWallRectOpening,                                 -2000999,  OST_Walls,                     Model,           false,       true,        0,           L"Rectangular Arc Wall Opening")          \
  DEF(OST_Casework,                                           -2001000,  not_std::nullopt,              Model,           true,        true,        1,           L"Casework")                              \
  DEF(OST_MEPSystemZone,                                      -2001001,  not_std::nullopt,              AnalyticalModel, false,       false,       20,          L"System-Zones")                          \
  DEF(OST_MEPSystemZoneBoundary,                              -2001002,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSystemZoneInteriorFill,                          -2001003,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSystemZoneReferenceLines,                        -2001004,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSystemZoneInteriorFillVisibility,                -2001005,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSystemZoneReferenceLinesVisibility,              -2001006,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSystemZoneTags,                                  -2001007,  not_std::nullopt,              Annotation,      false,       false,       20,          L"System-Zone Tags")                      \
  DEF(OST_MEPAnalyticalAirLoop,                               -2001008,  not_std::nullopt,              Model,           false,       false,       0,           L"Air Systems")                           \
  DEF(OST_MEPAnalyticalWaterLoop,                             -2001009,  not_std::nullopt,              Model,           false,       false,       0,           L"Water Loops")                           \
  DEF(OST_ZoneEquipment,                                      -2001010,  not_std::nullopt,              Model,           false,       false,       0,           L"Zone Equipment")                        \
  DEF(OST_ElectricalCircuitNaming,                            -2001011,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Alignments,                                         -2001012,  not_std::nullopt,              Annotation,      true,        false,       0,           L"Alignments")                            \
  DEF(OST_AlignmentsTags,                                     -2001015,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Alignment Tags")                        \
  DEF(OST_AlignmentStationLabelSets,                          -2001016,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Alignment Station Label Sets")          \
  DEF(OST_AlignmentStationLabels,                             -2001017,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Alignment Station Labels")              \
  DEF(OST_ElectricalEquipment,                                -2001040,  not_std::nullopt,              Model,           false,       true,        9,           L"Electrical Equipment")                  \
  DEF(OST_ElectricalFixtures,                                 -2001060,  not_std::nullopt,              Model,           false,       true,        9,           L"Electrical Fixtures")                   \
  DEF(OST_FurnitureSystems,                                   -2001100,  not_std::nullopt,              Model,           false,       true,        1,           L"Furniture Systems")                     \
  DEF(OST_LightingFixtures,                                   -2001120,  not_std::nullopt,              Model,           false,       true,        9,           L"Lighting Fixtures")                     \
  DEF(OST_LightingFixtureSource,                              -2001121,  OST_LightingFixtures,          Model,           false,       false,       0,           L"Light Source")                          \
  DEF(OST_MechanicalEquipment,                                -2001140,  not_std::nullopt,              Model,           false,       true,        21,          L"Mechanical Equipment")                  \
  DEF(OST_PlumbingFixtures,                                   -2001160,  not_std::nullopt,              Model,           false,       true,        17,          L"Plumbing Fixtures")                     \
  DEF(OST_Parking,                                            -2001180,  not_std::nullopt,              Model,           false,       true,        1,           L"Parking")                               \
  DEF(OST_Property,                                           -2001200,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Roads,                                              -2001220,  not_std::nullopt,              Model,           true,        false,       1,           L"Roads")                                 \
  DEF(OST_Sewer,                                              -2001240,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Site,                                               -2001260,  not_std::nullopt,              Model,           true,        true,        1,           L"Site")                                  \
  DEF(OST_SiteSurface,                                        -2001261,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SitePoint,                                          -2001262,  OST_Topography,                Model,           false,       false,       0,           L"Interior Point")                        \
  DEF(OST_BuildingPad,                                        -2001263,  OST_Site,                      Model,           false,       true,        0,           L"Pads")                                  \
  DEF(OST_SiteProperty,                                       -2001265,  OST_Site,                      Model,           true,        false,       0,           L"Property Lines")                        \
  DEF(OST_SitePointBoundary,                                  -2001266,  OST_Topography,                Model,           false,       false,       0,           L"Boundary Point")                        \
  DEF(OST_SitePropertyTags,                                   -2001267,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Property Tags")                         \
  DEF(OST_SitePropertyLineSegment,                            -2001268,  OST_Site,                      Internal,        true,        false,       0,           L"Property Line Segments")                \
  DEF(OST_SitePropertyLineSegmentTags,                        -2001269,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Property Line Segment Tags")            \
  DEF(OST_SiteRegion,                                         -2001270,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ProjectBasePoint,                                   -2001271,  OST_Site,                      Model,           false,       false,       0,           L"Project Base Point")                    \
  DEF(OST_SharedBasePoint,                                    -2001272,  OST_Site,                      Model,           false,       false,       0,           L"Survey Point")                          \
  DEF(OST_BasePointAxisX,                                     -2001273,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BasePointAxisY,                                     -2001274,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BasePointAxisZ,                                     -2001275,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_LinkBasePoint,                                      -2001276,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructuralFoundation,                               -2001300,  not_std::nullopt,              Model,           true,        true,        3,           L"Structural Foundations")                \
  DEF(OST_HiddenStructuralFoundationLines,                    -2001302,  OST_StructuralFoundation,      Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructuralFraming,                                  -2001320,  not_std::nullopt,              Model,           true,        true,        3,           L"Structural Framing")                    \
  DEF(OST_StructuralFramingOther,                             -2001321,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Other")                                 \
  DEF(OST_Girder,                                             -2001322,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Girder")                                \
  DEF(OST_Joist,                                              -2001323,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Joist")                                 \
  DEF(OST_Purlin,                                             -2001324,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Purlin")                                \
  DEF(OST_HorizontalBracing,                                  -2001325,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Horizontal Bracing")                    \
  DEF(OST_VerticalBracing,                                    -2001326,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Vertical Bracing")                      \
  DEF(OST_StructuralFramingSystem,                            -2001327,  not_std::nullopt,              Model,           false,       true,        3,           L"Structural Beam Systems")               \
  DEF(OST_KickerBracing,                                      -2001328,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Kicker Bracing")                        \
  DEF(OST_HiddenStructuralFramingLines,                       -2001329,  OST_StructuralFraming,         Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructuralColumns,                                  -2001330,  not_std::nullopt,              Model,           true,        true,        3,           L"Structural Columns")                    \
  DEF(OST_FramingAnalyticalGeometry,                          -2001331,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ColumnAnalyticalGeometry,                           -2001332,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AnalyticalRigidLinks,                               -2001333,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Rigid Links")                           \
  DEF(OST_HiddenStructuralColumnLines,                        -2001334,  OST_StructuralColumns,         Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructuralColumnStickSymbols,                       -2001335,  OST_StructuralColumns,         Model,           false,       false,       0,           L"Stick Symbols")                         \
  DEF(OST_StructuralTruss,                                    -2001336,  not_std::nullopt,              Model,           false,       true,        2,           L"Structural Trusses")                    \
  DEF(OST_TopographyLink,                                     -2001339,  OST_Topography,                Model,           false,       false,       0,           L"Topography Links")                      \
  DEF(OST_Topography,                                         -2001340,  not_std::nullopt,              Model,           true,        true,        1,           L"Topography")                            \
  DEF(OST_TopographySurface,                                  -2001341,  OST_Topography,                Model,           false,       false,       0,           L"Triangulation Edges")                   \
  DEF(OST_TopographyContours,                                 -2001342,  OST_Topography,                Model,           false,       false,       0,           L"Primary Contours")                      \
  DEF(OST_SecondaryTopographyContours,                        -2001343,  OST_Topography,                Model,           false,       false,       0,           L"Secondary Contours")                    \
  DEF(OST_ColumnAnalyticalRigidLinks,                         -2001344,  OST_StructuralColumns,         Model,           false,       false,       0,           L"Rigid Links")                           \
  DEF(OST_SpecialityEquipment,                                -2001350,  not_std::nullopt,              Model,           false,       true,        1,           L"Specialty Equipment")                   \
  DEF(OST_Automatic,                                          -2001351,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RvtLinks,                                           -2001352,  not_std::nullopt,              Model,           false,       false,       0,           L"RVT Links")                             \
  DEF(OST_FootingAnalyticalGeometry,                          -2001353,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructuralStiffener,                                -2001354,  not_std::nullopt,              Model,           true,        true,        3,           L"Structural Stiffeners")                 \
  DEF(OST_StructuralStiffenerTags,                            -2001355,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Stiffener Tags")             \
  DEF(OST_StructuralFramingLocationLine,                      -2001356,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Location Lines")                        \
  DEF(OST_StructuralColumnLocationLine,                       -2001357,  OST_StructuralColumns,         Model,           false,       false,       0,           L"Location Lines")                        \
  DEF(OST_StructuralStiffenerHiddenLines,                     -2001358,  OST_StructuralStiffener,       Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_Blocks,                                             -2001359,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Planting,                                           -2001360,  not_std::nullopt,              Model,           false,       true,        1,           L"Planting")                              \
  DEF(OST_Entourage,                                          -2001370,  not_std::nullopt,              Model,           false,       true,        1,           L"Entourage")                             \
  DEF(OST_Fascia,                                             -2001390,  OST_Roofs,                     Model,           false,       true,        0,           L"Fascias")                               \
  DEF(OST_Gutter,                                             -2001391,  OST_Roofs,                     Model,           false,       true,        0,           L"Gutters")                               \
  DEF(OST_EdgeSlab,                                           -2001392,  OST_Floors,                    Model,           false,       true,        0,           L"Slab Edges")                            \
  DEF(OST_RoofSoffit,                                         -2001393,  OST_Roofs,                     Model,           false,       true,        0,           L"Roof Soffits")                          \
  DEF(OST_DetailComponents,                                   -2002000,  not_std::nullopt,              Model,           false,       false,       31,          L"Detail Items")                          \
  DEF(OST_ProfileFamilies,                                    -2003000,  not_std::nullopt,              Model,           false,       false,       0,           L"Profiles")                              \
  DEF(OST_Sheets,                                             -2003100,  not_std::nullopt,              Model,           false,       false,       0,           L"Sheets")                                \
  DEF(OST_ProjectInformation,                                 -2003101,  not_std::nullopt,              Model,           false,       false,       0,           L"Project Information")                   \
  DEF(OST_Areas,                                              -2003200,  not_std::nullopt,              Model,           false,       false,       29,          L"Areas")                                 \
  DEF(OST_AreaSchemes,                                        -2003201,  not_std::nullopt,              Internal,        false,       false,       0,           L"Area Schemes")                          \
  DEF(OST_ZoneSchemes,                                        -2003225,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_TrussDummy,                                         -2003300,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RampsIncomplete,                                    -2003301,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RampsAboveCut,                                      -2003302,  OST_Ramps,                     Model,           false,       false,       0,           L"Ramps Beyond Cut Line")                 \
  DEF(OST_RampsStringer,                                      -2003303,  OST_Ramps,                     Model,           false,       false,       0,           L"Stringers")                             \
  DEF(OST_RampsStringerAboveCut,                              -2003304,  OST_Ramps,                     Model,           false,       false,       0,           L"Stringers Beyond Cut Line")             \
  DEF(OST_RampsUpText,                                        -2003305,  OST_Ramps,                     Model,           false,       false,       0,           L"UP text")                               \
  DEF(OST_RampsDownText,                                      -2003306,  OST_Ramps,                     Model,           false,       false,       0,           L"DOWN text")                             \
  DEF(OST_RampsUpArrow,                                       -2003307,  OST_Ramps,                     Model,           false,       false,       0,           L"Up Arrow")                              \
  DEF(OST_RampsDownArrow,                                     -2003308,  OST_Ramps,                     Model,           false,       false,       0,           L"Down Arrow")                            \
  DEF(OST_RepeatingDetailLines,                               -2003321,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DividedSurface,                                     -2003323,  OST_Mass,                      Internal,        false,       false,       0,           L"Divided Surface")                       \
  DEF(OST_DividedSurface_Nodes,                               -2003324,  OST_Mass,                      Model,           false,       false,       0,           L"Nodes")                                 \
  DEF(OST_DividedSurface_Gridlines,                           -2003325,  OST_Mass,                      Model,           false,       false,       0,           L"Gridlines")                             \
  DEF(OST_DividedSurface_PatternLines,                        -2003326,  OST_Mass,                      Model,           false,       false,       0,           L"Pattern Lines")                         \
  DEF(OST_DividedSurface_PatternFill,                         -2003327,  OST_Mass,                      Model,           false,       false,       0,           L"Pattern Fill")                          \
  DEF(OST_DividedSurface_PreDividedSurface,                   -2003328,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DividedSurface_TransparentFace,                     -2003329,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AlwaysExcludedInAllViews,                           -2003330,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_TilePatterns,                                       -2003331,  not_std::nullopt,              Internal,        false,       false,       0,           L"Pattern")                               \
  DEF(OST_DividedSurfaceBelt,                                 -2003332,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DividedSurface_DiscardedDivisionLines,              -2003333,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Mass,                                               -2003400,  not_std::nullopt,              Model,           true,        true,        31,          L"Mass")                                  \
  DEF(OST_MassFloor,                                          -2003403,  OST_Mass,                      Model,           true,        true,        0,           L"Mass Floor")                            \
  DEF(OST_MassForm,                                           -2003404,  OST_Mass,                      Model,           false,       false,       0,           L"Form")                                  \
  DEF(OST_MassTags,                                           -2003405,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Mass Tags")                             \
  DEF(OST_ZoningEnvelope,                                     -2003406,  OST_Mass,                      Model,           true,        false,       0,           L"Default Zoning Envelope")               \
  DEF(OST_MassCutter,                                         -2003407,  OST_Mass,                      Model,           false,       false,       0,           L"Default Mass Cutter")                   \
  DEF(OST_MassFaceSplitter,                                   -2003408,  OST_Mass,                      Model,           false,       false,       0,           L"Default Face Splitter")                 \
  DEF(OST_HostTemplate,                                       -2003409,  OST_Mass,                      Model,           false,       false,       0,           L"Default Host Template")                 \
  DEF(OST_MassAreaFaceTags,                                   -2003410,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Mass Floor Tags")                       \
  DEF(OST_MassZone,                                           -2003411,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Zone")                             \
  DEF(OST_MassInteriorWall,                                   -2003412,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Interior Wall")                    \
  DEF(OST_MassExteriorWall,                                   -2003413,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Exterior Wall")                    \
  DEF(OST_MassRoof,                                           -2003414,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Roof")                             \
  DEF(OST_MassGlazing,                                        -2003415,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Glazing")                          \
  DEF(OST_MassSkylights,                                      -2003416,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Skylight")                         \
  DEF(OST_MassOpening,                                        -2003417,  OST_Mass,                      Model,           true,        false,       0,           L"Mass Opening")                          \
  DEF(OST_MassShade,                                          -2003418,  OST_Mass,                      Model,           false,       false,       0,           L"Mass Shade")                            \
  DEF(OST_MassSlab,                                           -2003419,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassExteriorWallUnderground,                        -2003420,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassWallsAll,                                       -2003421,  OST_Mass,                      Model,           false,       false,       0,           L"Mass Walls")                            \
  DEF(OST_MassFloorsAll,                                      -2003422,  OST_Mass,                      Model,           false,       false,       0,           L"Mass Floors")                           \
  DEF(OST_MassGlazingAll,                                     -2003423,  OST_Mass,                      Model,           false,       false,       0,           L"Mass Windows and Skylights")            \
  DEF(OST_StackedWalls,                                       -2003500,  OST_Walls,                     Model,           false,       true,        0,           L"Stacked Walls")                         \
  DEF(OST_MEPSpaces,                                          -2003600,  not_std::nullopt,              Model,           false,       false,       28,          L"Spaces")                                \
  DEF(OST_MEPSpaceInteriorFillVisibility,                     -2003601,  OST_MEPSpaces,                 Model,           false,       false,       0,           L"Interior")                              \
  DEF(OST_MEPSpaceReferenceVisibility,                        -2003602,  OST_MEPSpaces,                 Model,           false,       false,       0,           L"Reference")                             \
  DEF(OST_MEPSpaceInteriorFill,                               -2003603,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSpaceReference,                                  -2003604,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MEPSpaceColorFill,                                  -2003605,  OST_MEPSpaces,                 Model,           false,       false,       0,           L"Color Fill")                            \
  DEF(OST_Tags,                                               -2005000,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CaseworkTags,                                       -2005001,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Casework Tags")                         \
  DEF(OST_CeilingTags,                                        -2005002,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Ceiling Tags")                          \
  DEF(OST_ElectricalEquipmentTags,                            -2005003,  not_std::nullopt,              Annotation,      false,       false,       9,           L"Electrical Equipment Tags")             \
  DEF(OST_ElectricalFixtureTags,                              -2005004,  not_std::nullopt,              Annotation,      false,       false,       9,           L"Electrical Fixture Tags")               \
  DEF(OST_FurnitureTags,                                      -2005006,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Furniture Tags")                        \
  DEF(OST_FurnitureSystemTags,                                -2005007,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Furniture System Tags")                 \
  DEF(OST_LightingFixtureTags,                                -2005008,  not_std::nullopt,              Annotation,      false,       false,       9,           L"Lighting Fixture Tags")                 \
  DEF(OST_MechanicalEquipmentTags,                            -2005009,  not_std::nullopt,              Annotation,      false,       false,       21,          L"Mechanical Equipment Tags")             \
  DEF(OST_PlumbingFixtureTags,                                -2005010,  not_std::nullopt,              Annotation,      false,       false,       17,          L"Plumbing Fixture Tags")                 \
  DEF(OST_WallTags,                                           -2005011,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Wall Tags")                             \
  DEF(OST_CurtainWallPanelTags,                               -2005012,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Curtain Panel Tags")                    \
  DEF(OST_GenericModelTags,                                   -2005013,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Generic Model Tags")                    \
  DEF(OST_SpecialityEquipmentTags,                            -2005014,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Specialty Equipment Tags")              \
  DEF(OST_StructuralFramingTags,                              -2005015,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Structural Framing Tags")               \
  DEF(OST_SiteTags,                                           -2005016,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Site Tags")                             \
  DEF(OST_ParkingTags,                                        -2005017,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Parking Tags")                          \
  DEF(OST_StructuralColumnTags,                               -2005018,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Structural Column Tags")                \
  DEF(OST_StructuralFoundationTags,                           -2005019,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Structural Foundation Tags")            \
  DEF(OST_AreaTags,                                           -2005020,  not_std::nullopt,              Annotation,      false,       false,       29,          L"Area Tags")                             \
  DEF(OST_PlantingTags,                                       -2005021,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Planting Tags")                         \
  DEF(OST_MultiCategoryTags,                                  -2005022,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Multi-Category Tags")                   \
  DEF(OST_StairsTags,                                         -2005023,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Stair Tags")                            \
  DEF(OST_HostFinTags,                                        -2005024,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurtaSystemTags,                                    -2005025,  not_std::nullopt,              Annotation,      false,       false,       1,           L"Curtain System Tags")                   \
  DEF(OST_FloorTags,                                          -2005026,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Floor Tags")                            \
  DEF(OST_MaterialTags,                                       -2005027,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Material Tags")                         \
  DEF(OST_DetailComponentTags,                                -2005028,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Detail Item Tags")                      \
  DEF(OST_KeynoteTags,                                        -2005029,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Keynote Tags")                          \
  DEF(OST_TrussTags,                                          -2005030,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Truss Tags")                 \
  DEF(OST_SpotElevSymbols,                                    -2005100,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Spot Elevation Symbols")                \
  DEF(OST_SpotCoordinateSymbols,                              -2005101,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SpotSlopesSymbols,                                  -2005102,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SpanDirectionSymbol,                                -2005110,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Span Direction Symbol")                 \
  DEF(OST_FootingSpanDirectionSymbol,                         -2005111,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Foundation Span Direction Symbol")      \
  DEF(OST_BeamSystemTags,                                     -2005130,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Beam System Tags")           \
  DEF(OST_Loads,                                              -2005200,  not_std::nullopt,              AnalyticalModel, false,       false,       2,           L"Structural Loads")                      \
  DEF(OST_PointLoads,                                         -2005201,  OST_Loads,                     AnalyticalModel, true,        true,        0,           L"Point Loads")                           \
  DEF(OST_LineLoads,                                          -2005202,  OST_Loads,                     AnalyticalModel, true,        true,        0,           L"Line Loads")                            \
  DEF(OST_AreaLoads,                                          -2005203,  OST_Loads,                     AnalyticalModel, true,        true,        0,           L"Area Loads")                            \
  DEF(OST_InternalLoads,                                      -2005204,  not_std::nullopt,              AnalyticalModel, false,       false,       2,           L"Structural Internal Loads")             \
  DEF(OST_InternalPointLoads,                                 -2005205,  OST_InternalLoads,             AnalyticalModel, true,        false,       0,           L"Internal Point Loads")                  \
  DEF(OST_InternalLineLoads,                                  -2005206,  OST_InternalLoads,             AnalyticalModel, true,        false,       0,           L"Internal Line Loads")                   \
  DEF(OST_InternalAreaLoads,                                  -2005207,  OST_InternalLoads,             AnalyticalModel, true,        false,       0,           L"Internal Area Loads")                   \
  DEF(OST_LoadCases,                                          -2005210,  not_std::nullopt,              AnalyticalModel, false,       false,       2,           L"Structural Load Cases")                 \
  DEF(OST_LoadCasesDead,                                      -2005211,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Dead Loads")                            \
  DEF(OST_LoadCasesLive,                                      -2005212,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Live Loads")                            \
  DEF(OST_LoadCasesWind,                                      -2005213,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Wind Loads")                            \
  DEF(OST_LoadCasesSnow,                                      -2005214,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Snow Loads")                            \
  DEF(OST_LoadCasesRoofLive,                                  -2005215,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Roof Live Loads")                       \
  DEF(OST_LoadCasesAccidental,                                -2005216,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Accidental Loads")                      \
  DEF(OST_LoadCasesTemperature,                               -2005217,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Temperature Loads")                     \
  DEF(OST_LoadCasesSeismic,                                   -2005218,  OST_LoadCases,                 AnalyticalModel, false,       false,       0,           L"Seismic Loads")                         \
  DEF(OST_PointLoadTags,                                      -2005250,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Point Load Tags")                       \
  DEF(OST_LineLoadTags,                                       -2005251,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Line Load Tags")                        \
  DEF(OST_AreaLoadTags,                                       -2005252,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Area Load Tags")                        \
  DEF(OST_InternalPointLoadTags,                              -2005253,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Internal Point Load Tags")              \
  DEF(OST_InternalLineLoadTags,                               -2005254,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Internal Line Load Tags")               \
  DEF(OST_InternalAreaLoadTags,                               -2005255,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Internal Area Load Tags")               \
  DEF(OST_BoundaryConditions,                                 -2005301,  not_std::nullopt,              AnalyticalModel, false,       false,       2,           L"Boundary Conditions")                   \
  DEF(OST_VolumeOfInterest,                                   -2006000,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Scope Boxes")                           \
  DEF(OST_DecalElement,                                       -2006001,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DecalType,                                          -2006002,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_LevelHeads,                                         -2006020,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Level Heads")                           \
  DEF(OST_GridHeads,                                          -2006040,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Grid Heads")                            \
  DEF(OST_ElevationMarks,                                     -2006045,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Elevation Marks")                       \
  DEF(OST_EditCutProfile,                                     -2006050,  not_std::nullopt,              Internal,        false,       false,       0,           L"Cut Profile")                           \
  DEF(OST_RevisionClouds,                                     -2006060,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Revision Clouds")                       \
  DEF(OST_Revisions,                                          -2006070,  not_std::nullopt,              Internal,        false,       false,       0,           L"Revision")                              \
  DEF(OST_RevisionCloudTags,                                  -2006080,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Revision Cloud Tags")                   \
  DEF(OST_StructuralAnnotations,                              -2006090,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Structural Annotations")                \
  DEF(OST_StructConnectionSymbols,                            -2006100,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Connection Symbols")                    \
  DEF(OST_StructuralBracePlanReps,                            -2006110,  not_std::nullopt,              Annotation,      false,       false,       3,           L"Brace in Plan View Symbols")            \
  DEF(OST_DesignOptionSets,                                   -2006112,  not_std::nullopt,              Internal,        false,       false,       0,           L"Design Option Sets")                    \
  DEF(OST_DesignOptions,                                      -2006114,  not_std::nullopt,              Internal,        false,       false,       0,           L"Design Options")                        \
  DEF(OST_BridgeAbutments,                                    -2006130,  not_std::nullopt,              Model,           true,        false,       0,           L"Abutments")                             \
  DEF(OST_BridgePiers,                                        -2006131,  not_std::nullopt,              Model,           true,        false,       0,           L"Piers")                                 \
  DEF(OST_BridgeTowers,                                       -2006132,  OST_BridgePiers,               Model,           true,        false,       0,           L"Pier Towers")                           \
  DEF(OST_BridgeCables,                                       -2006133,  not_std::nullopt,              Model,           true,        false,       0,           L"Bridge Cables")                         \
  DEF(OST_BridgeArches,                                       -2006134,  OST_BridgeFraming,             Model,           true,        false,       0,           L"Arches")                                \
  DEF(OST_BridgeDecks,                                        -2006135,  not_std::nullopt,              Model,           true,        false,       0,           L"Bridge Decks")                          \
  DEF(OST_BridgeFoundations,                                  -2006136,  OST_BridgePiers,               Model,           true,        false,       0,           L"Pier Foundations")                      \
  DEF(OST_BridgeGirders,                                      -2006137,  OST_BridgeFraming,             Model,           true,        false,       0,           L"Girders")                               \
  DEF(OST_BridgeBearings,                                     -2006138,  not_std::nullopt,              Model,           true,        false,       0,           L"Bearings")                              \
  DEF(OST_BridgeAbutmentHiddenLines,                          -2006150,  OST_BridgeAbutments,           Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_BridgePierHiddenLines,                              -2006151,  OST_BridgePiers,               Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_BridgeTowerHiddenLines,                             -2006152,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeCableHiddenLines,                             -2006153,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeArchHiddenLines,                              -2006154,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeDeckHiddenLines,                              -2006155,  OST_BridgeDecks,               Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_BridgeFoundationHiddenLines,                        -2006156,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeGirderHiddenLines,                            -2006157,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeBearingHiddenLines,                           -2006158,  OST_BridgeBearings,            Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_BridgeAbutmentTags,                                 -2006170,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Abutment Tags")                         \
  DEF(OST_BridgePierTags,                                     -2006171,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Tags")                             \
  DEF(OST_BridgeTowerTags,                                    -2006172,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Tower Tags")                       \
  DEF(OST_BridgeCableTags,                                    -2006173,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Bridge Cable Tags")                     \
  DEF(OST_BridgeArchTags,                                     -2006174,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeDeckTags,                                     -2006175,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Bridge Deck Tags")                      \
  DEF(OST_BridgeFoundationTags,                               -2006176,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Foundation Tags")                  \
  DEF(OST_BridgeGirderTags,                                   -2006177,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BridgeBearingTags,                                  -2006178,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Bearing Tags")                          \
  DEF(OST_AbutmentFoundations,                                -2006202,  OST_BridgeAbutments,           Model,           false,       false,       0,           L"Abutment Foundations")                  \
  DEF(OST_AbutmentPiles,                                      -2006203,  OST_BridgeAbutments,           Model,           false,       false,       0,           L"Abutment Piles")                        \
  DEF(OST_AbutmentWalls,                                      -2006204,  OST_BridgeAbutments,           Model,           false,       false,       0,           L"Abutment Walls")                        \
  DEF(OST_ApproachSlabs,                                      -2006205,  OST_BridgeAbutments,           Model,           false,       false,       0,           L"Approach Slabs")                        \
  DEF(OST_AbutmentFoundationTags,                             -2006208,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Abutment Foundation Tags")              \
  DEF(OST_AbutmentPileTags,                                   -2006209,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Abutment Pile Tags")                    \
  DEF(OST_AbutmentWallTags,                                   -2006210,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Abutment Wall Tags")                    \
  DEF(OST_ApproachSlabTags,                                   -2006211,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Approach Slab Tags")                    \
  DEF(OST_PierCaps,                                           -2006219,  OST_BridgePiers,               Model,           true,        false,       0,           L"Pier Caps")                             \
  DEF(OST_PierCapTags,                                        -2006220,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Cap Tags")                         \
  DEF(OST_PierColumns,                                        -2006221,  OST_BridgePiers,               Model,           true,        false,       0,           L"Pier Columns")                          \
  DEF(OST_PierColumnTags,                                     -2006222,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Column Tags")                      \
  DEF(OST_PierPiles,                                          -2006225,  OST_BridgePiers,               Model,           true,        false,       0,           L"Pier Piles")                            \
  DEF(OST_PierPileTags,                                       -2006226,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Pile Tags")                        \
  DEF(OST_PierWalls,                                          -2006229,  OST_BridgePiers,               Model,           true,        false,       0,           L"Pier Walls")                            \
  DEF(OST_PierWallTags,                                       -2006230,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Pier Wall Tags")                        \
  DEF(OST_BridgeFraming,                                      -2006241,  not_std::nullopt,              Model,           true,        false,       0,           L"Bridge Framing")                        \
  DEF(OST_BridgeFramingHiddenLines,                           -2006242,  OST_BridgeFraming,             Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_BridgeFramingTags,                                  -2006243,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Bridge Framing Tags")                   \
  DEF(OST_BridgeFramingCrossBracing,                          -2006245,  OST_BridgeFraming,             Model,           true,        false,       0,           L"Cross Bracing")                         \
  DEF(OST_BridgeFramingDiaphragms,                            -2006246,  OST_BridgeFraming,             Model,           true,        false,       0,           L"Diaphragms")                            \
  DEF(OST_BridgeFramingTrusses,                               -2006248,  OST_BridgeFraming,             Model,           true,        false,       0,           L"Trusses")                               \
  DEF(OST_VibrationManagement,                                -2006261,  not_std::nullopt,              Model,           true,        false,       0,           L"Vibration Management")                  \
  DEF(OST_VibrationManagementHiddenLines,                     -2006262,  OST_VibrationManagement,       Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_VibrationDampers,                                   -2006263,  OST_VibrationManagement,       Model,           true,        false,       0,           L"Vibration Dampers")                     \
  DEF(OST_VibrationDamperTags,                                -2006264,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Vibration Damper Tags")                 \
  DEF(OST_VibrationIsolators,                                 -2006265,  OST_VibrationManagement,       Model,           true,        false,       0,           L"Vibration Isolators")                   \
  DEF(OST_VibrationIsolatorTags,                              -2006266,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Vibration Isolator Tags")               \
  DEF(OST_ExpansionJoints,                                    -2006271,  not_std::nullopt,              Model,           true,        false,       0,           L"Expansion Joints")                      \
  DEF(OST_ExpansionJointHiddenLines,                          -2006272,  OST_ExpansionJoints,           Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_ExpansionJointTags,                                 -2006273,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Expansion Joint Tags")                  \
  DEF(OST_StructuralTendons,                                  -2006274,  not_std::nullopt,              Model,           true,        false,       0,           L"Structural Tendons")                    \
  DEF(OST_StructuralTendonHiddenLines,                        -2006275,  OST_StructuralTendons,         Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructuralTendonTags,                               -2006276,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Structural Tendon Tags")                \
  DEF(OST_ConnectorElem,                                      -2007000,  not_std::nullopt,              Model,           false,       false,       0,           L"Connector Element")                     \
  DEF(OST_ConnectorElemXAxis,                                 -2007001,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ConnectorElemYAxis,                                 -2007002,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_ConnectorElemZAxis,                                 -2007003,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DuctColorFillLegends,                               -2007004,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Color Fill Legends")               \
  DEF(OST_DuctCurves,                                         -2008000,  not_std::nullopt,              Model,           false,       true,        4,           L"Ducts")                                 \
  DEF(OST_DuctCurvesCenterLine,                               -2008001,  OST_DuctCurves,                Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_DuctCurvesContour,                                  -2008002,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DuctTags,                                           -2008003,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Tags")                             \
  DEF(OST_FlexDuctTags,                                       -2008004,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Flex Duct Tags")                        \
  DEF(OST_DuctColorFills,                                     -2008005,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Color Fill")                       \
  DEF(OST_DuctFitting,                                        -2008010,  not_std::nullopt,              Model,           false,       true,        4,           L"Duct Fittings")                         \
  DEF(OST_DuctTerminal,                                       -2008013,  not_std::nullopt,              Model,           false,       true,        4,           L"Air Terminals")                         \
  DEF(OST_DuctTerminalTags,                                   -2008014,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Air Terminal Tags")                     \
  DEF(OST_DuctSystem,                                         -2008015,  not_std::nullopt,              Model,           false,       false,       0,           L"Duct Systems")                          \
  DEF(OST_DuctAccessory,                                      -2008016,  not_std::nullopt,              Model,           false,       true,        4,           L"Duct Accessories")                      \
  DEF(OST_DuctAccessoryTags,                                  -2008017,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Accessory Tags")                   \
  DEF(OST_FlexDuctCurves,                                     -2008020,  not_std::nullopt,              Model,           false,       true,        4,           L"Flex Ducts")                            \
  DEF(OST_FlexDuctCurvesCenterLine,                           -2008021,  OST_FlexDuctCurves,            Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_FlexDuctCurvesContour,                              -2008022,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FlexDuctCurvesPattern,                              -2008023,  OST_FlexDuctCurves,            Model,           false,       false,       0,           L"Pattern")                               \
  DEF(OST_DuctCurvesRiseDrop,                                 -2008036,  OST_DuctCurves,                Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_ElectricalCircuit,                                  -2008037,  not_std::nullopt,              Model,           false,       false,       0,           L"Electrical Circuits")                   \
  DEF(OST_ElectricalCircuitTags,                              -2008038,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Wire,                                               -2008039,  not_std::nullopt,              Model,           false,       false,       8,           L"Wires")                                 \
  DEF(OST_ElectricalVoltage,                                  -2008040,  not_std::nullopt,              Model,           false,       false,       0,           L"Voltages")                              \
  DEF(OST_ElecDistributionSys,                                -2008041,  not_std::nullopt,              Model,           false,       false,       0,           L"Distribution Systems")                  \
  DEF(OST_ElectricalDemandFactor,                             -2008042,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PipingSystem,                                       -2008043,  not_std::nullopt,              Model,           false,       false,       0,           L"Piping Systems")                        \
  DEF(OST_PipeCurves,                                         -2008044,  not_std::nullopt,              Model,           false,       true,        16,          L"Pipes")                                 \
  DEF(OST_PipeCurvesCenterLine,                               -2008045,  OST_PipeCurves,                Model,           false,       true,        0,           L"Center Line")                           \
  DEF(OST_PipeCurvesContour,                                  -2008046,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PipeTags,                                           -2008047,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Pipe Tags")                             \
  DEF(OST_FlexPipeTags,                                       -2008048,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Flex Pipe Tags")                        \
  DEF(OST_PipeFitting,                                        -2008049,  not_std::nullopt,              Model,           false,       true,        16,          L"Pipe Fittings")                         \
  DEF(OST_FlexPipeCurves,                                     -2008050,  not_std::nullopt,              Model,           false,       true,        16,          L"Flex Pipes")                            \
  DEF(OST_FlexPipeCurvesCenterLine,                           -2008051,  OST_FlexPipeCurves,            Model,           false,       true,        0,           L"Center Line")                           \
  DEF(OST_FlexPipeCurvesContour,                              -2008052,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FlexPipeCurvesPattern,                              -2008053,  OST_FlexPipeCurves,            Model,           false,       false,       0,           L"Pattern")                               \
  DEF(OST_PipeCurvesRiseDrop,                                 -2008054,  OST_PipeCurves,                Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_PipeAccessory,                                      -2008055,  not_std::nullopt,              Model,           false,       true,        16,          L"Pipe Accessories")                      \
  DEF(OST_PipeAccessoryTags,                                  -2008056,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Pipe Accessory Tags")                   \
  DEF(OST_WireTags,                                           -2008057,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Wire Tags")                             \
  DEF(OST_PipeColorFillLegends,                               -2008058,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Pipe Color Fill Legends")               \
  DEF(OST_PipeColorFills,                                     -2008059,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Pipe Color Fill")                       \
  DEF(OST_PipeFittingTags,                                    -2008060,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Pipe Fitting Tags")                     \
  DEF(OST_DuctFittingTags,                                    -2008061,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Fitting Tags")                     \
  DEF(OST_DuctCurvesDrop,                                     -2008062,  OST_DuctCurves,                Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_DuctCurvesInsulation,                               -2008063,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DuctCurvesLining,                                   -2008064,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FlexDuctCurvesInsulation,                           -2008065,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DuctFittingCenterLine,                              -2008066,  OST_DuctFitting,               Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_DuctFittingInsulation,                              -2008067,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DuctFittingLining,                                  -2008068,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PipeCurvesDrop,                                     -2008069,  OST_PipeCurves,                Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_PipeCurvesInsulation,                               -2008070,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FlexPipeCurvesInsulation,                           -2008071,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PipeFittingCenterLine,                              -2008072,  OST_PipeFitting,               Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_PipeFittingInsulation,                              -2008073,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WireTickMarks,                                      -2008074,  OST_Wire,                      Annotation,      false,       false,       0,           L"Wire Tick Marks")                       \
  DEF(OST_TelephoneDevices,                                   -2008075,  not_std::nullopt,              Model,           false,       false,       8,           L"Telephone Devices")                     \
  DEF(OST_TelephoneDeviceTags,                                -2008076,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Telephone Device Tags")                 \
  DEF(OST_NurseCallDevices,                                   -2008077,  not_std::nullopt,              Model,           false,       false,       8,           L"Nurse Call Devices")                    \
  DEF(OST_NurseCallDeviceTags,                                -2008078,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Nurse Call Device Tags")                \
  DEF(OST_SecurityDevices,                                    -2008079,  not_std::nullopt,              Model,           false,       true,        8,           L"Security Devices")                      \
  DEF(OST_SecurityDeviceTags,                                 -2008080,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Security Device Tags")                  \
  DEF(OST_CommunicationDevices,                               -2008081,  not_std::nullopt,              Model,           false,       true,        8,           L"Communication Devices")                 \
  DEF(OST_CommunicationDeviceTags,                            -2008082,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Communication Device Tags")             \
  DEF(OST_DataDevices,                                        -2008083,  not_std::nullopt,              Model,           false,       true,        8,           L"Data Devices")                          \
  DEF(OST_DataDeviceTags,                                     -2008084,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Data Device Tags")                      \
  DEF(OST_FireAlarmDevices,                                   -2008085,  not_std::nullopt,              Model,           false,       false,       8,           L"Fire Alarm Devices")                    \
  DEF(OST_FireAlarmDeviceTags,                                -2008086,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Fire Alarm Device Tags")                \
  DEF(OST_LightingDevices,                                    -2008087,  not_std::nullopt,              Model,           false,       true,        8,           L"Lighting Devices")                      \
  DEF(OST_LightingDeviceTags,                                 -2008088,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Lighting Device Tags")                  \
  DEF(OST_WireHomeRunArrows,                                  -2008089,  OST_Wire,                      Model,           false,       false,       0,           L"Home Run Arrows")                       \
  DEF(OST_GbXMLFaces,                                         -2008090,  not_std::nullopt,              AnalyticalModel, false,       false,       0,           L"Analytical Surfaces")                   \
  DEF(OST_GbXML_SType_Interior,                               -2008091,  OST_GbXMLFaces,                AnalyticalModel, false,       false,       0,           L"Interior")                              \
  DEF(OST_GbXML_SType_Exterior,                               -2008092,  OST_GbXMLFaces,                AnalyticalModel, false,       false,       0,           L"Exterior")                              \
  DEF(OST_GbXML_SType_Shade,                                  -2008093,  OST_GbXMLFaces,                AnalyticalModel, false,       false,       0,           L"Shades")                                \
  DEF(OST_GbXML_SType_Underground,                            -2008094,  OST_GbXMLFaces,                AnalyticalModel, false,       false,       0,           L"Underground")                           \
  DEF(OST_GbXML_Opening,                                      -2008095,  OST_GbXMLFaces,                AnalyticalModel, false,       false,       0,           L"Opening")                               \
  DEF(OST_RouteCurve,                                         -2008096,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RouteCurveMain,                                     -2008097,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RouteCurveBranch,                                   -2008098,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Sprinklers,                                         -2008099,  not_std::nullopt,              Model,           false,       true,        16,          L"Sprinklers")                            \
  DEF(OST_SprinklerTags,                                      -2008100,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Sprinkler Tags")                        \
  DEF(OST_SwitchSystem,                                       -2008101,  not_std::nullopt,              Model,           false,       false,       0,           L"Switch System")                         \
  DEF(OST_EAConstructions,                                    -2008102,  not_std::nullopt,              Model,           false,       false,       0,           L"Constructions")                         \
  DEF(OST_PipeConnections,                                    -2008103,  not_std::nullopt,              Model,           false,       false,       0,           L"Pipe Connections")                      \
  DEF(OST_PipeMaterials,                                      -2008104,  not_std::nullopt,              Model,           false,       false,       0,           L"Pipe Materials")                        \
  DEF(OST_PipeSchedules,                                      -2008105,  not_std::nullopt,              Model,           false,       false,       0,           L"Pipe Schedules")                        \
  DEF(OST_Fluids,                                             -2008106,  not_std::nullopt,              Model,           false,       false,       0,           L"Fluids")                                \
  DEF(OST_HVAC_Zones,                                         -2008107,  not_std::nullopt,              Model,           false,       false,       4,           L"HVAC Zones")                            \
  DEF(OST_HVAC_Zones_Boundary,                                -2008108,  OST_HVAC_Zones,                Model,           false,       false,       0,           L"Boundary")                              \
  DEF(OST_HVAC_Zones_InteriorFill,                            -2008109,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_HVAC_Zones_Reference,                               -2008110,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WireMaterials,                                      -2008111,  not_std::nullopt,              Model,           false,       false,       0,           L"Wire Materials")                        \
  DEF(OST_WireInsulations,                                    -2008112,  not_std::nullopt,              Model,           false,       false,       0,           L"Wire Insulations")                      \
  DEF(OST_WireTemperatureRatings,                             -2008113,  not_std::nullopt,              Model,           false,       false,       0,           L"Wire Temperature Ratings")              \
  DEF(OST_LayoutPath_Bases,                                   -2008114,  not_std::nullopt,              Invalid,         false,       false,       0,           L"Layout Path Bases")                     \
  DEF(OST_ZoneTags,                                           -2008115,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Zone Tags")                             \
  DEF(OST_HVAC_Zones_ColorFill,                               -2008116,  OST_HVAC_Zones,                Model,           false,       false,       0,           L"Color Fill")                            \
  DEF(OST_HVAC_Zones_InteriorFill_Visibility,                 -2008117,  OST_HVAC_Zones,                Model,           false,       false,       0,           L"Interior Fill")                         \
  DEF(OST_HVAC_Zones_Reference_Visibility,                    -2008118,  OST_HVAC_Zones,                Model,           false,       false,       0,           L"Reference Lines")                       \
  DEF(OST_HVAC_Load_Space_Types,                              -2008119,  not_std::nullopt,              Internal,        false,       false,       0,           L"Space Type Settings")                   \
  DEF(OST_HVAC_Load_Building_Types,                           -2008120,  not_std::nullopt,              Internal,        false,       false,       0,           L"Building Type Settings")                \
  DEF(OST_HVAC_Load_Schedules,                                -2008121,  not_std::nullopt,              Internal,        false,       false,       0,           L"HVAC Load Schedules")                   \
  DEF(OST_PipeInsulations,                                    -2008122,  not_std::nullopt,              Model,           false,       true,        16,          L"Pipe Insulations")                      \
  DEF(OST_DuctInsulations,                                    -2008123,  not_std::nullopt,              Model,           false,       false,       4,           L"Duct Insulations")                      \
  DEF(OST_DuctLinings,                                        -2008124,  not_std::nullopt,              Model,           false,       false,       4,           L"Duct Linings")                          \
  DEF(OST_RoutingPreferences,                                 -2008125,  not_std::nullopt,              Model,           false,       false,       0,           L"Routing Preferences")                   \
  DEF(OST_CableTrayFitting,                                   -2008126,  not_std::nullopt,              Model,           false,       true,        8,           L"Cable Tray Fittings")                   \
  DEF(OST_CableTrayFittingTags,                               -2008127,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Cable Tray Fitting Tags")               \
  DEF(OST_ConduitFitting,                                     -2008128,  not_std::nullopt,              Model,           false,       true,        8,           L"Conduit Fittings")                      \
  DEF(OST_ConduitFittingTags,                                 -2008129,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Conduit Fitting Tags")                  \
  DEF(OST_CableTray,                                          -2008130,  not_std::nullopt,              Model,           false,       true,        8,           L"Cable Trays")                           \
  DEF(OST_CableTrayTags,                                      -2008131,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Cable Tray Tags")                       \
  DEF(OST_Conduit,                                            -2008132,  not_std::nullopt,              Model,           false,       true,        8,           L"Conduits")                              \
  DEF(OST_ConduitTags,                                        -2008133,  not_std::nullopt,              Annotation,      false,       false,       8,           L"Conduit Tags")                          \
  DEF(OST_CableTrayRiseDrop,                                  -2008134,  OST_CableTray,                 Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_CableTrayDrop,                                      -2008135,  OST_CableTray,                 Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_CableTrayCenterLine,                                -2008136,  OST_CableTray,                 Model,           false,       false,       0,           L"Center line")                           \
  DEF(OST_ConduitRiseDrop,                                    -2008137,  OST_Conduit,                   Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_ConduitDrop,                                        -2008138,  OST_Conduit,                   Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_ConduitCenterLine,                                  -2008139,  OST_Conduit,                   Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_CableTrayFittingCenterLine,                         -2008140,  OST_CableTrayFitting,          Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_ConduitFittingCenterLine,                           -2008141,  OST_ConduitFitting,            Model,           false,       true,        0,           L"Center line")                           \
  DEF(OST_ElectricalDemandFactorDefinitions,                  -2008142,  not_std::nullopt,              Internal,        false,       false,       0,           L"Electrical Demand Factor Definitions")  \
  DEF(OST_ElectricalLoadClassifications,                      -2008143,  not_std::nullopt,              Internal,        false,       false,       0,           L"Electrical Load Classifications")       \
  DEF(OST_ConduitStandards,                                   -2008144,  not_std::nullopt,              Model,           false,       false,       0,           L"Conduit Standards")                     \
  DEF(OST_BranchPanelScheduleTemplates,                       -2008145,  not_std::nullopt,              Internal,        false,       false,       0,           L"Panel Schedule Templates - Branch Panel")\
  DEF(OST_SwitchboardScheduleTemplates,                       -2008146,  not_std::nullopt,              Internal,        false,       false,       0,           L"Panel Schedule Templates - Switchboard")\
  DEF(OST_DataPanelScheduleTemplates,                         -2008147,  not_std::nullopt,              Internal,        false,       false,       0,           L"Panel Schedule Templates - Data Panel") \
  DEF(OST_ParamElemElectricalLoadClassification,              -2008148,  not_std::nullopt,              Internal,        false,       false,       0,           L"Electrical Load Classification Parameter Element")\
  DEF(OST_ConduitRun,                                         -2008149,  not_std::nullopt,              Model,           false,       true,        0,           L"Conduit Runs")                          \
  DEF(OST_CableTrayRun,                                       -2008150,  not_std::nullopt,              Model,           false,       false,       0,           L"Cable Tray Runs")                       \
  DEF(OST_PanelScheduleGraphics,                              -2008151,  not_std::nullopt,              Annotation,      false,       false,       31,          L"Panel Schedule Graphics")               \
  DEF(OST_ElectricalInternalCircuits,                         -2008152,  not_std::nullopt,              Model,           false,       false,       0,           L"Electrical Spare/Space Circuits")       \
  DEF(OST_DuctInsulationsTags,                                -2008153,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Insulation Tags")                  \
  DEF(OST_DuctLiningsTags,                                    -2008154,  not_std::nullopt,              Annotation,      false,       false,       4,           L"Duct Lining Tags")                      \
  DEF(OST_PipeInsulationsTags,                                -2008155,  not_std::nullopt,              Annotation,      false,       false,       16,          L"Pipe Insulation Tags")                  \
  DEF(OST_DuctSystem_Reference,                               -2008156,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DuctSystem_Reference_Visibility,                    -2008157,  OST_DuctSystem,                Model,           false,       false,       0,           L"Reference Lines")                       \
  DEF(OST_PipingSystem_Reference,                             -2008158,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PipingSystem_Reference_Visibility,                  -2008159,  OST_PipingSystem,              Model,           false,       false,       0,           L"Reference Lines")                       \
  DEF(OST_PlaceHolderDucts,                                   -2008160,  not_std::nullopt,              Model,           false,       false,       4,           L"Duct Placeholders")                     \
  DEF(OST_PlaceHolderPipes,                                   -2008161,  not_std::nullopt,              Model,           false,       false,       16,          L"Pipe Placeholders")                     \
  DEF(OST_GraphicalWarning_OpenConnector,                     -2008162,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PipeSegments,                                       -2008163,  not_std::nullopt,              Model,           false,       false,       0,           L"Pipe Segments")                         \
  DEF(OST_SplitterProfile,                                    -2008164,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_DivisionProfile,                                    -2008165,  not_std::nullopt,              Model,           false,       false,       0,           L"Division Profiles")                     \
  DEF(OST_gbXML_ExteriorWall,                                 -2008167,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Exterior Walls")                        \
  DEF(OST_gbXML_Roof,                                         -2008168,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Roofs")                                 \
  DEF(OST_gbXML_RaisedFloor,                                  -2008169,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Raised Floors")                         \
  DEF(OST_gbXML_SlabOnGrade,                                  -2008170,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Slabs on Grade")                        \
  DEF(OST_gbXML_InteriorWall,                                 -2008171,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Interior Walls")                        \
  DEF(OST_gbXML_InteriorFloor,                                -2008172,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Interior Floors")                       \
  DEF(OST_gbXML_Ceiling,                                      -2008173,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Ceilings")                              \
  DEF(OST_gbXML_SurfaceAir,                                   -2008174,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Air Surfaces")                          \
  DEF(OST_gbXML_UndergroundWall,                              -2008175,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Underground Walls")                     \
  DEF(OST_gbXML_UndergroundSlab,                              -2008176,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Underground Slabs")                     \
  DEF(OST_gbXML_UndergroundCeiling,                           -2008177,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Underground Ceilings")                  \
  DEF(OST_gbXML_FixedWindow,                                  -2008178,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Fixed Windows")                         \
  DEF(OST_gbXML_OperableWindow,                               -2008179,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Operable Windows")                      \
  DEF(OST_gbXML_FixedSkylight,                                -2008180,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Fixed Skylights")                       \
  DEF(OST_gbXML_OperableSkylight,                             -2008181,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Operable Skylights")                    \
  DEF(OST_gbXML_SlidingDoor,                                  -2008182,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Sliding Doors")                         \
  DEF(OST_gbXML_NonSlidingDoor,                               -2008183,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Non-sliding Doors")                     \
  DEF(OST_gbXML_OpeningAir,                                   -2008184,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Air Openings")                          \
  DEF(OST_AnalyticSpaces,                                     -2008185,  not_std::nullopt,              AnalyticalModel, false,       false,       5,           L"Analytical Spaces")                     \
  DEF(OST_AnalyticSurfaces,                                   -2008186,  not_std::nullopt,              AnalyticalModel, false,       false,       5,           L"Analytical Surfaces")                   \
  DEF(OST_gbXML_Shade,                                        -2008187,  OST_AnalyticSurfaces,          AnalyticalModel, false,       false,       0,           L"Shades")                                \
  DEF(OST_DivisionRules,                                      -2008190,  not_std::nullopt,              Model,           false,       false,       0,           L"Division Rules")                        \
  DEF(OST_NumberingSchemas,                                   -2008191,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_LayoutPathBase_Pipings,                             -2008192,  not_std::nullopt,              Invalid,         false,       false,       0,           L"Layout Path Base - Pipings")            \
  DEF(OST_FabricationDuctwork,                                -2008193,  not_std::nullopt,              Model,           false,       false,       20,          L"MEP Fabrication Ductwork")              \
  DEF(OST_FabricationDuctworkTags,                            -2008194,  not_std::nullopt,              Annotation,      false,       false,       20,          L"MEP Fabrication Ductwork Tags")         \
  DEF(OST_FabricationServiceElements,                         -2008195,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FabricationDuctworkCenterLine,                      -2008196,  OST_FabricationDuctwork,       Model,           false,       true,        0,           L"Center Line")                           \
  DEF(OST_LayoutNodes,                                        -2008197,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FabricationDuctworkInsulation,                      -2008198,  OST_FabricationDuctwork,       Model,           false,       false,       0,           L"Insulation")                            \
  DEF(OST_FabricationPartsTmpGraphicEnd,                      -2008199,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_OBSOLETE_FabricationPartsTmpGraphicDrop,            -2008200,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FabricationPartsTmpGraphicDrag,                     -2008201,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_OBSOLETE_FabricationPartsTmpGraphicDropDrag,        -2008202,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_FabricationHangers,                                 -2008203,  not_std::nullopt,              Model,           false,       false,       28,          L"MEP Fabrication Hangers")               \
  DEF(OST_FabricationHangerTags,                              -2008204,  not_std::nullopt,              Annotation,      false,       false,       28,          L"MEP Fabrication Hanger Tags")           \
  DEF(OST_FabricationDuctworkRise,                            -2008205,  OST_FabricationDuctwork,       Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_FabricationDuctworkDrop,                            -2008206,  OST_FabricationDuctwork,       Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_FabricationDuctworkSymbology,                       -2008207,  OST_FabricationDuctwork,       Model,           false,       false,       0,           L"Symbology")                             \
  DEF(OST_FabricationPipework,                                -2008208,  not_std::nullopt,              Model,           false,       false,       16,          L"MEP Fabrication Pipework")              \
  DEF(OST_FabricationPipeworkTags,                            -2008209,  not_std::nullopt,              Annotation,      false,       false,       16,          L"MEP Fabrication Pipework Tags")         \
  DEF(OST_FabricationPipeworkCenterLine,                      -2008210,  OST_FabricationPipework,       Model,           false,       true,        0,           L"Center Line")                           \
  DEF(OST_FabricationPipeworkSymbology,                       -2008211,  OST_FabricationPipework,       Model,           false,       false,       0,           L"Symbology")                             \
  DEF(OST_FabricationContainment,                             -2008212,  not_std::nullopt,              Model,           false,       false,       8,           L"MEP Fabrication Containment")           \
  DEF(OST_FabricationContainmentTags,                         -2008213,  not_std::nullopt,              Annotation,      false,       false,       8,           L"MEP Fabrication Containment Tags")      \
  DEF(OST_FabricationContainmentCenterLine,                   -2008214,  OST_FabricationContainment,    Model,           false,       true,        0,           L"Center Line")                           \
  DEF(OST_FabricationContainmentSymbology,                    -2008215,  OST_FabricationContainment,    Model,           false,       false,       0,           L"Symbology")                             \
  DEF(OST_FabricationPipeworkRise,                            -2008216,  OST_FabricationPipework,       Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_FabricationPipeworkDrop,                            -2008217,  OST_FabricationPipework,       Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_FabricationContainmentRise,                         -2008218,  OST_FabricationContainment,    Model,           false,       false,       0,           L"Rise")                                  \
  DEF(OST_FabricationContainmentDrop,                         -2008219,  OST_FabricationContainment,    Model,           false,       false,       0,           L"Drop")                                  \
  DEF(OST_FabricationDuctworkLining,                          -2008220,  OST_FabricationDuctwork,       Model,           false,       false,       0,           L"Lining")                                \
  DEF(OST_FabricationPipeworkInsulation,                      -2008221,  OST_FabricationPipework,       Model,           false,       false,       0,           L"Insulation")                            \
  DEF(OST_Rebar,                                              -2009000,  not_std::nullopt,              Model,           true,        true,        3,           L"Structural Rebar")                      \
  DEF(OST_RebarSketchLines,                                   -2009001,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RebarLines,                                         -2009002,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaRein,                                           -2009003,  not_std::nullopt,              Model,           true,        true,        2,           L"Structural Area Reinforcement")         \
  DEF(OST_AreaReinSketchOverride,                             -2009004,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AreaReinSpanSymbol,                                 -2009005,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Area Reinforcement Symbols") \
  DEF(OST_AreaReinBoundary,                                   -2009006,  OST_AreaRein,                  Model,           false,       false,       0,           L"Boundary")                              \
  DEF(OST_AreaReinXVisibility,                                -2009007,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Cage,                                               -2009008,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PathRein,                                           -2009009,  not_std::nullopt,              Model,           true,        true,        2,           L"Structural Path Reinforcement")         \
  DEF(OST_PathReinSpanSymbol,                                 -2009010,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Path Reinforcement Symbols") \
  DEF(OST_PathReinTags,                                       -2009011,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Path Reinforcement Tags")    \
  DEF(OST_PathReinBoundary,                                   -2009012,  OST_PathRein,                  Model,           false,       false,       0,           L"Boundary")                              \
  DEF(OST_RebarShape,                                         -2009013,  not_std::nullopt,              Model,           true,        false,       0,           L"Rebar Shape")                           \
  DEF(OST_CoverType,                                          -2009014,  not_std::nullopt,              Model,           false,       false,       0,           L"Cover Type")                            \
  DEF(OST_RebarCover,                                         -2009015,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Rebar Cover References")                \
  DEF(OST_FabricReinforcement,                                -2009016,  not_std::nullopt,              Model,           true,        true,        2,           L"Structural Fabric Reinforcement")       \
  DEF(OST_FabricAreas,                                        -2009017,  not_std::nullopt,              Model,           true,        true,        2,           L"Structural Fabric Areas")               \
  DEF(OST_FabricAreaSketchEnvelopeLines,                      -2009018,  OST_Lines,                     Model,           false,       false,       0,           L"<Fabric Envelope>")                     \
  DEF(OST_FabricAreaSketchSheetsLines,                        -2009019,  OST_Lines,                     Model,           false,       false,       0,           L"<Fabric Sheets>")                       \
  DEF(OST_RebarTags,                                          -2009020,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Rebar Tags")                 \
  DEF(OST_AreaReinTags,                                       -2009021,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Area Reinforcement Tags")    \
  DEF(OST_FabricReinforcementTags,                            -2009022,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Fabric Reinforcement Tags")  \
  DEF(OST_FabricAreaTags,                                     -2009023,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RebarSetToggle,                                     -2009025,  not_std::nullopt,              Annotation,      false,       false,       0,           L"Rebar Set Toggle")                      \
  DEF(OST_FabricReinforcementBoundary,                        -2009026,  OST_FabricReinforcement,       Model,           false,       false,       0,           L"Boundary")                              \
  DEF(OST_FabricReinforcementWire,                            -2009027,  OST_FabricReinforcement,       Model,           false,       false,       0,           L"Fabric Wire")                           \
  DEF(OST_FabricReinSpanSymbol,                               -2009028,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Fabric Reinforcement Symbols")\
  DEF(OST_FabricAreaBoundary,                                 -2009029,  OST_FabricAreas,               Model,           false,       false,       0,           L"Boundary")                              \
  DEF(OST_StructConnections,                                  -2009030,  not_std::nullopt,              Model,           true,        true,        3,           L"Structural Connections")                \
  DEF(OST_StructWeldLines,                                    -2009031,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructConnectionHiddenLines,                        -2009032,  OST_StructConnections,         Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructConnectionSymbol,                             -2009033,  OST_StructConnections,         Model,           false,       false,       0,           L"Symbol")                                \
  DEF(OST_StructConnectionStale,                              -2009034,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructConnectionFailed,                             -2009035,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructConnectionReference,                          -2009036,  OST_StructConnections,         Model,           false,       false,       0,           L"Reference")                             \
  DEF(OST_StructConnectionProfiles,                           -2009037,  OST_StructConnections,         Model,           false,       false,       0,           L"Profiles")                              \
  DEF(OST_StructConnectionPlates,                             -2009038,  OST_StructConnections,         Model,           false,       false,       0,           L"Plates")                                \
  DEF(OST_StructConnectionAnchors,                            -2009039,  OST_StructConnections,         Model,           false,       false,       0,           L"Anchors")                               \
  DEF(OST_StructConnectionTags,                               -2009040,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Connection Tags")            \
  DEF(OST_StructConnectionBolts,                              -2009041,  OST_StructConnections,         Model,           false,       false,       0,           L"Bolts")                                 \
  DEF(OST_StructConnectionOthers,                             -2009042,  OST_StructConnections,         Model,           false,       false,       0,           L"Others")                                \
  DEF(OST_StructConnectionNobleWarning,                       -2009043,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructConnectionShearStuds,                         -2009044,  OST_StructConnections,         Model,           false,       false,       0,           L"Shear Studs")                           \
  DEF(OST_StructConnectionHoles,                              -2009045,  OST_StructConnections,         Model,           false,       false,       0,           L"Holes")                                 \
  DEF(OST_StructConnectionWelds,                              -2009046,  OST_StructConnections,         Model,           false,       false,       0,           L"Welds")                                 \
  DEF(OST_StructConnectionModifiers,                          -2009047,  OST_StructConnections,         Model,           false,       false,       0,           L"Modifiers")                             \
  DEF(OST_SteelElementStale,                                  -2009048,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructSubConnections,                               -2009049,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_RebarHiddenLines,                                   -2009050,  OST_Rebar,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructConnectionPlateTags,                          -2009055,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Plate Tags")                            \
  DEF(OST_StructConnectionBoltTags,                           -2009056,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Bolt Tags")                             \
  DEF(OST_StructConnectionAnchorTags,                         -2009057,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Anchor Tags")                           \
  DEF(OST_StructConnectionShearStudTags,                      -2009058,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Shear Stud Tags")                       \
  DEF(OST_StructConnectionWeldTags,                           -2009059,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Weld Tags")                             \
  DEF(OST_Coupler,                                            -2009060,  not_std::nullopt,              Model,           false,       false,       3,           L"Structural Rebar Couplers")             \
  DEF(OST_CouplerTags,                                        -2009061,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Structural Rebar Coupler Tags")         \
  DEF(OST_CouplerHiddenLines,                                 -2009062,  OST_Coupler,                   Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructConnectionHoleTags,                           -2009063,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Hole Tags")                             \
  DEF(OST_StructConnectionProfilesTags,                       -2009064,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Profile Tags")                          \
  DEF(OST_WindowsHiddenLines,                                 -2009500,  OST_Windows,                   Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_DoorsHiddenLines,                                   -2009501,  OST_Doors,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_RoofsHiddenLines,                                   -2009502,  OST_Roofs,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_CeilingsHiddenLines,                                -2009503,  OST_Ceilings,                  Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_LinesHiddenLines,                                   -2009504,  OST_Lines,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_FurnitureHiddenLines,                               -2009505,  OST_Furniture,                 Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_ColumnsHiddenLines,                                 -2009506,  OST_Columns,                   Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StairsHiddenLines,                                  -2009507,  OST_Stairs,                    Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StairsRailingHiddenLines,                           -2009508,  OST_StairsRailing,             Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_RampsHiddenLines,                                   -2009509,  OST_Ramps,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_CurtainWallPanelsHiddenLines,                       -2009510,  OST_CurtainWallPanels,         Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_CurtainWallMullionsHiddenLines,                     -2009511,  OST_CurtainWallMullions,       Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_GenericModelHiddenLines,                            -2009512,  OST_GenericModel,              Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_ShaftOpeningHiddenLines,                            -2009513,  OST_ShaftOpening,              Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_DetailComponentsHiddenLines,                        -2009514,  OST_DetailComponents,          Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_CaseworkHiddenLines,                                -2009515,  OST_Casework,                  Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_ElectricalEquipmentHiddenLines,                     -2009516,  OST_ElectricalEquipment,       Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_ElectricalFixturesHiddenLines,                      -2009517,  OST_ElectricalFixtures,        Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_FurnitureSystemsHiddenLines,                        -2009518,  OST_FurnitureSystems,          Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_LightingFixturesHiddenLines,                        -2009519,  OST_LightingFixtures,          Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_MechanicalEquipmentHiddenLines,                     -2009520,  OST_MechanicalEquipment,       Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_PlumbingFixturesHiddenLines,                        -2009521,  OST_PlumbingFixtures,          Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_ParkingHiddenLines,                                 -2009522,  OST_Parking,                   Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_RoadsHiddenLines,                                   -2009523,  OST_Roads,                     Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_SiteHiddenLines,                                    -2009524,  OST_Site,                      Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_StructuralFramingSystemHiddenLines_Obsolete,        -2009525,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_TopographyHiddenLines,                              -2009526,  OST_Topography,                Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_SpecialityEquipmentHiddenLines,                     -2009527,  OST_SpecialityEquipment,       Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_PlantingHiddenLines,                                -2009528,  OST_Planting,                  Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_EntourageHiddenLines,                               -2009529,  OST_Entourage,                 Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_OBSOLETE_ElemArrayHiddenLines,                      -2009530,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CurtaSystemHiddenLines,                             -2009531,  OST_CurtaSystem,               Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_MassHiddenLines,                                    -2009532,  OST_Mass,                      Model,           false,       false,       0,           L"<Hidden Lines>")                        \
  DEF(OST_Truss,                                              -2009600,  not_std::nullopt,              Model,           false,       false,       0,           L"Structural Trusses")                    \
  DEF(OST_TrussDiagWebCurve,                                  -2009601,  not_std::nullopt,              Model,           false,       false,       0,           L"Web")                                   \
  DEF(OST_TrussVertWebCurve,                                  -2009602,  not_std::nullopt,              Model,           false,       false,       0,           L"Web")                                   \
  DEF(OST_TrussTopChordCurve,                                 -2009603,  not_std::nullopt,              Model,           false,       false,       0,           L"Top Chord")                             \
  DEF(OST_TrussBottomChordCurve,                              -2009604,  not_std::nullopt,              Model,           false,       false,       0,           L"Bottom Chord")                          \
  DEF(OST_TrussWeb,                                           -2009605,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Web")                                   \
  DEF(OST_TrussChord,                                         -2009606,  OST_StructuralFraming,         Model,           false,       false,       0,           L"Chord")                                 \
  DEF(OST_StructuralTrussHiddenLines,                         -2009607,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StructuralTrussStickSymbols,                        -2009608,  OST_StructuralTruss,           Annotation,      false,       false,       0,           L"Stick Symbols")                         \
  DEF(OST_SunStudy,                                           -2009609,  not_std::nullopt,              Model,           false,       false,       0,           L"Sun Path")                              \
  DEF(OST_Sun,                                                -2009610,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SunPath1,                                           -2009611,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SunPath2,                                           -2009612,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CompassInner,                                       -2009613,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SunriseText,                                        -2009614,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CompassOuter,                                       -2009615,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CompassSection,                                     -2009616,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SunsetText,                                         -2009617,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Analemma,                                           -2009618,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_SunSurface,                                         -2009619,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MultiSurface,                                       -2009620,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_LightLine,                                          -2009621,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CompassSectionFilled,                               -2009622,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CompassPrimaryMonth,                                -2009623,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_CompassSecondaryMonth,                              -2009624,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BeamAnalytical,                                     -2009630,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Beams")                      \
  DEF(OST_BeamStartSegment,                                   -2009631,  OST_BeamAnalytical,            AnalyticalModel, false,       false,       0,           L"Start Segment")                         \
  DEF(OST_BeamEndSegment,                                     -2009632,  OST_BeamAnalytical,            AnalyticalModel, false,       false,       0,           L"End Segment")                           \
  DEF(OST_BraceAnalytical,                                    -2009633,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Braces")                     \
  DEF(OST_BraceStartSegment,                                  -2009634,  OST_BraceAnalytical,           AnalyticalModel, false,       false,       0,           L"Start Segment")                         \
  DEF(OST_BraceEndSegment,                                    -2009635,  OST_BraceAnalytical,           AnalyticalModel, false,       false,       0,           L"End Segment")                           \
  DEF(OST_ColumnAnalytical,                                   -2009636,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Columns")                    \
  DEF(OST_ColumnStartSegment,                                 -2009637,  OST_ColumnAnalytical,          AnalyticalModel, false,       false,       0,           L"Base Segment")                          \
  DEF(OST_ColumnEndSegment,                                   -2009638,  OST_ColumnAnalytical,          AnalyticalModel, false,       false,       0,           L"Top Segment")                           \
  DEF(OST_FloorAnalytical,                                    -2009639,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Floors")                     \
  DEF(OST_WallAnalytical,                                     -2009640,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Walls")                      \
  DEF(OST_IsolatedFoundationAnalytical,                       -2009641,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Isolated Foundations")       \
  DEF(OST_WallFoundationAnalytical,                           -2009642,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Wall Foundations")           \
  DEF(OST_FoundationSlabAnalytical,                           -2009643,  not_std::nullopt,              AnalyticalModel, false,       true,        2,           L"Analytical Foundation Slabs")           \
  DEF(OST_RigidLinksAnalytical,                               -2009644,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AnalyticalNodes,                                    -2009645,  not_std::nullopt,              AnalyticalModel, false,       false,       2,           L"Analytical Nodes")                      \
  DEF(OST_AnalyticalNodes_Points,                             -2009646,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AnalyticalNodes_Planes,                             -2009647,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AnalyticalNodes_Lines,                              -2009648,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_BeamAnalyticalTags,                                 -2009649,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Beam Tags")                  \
  DEF(OST_BraceAnalyticalTags,                                -2009650,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Brace Tags")                 \
  DEF(OST_ColumnAnalyticalTags,                               -2009651,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Column Tags")                \
  DEF(OST_FloorAnalyticalTags,                                -2009652,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Floor Tags")                 \
  DEF(OST_WallAnalyticalTags,                                 -2009653,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Wall Tags")                  \
  DEF(OST_IsolatedFoundationAnalyticalTags,                   -2009654,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Isolated Foundation Tags")   \
  DEF(OST_WallFoundationAnalyticalTags,                       -2009655,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Wall Foundation Tags")       \
  DEF(OST_FoundationSlabAnalyticalTags,                       -2009656,  not_std::nullopt,              Annotation,      false,       false,       2,           L"Analytical Slab Foundation Tags")       \
  DEF(OST_LinksAnalytical,                                    -2009657,  not_std::nullopt,              AnalyticalModel, false,       false,       2,           L"Analytical Links")                      \
  DEF(OST_AssemblyOrigin,                                     -2009658,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AssemblyOrigin_Points,                              -2009659,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AssemblyOrigin_Planes,                              -2009660,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_AssemblyOrigin_Lines,                               -2009661,  not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_PointClouds,                                        -2010001,  not_std::nullopt,              Model,           false,       false,       0,           L"Point Clouds")                          \
  DEF(OST_RemovedGridSeg_Obsolete_IdInWrongRange,             -20000827, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StickSymbols_Obsolete_IdInWrongRange,               -20000828, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_WallRefPlanes_Obsolete_IdInWrongRange,              -20000896, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_Mass_Obsolete_IdInWrongRange,                       -20034000, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassFloor_Obsolete_IdInWrongRange,                  -20034003, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassSurface_Obsolete_IdInWrongRange,                -20034004, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_MassTags_Obsolete_IdInWrongRange,                   -20034005, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \
  DEF(OST_StackedWalls_Obsolete_IdInWrongRange,               -20034100, not_std::nullopt,              Invalid,         false,       false,       0,           not_std::nullopt)                         \

#define ODBM_DEPRECATED_BUILTIN_CATEGORIES(DEF, ...)                    \
/**********************************************************************/\
/*DEF(NAME,                                                   VALUE)  */\
/**********************************************************************/\
  DEF(OST_StairsIncomplete_Deprecated,                        -2000121) \
  DEF(OST_ModelArray_REMOVED_Deprecated,                      -2000316) \
  DEF(OST_DetailArray_REMOVED_Deprecated,                     -2000317) \
  DEF(OST_Stair2012_Deprecated,                               -2000918) \
  DEF(OST_StairStringer2012_Deprecated,                       -2000922) \
  DEF(OST_StructuralConnectionHandler_Deprecated,             -2000978) \
  DEF(OST_HiddenStructuralConnectionLines_Deprecated,         -2000979) \
  DEF(OST_MajorStations_Deprecated,                           -2001013) \
  DEF(OST_MinorStations_Deprecated,                           -2001014) \
  DEF(OST_StructuralConnectionHandlerTags_Deprecated,         -2005031) \
  DEF(OST_Stairs2012HiddenLines_Deprecated,                   -2009533) \
  DEF(OST_StairRun2012HiddenLines_Deprecated,                 -2009534) \
  DEF(OST_StairLanding2012HiddenLines_Deprecated,             -2009535) \
  DEF(OST_StairTread2012HiddenLines_Deprecated,               -2009536) \
  DEF(OST_StairStringer2012HiddenLines_Deprecated,            -2009537) \
  DEF(OST_RailingSystemHiddenLines_Deprecated,                -2009538) \
  DEF(OST_RailingSystemSegmentHiddenLines_Deprecated,         -2009539) \
  DEF(OST_RailingSystemPostHiddenLines_Deprecated,            -2009540) \
  DEF(OST_RailingSystemBalusterHiddenLines_Deprecated,        -2009541) \
  DEF(OST_RailingSystemPanelHiddenLines_Deprecated,           -2009542) \
  DEF(OST_RailingSystemPanelBracketHiddenLines_Deprecated,    -2009543) \
  DEF(OST_RailingSystemHandRailHiddenLines_Deprecated,        -2009544) \
  DEF(OST_RailingSystemHandRailBracketHiddenLines_Deprecated, -2009545) \
  DEF(OST_RailingSystemTopRailHiddenLines_Deprecated,         -2009546) \
  DEF(OST_RailingSystemRailHiddenLines_Deprecated,            -2009547) \
  DEF(OST_RailingSystemTerminationHiddenLines_Deprecated,     -2009548) \
  DEF(OST_RailingSystemTransitionHiddenLines_Deprecated,      -2009549) \

#define ODBM_BUILTIN_CATEGORIES(...)              \
  ODBM_ACTUAL_BUILTIN_CATEGORIES(__VA_ARGS__)     \
  ODBM_DEPRECATED_BUILTIN_CATEGORIES(__VA_ARGS__)

ODBM_BUILTIN_ENUMERATION(TB_COMMON_EXPORT, BuiltInCategory, ODBM_BUILTIN_CATEGORIES)

#endif //__BM_BUILTINCATEGORY_H__

