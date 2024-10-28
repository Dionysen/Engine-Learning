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

#ifndef _BM_FLOATNORMALSFACETEDTOPOLOGY_H_
#define _BM_FLOATNORMALSFACETEDTOPOLOGY_H_
#include "Geometry/Entities/BmFacetedTopologyImplmnt.h"



class OdBmFloatNormalsFacetedTopology;
class OdBmFloatNormalsFacetedTopologyImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFloatNormalsFacetedTopology object.
 */
typedef OdSmartPtr<OdBmFloatNormalsFacetedTopology> OdBmFloatNormalsFacetedTopologyPtr;

/** \details
 A data type that represents an array of OdBmFloatNormalsFacetedTopology objects.
 */
typedef OdArray<OdBmFloatNormalsFacetedTopologyPtr> OdBmFloatNormalsFacetedTopologyPtrArray;

//----------------------------------------------------------
//
// OdBmFloatNormalsFacetedTopology
//
//----------------------------------------------------------

/** \details
    This class represents faceted topology of float normals.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFloatNormalsFacetedTopology : public OdBmFacetedTopologyImplmnt {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFloatNormalsFacetedTopology);
public:
  /** \details
    Returns the flag of normals.
  */
  OdInt32 getNormalsFlag() const;
  /** \details
    Returns the common normal as a 3D vector.
  */
  OdGeVector3d getCommonNormal() const;
  /** \details
    Returns the array of normals.

    \param OdGeVector3dArray [out] Output array of normals.
  */
  void getNormalsArr(OdGeVector3dArray &) const;
  //
  // Main functionality
  //


};

#endif // _BM_FLOATNORMALSFACETEDTOPOLOGY_H_

