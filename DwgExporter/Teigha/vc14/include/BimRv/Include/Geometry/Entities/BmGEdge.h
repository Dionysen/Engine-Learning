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

#ifndef _BM_GEDGE_H_
#define _BM_GEDGE_H_
#include "Geometry/Entities/BmGEdgeBase.h"
#include "Geometry/Entities/BmEdgePnt.h"

class OdBmFace;

class OdBmGEdge;
class OdBmGEdgeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGEdge object.
 */
typedef OdSmartPtr<OdBmGEdge> OdBmGEdgePtr;

/** \details
 A data type that represents an array of OdBmGEdge objects.
 */
typedef OdArray<OdBmGEdgePtr> OdBmGEdgePtrArray;

//----------------------------------------------------------
//
// OdBmGEdge
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of an edge, which is an intersection line of faces.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGEdge : public OdBmGEdgeBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGEdge);
public:
  /** \details
    Returns an array of faces of this edge as static array of pointers to the objects of the OdBmFace class.

      \param idx [in] Input index of array of faces.
  */
  OdBmFace* getFacesItem(OdUInt32 idx) const;
  /** \details
    Returns array of pointers to the next edges in loops as static array of pointers to the objects of the OdBmGEdgeBase class.

    \param idx [in] Input index of array of pointers to the next edges.
  */
  OdBmGEdgeBase* getNextItem(OdUInt32 idx) const;
  /** \details
    Returns array of pointers to the previous edges in loops as static array of pointers to the objects of the OdBmGEdgeBase class.

    \param idx [in] Input index of array of pointers to the previous edges.
  */
  OdBmGEdgeBase* getPrevItem(OdUInt32 idx) const;
  /** \details
    Returns UV points of the edge, except for the start and end points, as an array of objects of the OdBmEdgePnt class.

    \param OdArray<OdBmEdgePnt> [out] Output array of points.
  */
  void getInteriorEdgePnts(OdArray<OdBmEdgePnt> &) const;
  /** \details
    Returns the edge UV start and end points as static array of pointers to the objects of the OdBmEdgePnt class.

    \param idx [in] Input index of array of points.
  */
  OdBmEdgePnt getFirstAndLastEdgePntsItem(OdUInt32 idx) const;
  /** \details
     Returns flags (number of bits) as an OdUInt8 value.
  */
  OdUInt8 getFlags() const;
  /** \details
    Sets flags (number of bits) to the edge entity.

    \param OdUInt8 [in] Input flag bits.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setFlags(OdUInt8);
  //
  // Main functionality
  //

public:
  /** \details
        Returns 3D points of the edge, except the start and end points.

      \param OdGePoint3dArray [out] Output array of points.
  */
  void getInteriorEdgeGePnts(OdGePoint3dArray &) const;

  /** \details
        Returns the edge's 3D start and end points.

      \param OdGePoint3dArray [out] Output array of points.
  */
  void getFirstAndLastEdgeGePnts(OdGePoint3dArray &) const;

  /** \details
        Returns the edge as a GeCurve object.

      \param pCurve [out] Output GeCurve object.
      \param tol [in] Input value of tolerance.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getGeCurve(OdGeCurve3d* &pCurve, OdGeTol &tol = OdGeContext::gTol) const;

  /** \details
        Returns the best match of the underlying curve of this Edge entity to curves supported by OdGe.
  */
  OdGe::EntityId getCurveType() const;

  /** \details
        Returns 'true' if the edge is flipped or 'false' in the other case.
  */
  bool isFlipped() const;

  /** \details
        Returns 'true' if the first edge point is set or 'false' in the other case.
  */
  bool firstEdgePntIsSet() const;

  /** \details
        Returns 'true' if the last edge point is set or 'false' in the other case.
  */
  bool lastEdgePntIsSet() const;

  /** \details
        Returns 'true' if the edge curve is a 3D arc or 'false' in the other case.
  */
  bool is3DArc() const;

  /** \details
        Returns the number of points.
  */
  OdUInt32 numberPoints() const;

  /** \details
        Returns the index of the specified face.

      \param pFace [in] Input pointer to a face.
  */
  OdInt8 getFaceIndex(OdBmFace& pFace) const;

  /** \details
        Returns 2D start and end points of the specified face.

        \param pFace [in] Input pointer to a face.
        \param pt2dArray [out] Output 2D start and end points.

        \returns Returns the index of a face in the case of successful operation.
  */
  OdInt8 getUVParams(OdBmFace& pFace, OdGePoint2dArray& pt2dArray);

  /** \details
        Returns a pointer to the next edge in a specified loop.

      \param iLoopNumber [in] Input number of loop.
  */
  OdBmGEdgeBase* getNextInLoop(OdUInt8 iLoopNumber) const;
  /** \details
        Returns a pointer to the previous edge in a specified loop.

      \param iLoopNumber [in] Input number of loop.
  */
  OdBmGEdgeBase* getPrevInLoop(OdUInt8 iLoopNumber) const;
};

#endif // _BM_GEDGE_H_

