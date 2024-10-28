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

#ifndef _BM_REBARSYSTEMGSTEP_H_
#define _BM_REBARSYSTEMGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmRebarSystemDoubleBoundary;
typedef OdSmartPtr<OdBmRebarSystemDoubleBoundary> OdBmRebarSystemDoubleBoundaryPtr;
class OdBmHeldRebarInstanceMap;
typedef OdSmartPtr<OdBmHeldRebarInstanceMap> OdBmHeldRebarInstanceMapPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRebarSystemGStep;
class OdBmRebarSystemGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarSystemGStep object.
 */
typedef OdSmartPtr<OdBmRebarSystemGStep> OdBmRebarSystemGStepPtr;

/** \details
 A data type that represents an array of OdBmRebarSystemGStep objects.
 */
typedef OdArray<OdBmRebarSystemGStepPtr> OdBmRebarSystemGStepPtrArray;

//----------------------------------------------------------
//
// OdBmRebarSystemGStep
//
//----------------------------------------------------------

/** \details
    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarSystemGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarSystemGStep);
public:
  void getBars(OdArray<OdBmObjectPtr> &) const;
  void getBoundary(OdArray<OdBmObjectPtr> &) const;
  OdBmRebarSystemDoubleBoundaryPtr getBoundaryEx() const;
  void getBoundaryOffset(OdArray<OdBmObjectPtr> &) const;
  void getCurvesNotOffset(OdInt32Array &) const;
  void getFace(OdArray<OdBmObjectPtr> &) const;
  OdBmRebarSystemDoubleBoundaryPtr getFaceEx() const;
  void getFaceOffset(OdArray<OdBmObjectPtr> &) const;
  OdBmHeldRebarInstanceMapPtr getHeldInstances() const;
  void getMargins(OdBmMap<OdInt32, double> &) const;
  void getShapeIds(OdBmObjectIdArray &) const;
  double getMarginBottom() const;
  double getMarginTop() const;
  double getSketchWidthItem(OdUInt32 idx) const;
  OdGePoint3d getSpanHeadPos() const;
  double getTotalVolume() const;
  OdInt32 getBoundaryRegionType() const;
  OdInt32 getHostFaceIsBounded() const;
  //
  // Main functionality
  //


};


#endif // _BM_REBARSYSTEMGSTEP_H_

