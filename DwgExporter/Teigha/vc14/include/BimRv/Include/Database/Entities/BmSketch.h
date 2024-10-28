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

#ifndef _BM_SKETCH_H_
#define _BM_SKETCH_H_
#include "Database/Entities/BmISketch.h"
// BEGIN: Includes
#include "GeometryUtils/Entities/BmCurveLoop.h"
// END: Includes

class OdBmPlane;
typedef OdSmartPtr<OdBmPlane> OdBmPlanePtr;
class OdBmSketchGridData;
typedef OdSmartPtr<OdBmSketchGridData> OdBmSketchGridDataPtr;
class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;
class OdBmCurveElemData;
typedef OdSmartPtr<OdBmCurveElemData> OdBmCurveElemDataPtr;
class OdBmCustomDatumPlaneInfo;
typedef OdSmartPtr<OdBmCustomDatumPlaneInfo> OdBmCustomDatumPlaneInfoPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmSketch;
class OdBmSketchImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSketch object.
 */
typedef OdSmartPtr<OdBmSketch> OdBmSketchPtr;

/** \details
 A data type that represents an array of OdBmSketch objects.
 */
typedef OdArray<OdBmSketchPtr> OdBmSketchPtrArray;

//----------------------------------------------------------
//
// OdBmSketch
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmSketch : public OdBmISketch {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSketch);
public:
  void getElemIdsPairSet(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getPointIdsPairSet(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getDimIds(OdBmObjectIdArray &) const;
  void getClineIds(OdBmObjectIdArray &) const;
  OdBmPlanePtr getPlane() const;
  OdBmSketchGridDataPtr getSketchGridData() const;
  OdBmObjectPtr getRefPnt() const;
  OdUInt32 getSerFlags() const;
  OdBmObjectId getSketchPlaneId() const;
  OdInt32 getNextIndex() const;
  OdInt32 getIsEdited() const;
  OdInt32 getVersion() const;
  bool getRemainVisible() const;
  bool getIsSuspendedNew() const;
  bool getAllowResetLineEndConstr() const;
  bool getIsHostForReferenceLines() const;
  bool getFlipXY() const;
  bool getFlipZ() const;
  void getAbsorbedCurves(OdArray<OdBmGCurvePtr> &) const;
  void getAbsorbedCurvesData(OdArray<OdBmCurveElemDataPtr> &) const;
  void getCustomDatumPlaneInfos(OdArray<OdBmCustomDatumPlaneInfoPtr> &) const;
  OdBmObjectPtr getPlaneRef() const;
  //
  // Main functionality
  //

  /** \details
    Returns formed loops of Sketch.
    
    \param arrProfile [out] Output array to store formed loops.
    
    \returns eOk if the operation completed successfully
  */
  OdResult getCurveLoops(OdArray<OdBmCurveLoopPtr>& arrProfile) const;

  /** \details
    Counts the number of curve elements connected with the sketch.
    
    \returns The number of curve elements as OdUInt32.
  */
  OdUInt32 getNumCurveElems() const;

  /** \details
    Retrieves objectId by the tag.
    
    \param iTag [in] Input tag.
    
    \returns ObjectId.
  */
  OdBmObjectId getCurveElementIdFromTag(OdInt32 iTag) const;

  /** \details
    Returns the GeCurve as an OdGeCurve3d object.

    \param iCurveNum [in] input curve number which try to get.
    \param pCurve [out] Output OdGeCurve3d object. The customer is owner of the object and should release memory after using.
    \param tol [in] Input value of tolerance.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getGeCurve(OdInt32 iCurveNum, OdGeCurve3d*& pCurve, const OdGeTol& tol = OdGeContext::gTol) const;
};


#endif // _BM_SKETCH_H_

