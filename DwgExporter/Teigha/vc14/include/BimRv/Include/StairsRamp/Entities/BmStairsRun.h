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

#ifndef _BM_STAIRSRUN_H_
#define _BM_STAIRSRUN_H_
#include "StairsRamp/Entities/BmStairsRunAndLanding.h"

class OdBmCurveLoop;
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;
class OdBmFace;
typedef OdSmartPtr<OdBmFace> OdBmFacePtr;
class OdBmGeometry;
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;

class OdBmStairsRun;
class OdBmStairsRunImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsRun object.
 */
typedef OdSmartPtr<OdBmStairsRun> OdBmStairsRunPtr;

/** \details
 A data type that represents an array of OdBmStairsRun objects.
 */
typedef OdArray<OdBmStairsRunPtr> OdBmStairsRunPtrArray;

//----------------------------------------------------------
//
// OdBmStairsRun
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsRun : public OdBmStairsRunAndLanding {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsRun);
public:
  double getBottomElevation() const;
  double getBaseTopElevation() const;
  double getExtendBelowBase() const;
  double getExtendBelowTreadBase() const;
  double getActualRunWidth() const;
  double getLeftStringerWidth() const;
  double getRightStringerWidth() const;
  OdInt32 getTopRiserIndex() const;
  bool getIsCenterMarkVisible() const;
  bool getIsBeginWithRiser() const;
  bool getIsEndWithRiser() const;
  void getIntermediateSupportPathCurveLoops(OdArray<OdBmCurveLoopPtr> &) const;
  void getLeftRefFaces(OdArray<OdBmFacePtr> &) const;
  void getRightRefFaces(OdArray<OdBmFacePtr> &) const;
  void getRefFaces(OdArray<OdBmFacePtr> &) const;
  void getRefCurves(OdArray<OdBmCurveLoopPtr> &) const;
  void getOrderedRisers(OdArray<OdBmCurveLoopPtr> &) const;
  void getOrderedNosingFront(OdArray<OdBmCurveLoopPtr> &) const;
  OdBmGeometryPtr getGeom4TreadFaces() const;
  void getGeoms2CutFloor(OdArray<OdBmObjectPtr> &) const;
  OdBmObjectPtr getCurveForSnapping() const;
  OdBmObjectPtr getStartRiser() const;
  OdBmObjectPtr getEndRiser() const;
  void getPoints(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //

  double getTopElevation() const;
};
#endif // _BM_STAIRSRUN_H_

