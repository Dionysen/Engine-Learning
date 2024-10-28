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

#ifndef _BM_CYLSURF_H_
#define _BM_CYLSURF_H_
#include "Geometry/Entities/BmSurface.h"
// BEGIN: Includes
#include "Ge/GeCylinder.h"
// END: Includes



class OdBmCylSurf;
class OdBmCylSurfImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCylSurf object.
 */
typedef OdSmartPtr<OdBmCylSurf> OdBmCylSurfPtr;

/** \details
 A data type that represents an array of OdBmCylSurf objects.
 */
typedef OdArray<OdBmCylSurfPtr> OdBmCylSurfPtrArray;

//----------------------------------------------------------
//
// OdBmCylSurf
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of a cylinder surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmCylSurf : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCylSurf);
public:
  /** \details 
  Retrieves the surface center.
  \returns A point object that represents the surface's center.
  */
  OdGePoint3d getCenter() const;
  /** \details 
  Sets a new center for the cylinder surface.
  \param point [in] An OdGePoint3d object that represents the new center point to be set.
  \returns eOk if the new center point was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setCenter(const OdGePoint3d&);
  /** \details 
  Retrieves the surface X-axis vector.
  \returns A vector object that represents the surface X-axis vector.
  */
  OdGeVector3d getXVec() const;
  /** \details 
  Sets a new X-axis vector for the cylinder surface.
  \param vector [in] An OdGeVector3d object that represents the new X-axis vector.
  \returns eOk if the new X-axis vector was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setXVec(const OdGeVector3d&);
  /** \details 
  Retrieves the surface Y-axis vector.
  \returns A vector object that represents the surface Y-axis vector.
  */  
  OdGeVector3d getYVec() const;
  /** \details 
  Sets a new Y-axis vector for the cylinder surface.
  \param vector [in] An OdGeVector3d object that represents the new Y-axis vector.
  \returns eOk if the new Y-axis vector was successfully set; otherwise, the method returns an appropriate error code.
  */  
  OdResult setYVec(const OdGeVector3d&);
  /** \details 
  Retrieves the surface Z-axis vector.
  \returns A vector object that represents the surface Z-axis vector.
  */
  OdGeVector3d getZVec() const;
  /** \details 
  Sets a new Z-axis vector for the cylinder surface.
  \param vector [in] An OdGeVector3d object that represents the new Z-axis vector.
  \returns eOk if the new Z-axis vector was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setZVec(const OdGeVector3d&);
  /** \details 
  Retrieves the radius of the cylinder surface.
  \returns A double value that represents the cylinder radius.
  */
  double getRadius() const;
  /** \details 
  Sets a new cylinder radius value for the surface.
  \param radius [in] A new radius value to be set.
  \returns eOk if the new radius value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setRadius(double);
  //
  // Main functionality
  //

public:

  /** \details
    Converts the cylinder surface object to an OdGeSurface object.
    \param pSurface [out] A raw pointer to an OdGeSurface object to be returned to a calling subroutine.
    \param tol      [in]  A tolerance value.
    \returns eOk if the cylinder surface was successfully converted to an OdGeSurface object; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed OdGeSurface object and returns it to a calling subroutine.
  */
  OdResult getGeSurface(OdGeSurface* &pSurface, const OdGeTol& tol = OdGeContext::gTol) const;

  /** \details
    Sets the cylinder surface parameters using an OdGeCylinder object.
    \param pGeCylSurface [in] An OdGeCylinder object that contains cylinder surface parameters to be set.
    \returns eOk if the cylinder surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGeCylinder &pGeCylSurface);
};


#endif // _BM_CYLSURF_H_

