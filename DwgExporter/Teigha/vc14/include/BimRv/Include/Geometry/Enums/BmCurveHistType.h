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

#ifndef _BM_CURVEHISTTYPE_H_
#define _BM_CURVEHISTTYPE_H_

#define ODBM_CURVEHISTTYPE(PARAM_DEF, ...)                       \
  PARAM_DEF(InvalidCurveHistType, 0)                             \
  PARAM_DEF(CopiedCurve, 1)                                      \
  PARAM_DEF(ReferenceCurve, 2)                                   \
  PARAM_DEF(GridCurve, 3)                                        \
  PARAM_DEF(MullionCurve, 4)                                     \
  PARAM_DEF(FullGridCurve, 5)                                    \
  PARAM_DEF(CeilingGridCurve, 6)                                 \
  PARAM_DEF(RoofCutoffCurve, 7)                                  \
  PARAM_DEF(RoofCutoffClosingCurve, 8)                           \
  PARAM_DEF(DormerClosingCurve, 9)                               \
  PARAM_DEF(PlanRegionBoundary, 10)                              \
  PARAM_DEF(BalusterPlacementPoint, 11)                          \
  PARAM_DEF(RailSweepPathCurve, 12)                              \
  PARAM_DEF(RailSweepLoopCurve, 13)                              \
  PARAM_DEF(SweepLoopSplitCurve, 14)                             \
  PARAM_DEF(SweepLoopCurveHelix, 15)                             \
  PARAM_DEF(TreadContourCurve, 16)                               \
  PARAM_DEF(TreadContourJogCurve, 17)                            \
  PARAM_DEF(FrontTreadCutPathCurve, 18)                          \
  PARAM_DEF(RearTreadProfilePathCurve, 19)                       \
  PARAM_DEF(FrontTreadSweepPathCurve, 20)                        \
  PARAM_DEF(FrontRiserPathCurve, 21)                             \
  PARAM_DEF(RearRiserPathCurve, 22)                              \
  PARAM_DEF(TreadInnerContourCurve, 23)                          \
  PARAM_DEF(TreadFrontFillerPathCurve, 24)                       \
  PARAM_DEF(TreadContourForCutter, 25)                           \
  PARAM_DEF(StairsHelicalRunCurve, 26)                           \
  PARAM_DEF(RiserProfileCurve, 27)                               \
  PARAM_DEF(TreadFrontProfileCurve, 28)                          \
  PARAM_DEF(TreadFrontProfileCutCurve, 29)                       \
  PARAM_DEF(TreadInnerProfileCurve, 30)                          \
  PARAM_DEF(TreadRearProfileCurve, 31)                           \
  PARAM_DEF(StairsBoundaryCurve, 32)                             \
  PARAM_DEF(StairsClosedStringerPathCurve, 33)                   \
  PARAM_DEF(StairsClosedStringerProfileCurve, 34)                \
  PARAM_DEF(StairsOpenStringerPathCurve, 35)                     \
  PARAM_DEF(StairsOpenStringerProfileCurve, 36)                  \
  PARAM_DEF(StairsMiddleStringerPathCurve, 37)                   \
  PARAM_DEF(StairsMiddleStringerProfileCurve, 38)                \
  PARAM_DEF(TwoCurveElemCurve, 39)                               \
  PARAM_DEF(LandingContourCurve, 40)                             \
  PARAM_DEF(LandingSweepProfileCurve, 41)                        \
  PARAM_DEF(MiterCorrectionPathSeg, 42)                          \
  PARAM_DEF(RiserGRepCurve, 43)                                  \
  PARAM_DEF(BoundaryGRepCurve, 44)                               \
  PARAM_DEF(RunGRepCurve, 45)                                    \
  PARAM_DEF(StringerGRepCurve, 46)                               \
  PARAM_DEF(RailingsGrepCurv, 47)                                \
  PARAM_DEF(StringerGRepCapCurve, 48)                            \
  PARAM_DEF(RailingsGrepCapCurve, 49)                            \
  PARAM_DEF(RailingSourceLoopCurve, 50)                          \
  PARAM_DEF(MiddleStringerLoopCurve, 51)                         \
  PARAM_DEF(MiddleStringerCapCurve, 52)                          \
  PARAM_DEF(JoistSystemGridCurve, 53)                            \
  PARAM_DEF(SegmentizedCurve, 54)                                \
  PARAM_DEF(GInstanceTag, 55)                                    \
  PARAM_DEF(DriversGridLineGroup, 56)                            \
  PARAM_DEF(BottomFootprintGapCurve, 57)                         \
  PARAM_DEF(FootprintSplitlineCurve, 58)                         \
  PARAM_DEF(AnalyticalWallCurve, 59)                             \
  PARAM_DEF(AnalyticalFloorCurve, 60)                            \
  PARAM_DEF(AnalyticalFramingCurve, 61)                          \
  PARAM_DEF(RebarCurve, 62)                                      \
  PARAM_DEF(RebarBendCurve, 63)                                  \
  PARAM_DEF(RebarHookCurve, 64)                                  \
  PARAM_DEF(FamSymGeometryHE, 65)                                \
  PARAM_DEF(CopiedGeometryHE, 66)                                \
  PARAM_DEF(RebarBoundaryCurve, 67)                              \
  PARAM_DEF(RebarCutSideFace, 68)                                \
  PARAM_DEF(RebarCutCenterPoint, 69)                             \
  PARAM_DEF(RebarCutTopBottomFace, 70)                           \
  PARAM_DEF(ElemArray_Obsolete1, 71)                             \
  PARAM_DEF(RoomBoundaryCurve, 72)                               \
  PARAM_DEF(ElemArray_Obsolete2, 73)                             \
  PARAM_DEF(ElemGroupOriginRefPoint, 74)                         \
  PARAM_DEF(AdjustedAnalyticalCurve, 75)                         \
  PARAM_DEF(RebarRefCurve, 76)                                   \
  PARAM_DEF(RebarHookControl, 77)                                \
  PARAM_DEF(SplitFootprintRoofCurve, 78)                         \
  PARAM_DEF(RebarRefPoin, 79)                                    \
  PARAM_DEF(RebarArrayShapeHandle, 80)                           \
  PARAM_DEF(PathReinOffsetCurve, 81)                             \
  PARAM_DEF(PathReinEndCurve, 82)                                \
  PARAM_DEF(AnalyticalWallFoundationCurve, 83)                   \
  PARAM_DEF(SlabShapeEditCornerVertex, 84)                       \
  PARAM_DEF(SlabShapeEditEdgeVertex, 85)                         \
  PARAM_DEF(SlabShapeEditInteriorVertex, 86)                     \
  PARAM_DEF(TrussElementGridCurve, 87)                           \
  PARAM_DEF(TrussCurveHist, 88)                                  \
  PARAM_DEF(SlabShapeSubElementGroup, 89)                        \
  PARAM_DEF(RebarSideRef, 90)                                    \
  PARAM_DEF(RebarSystemSideRef, 91)                              \
  PARAM_DEF(RebarCurveFromHostFace, 92)                          \
  PARAM_DEF(DividedSurfaceHist, 93)                              \
  PARAM_DEF(SlabShapeAutoEdgeVertex, 94)                         \
  PARAM_DEF(FaceSculptingControlPoint, 95)                       \
  PARAM_DEF(Obsolete_96, 96)                                     \
  PARAM_DEF(DividedSurface_Point, 97)                            \
  PARAM_DEF(DividedSurface_Segment, 98)                          \
  PARAM_DEF(DividedSurface_WholeTiles, 99)                       \
  PARAM_DEF(Room3DShelfOffsetCurve, 100)                         \
  PARAM_DEF(CopiedPoint, 101)                                    \
  PARAM_DEF(CopiedPolyMesh, 102)                                 \
  PARAM_DEF(CopiedPolyCurve, 103)                                \
  PARAM_DEF(CurveOffsetIntoCurve, 104)                           \
  PARAM_DEF(Obsolete_DaVinciProto_OffsetPoint, 105)              \
  PARAM_DEF(DividedSurface_BoundarySegment, 106)                 \
  PARAM_DEF(FormElem_ControlPoint, 107)                          \
  PARAM_DEF(MSSBAutoVertex, 108)                                 \
  PARAM_DEF(FormElem_MidProfileLoop, 109)                        \
  PARAM_DEF(MassEAM_UniqueExtraKey, 110)                         \
  PARAM_DEF(DividedSurface_PartialTiles, 111)                    \
  PARAM_DEF(ElemArray_Obsolete3, 112)                            \
  PARAM_DEF(MSSBGivenVertex, 113)                                \
  PARAM_DEF(FormElem_PathCurve, 114)                             \
  PARAM_DEF(FormElem_PathControlPoint, 115)                      \
  PARAM_DEF(FormElem_ImplicitPathCurve, 116)                     \
  PARAM_DEF(FormElem_ImplicitPathControlPoint, 117)              \
  PARAM_DEF(FormElem_RevolvedAxis, 118)                          \
  PARAM_DEF(FormElem_RevolvedAxisControlPoint, 119)              \
  PARAM_DEF(FormElem_CurveSpecialEndPoint, 120)                  \
  PARAM_DEF(GeomCombinationControlPointFromFormElemRetired, 121) \
  PARAM_DEF(DividedSurface_DivisionLines, 122)                   \
  PARAM_DEF(CurveOfDegenLoopForClosedToOpenLoopBlend, 123)       \
  PARAM_DEF(TilePatternGridLine, 124)                            \
  PARAM_DEF(Obsolete_DividedSurface_VirtualGridlines, 125)       \
  PARAM_DEF(FormElem_ReferencePoint, 126)                        \
  PARAM_DEF(FormElem_PathHostedProfileBondingPoint, 127)         \
  PARAM_DEF(AnalyticalGapCurve, 128)                             \
  PARAM_DEF(DividedSurface_UnusedGridlines, 129)                 \
  PARAM_DEF(FaceRegionsCreation_FullCurve, 130)                  \
  PARAM_DEF(FaceRegionsCreation_Vertex, 131)                     \
  PARAM_DEF(CoreGeometry_Profile, 132)                           \
  PARAM_DEF(CoreGeometry_Geometry, 133)                          \
  PARAM_DEF(DividedPerimeterZoneGeomtry, 134)                    \
  PARAM_DEF(CoreGeometry_ExtendLastProfile, 135)                 \
  PARAM_DEF(SplitCurve, 136)                                     \
  PARAM_DEF(WallCutoutCopyKey, 137)                              \
  PARAM_DEF(VolumeDividerNetFaceBoundary, 138)                   \
  PARAM_DEF(VolumeDividerGraphicsGroup, 139)                     \
  PARAM_DEF(VolumeDividerSketchSilhouette, 140)                  \
  PARAM_DEF(VolumeDividerGeometryGroup, 141)                     \
  PARAM_DEF(VolumeDividerTopGroup, 142)                          \
  PARAM_DEF(VolumeDividerStackPlaneHandleLoop, 143)              \
  PARAM_DEF(AnalyticalInPlaceCurve, 144)                         \
  PARAM_DEF(VisualizationCurve, 145)                             \
  PARAM_DEF(DPartGeometryHE, 146)                                \
  PARAM_DEF(GeomCombinationControlPointFromFormElem, 147)        \
  PARAM_DEF(EdgeOffsetIntoCurve, 148)                            \
  PARAM_DEF(DividedPathNode, 149)                                \
  PARAM_DEF(ObsoleteDividedPathIntersectionPoint, 150)           \
  PARAM_DEF(ComponentRepeaterSlotPoint, 151)                     \
  PARAM_DEF(EdgeConditionSysProfileCurve, 152)                   \
  PARAM_DEF(EdgeConditionProfileCurveGraphics, 153)              \
  PARAM_DEF(CompStairsRunBdryCurve, 154)                         \
  PARAM_DEF(CompStairsRunRiserCurve, 155)                        \
  PARAM_DEF(CompStairsRunNosingCurve, 156)                       \
  PARAM_DEF(CompStairsPathCurve, 157)                            \
  PARAM_DEF(StairsLoopRiserCurve, 158)                           \
  PARAM_DEF(StairsLoopBoundaryCurve, 159)                        \
  PARAM_DEF(StairsSupportPathCurve, 160)                         \
  PARAM_DEF(StairsRunSideSupportCurve, 161)                      \
  PARAM_DEF(StairsRunMiddleSupportCurve, 162)                    \
  PARAM_DEF(StairsLandingSupportCurve, 163)                      \
  PARAM_DEF(StairsSupportSideRefCurve, 164)                      \
  PARAM_DEF(SurfaceOpeningAnalyticalCurve, 165)                  \
  PARAM_DEF(AnalyticalLinkCurve, 166)                            \
  PARAM_DEF(FabricSheetFactoryCurve, 167)                        \
  PARAM_DEF(FabricSheetFinalCurve, 168)                          \
  PARAM_DEF(FabricAreaHostFaceCurve, 169)                        \
  PARAM_DEF(FabricAreaBoundaryCurve, 170)                        \
  PARAM_DEF(StairsComponentHist, 171)                            \
  PARAM_DEF(EdgeConditionSolidCrossectionCurve, 172)             \
  PARAM_DEF(EdgeConditionFamProfileCurve, 173)                   \
  PARAM_DEF(TemporalVisualizationCurve, 174)                     \
  PARAM_DEF(EdgeConditionProfileForSketchCurve, 175)             \
  PARAM_DEF(VolumeDividerPatternLines, 176)                      \
  PARAM_DEF(VolumeDividerStackInterRefLines, 177)                \
  PARAM_DEF(NonRectangularCropAreaBoundary, 178)                 \
  PARAM_DEF(StairsLocationLineReference, 179)                    \
  PARAM_DEF(FabricSheetSnapRefs, 180)                            \
  PARAM_DEF(CopiedGInstance, 181)

ODBM_ENUMERATION(CurveHistType, ODBM_CURVEHISTTYPE)

#undef ODBM_CURVEHISTTYPE

#endif // _BM_CURVEHISTTYPE_H_
