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

#ifndef OD_GECYLNDR_H
#define OD_GECYLNDR_H /*!DOM*/

#include "OdPlatformSettings.h"
#include "Ge/GeSurface.h"
#include "Ge/GeInterval.h"

class OdGeCircArc3d;

#include "TD_PackPush.h"

/** \details
    This class represents right circular cylinders.

    \remarks
    A right circular cylinder is defined by its

    *  radius
    *  axis of symmetry
    *  origin (a point on the axis)
    *  U parameter scale.

    It is generated by revolving a line parallel to the axis of symmetry,
    at a the radius distance.

    The height interval of this cylinder is specified relative to its origin.
    Height is increasing in the direction of the symmetric axis.
    Height interval can be unbounded.

    The cylinder is parameterized as follows:

    Parameter V is the angle of revolution measured from the refAxis
    (an axis perpendicular to the axis of symmetry). For a closed cylinder,
    it defaults to [-OdaPI, OdaPI). The right hand rule applied along the
    direction of the axis of symmetry defines the positive direction
    of V. The surface is periodic in V with a period of Oda2PI.

    Parameter U varies along the generating line.
    U is dimensionless, measured in U parameter scale (which equals to the radius by default).
    U increases in the direction of the axis of symmetry.
    However, if U parameter scale is negative, U decreases in the direction of the axis of symmetry.
    U = 0 corresponds to the base of this cylinder.
    
    [umin, umax] x [vmin, vmax] defines a four sided cylindrical
    patch bounded by two straight lines (at vmin and vmax), and
    two circular arcs (at umin and umax). The following constraints
    apply to the definition of a cylindrical patch:

    * umin < umax
    * |vmax - vmin| <= Oda2PI.
    * radius > 0.0

    Corresponding C++ library: TD_Ge

    <group OdGe_Classes> 

    \sa
    <link ge_OdGeCylinder, Working with Cylinders>
*/
class GE_TOOLKIT_EXPORT OdGeCylinder : public OdGeSurface
{
public:

  /** \details
    Default constructor for the OdGeCylinder class. Constructs a closed cylinder with angles [-OdaPI, OdaPI],
    a base origin of (0.0, 0.0, 0.0), a base radius of 2.0, an axis of symmetry of (0.0, 1.0, 0.0) and a reference axis of (1.0, 0.0, 0.0).
  */
  OdGeCylinder();

  /** \details
    Constructor for the OdGeCylinder class.
    
    \param radius [in]  Radius of this cylinder.
    \param origin [in]  A point on the axis of symmetry.
    \param axisOfSymmetry [in]  Axis of symmetry (rotation).
  */
  OdGeCylinder(
    double radius, 
    const OdGePoint3d& origin,
    const OdGeVector3d& axisOfSymmetry);

  /** \details
    Constructor for the OdGeCylinder class.

    \param radius [in]  Radius of this cylinder.
    \param origin [in]  A point on the axis of symmetry.
    \param axisOfSymmetry [in]  Axis of symmetry (rotation).
    \param refAxis [in]  defines thegle 0 of circular end.
    \param height [in]  Height interval of this cylinder.
    \param startAng [in]  Start angle.
    \param endAng [in]  End angle.

    \remarks
    All angles are expressed in radians.
  */
  OdGeCylinder(
    double radius, 
    const OdGePoint3d& origin,
    const OdGeVector3d& axisOfSymmetry,
    const OdGeVector3d& refAxis,
    const OdGeInterval& height,
    double startAng, 
    double endAng);

  /** \details
    Copy constructor for the OdGeCylinder class.

    \param cylinder [in]  Cylinder to be copied.
  */
  OdGeCylinder(const OdGeCylinder& cylinder);

  /** \details
    Returns the radius of this cylinder.

    \returns
    The radius of this cylinder as a double value.
  */
  double radius() const;

  /** \details
    Returns the origin of this cylinder.

    \returns
    The origin of this cylinder as an OdGePoint3d instance.
  */
  OdGePoint3d origin() const;

  /** \details
    Retrieves the starting and ending angles of this cylinder.

    \param startAng [out]  Receives the start angle.
    \param endAng [out]  Receives the end angle.

    \remarks
    All angles are expressed in radians.
  */
  void getAngles(
    double& startAng, 
    double& endAng) const;

  /** \details
    Retrieves the interval of the axis of symmetry.

    \param height [out]  Receives the interval of the axis of symmetry.
  */
  void getHeight(
    OdGeInterval& height) const;

  /** \details
    Returns the height of this cylinder corresponding to
    the specified position on the U-axis.

    \remarks
    Parameter U varies along the axis of symmetry.  U is dimensionless,
    and increases in the direction of the axis of symmetry. 

    \param u [in]  Position on the U-axis of this cylinder.

    \returns
    The height as a double value.
  */
  double heightAt(
    double u) const;

