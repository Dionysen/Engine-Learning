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

#ifndef _BM_GPOLYMESH_H_
#define _BM_GPOLYMESH_H_
#include "Geometry/Entities/BmGNode.h"

class OdBmFacetedTopology;
typedef OdSmartPtr<OdBmFacetedTopology> OdBmFacetedTopologyPtr;
class OdBmObjectId;

class OdBmGPolyMesh;
class OdBmGPolyMeshImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGPolyMesh object.
 */
typedef OdSmartPtr<OdBmGPolyMesh> OdBmGPolyMeshPtr;

/** \details
 A data type that represents an array of OdBmGPolyMesh objects.
 */
typedef OdArray<OdBmGPolyMeshPtr> OdBmGPolyMeshPtrArray;

//----------------------------------------------------------
//
// OdBmGPolyMesh
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a polymesh.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGPolyMesh : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGPolyMesh);
public:
  /** \details
    Returns the interior geometry style ID as an object of the OdBmObjectId class.
  */
  OdBmObjectId getInteriorGStyleID() const;
  /** \details
    Sets an interior geometry style ID to this object.

    \param OdBmObjectId [in] Input interior geometry style ID.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setInteriorGStyleID(const OdBmObjectId&);
  /** \details
    Returns the material ID as an object of the OdBmObjectId class.
  */
  OdBmObjectId getMaterialID() const;
  /** \details
    Sets a material ID to this object.

    \param OdBmObjectId [in] Input material ID.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setMaterialID(const OdBmObjectId&);
  /** \details
    Returns polymesh flags as an OdInt32 value.
  */
  OdInt32 getPolyMeshFlags() const;
  /** \details
    Sets polymesh flags to this object.

    \param OdInt32 [in] Input polymesh flags.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setPolyMeshFlags(OdInt32);
  /** \details
    Returns the object's faceted topology as a pointer to an OdBmFacetedTopology object.
  */
  OdBmFacetedTopologyPtr getFacetedTopology() const;
  /** \details
    Sets faceted topology to this object.

    \param OdBmFacetedTopologyPtr [in] Input faceted topology.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setFacetedTopology(const OdBmFacetedTopologyPtr&);
  bool getAllowSolidFillPatternOverride() const;
  //
  // Main functionality
  //
};
#endif // _BM_GPOLYMESH_H_

