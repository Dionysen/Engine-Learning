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

#ifndef _BM_GEOMETRY_H_
#define _BM_GEOMETRY_H_
#include "Geometry/Entities/BmGBrep.h"
// BEGIN: Includes
#include "Ge/GeTrMeshSimplification.h"
// END: Includes

class OdBmTessEpsCntrl;
typedef OdSmartPtr<OdBmTessEpsCntrl> OdBmTessEpsCntrlPtr;
class OdBmGEdge;
typedef OdSmartPtr<OdBmGEdge> OdBmGEdgePtr;
class OdBmSharedSurfInfo;
typedef OdSmartPtr<OdBmSharedSurfInfo> OdBmSharedSurfInfoPtr;

class OdBmGeometry;
class OdBmGeometryImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeometry object.
 */
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;

/** \details
 A data type that represents an array of OdBmGeometry objects.
 */
typedef OdArray<OdBmGeometryPtr> OdBmGeometryPtrArray;

class OdBrBrep;

//----------------------------------------------------------
//
// OdBmGeometry
//
//----------------------------------------------------------

/** \details
    This class stores geometry of B-Rep objects.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGeometry : public OdBmGBrep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeometry);
public:
  /** \details
    Returns the flags of the object as an OdInt32 value.
  */
  OdInt32 getFlags() const;
  /** \details
    Sets or unsets flags of the object.

    \param OdInt32 [in] Input flags.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setFlags(OdInt32);
  /** \details
    Returns the Geometry Tag of the object as an OdInt32 value.
  */
  OdInt32 getGeometryTag() const;
  /** \details
    Sets or unsets the Geometry Tag of the object.

    \param OdInt32 [in] Input Geometry Tag.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setGeometryTag(OdInt32);
  /** \details
    Returns the tesselation epsilon controller as a pointer to an OdBmTessEpsCntrl object.
  */
  OdBmTessEpsCntrlPtr getTessEpsCntrl() const;
  /** \details
    Sets a tesselation epsilon controller of the object.

    \param OdBmTessEpsCntrlPtr [in] Input tesselation epsilon controller.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setTessEpsCntrl(const OdBmTessEpsCntrlPtr&);
  /** \details
    Returns the array of edges of this object.

    \param OdArray<OdBmGEdgePtr> [out] Output array of edges.
  */
  void getEdges(OdArray<OdBmGEdgePtr> &) const;
  /** \details
    Sets the array of edges of this object.

    \param OdArray<OdBmGEdgePtr> [in] Input array of edges.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setEdges(const OdArray<OdBmGEdgePtr>&);
  /** \details
    Returns shared surface information.

    \param OdArray<OdBmSharedSurfInfoPtr> [out] Output shared surface information.
  */
  void getSharedSurfInfo(OdArray<OdBmSharedSurfInfoPtr> &) const;
  /** \details
    Sets shared surface information.

    \param OdArray<OdBmSharedSurfInfoPtr> [in] Input shared surface information.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setSharedSurfInfo(const OdArray<OdBmSharedSurfInfoPtr>&);
  //
  // Main functionality
  //

public:

  /** \details
        Returns an edge that goes next after pEdge in the edges array of the current B-Rep.
        \param pEdge [in] Input current edge.
        \returns Returns first edge in the array if pEdge is null or the last in the edges array.
  */
  OdBmGEdgePtr getNextEdge(OdBmGEdgePtr pEdge) const;

  /** \details
    Returns the B-Rep representation of the Geometry through its argument.

	\param brep [out] Output B-Rep representation object.
  */
  void brep(OdBrBrep& brep);
  
   /** \details
    Returns a mesh for a face.

    \param mesh [out] Output mesh of a Face.
    \param pFace [in] Pointer to the OdBmFace.
    \param dLevelOfDetail [in] Mesh detail level. It has values from 0 to 1.

    \returns eOk if the operation completed successfuly, or an appropriate error code otherwise.
  */
  OdResult getFaceMesh(GeMesh::OdGeTrMesh& mesh, const OdBmFacePtr& pFace, const double dLevelOfDetail = 0.5) const;

  /** \details
    Returns area of face.

    \param pFace [in] Input face.
    \param dArea [out] Output the area value.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult computeAreaOfFace(const OdBmFacePtr& pFace, double& dArea) const;

  /** \details
    Returns volume of Geometry.

    \param dVolume [out] Output the volume value.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult computeVolume(double& dVolume) const;
};


#endif // _BM_GEOMETRY_H_