  /** \details
    Returns the axis of symmetry of this cylinder.

    \returns
    The axis of symmetry of this cylinder as an OdGeVector3d instance.
  */
  OdGeVector3d axisOfSymmetry() const;

  /** \details
    Returns the reference axis of this cylinder.

    \returns
    The reference axis of this cylinder as an OdGeVector3d instance.
  */
  OdGeVector3d refAxis() const;

  /** \details
    Checks if the normal to this surface
    is pointing outward.

    \remarks
    This method considers the isNormalReversed() flag.

    \returns
    true if and only if the normal to this surface
    is pointing outward.
  */
  bool isOuterNormal() const;

  /** \details
    Checks if the base of this cylinder
    is a full circle within the specified tolerance.

    \param tol [in]  Geometric tolerance.

    \returns
    true if and only if the base of this cylinder
    is a full circle within the specified tolerance.
  */
  bool isClosed(
    const OdGeTol& tol = OdGeContext::gTol) const;

  /** \details
    Sets the radius of this cylinder.

    \param radius [in]  Radius of this cylinder.

    \returns
    A reference to this OdGeCylinder object.
  */
  OdGeCylinder& setRadius(
    double radius);

  /** \details
    Sets the starting and ending angles of this cylinder.

    \param startAng [in]  Start angle.
    \param endAng [in]  End angle.
    
    \remarks
    All angles are expressed in radians.

    \returns
    A reference to this OdGeCylinder object.
  */
  OdGeCylinder& setAngles(
    double startAng, 
    double endAng);

  /** \details
    Sets the height interval of this cylinder.

    \param height [in]  Height interval of this cylinder.

    \returns
    A reference to this OdGeCylinder object.
  */
  OdGeCylinder& setHeight(
    const OdGeInterval& height);

  /** \details
    Sets the parameters for this cylinder according to the arguments, 
    and returns a reference to this cylinder.

    \param radius [in]  Radius of this cylinder. 
    \param axisOfSym [in]  Axis of symmetry (rotation).

    \returns
    A reference to this OdGeCylinder object.
  */
  OdGeCylinder& set(
    double radius, 
    const OdGePoint3d& origin, 
    const OdGeVector3d& axisOfSym);
  
  /** \details
    Sets the parameters for this cylinder according to the arguments, 
    and returns a reference to this cylinder.

    \param radius [in]  Radius of this cylinder. 
    \param axisOfSymmetry [in]  Axis of symmetry (rotation).
    \param refAxis [in]  defines thegle 0 of circular end.
    \param height [in]  Height interval of this cylinder.
    \param startAng [in]  Start angle.
    \param endAng [in]  End angle.

    \remarks
    All angles are expressed in radians.

    \returns
    A reference to this OdGeCylinder object.
  */
  OdGeCylinder& set(
    double radius, 
    const OdGePoint3d& origin,
    const OdGeVector3d& axisOfSymmetry,
    const OdGeVector3d& refAxis,
    const OdGeInterval& height,
    double startAng, 
    double endAng);

  /** \details
    Checks if this cylinder intersects with a line entity,
    and retrieves the number of intersections and the
    points of intersection.

    \param lineEnt [in]  Any 3D line entity.
    \param numInt [out]  Receives the number of intersections.
    \param p1 [out]  Receives the first intersection point.
    \param p2 [out]  Receives the second intersection point.
    \param tol [in]  Geometric tolerance.

    \remarks
    p1 is valid if and only if numInt >= 1.
    p2 is valid if and only if numInt = 2.

    \returns
    true if and only if this cylinder intersects with
    a line entity.
  */
  bool intersectWith(
    const OdGeLinearEnt3d& linEnt, 
    int& numInt,
    OdGePoint3d& p1, 
    OdGePoint3d& p2,
    const OdGeTol& tol = OdGeContext::gTol) const;

  /** \details
    Assignment operator for the OdGeCylinder object.

    \param cylinder [in]  Cylinder to be assigned.

    \returns
    A reference to this OdGeCylinder object.
  */
  OdGeCylinder& operator =(const OdGeCylinder& cylinder);

  //////////////////////////////////////////////////////////////////////////
  // TD Special :

  /** \details
    Sets if the cylinder normal is pointing outward.

    \remarks
    This method ignores the isNormalReversed() flag.

    \param isOuterNormal [in]  Flag indicating if the cylinder normal is to be set to point outward.
  */
  void setIsOuterNormal(
    bool isOuterNormal);

  /** \details
    Retrieves U parameter scale.

    \returns
    U parameter scale of this cylinder as a double value.
  */
  double getUParamScale() const;

  /** \details
    Sets U parameter scale according to the parameter.

    \param isReverseU [in]  U parameter scale.

    \remarks
    U parameter scale can be negative.
    If uScale is zero, U parameter scale is reset to the radius of this cylinder.
  */
  void setUParamScale(
    double uScale = 0.0);
};

#include "TD_PackPop.h"

#endif // OD_GECYLNDR_H
