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

#ifndef _BM_VARSKETCH_H_
#define _BM_VARSKETCH_H_
#include "Database/Entities/BmSketch.h"
// BEGIN: Includes
#include "Database/Entities/BmCurveElem.h"
// END: Includes

class OdBmVarSketchCurveObj;
typedef OdSmartPtr<OdBmVarSketchCurveObj> OdBmVarSketchCurveObjPtr;
class OdBmVarSketchPointObj;
typedef OdSmartPtr<OdBmVarSketchPointObj> OdBmVarSketchPointObjPtr;
class OdBmVarSketchConstrObj;
typedef OdSmartPtr<OdBmVarSketchConstrObj> OdBmVarSketchConstrObjPtr;
class OdBmPlane;
typedef OdSmartPtr<OdBmPlane> OdBmPlanePtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmVarSketch;
class OdBmVarSketchImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmVarSketch object.
 */
typedef OdSmartPtr<OdBmVarSketch> OdBmVarSketchPtr;

/** \details
 A data type that represents an array of OdBmVarSketch objects.
 */
typedef OdArray<OdBmVarSketchPtr> OdBmVarSketchPtrArray;

//----------------------------------------------------------
//
// OdBmVarSketch
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmVarSketch : public OdBmSketch {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmVarSketch);
public:
  void getElemRecs(OdArray<OdBmVarSketchCurveObjPtr> &) const;
  void getCurveObjIdxMap(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getPointRecs(OdArray<OdBmVarSketchPointObjPtr> &) const;
  void getPointObjIdxMap(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getConstrRecs(OdArray<OdBmVarSketchConstrObjPtr> &) const;
  OdBmObjectPtr getOGuessCache() const;
  OdBmPlanePtr getOParamPlane() const;
  void getDimData(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getWeakDimIds(OdBmObjectIdArray &) const;
  bool getAutodimDisabled() const;
  bool getIsParametric() const;
  bool getHighResidualTol() const;
  //
  // Main functionality
  //

  //return number of curve objects
  OdUInt32 getNumberCurveObj() const;

  /** \details
    Gets the CurveElem by index.

      \param iIndex [in] Index of curve.
      \param pCurveElem [out] Output CurveElem.
      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getCurveElemByIndex(const OdUInt32 iIndex, OdBmCurveElemPtr& pCurveElem) const;
};


#endif // _BM_VARSKETCH_H_

