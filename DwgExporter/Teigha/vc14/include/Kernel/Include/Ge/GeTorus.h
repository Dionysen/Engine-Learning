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

#ifndef OD_GETORUS_H
#define OD_GETORUS_H /*!DOM*/

#include "OdPlatform.h"
#include "Ge/GeSurface.h"
#include "Ge/GeCircArc3d.h"

#include "TD_PackPush.h"

/** \details
    This class represents toroidal segments.

    \remarks
    The torus is surface generated by revolving a circular arc
    about an axis of symmetry, where the plane of the circular arc 
    contains the axis of symmetry

    The torus is located in space by its center, which is a point on the axis of symmetry.  

    The center of the circular arc is at a distance of majorRadius from
    the center of the torus. The radius of the circular arc is the
    minorRadius.

    Parameter U parameterizes the circular tube, which
    for a closed circle defaults to the range [-OdaPI, OdaPI). Applying the
    right hand rule along the (axisOfSymmetry X refAxis) defines the
    increasing direction for U.

    Parameter V is the longitude (about the axis of symmetry), which for a closed torus defaults
    to the range [-OdaPI, OdaPI). Zero corresponds to the refAxis (which is
    a vector orthogonal to the axis of symmetry). Applying the right
    hand rule along the symmetric axis defines the increasing direction for V.
    However, if isReverseV() is true, the increasing direction for V is defined by the left hand rule.

    The torus is periodic in U, V with a period of Oda2PI.
    [umin, umax] x [vmin, vmax] defines a four sided toroidal patch bounded
    by four circular arcs. Following constraints apply to the definition
    of a toroidal patch.

    * umin < umax and |umin - umax| <= Oda2PI.
    * vmin < vmax and |vmin - vmax| <= Oda2PI

    Corresponding C++ library: TD_Ge

   <group OdGe_Classes>

   <link ge_OdGeTorus, Working with Toruses>
*/
class GE_TOOLKIT_EXPORT OdGeTorus : public OdGeSurface
{
public:

  /** \details 
    Default constructor for the OdGeTorus class.
    
    \remarks
    Constructs a torus with next properties:
    minorRadius = 0.5,
                              startAng   endAng
    Angles for U parameter    -OdaPI      OdaPI
    Angles for V parameter    -OdaPI      OdaPI
  */
  OdGeTorus();
  
  /** \details 
    Constructor for the OdGeTorus class.
    
    \param majorRadius [in] The major *radius* of this *torus*.
    The major radius is a distance from origin to the center of circular arc.
    \param minorRadius [in] The minor *radius* of this *torus*.
    The minor radius defines a radius of circular arc.
    \param center [in] The origin of the this *torus*.
    \param axisOfSymmetry [in] Axis of symmetry (rotation).
  */
  OdGeTorus(
    double majorRadius, 
    double minorRadius,
    const OdGePoint3d& center, 
    const OdGeVector3d& axisOfSymmetry);
  
  /** \details 
    Constructor for the OdGeTorus class.
    
    \param majorRadius [in] The major *radius* of this *torus*. The major radius is a distance from origin to the center of circular arc.
    \param minorRadius [in] The minor *radius* of this *torus*. The minor radius defines a radius of circular arc.
    \param center [in] The origin of the this *torus*.
    \param axisOfSymmetry [in] Axis of symmetry (rotation).
    \param refAxis [in] Vector that indicates the direction of the zero rotation angle of a circular arc of this torus.
    \param startAngleU [in] Start angle about the axis of symmetry. Defines the lower bound of the U parameter interval.
    \param endAngleU [in] End angle about the axis of symmetry. Defines the upper bound of the U parameter interval.
    \param startAngleV [in] Start angle about the tube. Defines the lower bound of the V parameter interval.
    \param endAngleV [in] End angle about the tube. Defines the upper bound of the V parameter interval.

    \remarks
    All angles are expressed in radians.
  */
  OdGeTorus(
    double majorRadius, 
    double minorRadius,
    const OdGePoint3d& center, 
    const OdGeVector3d& axisOfSymmetry,
    const OdGeVector3d& refAxis,
    double startAngleU, 
    double endAngleU,
    double startAngleV, 
    double endAngleV);
  
  /** \details 
    Copy constructor for the OdGeTorus class.
    
    \param source [in]  A torus to be copied.
  */
  OdGeTorus(
    const OdGeTorus& source);

  // Geometric properties.
  //

