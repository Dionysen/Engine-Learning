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

#ifndef _BM_PLANE_H_
#define _BM_PLANE_H_
#include "Geometry/Entities/BmSurface.h"



class OdBmPlane;
class OdBmPlaneImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPlane object.
 */
typedef OdSmartPtr<OdBmPlane> OdBmPlanePtr;

/** \details
 A data type that represents an array of OdBmPlane objects.
 */
typedef OdArray<OdBmPlanePtr> OdBmPlanePtrArray;

//----------------------------------------------------------
//
// OdBmPlane
//
//----------------------------------------------------------

/** \details
    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmPlane : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPlane);
public:
  OdGePoint3d getOrigin() const;
  OdGeVector3d getXVector() const;
  OdGeVector3d getYVector() const;
  //
  // Main functionality
  //

  /** \details
    Sets the parameters for this Plane according to the arguments,
    and returns error code.

    \param origin [in]  Origin of the plane.
    \param xDirection [in]  x-direction of the plane.
    \param yDirection [in]  y-direction of the plane.
  */
  OdResult set(const OdGePoint3d& origin, const OdGeVector3d& xDirection, const OdGeVector3d& yDirection);

  /** \details
    Returns Plane normal.
  */
  OdGeVector3d getNormal() const;

  /** \details
    Sets the parameters for this Plane according to the arguments,
    and returns error code.

    \param pGePlane [in]  Input GePlane
    \returns eOk if the plane surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGePlane &pGePlane);
};


#endif // _BM_PLANE_H_

