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

#ifndef _BM_GNURBSPLINE_H_
#define _BM_GNURBSPLINE_H_
#include "Geometry/Entities/BmGCurve.h"
// BEGIN: Includes
#include "Ge/GeKnotVector.h"
#include "Geometry/Entities/BmGHermiteSpline.h"
// END: Includes

class OdBmWPoint;
typedef OdSmartPtr<OdBmWPoint> OdBmWPointPtr;

class OdBmGNurbSpline;
class OdBmGNurbSplineImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGNurbSpline object.
 */
typedef OdSmartPtr<OdBmGNurbSpline> OdBmGNurbSplinePtr;

/** \details
 A data type that represents an array of OdBmGNurbSpline objects.
 */
typedef OdArray<OdBmGNurbSplinePtr> OdBmGNurbSplinePtrArray;

//----------------------------------------------------------
//
// OdBmGNurbSpline
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a nurb spline.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGNurbSpline : public OdBmGCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGNurbSpline);
public:
  /** \details
    Returns the spline degree as an OdInt32 value.
  */
  OdInt32 getDegree() const;
  /** \details
    Returns true if the nurb spline is closed.
  */
  bool getClosed() const;
  /** \details
    Returns true if the nurb spline is rational.
  */
  bool getRational() const;
  /** \details
    Returns an array of curve control points.
  */
  void getControlPoints(OdArray<OdBmWPointPtr> &) const;
  /** \details
    Returns an array of curve knots.
  */
  void getKnots(OdDoubleArray &) const;
  //
  // Main functionality
  //

  /** \details
    Sets the NURB spline data.

    \param degree [in] Input spline's degree.
    \param knots [in] Input spline's array of knots.
    \param controlPoints [in] Input spline's array of control points.
    \param weights [in] Input spline's array of weights.
    \param aTag [in] Input spline's tag.
    \param aFlags [in] Input additional flags.
      
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(OdUInt32 degree, OdGeKnotVector knots, OdGePoint3dArray controlPoints, OdDoubleArray weights, const OdInt32 aTag = 0, const OdInt32 aFlags = OdBm::GInfoFlags::IsCurveBounded | OdBm::GInfoFlags::Default);

  /** \details
    Sets the NURB spline data.

    \param degree [in] Input spline's degree.
    \param knots [in] Input spline's array of knots.
    \param controlPoints [in] Input spline's array of control points.
    \param aTag [in] Input spline's tag.
    \param aFlags [in] Input additional flags.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(OdUInt32 degree, OdGeKnotVector knots, OdGePoint3dArray controlPoints, const OdInt32 aTag = 0, const OdInt32 aFlags = OdBm::GInfoFlags::IsCurveBounded | OdBm::GInfoFlags::Default);

  /** \details
    Sets the NURB spline data.

    \param pHermite [in] Input HermiteSpline.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(const OdBmGHermiteSplinePtr& pHermite);
};


#endif // _BM_GNURBSPLINE_H_

