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

#ifndef _BM_NONPLANARSKETCH_H_
#define _BM_NONPLANARSKETCH_H_
#include "Database/BmElement.h"

class OdBmNpsControlPoint;
typedef OdSmartPtr<OdBmNpsControlPoint> OdBmNpsControlPointPtr;
class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;
class OdBmObjectId;

class OdBmNonPlanarSketch;
class OdBmNonPlanarSketchImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNonPlanarSketch object.
 */
typedef OdSmartPtr<OdBmNonPlanarSketch> OdBmNonPlanarSketchPtr;

/** \details
 A data type that represents an array of OdBmNonPlanarSketch objects.
 */
typedef OdArray<OdBmNonPlanarSketchPtr> OdBmNonPlanarSketchPtrArray;

//----------------------------------------------------------
//
// OdBmNonPlanarSketch
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmNonPlanarSketch : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNonPlanarSketch);
public:
  void getCurveElemIdsPairSet(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getPointElemIdsPairSet(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getControlPoints(OdArray<OdBmNpsControlPointPtr> &) const;
  void getOffsetCurves(OdArray<OdBmGCurvePtr> &) const;
  OdGePoint3d getOffsetVector() const;
  OdBmObjectId getOwnerElemId() const;
  OdBmObjectId getBondingPointId() const;
  OdBmObjectId getSketchId() const;
  OdBmObjectId getPath3dId() const;
  OdBmObjectId getMasterNPSId() const;
  OdInt32 getNextIndex() const;
  //
  // Main functionality
  //


};


#endif // _BM_NONPLANARSKETCH_H_

