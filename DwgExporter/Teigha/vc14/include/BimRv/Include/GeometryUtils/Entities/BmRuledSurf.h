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

#ifndef _BM_RULEDSURF_H_
#define _BM_RULEDSURF_H_
#include "Geometry/Entities/BmSurface.h"
// BEGIN: Includes
#include "Ge/GeRuled.h"
// END: Includes

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;

class OdBmRuledSurf;
class OdBmRuledSurfImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRuledSurf object.
 */
typedef OdSmartPtr<OdBmRuledSurf> OdBmRuledSurfPtr;

/** \details
 A data type that represents an array of OdBmRuledSurf objects.
 */
typedef OdArray<OdBmRuledSurfPtr> OdBmRuledSurfPtrArray;

//----------------------------------------------------------
//
// OdBmRuledSurf
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of a ruled surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmRuledSurf : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRuledSurf);
public:
  /** \details 
  Retrieves the first profile curve for the ruled surface.
  \returns A smart pointer to an OdBmGCurve object that represents the first profile curve.
  */
  OdBmGCurvePtr getProfileCurve1() const;
  /** \details 
  Retrieves the second profile curve for the ruled surface.
  \returns A smart pointer to an OdBmGCurve object that represents the second profile curve.
  */
  OdBmGCurvePtr getProfileCurve2() const;
  /** \details 
  Retrieves the first point for the ruled surface.
  \returns An OdGePoint3d object that represents the first point.
  */
  OdGePoint3d getPoint1() const;
  /** \details 
  Sets a new first point for the ruled surface.
  \param point [in] An instance of the OdGePoint3d class that represents the point.
  \returns eOk if the new first point was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setPoint1(const OdGePoint3d&);
  /** \details 
  Retrieves the second point for the ruled surface.
  \returns An OdGePoint3d object that represents the second point.
  */
  OdGePoint3d getPoint2() const;
  /** \details 
  Sets a new second point for the ruled surface.
  \param point [in] An instance of the OdGePoint3d class that represents the point.
  \returns eOk if the new second point was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setPoint2(const OdGePoint3d&);
  //
  // Main functionality
  //

  /** \details
    Sets the ruled surface parameters using an OdGeRuled object.
    \param pGeRulSurface [in] An OdGeRuled object that contains ruled surface parameters to be set.
    \returns eOk if the ruled surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGeRuled &pGeRulSurface);

  /** \details
    Sets the ruled surface parameters using an OdGeEllipCylinder object.
    \param pGeEllipCyl [in] An OdGeEllipCylinder object that contains ruled surface parameters to be set.
    \returns eOk if the ruled surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGeEllipCylinder &pGeEllipCyl);
};


#endif // _BM_RULEDSURF_H_

