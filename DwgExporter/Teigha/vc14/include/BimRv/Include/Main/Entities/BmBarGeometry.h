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

#ifndef _BM_BARGEOMETRY_H_
#define _BM_BARGEOMETRY_H_
#include "Base/BmObject.h"

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;
class OdBmParamVector;
typedef OdSmartPtr<OdBmParamVector> OdBmParamVectorPtr;
class OdBmObjectId;

class OdBmBarGeometry;
class OdBmBarGeometryImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBarGeometry object.
 */
typedef OdSmartPtr<OdBmBarGeometry> OdBmBarGeometryPtr;

/** \details
 A data type that represents an array of OdBmBarGeometry objects.
 */
typedef OdArray<OdBmBarGeometryPtr> OdBmBarGeometryPtrArray;

//----------------------------------------------------------
//
// OdBmBarGeometry
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmBarGeometry : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBarGeometry);
public:
  void getCurves(OdArray<OdBmGCurvePtr> &) const;
  OdGePoint3d getHookPlaneNormalAtEnd() const;
  OdGePoint3d getHookPlaneNormalAtStart() const;
  OdBmParamVectorPtr getParams() const;
  OdBmParamVectorPtr getShapeParams() const;
  OdBmObjectId getBarShapeId() const;
  bool getIsMatchedReversed() const;
  double getHookRotationAngleAtEnd() const;
  double getHookRotationAngleAtStart() const;
  //
  // Main functionality
  //
};
#endif // _BM_BARGEOMETRY_H_

