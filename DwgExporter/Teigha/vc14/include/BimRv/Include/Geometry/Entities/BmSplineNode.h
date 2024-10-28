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

#ifndef _BM_SPLINENODE_H_
#define _BM_SPLINENODE_H_



//----------------------------------------------------------
//
// OdBmSplineNode
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmSplineNode {
public:
  OdBmSplineNode();
  OdBmSplineNode(const OdBmSplineNode& originalObject);
  OdBmSplineNode& operator=(const OdBmSplineNode& originalObject);
  bool operator==(const OdBmSplineNode& other) const;
  bool operator!=(const OdBmSplineNode& other) const;
  double getParameter() const;
  OdResult setParameter(double);
  OdGePoint3d getPoint() const;
  OdResult setPoint(const OdGePoint3d&);
  OdGeVector3d getTangent() const;
  OdResult setTangent(const OdGeVector3d&);
private:
  double m_parameter;
  OdGePoint3d m_point;
  OdGeVector3d m_tangent;

  //
  // Main functionality
  //

public:
  OdBmSplineNode(const double parameter, const OdGePoint3d point, const OdGeVector3d tangent);
};


#endif // _BM_SPLINENODE_H_

