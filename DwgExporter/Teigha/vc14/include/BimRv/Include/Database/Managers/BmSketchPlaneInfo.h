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

#ifndef _BM_SKETCHPLANEINFO_H_
#define _BM_SKETCHPLANEINFO_H_
#include "Database/Managers/BmAppInfo.h"

class OdBmCurSPRec;
typedef OdSmartPtr<OdBmCurSPRec> OdBmCurSPRecPtr;
class OdBmWorkPlaneRecord;
typedef OdSmartPtr<OdBmWorkPlaneRecord> OdBmWorkPlaneRecordPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmSketchPlaneInfo;
class OdBmSketchPlaneInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSketchPlaneInfo object.
 */
typedef OdSmartPtr<OdBmSketchPlaneInfo> OdBmSketchPlaneInfoPtr;

/** \details
 A data type that represents an array of OdBmSketchPlaneInfo objects.
 */
typedef OdArray<OdBmSketchPlaneInfoPtr> OdBmSketchPlaneInfoPtrArray;

//----------------------------------------------------------
//
// OdBmSketchPlaneInfo
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmSketchPlaneInfo : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSketchPlaneInfo);
public:
  void getCurSketchPlaneRecords(OdArray<OdBmCurSPRecPtr> &) const;
  void getWorkPlaneRecordMap(OdBmMap<OdBmObjectId, OdBmWorkPlaneRecordPtr> &) const;
  OdBmObjectPtr getSharedSketchGridData() const;
  void getSolverIds(OdBmObjectIdArray &) const;
  OdBmObjectId getSketchModeSketchGridId() const;
  OdInt32 getActiveMethod() const;
  OdInt32 getVerBeforeUpgradeSketchPlanePatches() const;
  bool getBeforeUpgradeOnDatumPlaneOrigin() const;
  bool getBeforeUpgradeMoveFixedPlaneRefsToViews() const;
  //
  // Main functionality
  //

  /** \details
    Retrieves the OdBmWorkPlaneRecord for the viewId from the map
    \param viewId   [in]  The view Id for which we are looking for OdBmWorkPlaneRecord.
    \param pWP      [out] OdBmWorkPlaneRecord which was found for the view id.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getWorkPlaneRecord(OdBmObjectId viewId, OdBmWorkPlaneRecordPtr& pWP) const;

  /** \details
   Retrieves OdBmObjectId of SketchGrid for the viewId.
   \param viewId   [in]  The view Id for which we are looking for OdBmObjectId of SketchGrid.
   \param spId     [out] Output Id of SketchGrid.
   \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getSketchGridId(OdBmObjectId viewId, OdBmObjectId& spId) const;

  /** \details
   Retrieves OdBmObjectId of ScetchPlane for the View.
   \param viewId   [in]  The view Id for which we are looking for OdBmObjectId of ScetchPlane.
   \param famId    [in]  The Id of Family.
   \param spId     [out] Output Id of SketchPlane.
   \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getCurSPId(OdBmObjectId viewId, OdBmObjectId famId, OdBmObjectId& spId) const;
};


#endif // _BM_SKETCHPLANEINFO_H_

