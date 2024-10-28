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

#ifndef _BMGEOMUTILS
#define  _BMGEOMUTILS

#include "Geometry/Entities/BmGCurve.h"
#include "GeometryUtils/Entities/BmCurveLoop.h"

class TB_GEOMETRYUTILS_EXPORT BmBRepGeometryUtils {
public:
  // Appends sample points along this curve, numSamples - number of points for the partition of the curve.
  // if numSamples == 0 - partition curve depending on the type and interval
  static OdGePoint3dArray getSamplePoints(const OdGeCurve3d& pCurve, OdUInt32 numSamples = 100);

  // creates arrays of curves that form "CurveLoops"
  static OdArray<OdArray<OdGeCurve3d*> > prepareCurveLoops(const OdArray<OdBmCurveLoopPtr>& arrCurveLoops, const OdBoolArray& arrIsReversed);

  // if area > 0 - clockwise(CW), area < 0 - counter-clockwise(CCW).
  static bool isClockWise(const OdBmCurveLoopPtr& pCurveLoop, OdGePlane* pGePlane);
  

  //Determining the extents for profiles
  static OdArray<OdGeExtents2d> loopBoundaries(OdGePlane* pGePlane, const OdArray<OdBmCurveLoopPtr>& arrCurveLoops);
  

  // Determining the type of loop. If true - FULLNESS, if false - HOLE
  static OdBoolArray definitionLoopType(OdGePlane* pGePlane, const OdArray<OdBmCurveLoopPtr>& arrCurveLoops);
  

  // Determining whether to do a reverse curves in a loop
  static OdBoolArray isCurveLoopReversed(const OdArray<OdBmCurveLoopPtr>& arrCurveLoops, OdGePlane* pGePlane); 

};

#endif
