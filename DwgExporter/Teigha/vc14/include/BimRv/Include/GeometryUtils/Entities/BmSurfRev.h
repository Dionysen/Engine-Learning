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

#ifndef _BM_SURFREV_H_
#define _BM_SURFREV_H_
#include "Geometry/Entities/BmSurface.h"
// BEGIN: Includes
#include "Ge/GeRevolvedSurface.h"
#include "Ge/GeSphere.h"
#include "Ge/GeTorus.h"
// END: Includes

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;

class OdBmSurfRev;
class OdBmSurfRevImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSurfRev object.
 */
typedef OdSmartPtr<OdBmSurfRev> OdBmSurfRevPtr;

/** \details
 A data type that represents an array of OdBmSurfRev objects.
 */
typedef OdArray<OdBmSurfRevPtr> OdBmSurfRevPtrArray;

//----------------------------------------------------------
//
// OdBmSurfRev
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of a revolved surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmSurfRev : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSurfRev);
public:
  /** \details
  Retrieves the revolved surface center. 
  \returns An OdGePoint3d object that represents the center of the revolving for the surface.
  */
  OdGePoint3d getCenter() const;
  /** \details
  Retrieves the X-axis vector. 
  \returns An OdGeVector3d object that represents the X-axis vector for the surface.
  */
  OdGeVector3d getXVec() const;
  /** \details
  Retrieves the Y-axis vector. 
  \returns An OdGeVector3d object that represents the Y-axis vector for the surface.
  */
  OdGeVector3d getYVec() const;
  /** \details
  Retrieves the Z-axis vector. 
  \returns An OdGeVector3d object that represents the Z-axis vector for the surface.
  */
  OdGeVector3d getZVec() const;
  /** \details
  Retrieves the profile curve for the revolved surface. 
  \returns A smart pointer to an OdBmGCurve object that represents the profile curve.
  */
  OdBmGCurvePtr getProfileCurve() const;
  //
  // Main functionality
  //

  /** \details
    Sets the revolved surface parameters using an OdGeRevolvedSurface object.
    \param pGeRevSurface [in] An OdGeRevolvedSurface object that contains revolved surface parameters to be set.
    \returns eOk if the revolved surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGeRevolvedSurface &pGeRevSurface);

  /** \details
    Sets the revolved surface parameters using an OdGeSphere object.
    \param pGeSphere [in] An OdGeSphere object that contains revolved surface parameters to be set.
    \returns eOk if the revolved surface parameters were successfully set; otherwise, the method returns an appropriate error code.
*/
  OdResult set(const OdGeSphere &pGeSphere);

  /** \details
    Sets the revolved surface parameters using an OdGeTorus object.
    \param pGeTorus [in] An OdGeTorus object that contains revolved surface parameters to be set.
    \returns eOk if the revolved surface parameters were successfully set; otherwise, the method returns an appropriate error code.
*/
  OdResult set(const OdGeTorus &pGeTorus);
};


#endif // _BM_SURFREV_H_

