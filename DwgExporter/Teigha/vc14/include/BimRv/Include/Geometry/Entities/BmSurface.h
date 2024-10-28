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

#ifndef _BM_SURFACE_H_
#define _BM_SURFACE_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Ge/GeNurbSurface.h"
// END: Includes



class OdBmSurface;
class OdBmSurfaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSurface object.
 */
typedef OdSmartPtr<OdBmSurface> OdBmSurfacePtr;

/** \details
 A data type that represents an array of OdBmSurface objects.
 */
typedef OdArray<OdBmSurfacePtr> OdBmSurfacePtrArray;

//----------------------------------------------------------
//
// OdBmSurface
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmSurface : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSurface);
public:
  OdGeExtents2d getEnvelope() const;
  bool getOrientFlag() const;
  //
  // Main functionality
  //

public:
  /** \details
    Returns the GeSurface of this object.

      \param pSurface [out] Output GeSurface.
      \param tol [in] Input tolerance value.

	  \remarks Not implemented yet.
  */
  OdResult getGeSurface(OdGeSurface* &pSurface, const OdGeTol& tol = OdGeContext::gTol) const;

  /** \details
    Returns the point corresponding to the parameter pair.

      \param retVal [out] Output evaluated point.
      \param param [in] Input point.
  */
  OdResult evalPoint(OdGePoint3d& retVal, const OdGePoint2d& param) const;

  /** \details
    Returns the 2D pair of parameter values of a point on this surface.

      \param point [in] Input point to be evaluated.
      \param outPt [out] Output evaluated parameter values.
      \param tol [in] Input tolerance value.
  */
  OdResult paramOf(const OdGePoint3d& point, OdGePoint2d& outPt, const OdGeTol& tol = OdGeContext::gTol) const;

  /** \details
    Returns the GeSurfaceType of the current surface.
  */
  OdGe::EntityId getGeSurfaceType() const;

  /** \details
    Returns false.
  */
  bool getSurfaceAsNurb(OdGeNurbSurface& nurb) const;

  /** \details
    Returns projection of the point to surface and distance between projection and the point.

      \param point [in] Input point.
      \param retVal [out] Output projection point.
      \param dist [out] Output distance from point to projection.
      \param tol [in] Input tolerance value.
  */
  OdResult projectPntToSurf(const OdGePoint3d& point, OdGePoint3d& retVal, double& dist, const OdGeTol& tol = OdGeContext::gTol) const;
};


#endif // _BM_SURFACE_H_

