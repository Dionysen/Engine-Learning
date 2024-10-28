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

#ifndef _BM_GARC_H_
#define _BM_GARC_H_
#include "Geometry/Entities/BmGCurve.h"
// BEGIN: Includes
#include "Ge/GeCircArc3d.h"
// END: Includes



class OdBmGArc;
class OdBmGArcImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGArc object.
 */
typedef OdSmartPtr<OdBmGArc> OdBmGArcPtr;

/** \details
 A data type that represents an array of OdBmGArc objects.
 */
typedef OdArray<OdBmGArcPtr> OdBmGArcPtrArray;

//----------------------------------------------------------
//
// OdBmGArc
//
//----------------------------------------------------------

/** \details
    This class represents a circular arc.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGArc : public OdBmGCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGArc);
public:
  /** \details
    Returns the X direction of the arc as a 3D vector.
  */
  OdGeVector3d getXDirection() const;
  /** \details
    Returns the Y direction of the arc as a 3D vector.
  */
  OdGeVector3d getYDirection() const;
  /** \details
    Returns the radius of the arc.
  */
  double getRadius() const;
  /** \details
    Returns the center of the arc as a 3D point.
  */
  OdGePoint3d getCenter() const;
  /** \details
    Returns the 'is filled' flag.

    \returns Returns 'true' if the arc is filled or 'false' in the other case.
  */
  bool getIsFilled() const;
  //
  // Main functionality
  //

  /** \details
    Returns the starting angle measured from the reference vector in the arc direction.
    
    \remarks
    All angles are expressed in radians.
  */
   double getStartAng() const;
  /** \details
    Returns the ending angle measured from the reference vector in the arc direction.
    
    \remarks
    All angles are expressed in radians.
  */
   double getEndAng() const;
  /** \details
    Returns the start point of this arc.
  */
   OdGePoint3d getStartPoint() const;

   TD_USING(OdBmGCurve::getEndPoint);
  /** \details
    Returns the end point of this arc.
  */
   OdGePoint3d getEndPoint() const;
  /** \details
    Sets the normal and reference vectors for this arc.
    
    \param normal [in]  A vector normal to the plane of the arc.
    \param refVec [in]  The reference vector defining arc angle 0.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
   OdResult setAxes(const OdGeVector3d& normal, const OdGeVector3d& refVec);
  /** \details
    Sets the starting and ending angles of this arc.
    
    \param startAng [in]  Starting angle of arc.
    \param endAng [in]  Ending angle of arc.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    
    \remarks
    All angles are expressed in radians.
  */
   OdResult setAngles(double startAng, double endAng);
  /** \details
    Sets the parameters for this arc according to the arguments.
    
    \param center [in]  Center of arc.
    \param normal [in]  A vector normal to the plane of the arc
    \param radius [in]  Radius of arc.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
   OdResult set(
    const OdGePoint3d& center,
    const OdGeVector3d& normal,
    double radius);
  /** \details
    Sets the parameters for this arc according to the arguments.
    
    \param center [in]  Center of arc.
    \param xDirection [in] Vector of the X-axis direction.
    \param yDirection [in] Vector of the Y-axis direction.
    \param radius [in]  Radius of arc.
    \param startAng [in]  Starting angle of arc.
    \param endAng [in]  Ending angle of arc.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    
    \remarks
    To construct a circle, set endAng = startAng + Oda2PI
    \remarks
    All angles are expressed in radians.
    startAng must be less than endAng.
  */
   OdResult set(
    const OdGePoint3d& center,
    const OdGeVector3d& xDirection,
    const OdGeVector3d& yDirection,
    double radius,
    double startAng,
    double endAng);
  /** \details
    Sets the parameters for this arc according to the arguments.
    
    \param startPoint [in]  Startpoint of arc.
    \param secondPoint [in]  Second point on a 3-point arc.
    \param endPoint [in]  Endpoint of arc.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
   OdResult set(
    const OdGePoint3d& startPoint,
    const OdGePoint3d& secondPoint,
    const OdGePoint3d& endPoint);
  
  /** \details
    Fills properties of GArc with OdGeCircArc3d's values.
    
    \param pEllArc [in] OdGeCircArc3d object.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(const OdGeCircArc3d& pEllArc);

  OdGeVector3d getNormal() const;
};

#endif // _BM_GARC_H_

