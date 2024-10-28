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

#ifndef _BM_ANALYTICALSUPPORTTRACKER_H_
#define _BM_ANALYTICALSUPPORTTRACKER_H_
#include "Database/BmElement.h"

class OdBmAnalyticalOctreeCells;
typedef OdSmartPtr<OdBmAnalyticalOctreeCells> OdBmAnalyticalOctreeCellsPtr;
class OdBmAnalyticalSupportData;
typedef OdSmartPtr<OdBmAnalyticalSupportData> OdBmAnalyticalSupportDataPtr;
class OdBmAnalyticalLeaderData;
typedef OdSmartPtr<OdBmAnalyticalLeaderData> OdBmAnalyticalLeaderDataPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmAnalyticalSupportTracker;
class OdBmAnalyticalSupportTrackerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAnalyticalSupportTracker object.
 */
typedef OdSmartPtr<OdBmAnalyticalSupportTracker> OdBmAnalyticalSupportTrackerPtr;

/** \details
 A data type that represents an array of OdBmAnalyticalSupportTracker objects.
 */
typedef OdArray<OdBmAnalyticalSupportTrackerPtr> OdBmAnalyticalSupportTrackerPtrArray;

//----------------------------------------------------------
//
// OdBmAnalyticalSupportTracker
//
//----------------------------------------------------------

/** \details
    <group Analytical_Classes>
*/
class TB_ANALYTICAL_EXPORT OdBmAnalyticalSupportTracker : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAnalyticalSupportTracker);
public:
  OdBmObjectPtr getOctreeContainer() const;
  void getCellMap(OdBmMap<OdBmObjectId, OdBmAnalyticalOctreeCellsPtr> &) const;
  OdBmObjectPtr getOctree() const;
  void getSupportMap(OdBmMap<OdBmObjectId, OdBmAnalyticalSupportDataPtr> &) const;
  void getWallsBraces(OdBmObjectIdArray &) const;
  void getPinnedElements(OdBmObjectIdArray &) const;
  void getChangedElements(OdBmObjectIdArray &) const;
  void getSupportUpdateElements(OdBmObjectIdArray &) const;
  void getSupportCheckElements(OdBmObjectIdArray &) const;
  void getConsistencyUpdateElements(OdBmObjectIdArray &) const;
  void getAutofixElements(OdBmObjectIdArray &) const;
  bool getIsOutOfDate() const;
  bool getIsUpgradingClearedVersion() const;
  void getAutoFixMap(OdBmMap<OdBmObjectId, OdBmAnalyticalLeaderDataPtr> &) const;
  void getChains(OdArray<OdBmObjectPtr> &) const;
  void getChainIdMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_ANALYTICALSUPPORTTRACKER_H_

