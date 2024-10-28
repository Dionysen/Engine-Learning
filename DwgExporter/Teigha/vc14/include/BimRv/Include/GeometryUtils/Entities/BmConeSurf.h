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

#ifndef _BM_CONESURF_H_
#define _BM_CONESURF_H_
#include "Geometry/Entities/BmSurface.h"
// BEGIN: Includes
#include "Ge/GeCone.h"
// END: Includes



class OdBmConeSurf;
class OdBmConeSurfImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmConeSurf object.
 */
typedef OdSmartPtr<OdBmConeSurf> OdBmConeSurfPtr;

/** \details
 A data type that represents an array of OdBmConeSurf objects.
 */
typedef OdArray<OdBmConeSurfPtr> OdBmConeSurfPtrArray;

//----------------------------------------------------------
//
// OdBmConeSurf
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of a cone surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmConeSurf : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmConeSurf);
public:
  /** \details 
  Retrieves the surface center.
  \returns A point object that represents the surface's center.
  */
  OdGePoint3d getCenter() const;
  /** \details 
  Retrieves the surface X-axis vector.
  \returns A vector object that represents the surface X-axis vector.
  */
  OdGeVector3d getXVec() const;
  /** \details 
  Retrieves the surface Y-axis vector.
  \returns A vector object that represents the surface Y-axis vector.
  */
  OdGeVector3d getYVec() const;
  /** \details 
  Retrieves the surface Z-axis vector.
  \returns A vector object that represents the surface Z-axis vector.
  */
  OdGeVector3d getZVec() const;
  /** \details 
  Retrieves the surface half-angle in radians.
  \returns A double value that contains the value of the surface half angle.
  */  
  double getHalfAngle() const;
  //
  // Main functionality
  //

public:
  /** \details
    Converts the cone surface object to an OdGeSurface object.
    \param pSurface [out] A raw pointer to an OdGeSurface object to be returned to a calling subroutine.
    \param tol      [in]  A tolerance value.
    \returns eOk if the cone surface was successfully converted to an OdGeSurface object; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed OdGeSurface object and returns it to a calling subroutine.
  */
  OdResult getGeSurface(OdGeSurface* &pSurface, const OdGeTol& tol = OdGeContext::gTol) const;

  /** \details
    Sets the cone surface parameters using an OdGeCone object.
    \param pGeConeSurface [in] An OdGeCone object that contains cone surface parameters to be set.
    \returns eOk if the cone surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGeCone &pGeConeSurface);
};


#endif // _BM_CONESURF_H_

