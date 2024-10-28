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

#ifndef _BM_FACEHISTTYPE_H_
#define _BM_FACEHISTTYPE_H_

#define ODBM_FACEHISTTYPES(PARAM_DEF, ...)             \
  PARAM_DEF(InvalidFaceHistType, 0)                    \
  PARAM_DEF(ExtrusionEnd0, 1)                          \
  PARAM_DEF(ExtrusionEnd1, 2)                          \
  PARAM_DEF(ExtrusionOfCurve, 3)                       \
  PARAM_DEF(JoinFace, 4)                               \
  PARAM_DEF(CopiedFace, 5)                             \
  PARAM_DEF(ReferenceFace, 6)                          \
  PARAM_DEF(StairRiserTreadFace, 7)                    \
  PARAM_DEF(SheetFace, 8)                              \
  PARAM_DEF(ImportElementHatchBdry, 9)                 \
  PARAM_DEF(RoofBaseFace, 10)                          \
  PARAM_DEF(GridLineFace, 11)                          \
  PARAM_DEF(SewnFace, 12)                              \
  PARAM_DEF(BlendSideFace, 13)                         \
  PARAM_DEF(CurtainGridFace, 14)                       \
  PARAM_DEF(SplitFace, 15)                             \
  PARAM_DEF(SplitWithSurfaceFace, 16)                  \
  PARAM_DEF(DegenSideJoinFace, 17)                     \
  PARAM_DEF(TessellatedCurtainFace, 18)                \
  PARAM_DEF(SplitWithInnerLoopFace, 19)                \
  PARAM_DEF(SplitFaceByCurveLoops, 20)                 \
  PARAM_DEF(StandAloneCopiedFace, 21)                  \
  PARAM_DEF(FixedDegenFace, 22)                        \
  PARAM_DEF(StairsStringerFace, 23)                    \
  PARAM_DEF(RoofTopFace, 24)                           \
  PARAM_DEF(RoofSoffitFace, 25)                        \
  PARAM_DEF(RoofNonSDSideFace, 26)                     \
  PARAM_DEF(RectangularGridFace, 27)                   \
  PARAM_DEF(ExtendableLayerTarget, 28)                 \
  PARAM_DEF(ExteriorCore, 29)                          \
  PARAM_DEF(InteriorCore, 30)                          \
  PARAM_DEF(ExteriorLayer, 31)                         \
  PARAM_DEF(CoreLayer, 32)                             \
  PARAM_DEF(InteriorLayer, 33)                         \
  PARAM_DEF(ExteriorCoreHoriz, 34)                     \
  PARAM_DEF(InteriorCoreHoriz, 35)                     \
  PARAM_DEF(ExteriorLayerHoriz, 36)                    \
  PARAM_DEF(CoreLayerHoriz, 37)                        \
  PARAM_DEF(InteriorLayerHoriz, 38)                    \
  PARAM_DEF(CoreCenterFace, 39)                        \
  PARAM_DEF(CenterFace, 40)                            \
  PARAM_DEF(VertCompoundSplitFace, 41)                 \
  PARAM_DEF(WallSweepFace, 42)                         \
  PARAM_DEF(LayerFaceSplitter, 43)                     \
  PARAM_DEF(ExteriorInterior, 44)                      \
  PARAM_DEF(ExteriorInteriorHoriz, 45)                 \
  PARAM_DEF(ExtrusionEnd0_AtTop, 46)                   \
  PARAM_DEF(ExtrusionEnd1_AtTop, 47)                   \
  PARAM_DEF(ExtrusionEnd0_AtBottom, 48)                \
  PARAM_DEF(ExtrusionEnd1_AtBottom, 49)                \
  PARAM_DEF(DormerCutFace, 50)                         \
  PARAM_DEF(CutPlaneFace, 51)                          \
  PARAM_DEF(StairsTreadFace, 52)                       \
  PARAM_DEF(StairsTreadTop, 53)                        \
  PARAM_DEF(StairsTreadBottom, 54)                     \
  PARAM_DEF(StairsSolidBottom, 55)                     \
  PARAM_DEF(StairsSolidTop, 56)                        \
  PARAM_DEF(DatumPlaneFace, 57)                        \
  PARAM_DEF(StairsCutterTop, 58)                       \
  PARAM_DEF(StairsCutterBottom, 59)                    \
  PARAM_DEF(StairsStringerBottom, 60)                  \
  PARAM_DEF(RefToCoreLayerAtInsert, 61)                \
  PARAM_DEF(FPBaseFace, 62)                            \
  PARAM_DEF(FPSplittingFace, 63)                       \
  PARAM_DEF(SkeletonAlongCurveFace, 64)                \
  PARAM_DEF(PickedFace, 65)                            \
  PARAM_DEF(ImportElementFace, 66)                     \
  PARAM_DEF(FloorAreaFace, 67)                         \
  PARAM_DEF(FaceRoof2CutPlumbFace, 68)                 \
  PARAM_DEF(SplitWithCurvesFace, 69)                   \
  PARAM_DEF(DeckRefFace, 70)                           \
  PARAM_DEF(SplitExteriorMassFace, 71)                 \
  PARAM_DEF(SplitPeriodicFace, 72)                     \
  PARAM_DEF(OverlappingMassFace, 73)                   \
  PARAM_DEF(OffsetFace, 74)                            \
  PARAM_DEF(OffsetCutterFace, 75)                      \
  PARAM_DEF(SkeletonCurveEndFace, 76)                  \
  PARAM_DEF(ImportElementSplitFace, 77)                \
  PARAM_DEF(BentFace, 78)                              \
  PARAM_DEF(SlabShapeEditTopFace, 79)                  \
  PARAM_DEF(SlabShapeEditBottomFace, 80)               \
  PARAM_DEF(CopiedGridFace, 81)                        \
  PARAM_DEF(DividedSurfaceFace, 82)                    \
  PARAM_DEF(ObsoleteCurtaMeshPanelFace, 83)            \
  PARAM_DEF(CappingFace, 84)                           \
  PARAM_DEF(DividedSurfaceAdditionalFaces, 85)         \
  PARAM_DEF(ModifiedFace, 86)                          \
  PARAM_DEF(AutoGlazingFace, 87)                       \
  PARAM_DEF(ShadingFace, 88)                           \
  PARAM_DEF(ComplementFaceRegion, 89)                  \
  PARAM_DEF(SkylightFace, 90)                          \
  PARAM_DEF(FRC_FaceRegion, 91)                        \
  PARAM_DEF(ObsoleteTrimmedFaceRegion, 92)             \
  PARAM_DEF(AnalyticalSurface, 93)                     \
  PARAM_DEF(VolumeDividerNetFace, 94)                  \
  PARAM_DEF(VolumeDividerNetFacet, 95)                 \
  PARAM_DEF(VolumeDividerNetOffsetFacet, 96)           \
  PARAM_DEF(DPartHistFromRefFace, 97)                  \
  PARAM_DEF(DPartHistByCutter, 98)                     \
  PARAM_DEF(DPartHistByDivSurf, 99)                    \
  PARAM_DEF(DPartHistByCurveNet, 100)                  \
  PARAM_DEF(DPartHistFallback, 101)                    \
  PARAM_DEF(CopiedFace4Handle, 102)                    \
  PARAM_DEF(CopiedOffsetFace, 103)                     \
  PARAM_DEF(VolumeDividerStackPlaneHandle, 104)        \
  PARAM_DEF(VolumeDividerSketchCurveHandle, 105)       \
  PARAM_DEF(CuttingSolidFace, 106)                     \
  PARAM_DEF(EdgeConditionProfileFace, 107)             \
  PARAM_DEF(EdgeConditionSolidCopy, 108)               \
  PARAM_DEF(DPartHistByCutterWithProfile, 109)         \
  PARAM_DEF(EdgeConditionChunkCopy, 110)               \
  PARAM_DEF(StairsWinderBoundingFace, 111)             \
  PARAM_DEF(StairsWinderUndersideFace, 112)            \
  PARAM_DEF(StairsSupportSideRefFace, 113)             \
  PARAM_DEF(StairsTabAndNotchFace, 114)                \
  PARAM_DEF(ExtrusionOfRevolvedCurve, 115)             \
  PARAM_DEF(EdgeConditionProfileDefFaceForSketch, 116) \
  PARAM_DEF(EdgeConditionBySketchChunkCopy, 117)       \
  PARAM_DEF(EdgeConditionBySketchSolidCopy, 118)       \
  PARAM_DEF(DPartHistBySketchWithProfile, 119)         \
  PARAM_DEF(OffsetFacesRefFace, 120)                   \
  PARAM_DEF(FacetedBRepImportFace, 121)

ODBM_ENUMERATION(FaceHistType, ODBM_FACEHISTTYPES)

#undef ODBM_FACEHISTTYPES

#endif // _BM_FACEHISTTYPE_H_