  /** \details
    Returns the major radius of this torus.

    \returns
    The major radius of this torus as a double value.
  */
   double majorRadius() const;

  /** \details
    Returns the minor radius of this torus.

    \remarks
    Returns negative value when isNormalReversed() is true.

    \returns
    The minor radius of this torus as a double value.
  */
   double minorRadius() const;

  /** \details
    Retrieves the start and end angles about the axis of symmetry.

    \param startAngleU [out]  Receives the angle about the axis of symmetry.
    \param endAngleU [out]  Receives the end angle about the axis of symmetry.
  */
   void getAnglesInU(
    double& startAngleU, 
    double& endAngleU) const;

  /** \details
    Retrieves the start and end angles about the tube.

    \param startAngleV [out]  Receives the start angle about the tube.
    \param endAngleV [out]  Receives the end angle about the tube.
  */
   void getAnglesInV(
    double& startAngleV, 
    double& endAngleV) const;

  /** \details
    Returns the center of this torus.

    \returns
    The center of this torus as an OdGePoint3d instance.
  */
   OdGePoint3d center() const;

  /** \details
    Returns the axis of symmetry (rotation) of this torus.

    \returns
    The axis of symmetry of this torus as an OdGeVector3d instance.
  */
   OdGeVector3d axisOfSymmetry() const;

  /** \details
    Returns the reference axis of this torus.

    \returns
    The reference axis of this torus as an OdGeVector3d instance.
  */
   OdGeVector3d refAxis() const;

  /** \details
    Checks if the normal to this surface
    is pointing outward.

    \returns
    true if and only if the normal to this surface
    is pointing outward.
  */
   bool isOuterNormal() const;

  /** \details
    Sets the major radius of this torus.

    \param majorRadius [in]  The major radius of this torus.

    \remarks
    Angles along U will be reset to the maximum allowable for the established minorRadius and majorRadius.

    \returns
    The reference to this OdGeTorus object.
  */
   OdGeTorus& setMajorRadius(
    double radius);

  /** \details
    Sets the minor radius of this torus.

    \param minorRadius [in]  The minor radius of this torus.

    \remarks
    Angles along U will be reset to the maximum allowable for the established minorRadius and majorRadius.

    \returns
    The reference to this OdGeTorus object.
  */
   OdGeTorus& setMinorRadius(
    double radius);

  /** \details
    Sets the start and end angles about about the axis of symmetry.

    \param startAngleU [in]  Start angle about the axis of symmetry.
    \param endAngleU [in]  End angle about the axis of symmetry.

    \remarks
    For Vortex, Apple, Lemon, the angles will be set as the result of 
    the intersection of the natural interval with the one passed to the method.

    \returns
    The reference to this OdGeTorus object.
  */
   OdGeTorus& setAnglesInU(
    double startAngleU, 
    double endAngleU);

  /** \details
    Sets the start and end angles about about the tube.

    \param startAngleV [in]  Start angle about the tube.
    \param endAngleV [in]  End angle about the tube.

    \returns
    The reference to this OdGeTorus object.
  */
   OdGeTorus& setAnglesInV(
    double startAngleV, 
    double endAngleV);

  /** \details
    Sets the parameters for this torus according to the arguments. 

    \param majorRadius [in]  The major radius of this torus.
    \param minorRadius [in]  The minor radius of this torus.
    \param center [in]  The origin of the this torus.
    \param axisOfSymmetry [in]  Axis of symmetry (rotation).

    \returns
    The reference to this OdGeTorus object.
  */
   OdGeTorus& set(
    double majorRadius, 
    double minorRadius,
    const OdGePoint3d& center,
    const OdGeVector3d& axisOfSymmetry);

  /** \details
    Sets the parameters for this torus according to the arguments. 

    \param majorRadius [in]  The major radius of this torus.
    \param minorRadius [in]  The minor radius of this torus.
    \param center [in]  The origin of the this torus.
    \param axisOfSymmetry [in]  Axis of symmetry (rotation).
    \param refAxis [in]  defines thegle 0 about the axis of symmetry.
    \param startAngleU [in]  Start angle about the axis of symmetry.
    \param endAngleU [in]  End angle about the axis of symmetry.
    \param startAngleV [in]  Start angle about the tube.
    \param endAngleV [in]  End angle about the tube.

    \returns
    The reference to this OdGeTorus object.
  */
    OdGeTorus& set(
    double majorRadius, 
    double minorRadius,
    const OdGePoint3d&  center,
    const OdGeVector3d& axisOfSymmetry,
    const OdGeVector3d& refAxis,
    double startAngleU, 
    double endAngleU,
    double startAngleV, 
    double endAngleV);

