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

#ifndef _BM_GHERMITESPLINE_H_
#define _BM_GHERMITESPLINE_H_
#include "Geometry/Entities/BmGCurve.h"
#include "Geometry/Entities/BmSplineNode.h"



class OdBmGHermiteSpline;
class OdBmGHermiteSplineImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGHermiteSpline object.
 */
typedef OdSmartPtr<OdBmGHermiteSpline> OdBmGHermiteSplinePtr;

/** \details
 A data type that represents an array of OdBmGHermiteSpline objects.
 */
typedef OdArray<OdBmGHermiteSplinePtr> OdBmGHermiteSplinePtrArray;

//----------------------------------------------------------
//
// OdBmGHermiteSpline
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a hermite spline.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGHermiteSpline : public OdBmGCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGHermiteSpline);
public:
  /** \details
    Returns true if the hermite spline is periodic.
  */
  bool getPeriodic() const;
  /** \details
    Returns the array of SplineNode objects of this hermite spline.
  */
  void getNodeArray(OdArray<OdBmSplineNode> &) const;
  //
  // Main functionality
  //

  /** \details
    Sets the hermite spline data.

    \param controlPoints [in] Input array of HermiteSpline control points.
    \param startTangent [in] Input spline's start tangent.
    \param endTangent [in] Input spline's end tangent.
    \param periodic [in] Input spline's periodic flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */

  OdResult set(OdGePoint3dArray controlPoints, OdGeVector3d startTangent, OdGeVector3d endTangent, bool periodic);

  /** \details
    Sets the hermite spline data.

    \param pHermite [in] Input HermiteSpline.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(const OdGeNurbCurve3d& pHermite);

  /** \details
    Sets the hermite spline data.

    \param controlPoints [in] Input array of HermiteSpline control points.
    \param periodic [in] Input 'periodic' status.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(const OdGePoint3dArray& arrControlPoints, bool isPeriodic);
};


#endif // _BM_GHERMITESPLINE_H_

