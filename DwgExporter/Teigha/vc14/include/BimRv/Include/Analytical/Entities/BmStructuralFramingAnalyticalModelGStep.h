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

#ifndef _BM_STRUCTURALFRAMINGANALYTICALMODELGSTEP_H_
#define _BM_STRUCTURALFRAMINGANALYTICALMODELGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;

class OdBmStructuralFramingAnalyticalModelGStep;
class OdBmStructuralFramingAnalyticalModelGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStructuralFramingAnalyticalModelGStep object.
 */
typedef OdSmartPtr<OdBmStructuralFramingAnalyticalModelGStep> OdBmStructuralFramingAnalyticalModelGStepPtr;

/** \details
 A data type that represents an array of OdBmStructuralFramingAnalyticalModelGStep objects.
 */
typedef OdArray<OdBmStructuralFramingAnalyticalModelGStepPtr> OdBmStructuralFramingAnalyticalModelGStepPtrArray;

//----------------------------------------------------------
//
// OdBmStructuralFramingAnalyticalModelGStep
//
//----------------------------------------------------------

/** \details
    <group Analytical_Classes>
*/
class TB_ANALYTICAL_EXPORT OdBmStructuralFramingAnalyticalModelGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStructuralFramingAnalyticalModelGStep);
public:
  OdBmObjectPtr getTessLoop() const;
  OdBmGCurvePtr getAnalyticalCurve() const;
  OdBmObjectPtr getRigidLinkHead() const;
  OdBmObjectPtr getRigidLinkTail() const;
  void getRigidLinkMiddles(OdArray<OdBmObjectPtr> &) const;
  OdBmGCurvePtr getSegmentedCurveStart() const;
  OdBmGCurvePtr getSegmentedCurveEnd() const;
  OdBmGCurvePtr getSegmentedCurveMid() const;
  void getAnalyticalPick(OdArray<OdBmObjectPtr> &) const;
  void getAnalyticalOffset(OdGePoint3dArray &) const;
  OdInt32 getAnalyticalShapeTag() const;
  bool getHasAnalyticalCurve() const;
  bool getIsNoLongerTransient() const;
  //
  // Main functionality
  //
};
#endif // _BM_STRUCTURALFRAMINGANALYTICALMODELGSTEP_H_

