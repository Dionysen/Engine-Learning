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

#ifndef _BM_AREAPLANTOPOLOGIESINTERFACE_H_
#define _BM_AREAPLANTOPOLOGIESINTERFACE_H_
#include "Database/BmElement.h"

class OdBmPlanTopologies;
typedef OdSmartPtr<OdBmPlanTopologies> OdBmPlanTopologiesPtr;
class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmCircuitIdSetWrapper;
typedef OdSmartPtr<OdBmCircuitIdSetWrapper> OdBmCircuitIdSetWrapperPtr;
class OdBmElementIdCircuitIdSetWrapper;
typedef OdSmartPtr<OdBmElementIdCircuitIdSetWrapper> OdBmElementIdCircuitIdSetWrapperPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmAreaPlanTopologiesInterface;
class OdBmAreaPlanTopologiesInterfaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAreaPlanTopologiesInterface object.
 */
typedef OdSmartPtr<OdBmAreaPlanTopologiesInterface> OdBmAreaPlanTopologiesInterfacePtr;

/** \details
 A data type that represents an array of OdBmAreaPlanTopologiesInterface objects.
 */
typedef OdArray<OdBmAreaPlanTopologiesInterfacePtr> OdBmAreaPlanTopologiesInterfacePtrArray;

//----------------------------------------------------------
//
// OdBmAreaPlanTopologiesInterface
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAreaPlanTopologiesInterface : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAreaPlanTopologiesInterface);
public:
  OdBmObjectId getPhaseId() const;
  OdBmObjectId getOptionId() const;
  OdBmObjectId getZoneSchemeId() const;
  OdBmPlanTopologiesPtr getSet() const;
  void getLevelsWithInvalidRooms(OdBmObjectIdArray &) const;
  void getOtherOptionsEquivalents(OdBmObjectIdArray &) const;
  void getCircsForAreaRefinement(OdBmMap<OdBmRoomBoundingItemPtr, OdBmCircuitIdSetWrapperPtr> &) const;
  void getVaryInOption(OdBmMap<OdBmRoomBoundingItemPtr, OdBmElementIdCircuitIdSetWrapperPtr> &) const;
  void getInvalidRoomsIds(OdBmMap<OdBmObjectId, OdBmSet<OdBmObjectId> > &) const;
  //
  // Main functionality
  //


};


#endif // _BM_AREAPLANTOPOLOGIESINTERFACE_H_

