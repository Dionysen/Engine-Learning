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

#ifndef _BM_EDGEHISTTYPE_H_
#define _BM_EDGEHISTTYPE_H_

#define ODBM_EDGEHISTTYPES(PARAM_DEF, ...)   \
  PARAM_DEF(InvalidEdgeHistType, 0)          \
  PARAM_DEF(CurveProjection, 1)              \
  PARAM_DEF(CurveProjConnection, 2)          \
  PARAM_DEF(CopiedEdge, 3)                   \
  PARAM_DEF(SplitEdge, 4)                    \
  PARAM_DEF(DivideFace, 5)                   \
  PARAM_DEF(ConnectingEdges, 6)              \
  PARAM_DEF(RoofBaseEdge, 7)                 \
  PARAM_DEF(RoofSideEdge, 8)                 \
  PARAM_DEF(RoofEdge, 9)                     \
  PARAM_DEF(SewnShellInnerEdge, 10)          \
  PARAM_DEF(HoleEdge, 11)                    \
  PARAM_DEF(SweptEdge, 12)                   \
  PARAM_DEF(BlendEdge, 13)                   \
  PARAM_DEF(BlendSideEdge, 14)               \
  PARAM_DEF(PlaneCutEdge, 15)                \
  PARAM_DEF(SewnEdge, 16)                    \
  PARAM_DEF(BooleanEdge, 17)                 \
  PARAM_DEF(GridEdge, 18)                    \
  PARAM_DEF(SplitGridEdge, 19)               \
  PARAM_DEF(MergedEdge, 20)                  \
  PARAM_DEF(DegenSideJoinFaceEdge, 21)       \
  PARAM_DEF(ProjectedGridEdge, 22)           \
  PARAM_DEF(SplitFaceEdge, 23)               \
  PARAM_DEF(MultiplySplitEdge, 24)           \
  PARAM_DEF(SplitFaceProjEdge, 25)           \
  PARAM_DEF(StandAloneCopiedEdge, 26)        \
  PARAM_DEF(EditFaceBndyNewEdge, 27)         \
  PARAM_DEF(StairsStringerEdge, 28)          \
  PARAM_DEF(RoofTopEdge, 29)                 \
  PARAM_DEF(DegenEdgeForCoincFaces, 30)      \
  PARAM_DEF(RectangularGridEdge, 31)         \
  PARAM_DEF(LayerFaceSplitterEdge, 32)       \
  PARAM_DEF(HalfSpaceFaceEdge, 33)           \
  PARAM_DEF(DatumPlaneFaceEdge, 34)          \
  PARAM_DEF(MergedCoincEdge, 35)             \
  PARAM_DEF(RoofSplitlineEdge, 36)           \
  PARAM_DEF(GapOffsetEdge, 37)               \
  PARAM_DEF(ImportElementEdge, 38)           \
  PARAM_DEF(FaceRoof2CutPlumbEdge, 39)       \
  PARAM_DEF(SplitWithCurvesEdge, 40)         \
  PARAM_DEF(SplitExteriorMassFaceEdge, 41)   \
  PARAM_DEF(SplitingEdgeForPeriodicFace, 42) \
  PARAM_DEF(OverlappingMassFaceEdge, 43)     \
  PARAM_DEF(FakeGridEdge, 44)                \
  PARAM_DEF(OffsetCutterEdge, 45)            \
  PARAM_DEF(SingularityExcisionEdge, 46)     \
  PARAM_DEF(ImportElementSplitEdge, 47)      \
  PARAM_DEF(ImportElementSplittingEdge, 48)  \
  PARAM_DEF(BentEdge, 49)                    \
  PARAM_DEF(SlabShapeEditEdge, 50)           \
  PARAM_DEF(ReplacedEdge, 51)                \
  PARAM_DEF(GridSplitByRefPlane, 52)         \
  PARAM_DEF(GridSplitByExtrCurve, 53)        \
  PARAM_DEF(CopiedGridEdge, 54)              \
  PARAM_DEF(ObsoleteCurtaMeshPanelEdge, 55)  \
  PARAM_DEF(MSSBCurveEdge, 56)               \
  PARAM_DEF(MSSBPartCurveEdge, 57)           \
  PARAM_DEF(MSSBVerticalEdge, 58)            \
  PARAM_DEF(MSSBAutoCreaseEdge, 59)          \
  PARAM_DEF(ModifiedEdge, 60)                \
  PARAM_DEF(AutoGlazingEdge, 61)             \
  PARAM_DEF(ShadingEdge, 62)                 \
  PARAM_DEF(SkylightEdge, 63)                \
  PARAM_DEF(FRC_BoundaryEdge, 64)            \
  PARAM_DEF(FRC_SplitEdge, 65)               \
  PARAM_DEF(ComplementFaceRegionEdge, 66)    \
  PARAM_DEF(ShadowEdgeOfFaceComponent, 67)   \
  PARAM_DEF(ShadowEdgeOfSilhouette, 68)      \
  PARAM_DEF(OffsetCurveProjection, 69)       \
  PARAM_DEF(StairsWinderBoundingEdge, 70)    \
  PARAM_DEF(StairsWinderUndersideEdge, 71)   \
  PARAM_DEF(StairsTabAndNotchEdge, 72)       \
  PARAM_DEF(RailingsGrepFilletCurve, 73)     \
  PARAM_DEF(FakeEnumeratedEdgeTag, 74)       \
  PARAM_DEF(FacetedBRepImportEdge, 75)

ODBM_ENUMERATION(EdgeHistType, ODBM_EDGEHISTTYPES)

#undef ODBM_EDGEHISTTYPES

#endif // _BM_EDGEHISTTYPE_H_
