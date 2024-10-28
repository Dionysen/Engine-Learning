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

#ifndef _BM_GELLIPSE_H_
#define _BM_GELLIPSE_H_
#include "Geometry/Entities/BmGCurve.h"
// BEGIN: Includes
#include "Ge/GeEllipArc3d.h"
// END: Includes



class OdBmGEllipse;
class OdBmGEllipseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGEllipse object.
 */
typedef OdSmartPtr<OdBmGEllipse> OdBmGEllipsePtr;

/** \details
 A data type that represents an array of OdBmGEllipse objects.
 */
typedef OdArray<OdBmGEllipsePtr> OdBmGEllipsePtrArray;

//----------------------------------------------------------
//
// OdBmGEllipse
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of an ellipse.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGEllipse : public OdBmGCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGEllipse);
public:
  /** \details
    Returns the center of the ellipse as an object of the OdGePoint3d class.
  */
  OdGePoint3d getCenter() const;
  /** \details
    Returns the X-Vector of the ellipse as an object of the OdGeVector3d class.
  */
  OdGeVector3d getXDirection() const;
  /** \details
    Returns the Y-Vector of the ellipse as an object of the OdGeVector3d class.
  */
  OdGeVector3d getYDirection() const;
  /** \details
    Returns the length of the ellipse as a double value.
  */
  double getRadiusX() const;
  /** \details
    Returns the height of the ellipse as a double value.
  */
  double getRadiusY() const;
  //
  // Main functionality
  //

  /** \detail
    Returns the start angle of the ellipse (in radians).
  */
  double getStartAngle () const;
  /** \detail
    Returns the end angle of the ellipse (in radians).
  */
  double getEndAngle () const;

  /** \details
  Sets the center of the ellipse.

  \param center [in]  The center of the elliptical arc.
  */
  OdResult setCenter(
    const OdGePoint3d& center);

  /** \details
  Sets the minor radius of the ellipse.

  \param minorRadius [in]  The minor radius of the ellipse.
  */
  OdResult setMinorRadius(
    double rad);

  /** \details
  Sets the major radius of the ellipse.

  \param majorRadius [in]  The major radius of the ellipse.
  */
  OdResult setMajorRadius(
    double rad);

  /** \details
  Sets the major and minor axes of the ellipse.

  \param xDirection [in]  The major axis of the ellipse.
  \param yDirection [in]  The minor axis of the ellipse.
  */
  OdResult setAxes(
    const OdGeVector3d& xDirection,
    const OdGeVector3d& yDirection);

  /** \details
  Sets the starting and ending angles of the ellipse.

  \param startAng [in]  Starting angle of the ellipse.
  \param endAng [in]  Ending angle of the ellipse.
  \remarks
  All angles are expressed in radians.
  */
  OdResult setAngles(
    double startAng,
    double endAng);

  /** \details
  Sets the parameters for this ellipse according to the arguments,
  and returns error code.

  \param center [in]  The center of the ellipse.
  \param xDirection [in]  The major axis of the ellipse.
  \param yDirection [in]  The minor axis of the ellipse.
  \param radiusX [in]  The major radius of the ellipse.
  \param radiusY [in]  The minor radius of the ellipse.
  */
  OdResult set(
    const OdGePoint3d& center,
    const OdGeVector3d& xDirection,
    const OdGeVector3d& yDirection,
    double radiusX,
    double radiusY);

  /** \details
  Sets the parameters for this ellipse according to the arguments,
  and returns error code.

  \param center [in]  The center of the ellipse.
  \param xDirection [in]  The major axis of the ellipse.
  \param yDirection [in]  The minor axis of the ellipse.
  \param radiusX [in]  The major radius of the ellipse.
  \param radiusY [in]  The minor radius of the ellipse.
  \param startAng [in]  Starting angle of the ellipse.
  \param endAng [in]  Ending angle of the ellipse.
  \remarks
  All angles are expressed in radians.
  */
  OdResult set(
    const OdGePoint3d& center,
    const OdGeVector3d& xDirection,
    const OdGeVector3d& yDirection,
    double radiusX,
    double radiusY,
    double startAngle,
    double endAngle);

  OdResult set(const OdGeEllipArc3d& pEllArc);
};


#endif // _BM_GELLIPSE_H_

