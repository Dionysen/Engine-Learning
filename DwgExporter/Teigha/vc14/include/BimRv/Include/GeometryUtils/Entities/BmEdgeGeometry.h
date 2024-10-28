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

#ifndef _BM_EDGEGEOMETRY_H_
#define _BM_EDGEGEOMETRY_H_
#include "GeometryUtils/Entities/BmNodeGeometry.h"
#include "Geometry/Entities/BmEdgePnt.h"



class OdBmEdgeGeometry;
class OdBmEdgeGeometryImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEdgeGeometry object.
 */
typedef OdSmartPtr<OdBmEdgeGeometry> OdBmEdgeGeometryPtr;

/** \details
 A data type that represents an array of OdBmEdgeGeometry objects.
 */
typedef OdArray<OdBmEdgeGeometryPtr> OdBmEdgeGeometryPtrArray;

//----------------------------------------------------------
//
// OdBmEdgeGeometry
//
//----------------------------------------------------------

/** \details
    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmEdgeGeometry : public OdBmNodeGeometry {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEdgeGeometry);
public:
  void getInteriorEdgePnts(OdArray<OdBmEdgePnt> &) const;
  void getFirstAndLastEdgePnts(OdArray<OdBmEdgePnt> &) const;
  OdUInt8 getFlags() const;
  //
  // Main functionality
  //


};


#endif // _BM_EDGEGEOMETRY_H_

