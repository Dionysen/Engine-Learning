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

#ifndef _BM_SPLINESRFNODE_H_
#define _BM_SPLINESRFNODE_H_



//----------------------------------------------------------
//
// OdBmSplineSrfNode
//
//----------------------------------------------------------

/** \details
    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmSplineSrfNode {
public:
  OdBmSplineSrfNode();
  OdBmSplineSrfNode(const OdBmSplineSrfNode& originalObject);
  OdBmSplineSrfNode& operator=(const OdBmSplineSrfNode& originalObject);
  bool operator==(const OdBmSplineSrfNode& other) const;
  bool operator!=(const OdBmSplineSrfNode& other) const;
  OdGePoint3d getPoint() const;
  OdResult setPoint(const OdGePoint3d&);
  OdGeVector3d getTangentItem(OdUInt32 idx) const;
  OdResult setTangentItem(OdUInt32 idx, OdGeVector3d);
  OdGeVector3d getMixedDer() const;
  OdResult setMixedDer(const OdGeVector3d&);
private:
  OdGePoint3d m_point;
  OdGeVector3d m_tangent[2];
  OdGeVector3d m_mixedDer;

  //
  // Main functionality
  //

public:
  OdBmSplineSrfNode(const OdGePoint3d point, const OdGeVector3d tangentItem0,
      const OdGeVector3d tangentItem1, const OdGeVector3d mixedDer);
};


#endif // _BM_SPLINESRFNODE_H_

