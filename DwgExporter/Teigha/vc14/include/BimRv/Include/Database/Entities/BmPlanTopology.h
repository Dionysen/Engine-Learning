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

#ifndef _BM_PLANTOPOLOGY_H_
#define _BM_PLANTOPOLOGY_H_
#include "Base/BmObject.h"

class OdBmPlanSegmentInfoPair;
typedef OdSmartPtr<OdBmPlanSegmentInfoPair> OdBmPlanSegmentInfoPairPtr;
class OdBmPlanCircuit;
typedef OdSmartPtr<OdBmPlanCircuit> OdBmPlanCircuitPtr;
class OdBmPlanConnectedComponent;
typedef OdSmartPtr<OdBmPlanConnectedComponent> OdBmPlanConnectedComponentPtr;
class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmRegionSeed;
typedef OdSmartPtr<OdBmRegionSeed> OdBmRegionSeedPtr;
class OdBmObjectId;
class OdBmCircuitId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmPlanTopology;
class OdBmPlanTopologyImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPlanTopology object.
 */
typedef OdSmartPtr<OdBmPlanTopology> OdBmPlanTopologyPtr;

/** \details
 A data type that represents an array of OdBmPlanTopology objects.
 */
typedef OdArray<OdBmPlanTopologyPtr> OdBmPlanTopologyPtrArray;

//----------------------------------------------------------
//
// OdBmPlanTopology
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPlanTopology : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPlanTopology);
public:
  double getElevOffset() const;
  double getTopOffset() const;
  double getBotOffset() const;
  OdInt32 getWhichElev() const;
  OdBmObjectId getLevelId() const;
  OdBmObjectId getLevelRoomPlanId() const;
  OdBmCircuitId getNextCircuitId() const;
  bool getTopBotOffsetsSet() const;
  void getSegments(OdArray<OdBmPlanSegmentInfoPairPtr> &) const;
  void getCircuits(OdArray<OdBmPlanCircuitPtr> &) const;
  void getComponents(OdArray<OdBmPlanConnectedComponentPtr> &) const;
  void getRooms(OdBmObjectIdArray &) const;
  void getUnusedItems(OdArray<OdBmRoomBoundingItemPtr> &) const;
  void getRoomBoundingSeedCache(OdBmMap<OdBmRoomBoundingItemPtr, OdBmRegionSeedPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_PLANTOPOLOGY_H_

