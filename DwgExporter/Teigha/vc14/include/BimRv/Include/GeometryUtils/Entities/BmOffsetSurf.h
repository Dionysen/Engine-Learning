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

#ifndef _BM_OFFSETSURF_H_
#define _BM_OFFSETSURF_H_
#include "Geometry/Entities/BmSurface.h"
// BEGIN: Includes
#include "Ge/GeOffsetSurface.h"
// END: Includes



class OdBmOffsetSurf;
class OdBmOffsetSurfImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmOffsetSurf object.
 */
typedef OdSmartPtr<OdBmOffsetSurf> OdBmOffsetSurfPtr;

/** \details
 A data type that represents an array of OdBmOffsetSurf objects.
 */
typedef OdArray<OdBmOffsetSurfPtr> OdBmOffsetSurfPtrArray;

//----------------------------------------------------------
//
// OdBmOffsetSurf
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of an offset surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmOffsetSurf : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmOffsetSurf);
public:
  /** \details 
  Retrieves the basis surface of the offset surface.
  \returns A smart pointer to an OdBmSurface object that represents the basis surface.
  \remarks 
  The basis surface is a surface that is used as an origin for the offset surface creation by offsetting for a specified distance.
  */
  OdBmSurfacePtr getBasisSurface() const;
  /** \details 
  Retrieves the offset distance for the offset surface. 
  \returns A double value that contains the current offset distance.
  \remarks 
  The offset distance if the distance between the basis surface and the offset surface.
  */
  double getDistance() const;
  /** \details
  Sets a new value of the offset distance for the offset distance. 
  \param value [in] A new offset distance value to be set.
  \returns eOk if the new offset distance value was successfully set; otherwise, the method returns an appropriate error code.
  \remarks 
  The offset distance if the distance between the basis surface and the offset surface.
  */
  OdResult setDistance(double);
  /** \details 
  Retrieves the maximal curvature of the basis surface.
  \returns A double value that contains the current maximal curvature.
  */
  double getMaxCurvatureBS() const;
  /** \details 
  Sets a new maximal curvature value of the basis surface.
  \param curvature [in] A new maximal curvature value to be set.
  \returns eOk if the new maximal curvature value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setMaxCurvatureBS(double);
  /** \details 
  Retrieves the minimal curvature of the basis surface.
  \returns A double value that contains the current minimal curvature.
  */
  double getMinCurvatureBS() const;
  /** \details 
  Sets a new minimal curvature value of the basis surface.
  \param curvature [in] A new minimal curvature value to be set.
  \returns eOk if the new minimal curvature value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setMinCurvatureBS(double);
  /** \details 
  Retrieves whether the offset surface is successfully constructed. 
  \returns true if the surface is successfully constructed; otherwise, the method returns false.
  */
  bool getConstructedOK() const;
  /** \details 
  Sets a new value of the constructed flag for the offset surface.
  \param flag [in] A new flag value to be set.
  \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setConstructedOK(bool);
  //
  // Main functionality
  //

};


#endif // _BM_OFFSETSURF_H_

