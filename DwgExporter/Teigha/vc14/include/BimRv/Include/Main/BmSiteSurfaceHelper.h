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

#ifndef _BM_SITESURFACE_HELPER_H_
#define _BM_SITESURFACE_HELPER_H_
#include "Entities/BmSiteSurface.h"

class OdBmSiteSurfaceImpl;

//----------------------------------------------------------
//
// OdBmSiteSurfaceHelper
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmSiteSurfaceHelper
{
public:

  /** \details
  Constructor.
  
  \param pSiteSurface [in] A pointer to an external SiteSurface. 
  */
  OdBmSiteSurfaceHelper(const OdBmSiteSurfacePtr& pSiteSurface);
  
  /** \detailes
    Applies changes to the surface
  */
  OdResult applyToSurface();

  /** \details
    Returns true if the points of this topography surface can be edited independently. 
    Editing of individual points of the topography surfaces created by facets is prohibited.
  */
  bool arePointsEditable();

  /** \details
    Returns true if the given point exists in the topography surface, otherwise false.

    \param point [in] Input to be checked.
  */
  bool containsPoint(const OdGePoint3d& point);

  /** \details
    Returns only the points of the topography surface which lie within the input bounding box.
    
    \param boundingBox [in] The boundig box.
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

  /** \details
    Creates a new topography surface element from points and facets.
    Points of the topography surface created by facets cannot be modified.

    \param points [in] Input contains points(vertexes) of the surface
    \param facets [in] Input is an array of tiangle facets composing a polygon mesh. Each facet in the array contains 3 integers representing vertex indices.

    \remarks
    Facets with more than two points with same x, y are invalid and not allowed.
    
    \returns eInvalidInput if the arguments are invalid.
    \returns eOk - otherwise.
  */
  OdResult setSurface(const OdGePoint3dArray& points, OdArray<OdUInt16Array>& facets);
  
  /** \details
    Creates a new topography surface element from points.

    \param points [in] Input contains points (vertexes) of the surface

    \remarks
    It is not permited if points shared the same XY location (even with different elevations).
    
    \returns eInvalidInput if the operation is not permitted.
    \returns eOk - otherwise.
  */
  OdResult setSurface(const OdGePoint3dArray& points);

  /** \details
    Adds points to a topography surface.
    Returns eInvalidInput if the topography surface already contains a point with the same XY location, otherwise returns eOk.
    
    \param points [in] Input contains points(vertexes) to be added to a topography surface.

    \remarks
    The input point will not be added, if the topography surface already contains the input point.
    
    \returns eInvalidInput in case of empty input array.
  */
  OdResult addPoints(const OdGePoint3dArray& points);

  /** \details
    Deletes points from a topography surface.

    \param points [in] Input contains points(vertexes) to be deleted from a topography surface.

    \remarks
    Points will be deleted if they matched in XY. 
    Points that do not exist in a topography surface will be ignored, unless all of the input points do not exist, which will returns eInvalidInput. 
    
    \returns eInvalidInput in case of empty input array.
  */
  OdResult deletePoints(const OdGePoint3dArray& points);

  /** \details
    Changes the elevation value for a point.
    
    \param point [in] Point, eleveation value for which will be changed.
    \param elevValue [in] New elevation value.
    
    \returns eInvalidInput if the input point does not exist in the topography surface or if the given value for elevValue is more than 30000 feet in absolute value.
    \returns eNotApplicable if the points of the topography surface are not editable.
  */
  OdResult changePointElevation(const OdGePoint3d& point, double elevValue);

  /** \details
    Changes the elevation value for points.
    
    \param points [in] An array of points.
    \param elevValue [in] The new eleveation value.
    
    \returns eInvalidInput if all of the input points does not exist in the topography surface or if the given value for elevValue is more than 30000 feet in absolute value.
    \returns eNotApplicable if the points of the topography surface are not editable.
  */
  OdResult changePointsElevation(const OdGePoint3dArray& points, double elevValue);

  /** \details
    Moves a point in a topography surface to a new location.
    
    \param moved [in] A point.
    \param target [in] Target location.
    
    \returns eInvalidInput if the moved point does not exist in the topography surface or there is another point with same XY as target.
    \returns eNotApplicable if the points of the topography surface are not editable.
  */
  OdResult movePoint(const OdGePoint3d& moved, const OdGePoint3d& target);

  /** \details
    Moves points in a topography surface to a new location.
    
    \param moved [in] An array of points.
    \param dir [in] Direction vector.
    
    \returns eInvalidInput if all of the moved points does not exist in the topography surface or there is another point with same XY as one of target points.
    \returns eNotApplicable if the points of the topography surface are not editable.
  */
  OdResult movePoints(const OdGePoint3dArray& moved, const OdGeVector3d& dir);

private:
  OdBmSiteSurfaceHelper() {};
  OdBmSiteSurfacePtr m_pExternal;
  OdBmSiteSurfacePtr m_pInternal;
  OdBmSiteSurfaceImpl* getImpl();
};


#endif // _BM_SITESURFACE_HELPER_H_

