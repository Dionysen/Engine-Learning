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

#ifndef _BM_SITESURFACE_H_
#define _BM_SITESURFACE_H_
#include "Database/BmElement.h"

class OdBmSiteSurfaceBoundary;
typedef OdSmartPtr<OdBmSiteSurfaceBoundary> OdBmSiteSurfaceBoundaryPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmSiteSurface;
class OdBmSiteSurfaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSiteSurface object.
 */
typedef OdSmartPtr<OdBmSiteSurface> OdBmSiteSurfacePtr;

/** \details
 A data type that represents an array of OdBmSiteSurface objects.
 */
typedef OdArray<OdBmSiteSurfacePtr> OdBmSiteSurfacePtrArray;

//----------------------------------------------------------
//
// OdBmSiteSurface
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmSiteSurface : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSiteSurface);
public:
  OdBmObjectPtr getManager() const;
  void getBoundaries(OdArray<OdBmSiteSurfaceBoundaryPtr> &) const;
  void getPointElemIds(OdBmObjectIdArray &) const;
  void getDividingBoundaries(OdBmObjectIdArray &) const;
  void getSplittingBoundaries(OdBmObjectIdArray &) const;
  void getSiteAreas(OdBmObjectIdArray &) const;
  void getDrivers(OdArray<OdBmObjectPtr> &) const;
  OdGePoint3d getRefOrigin() const;
  OdGeVector3d getRefDir() const;
  double getCut() const;
  double getFill() const;
  double getSimplificationTolerance() const;
  OdBmObjectId getAsIsSurfId() const;
  OdBmObjectId getContourSketchId() const;
  OdBmObjectId getPath3dId() const;
  OdBmObjectId getBoundaryElemId() const;
  OdBmObjectId getConstrainingSurfaceId() const;
  OdBmObjectId getHostId() const;
  OdBmObjectId getHostTopId() const;
  bool getIsSiteArea() const;
  bool getFlipRegion() const;
  void getHostedRailings(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //

  // Methods for setting the surface and manipulation of its points moved to OdBmSiteSurfacehelper class 

  /** \details    
    Checks if the points of a given topology can be edited independently.
  */
  bool arePointsEditable();

  /** \details
    Checks if the given point exists in the topography surface.
    
    \param point [In] Input to be checked.
  */
  bool containsPoint(const OdGePoint3d& point);

  /** \details
    Returns only the points of the topography surface which lie within the input bounding box.
    
    \param boundingBox [in] The bounding box.
  */
  OdGePoint3dArray findPoints(const OdGeExtents3d& boundingBox);

  /** \details
    Returns points which are on the boundary of the topography surface.
  */
  OdGePoint3dArray getBoundaryPoints();

  /** \details
    Returns points that are not boundary points for the topography surface.
 */
  OdGePoint3dArray getInteriorPoints();

  /** \details
    Returns points that define this topography surface.
  */
  OdGePoint3dArray getPoints();
};


#endif // _BM_SITESURFACE_H_

