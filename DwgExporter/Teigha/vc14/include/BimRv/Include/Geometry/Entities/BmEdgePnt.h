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

#ifndef _BM_EDGEPNT_H_
#define _BM_EDGEPNT_H_



//----------------------------------------------------------
//
// OdBmEdgePnt
//
//----------------------------------------------------------

/** \details
    This class represents a point on an edge.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmEdgePnt {
public:
  OdBmEdgePnt();
  OdBmEdgePnt(const OdBmEdgePnt& originalObject);
  OdBmEdgePnt& operator=(const OdBmEdgePnt& originalObject);
  bool operator==(const OdBmEdgePnt& other) const;
  bool operator!=(const OdBmEdgePnt& other) const;
  /** \details
    Returns a 2D point of the edge by a specified index.

      \param idx [in] Input point index.
  */
  OdGePoint2d getUVItem(OdUInt32 idx) const;
  /** \details
    Sets a 2D point to the edge by a specified index.

      \param idx [in] Input point index.
      \param OdGePoint2d [in] Input point.
  */
  OdResult setUVItem(OdUInt32 idx, OdGePoint2d);
private:
  OdGePoint2d m_uV[2];

  //
  // Main functionality
  //

public:
  OdBmEdgePnt(const OdGePoint2d uvItem0, const OdGePoint2d uvItem1);
};

#endif // _BM_EDGEPNT_H_