  /** \details
    Assignment operator for the OdGeTorus object.
    
    \param torus [in] A torus to be assigned.

    \returns
    The reference to this OdGeTorus object.
  */
  OdGeTorus& operator =(
    const OdGeTorus& torus);

  /** \details
    Checks if the torus intersects with the specified
    line entity, and returns the number of intersections and the
    points of intersection.

    \param lineEnt [in]  Any 3D line entity.
    \param numInt [out]  Receives the number of intersections.
    \param p1 [out]  Receives the first intersection point.
    \param p2 [out]  Receives the second intersection point.
    \param p3 [out]  Receives the third intersection point.
    \param p4 [out]  Receives the fourth intersection point.
    \param tol [in]  Geometric tolerance.

    \remarks
    * p1 is valid if and only if numInt > 0.
    * p2 is valid if and only if numInt > 1.
    * p3 is valid if and only if numInt > 2.
    * p4 is valid if and only if numInt > 3.

    \returns
    true if and only if the torus intersects with the specified
    line entity.
  */
   bool intersectWith(
    const OdGeLinearEnt3d& linEnt, 
    int& numInt,
    OdGePoint3d& p1, 
    OdGePoint3d& p2,
    OdGePoint3d& p3, 
    OdGePoint3d& p4,
    const OdGeTol& tol = OdGeContext::gTol) const;

  // Shape Classification Functions

  /** \details
    Checks if (majorRadius <= 0), producing
    a solid with points along the axis of symmetry.

    \remarks
    Exactly one of the following functions will be true for a given torus:

    * isApple() 
    * isDoughnut() 
    * isLemon() 
    * isVortex()

    \returns
    true if and only if (majorRadius <= 0).
  */
   bool isLemon() const;

  /** \details
    Checks if (0 < majorRadius < |minorRadius| - OdGeContext::gTol.equalVector()), 
    creating a solid with dimples at the axis of symmetry.

    \remarks
    Exactly one of the following functions will be true for a given torus:
    * isApple() 
    * isDoughnut() 
    * isLemon() 
    * isVortex()

    \returns
    true if and only if (0 < majorRadius <= |minorRadius| - OdGeContext::gTol.equalVector()).
  */
   bool isApple() const;

  /** \details
    Checks if (|majorRadius - |minorRadius|| < OdGeContext::gTol.equalVector()), producing a doughnut.
    with a zero-radius hole.

    \remarks
    Exactly one of the following functions will be true for a given torus:
    * isApple() 
    * isDoughnut() 
    * isLemon() 
    * isVortex()

    \returns
    true if and only if (|majorRadius - |minorRadius|| < OdGeContext::gTol.equalVector()).
  */
   bool isVortex() const;

  /** \details
    Checks if (majorRadius >= |minorRadius| - OdGeContext::gTol.equalVector()), creating a solid with a hole in the middle.

    \remarks
    Exactly one of the following functions will be true for a given torus:
    * isApple() 
    * isDoughnut() 
    * isLemon() 
    * isVortex()

    \returns
    true if and only if (majorRadius >= |minorRadius| + OdGeContext::gTol.equalVector()).
  */
   bool isDoughnut() const;

  /** \details
    Checks if torus is not Doughnut.

    \returns  true if and only if (majorRadius < |minorRadius| + OdGeContext::gTol.equalVector()).
  */
   bool isDegenerate() const;

  /** \details
    Checks if the minor radius of the torus is less than zero.

    \returns
    Returns true if and only if (|minorRadius| < 0).
  */
   bool isHollow() const;

  /** \details
    Checks whether V parameter increases in clockwise direction around axisOfSymmetry.

    \returns
    true if V parameter increases in clockwise direction around axisOfSymmetry, false otherwise.
  */
   bool isReverseV() const;

  /** \details
    Specifies whether the V parameter should be measured
    clockwise around axisOfSymmetry, rather than counterclockwise.

    \param isReverseV [in]  Sets ReverseV.
  */
   void setReverseV(
     bool isReverseV);

  //////////////////////////////////////////////////////////////////////////

};

#include "TD_PackPop.h"

#endif // OD_GETORUS_H

