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

#ifndef _BM_BLENDELEM_H_
#define _BM_BLENDELEM_H_
#include "Database/Entities/BmGenSweep.h"
// BEGIN: Includes
#include "GeometryUtils/Entities/BmCurveLoop.h"
#include "Database/Entities/BmVarSketch.h"
// END: Includes

class OdBmVtxConnections;
typedef OdSmartPtr<OdBmVtxConnections> OdBmVtxConnectionsPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmBlendElem;
class OdBmBlendElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBlendElem object.
 */
typedef OdSmartPtr<OdBmBlendElem> OdBmBlendElemPtr;

/** \details
 A data type that represents an array of OdBmBlendElem objects.
 */
typedef OdArray<OdBmBlendElemPtr> OdBmBlendElemPtrArray;

//----------------------------------------------------------
//
// OdBmBlendElem
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmBlendElem : public OdBmGenSweep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBlendElem);
public:
  OdBmObjectId getSketchIdsItem(OdUInt32 idx) const;
  bool getExtrusionDepthAuto() const;
  bool getImplemetsGetUnderlyingRefPlane() const;
  OdBmVtxConnectionsPtr getVtxConnections() const;
  //
  // Main functionality
  //

  /** \details
    Returns offset of the bottom of the blend relative to the sketch plane.

    \param dOffset [out] Offset of the bottom of the sketch plane.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getBottomOffset(double& dOffset) const;

  /** \details
    Returns offset of the top of the blend relative to the sketch plane.

    \param dOffset [out] Offset of the top of the sketch plane.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getTopOffset(double& dOffset) const;

  /** \details
    Returns curves of bottom profile of the sketch.

    \param bottomProfile [out] Curves of bottom profile of the sketch.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getBottomProfile(OdBmCurveLoopPtr& bottomProfile) const;

  /** \details
    Returns curves of top profile of the sketch.

    \param topProfile [out] Curves of top profile of the sketch.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getTopProfile(OdBmCurveLoopPtr& topProfile) const;

  /** \details
    ObjectId of a bottom sketch

    \returns Returns ObjectId of a bottom sketch.
  */
  OdBmObjectId getBottomSketchId() const;

  /** \details
    ObjectId of a top sketch

    \returns Returns ObjectId of a top sketch.
  */
  OdBmObjectId getTopSketchId() const;

  /** \details
    Creates a new blend element from corresponding base and top curveLoops
      \param baseCurveLoop [in] Input bottom blend section that must be closed. All curves must lie on the same plane
      \param topCurveLoop [in] Input top blend section that must be closed. All curves must lie on the same plane
      \param sketchPlaneId [in] Input sketch plane ID for the base curveLoop.

    \returns If creation was successful returns eOk. In other cases returns appropriate error code.
  */
  OdResult createBlend(const OdBmCurveLoopPtr &baseCurveLoop, const OdBmCurveLoopPtr &topCurveLoop, OdBmObjectId sketchPlaneId);

  /** \details
   Creates a new blend element from corresponding base and top curveLoops
     \param baseCurveLoop [in] Input bottom blend section that must be closed. All curves must lie on the same plane
     \param topCurveLoop [in] Input top blend section that must be closed. All curves must lie on the same plane
     \param sketchPlaneId [in] Input sketch plane ID for the base curveLoop.
     \param pConnections [in] Input array of vertex connections between curveLoops.

   \returns If creation was successful returns eOk. In other cases returns appropriate error code.
 */
  OdResult createBlend(const OdBmCurveLoopPtr &baseCurveLoop, const OdBmCurveLoopPtr &topCurveLoop, OdBmObjectId sketchPlaneId, const OdBmVtxConnectionsPtr &pConnections);

  /** \details
  Sets vertex connections to blend element
    \param pConnections [in] Input vertex connections.
  */
  void setVtxConnections(const OdBmVtxConnectionsPtr &pConnections);
};


#endif // _BM_BLENDELEM_H_

