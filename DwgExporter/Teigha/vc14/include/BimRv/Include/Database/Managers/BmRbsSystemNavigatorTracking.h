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

#ifndef _BM_RBSSYSTEMNAVIGATORTRACKING_H_
#define _BM_RBSSYSTEMNAVIGATORTRACKING_H_
#include "Database/Managers/BmAppInfo.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRbsSystemNavigatorTracking;
class OdBmRbsSystemNavigatorTrackingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsSystemNavigatorTracking object.
 */
typedef OdSmartPtr<OdBmRbsSystemNavigatorTracking> OdBmRbsSystemNavigatorTrackingPtr;

/** \details
 A data type that represents an array of OdBmRbsSystemNavigatorTracking objects.
 */
typedef OdArray<OdBmRbsSystemNavigatorTrackingPtr> OdBmRbsSystemNavigatorTrackingPtrArray;

//----------------------------------------------------------
//
// OdBmRbsSystemNavigatorTracking
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRbsSystemNavigatorTracking : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsSystemNavigatorTracking);
public:
  void getDuctAccessoryIdSet(OdBmObjectIdArray &) const;
  void getDuctFittingIdSet(OdBmObjectIdArray &) const;
  void getDuctTerminalIdSet(OdBmObjectIdArray &) const;
  void getPipeAccessoryIdSet(OdBmObjectIdArray &) const;
  void getPipeFittingIdSet(OdBmObjectIdArray &) const;
  void getElectricalEquipmentIdSet(OdBmObjectIdArray &) const;
  void getElectricalFixturesIdSet(OdBmObjectIdArray &) const;
  void getLightingFixturesIdSet(OdBmObjectIdArray &) const;
  void getMechanicalEquipmentIdSet(OdBmObjectIdArray &) const;
  void getPlumbingFixturesIdSet(OdBmObjectIdArray &) const;
  void getSpecialityEquipmentIdSet(OdBmObjectIdArray &) const;
  void getMechanicalSystemIdSet(OdBmObjectIdArray &) const;
  void getPipingSystemIdSet(OdBmObjectIdArray &) const;
  void getElectricalSystemIdSet(OdBmObjectIdArray &) const;
  void getPendingAdditionsIdSet(OdBmObjectIdArray &) const;
  OdBmObjectId getDefaultDataPanelTemplateId() const;
  OdBmObjectId getDefaultSwitchboardTemplateId() const;
  OdBmObjectId getDefaultBranchPanelTemplateId() const;
  OdBmObjectId getDefaultBranchTwoColumnCircuitsDownTemplateId() const;
  OdBmObjectId getDefaultBranchOneColumnCircuitsTemplateId() const;
  void getVoltageTypeIdSet(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //


};


#endif // _BM_RBSSYSTEMNAVIGATORTRACKING_H_

