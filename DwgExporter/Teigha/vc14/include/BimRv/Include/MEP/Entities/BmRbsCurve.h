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

#ifndef _BM_RBSCURVE_H_
#define _BM_RBSCURVE_H_
#include "HostObj/Entities/BmHostObj.h"

class OdBmRbsCurveConnectorManager;
typedef OdSmartPtr<OdBmRbsCurveConnectorManager> OdBmRbsCurveConnectorManagerPtr;
class OdBmCurveDriver;
typedef OdSmartPtr<OdBmCurveDriver> OdBmCurveDriverPtr;
class OdBmObjectId;

class OdBmRbsCurve;
class OdBmRbsCurveImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsCurve object.
 */
typedef OdSmartPtr<OdBmRbsCurve> OdBmRbsCurvePtr;

/** \details
 A data type that represents an array of OdBmRbsCurve objects.
 */
typedef OdArray<OdBmRbsCurvePtr> OdBmRbsCurvePtrArray;

//----------------------------------------------------------
//
// OdBmRbsCurve
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsCurve : public OdBmHostObj {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsCurve);
public:
  OdBmRbsCurveConnectorManagerPtr getConnectorManager() const;
  OdBmCurveDriverPtr getCurveDriver() const;
  double getWidthOrDiameter() const;
  double getHeight() const;
  OdGeVector3d getNormal() const;
  double getLevelOffsetStart() const;
  double getLevelOffsetEnd() const;
  OdInt32 getHorOffsetType() const;
  OdInt32 getVertOffsetType() const;
  OdBmObjectId getTypeId() const;
  OdBmObjectId getSystemCategoryId() const;
  OdBmObjectId getStartLevelId() const;
  OdBmObjectId getSegmentId() const;
  OdInt32 getEndReference() const;
  bool getFittingLessPathState() const;
  bool getPlaceHolderEccentricOffsetState() const;
  //
  // Main functionality
  //

  /** \details
    Returns point of the curve.
      \param retVal [out] Output point on curve.
      \param index [in] Input parameter.
        index - 0 return start point.
        index - 1 return end point.
  */
  OdResult getEndPoint(OdGePoint3d& retVal, OdUInt32 index) const;

  /** \details
    Returns MEPSystems for children of RbsCurve. If there are many MEPSystems, returns the first MEPSystem.
  */
  virtual OdBmObjectId getMEPSystems() const;
};
#endif // _BM_RBSCURVE_H_

