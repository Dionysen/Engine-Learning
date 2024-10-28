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

#ifndef _BM_FACETEDTOPOLOGY8_H_
#define _BM_FACETEDTOPOLOGY8_H_
#include "Geometry/Entities/BmFacetedTopology0.h"



class OdBmFacetedTopology8;
class OdBmFacetedTopology8Impl;

 /** \details
 A data type that represents a smart pointer to an OdBmFacetedTopology8 object.
 */
typedef OdSmartPtr<OdBmFacetedTopology8> OdBmFacetedTopology8Ptr;

/** \details
 A data type that represents an array of OdBmFacetedTopology8 objects.
 */
typedef OdArray<OdBmFacetedTopology8Ptr> OdBmFacetedTopology8PtrArray;

//----------------------------------------------------------
//
// OdBmFacetedTopology8
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFacetedTopology8 : public OdBmFacetedTopology0 {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFacetedTopology8);
public:
  void getEdgeVisFlags(OdUInt8Array &) const;
  //
  // Main functionality
  //

  OdResult setTopology(
    const OdInt32 aNormalsFlag,
    const OdGeVector3d& aCommonNormal,
    const OdGeVector3dArray& aNormalsArr,
    const OdGePoint3dArray& aPointsArr,
    const OdArray<OdUInt16Array>& aFacets,
    const OdUInt8Array& aEdgeVis);
};


#endif // _BM_FACETEDTOPOLOGY8_H_

