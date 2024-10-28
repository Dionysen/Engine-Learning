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

#ifndef _BM_MEPSYSTEMTRACKER_H_
#define _BM_MEPSYSTEMTRACKER_H_
#include "Database/BmElement.h"

class OdBmConnectorId;
typedef OdSmartPtr<OdBmConnectorId> OdBmConnectorIdPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmMEPSystemTracker;
class OdBmMEPSystemTrackerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMEPSystemTracker object.
 */
typedef OdSmartPtr<OdBmMEPSystemTracker> OdBmMEPSystemTrackerPtr;

/** \details
 A data type that represents an array of OdBmMEPSystemTracker objects.
 */
typedef OdArray<OdBmMEPSystemTrackerPtr> OdBmMEPSystemTrackerPtrArray;

//----------------------------------------------------------
//
// OdBmMEPSystemTracker
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmMEPSystemTracker : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMEPSystemTracker);
public:
  void getSystemsChanged(OdBmObjectIdArray &) const;
  void getSystemsChangedDelayed(OdBmObjectIdArray &) const;
  void getFixturesAdded(OdBmObjectIdArray &) const;
  void getSystemsToCheckForSplit(OdBmObjectIdArray &) const;
  void getElemsToUpdateCalculate(OdBmObjectIdArray &) const;
  void getElemsToValidateCenterline(OdBmObjectIdArray &) const;
  void getLayoutManagerSeeds(OdArray<OdBmConnectorIdPtr> &) const;
  void getLayoutManagerSeedsForFullRegen(OdArray<OdBmConnectorIdPtr> &) const;
  void getConnectorOperations(OdArray<OdBmObjectPtr> &) const;
  OdInt32 getHasDeletedFixtures() const;
  bool getNeedToUpdateSystemBrowser() const;
  void getChangedCalculationServices(OdArray<OdGUID> &) const;
  void getMovedSystemMembers(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //
};
#endif // _BM_MEPSYSTEMTRACKER_H_

