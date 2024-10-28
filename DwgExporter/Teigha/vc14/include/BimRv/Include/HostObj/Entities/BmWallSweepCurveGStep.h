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

#ifndef _BM_WALLSWEEPCURVEGSTEP_H_
#define _BM_WALLSWEEPCURVEGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;
class OdBmPullBack;
typedef OdSmartPtr<OdBmPullBack> OdBmPullBackPtr;
class OdBmTagEnd;
typedef OdSmartPtr<OdBmTagEnd> OdBmTagEndPtr;
class OdBmEndInfo;
typedef OdSmartPtr<OdBmEndInfo> OdBmEndInfoPtr;
class OdBmObjectId;

class OdBmWallSweepCurveGStep;
class OdBmWallSweepCurveGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWallSweepCurveGStep object.
 */
typedef OdSmartPtr<OdBmWallSweepCurveGStep> OdBmWallSweepCurveGStepPtr;

/** \details
 A data type that represents an array of OdBmWallSweepCurveGStep objects.
 */
typedef OdArray<OdBmWallSweepCurveGStepPtr> OdBmWallSweepCurveGStepPtrArray;

//----------------------------------------------------------
//
// OdBmWallSweepCurveGStep
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmWallSweepCurveGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWallSweepCurveGStep);
public:
  OdInt32 getSide() const;
  OdBmObjectId getHostId() const;
  bool getHasFakeCurve() const;
  void getCurves(OdArray<OdBmGCurvePtr> &) const;
  void getReturnCurves(OdArray<OdBmGCurvePtr> &) const;
  void getOffsetCurves(OdArray<OdBmGCurvePtr> &) const;
  void getPullBackParam0(OdBmMap<OdInt32, OdBmPullBackPtr> &) const;
  void getPullBackParam1(OdBmMap<OdInt32, OdBmPullBackPtr> &) const;
  void getJoinedSweeps(OdBmMap<OdBmTagEndPtr, OdBmEndInfoPtr> &) const;
  void getMiterEnds(OdBmMap<OdBmTagEndPtr, OdBmEndInfoPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_WALLSWEEPCURVEGSTEP_H_

