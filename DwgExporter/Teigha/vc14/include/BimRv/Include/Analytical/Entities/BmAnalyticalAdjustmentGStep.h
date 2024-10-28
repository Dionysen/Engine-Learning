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

#ifndef _BM_ANALYTICALADJUSTMENTGSTEP_H_
#define _BM_ANALYTICALADJUSTMENTGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmGeometry;
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;
class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;

class OdBmAnalyticalAdjustmentGStep;
class OdBmAnalyticalAdjustmentGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAnalyticalAdjustmentGStep object.
 */
typedef OdSmartPtr<OdBmAnalyticalAdjustmentGStep> OdBmAnalyticalAdjustmentGStepPtr;

/** \details
 A data type that represents an array of OdBmAnalyticalAdjustmentGStep objects.
 */
typedef OdArray<OdBmAnalyticalAdjustmentGStepPtr> OdBmAnalyticalAdjustmentGStepPtrArray;

//----------------------------------------------------------
//
// OdBmAnalyticalAdjustmentGStep
//
//----------------------------------------------------------

/** \details
    <group Analytical_Classes>
*/
class TB_ANALYTICAL_EXPORT OdBmAnalyticalAdjustmentGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAnalyticalAdjustmentGStep);
public:
  OdBmGeometryPtr getSurfGeom() const;
  OdBmObjectPtr getTessLoop() const;
  void getCurves(OdArray<OdBmGCurvePtr> &) const;
  OdBmObjectPtr getPickItem(OdUInt32 idx) const;
  double getOffsetParamItem(OdUInt32 idx) const;
  OdGeVector3d getOffsetItem(OdUInt32 idx) const;
  OdInt32 getEndTagItem(OdUInt32 idx) const;
  bool getLockItem(OdUInt32 idx) const;
  //
  // Main functionality
  //
};
#endif // _BM_ANALYTICALADJUSTMENTGSTEP_H_

