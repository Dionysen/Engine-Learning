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

#ifndef _BM_ROOMELEM_H_
#define _BM_ROOMELEM_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "StairsRamp/Entities/BmRoomBoundarySegment.h"
// END: Includes

class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmObjectId;
class OdBmCircuitId;

class OdBmRoomElem;
class OdBmRoomElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRoomElem object.
 */
typedef OdSmartPtr<OdBmRoomElem> OdBmRoomElemPtr;

/** \details
 A data type that represents an array of OdBmRoomElem objects.
 */
typedef OdArray<OdBmRoomElemPtr> OdBmRoomElemPtrArray;

//----------------------------------------------------------
//
// OdBmRoomElem
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmRoomElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRoomElem);
public:
  void getLoadPerLoadClass(OdBmMap<OdBmObjectId, double> &) const;
  OdGePoint2d getPoint() const;
  double getPlenumLighting() const;
  double getActualSupplyAirflow() const;
  double getActualReturnAirflow() const;
  double getActualExhaustAirflow() const;
  double getActualPowerLoad() const;
  double getActualLightingLoad() const;
  double getActualMechanicalLoad() const;
  double getActualOtherLoad() const;
  double getEstimatedIllumination() const;
  double getRoomCavityRatio() const;
  double getDesignSupplyAirflow() const;
  double getDesignReturnAirflow() const;
  double getDesignExhaustAirflow() const;
  double getCalculatedSupplyAirflow() const;
  double getDesignHeatingLoad() const;
  double getCalculatedHeatingLoad() const;
  double getDesignCoolingLoad() const;
  double getCalculatedCoolingLoad() const;
  double getDesignPowerLoadPerArea() const;
  double getDesignLightingLoadPerArea() const;
  double getDesignMechanicalLoadPerArea() const;
  double getDesignOtherLoadPerArea() const;
  double getUpperOffset() const;
  double getHeight() const;
  double getLowerOffset() const;
  double getLuminairePlane() const;
  OdInt32 getBaseSupplyAirflowOn() const;
  OdInt32 getBaseReturnAirflowOn() const;
  OdInt32 getBasePowerLoadOn() const;
  OdInt32 getBaseLightingLoadOn() const;
  OdInt32 getBaseHeatLoadOn() const;
  OdBmObjectId getPhaseId() const;
  OdBmObjectId getAreaSpaceElemId() const;
  OdBmObjectId getAreaSchemeId() const;
  OdBmObjectId getZoneElementId() const;
  OdBmObjectId getZoneSchemeId() const;
  OdBmObjectId getUpperLevelId() const;
  OdBmObjectId getLevelId() const;
  OdBmCircuitId getCachedCircuitId() const;
  bool getIsLocationless() const;
  bool getReturnEqualToSupplyAirflow() const;
  bool getPlenum() const;
  bool getOccupiable() const;
  OdBmObjectPtr getPlacement() const;
  OdBmObjectPtr getSpaceRoomLocationInfo() const;
  void getVolumeBoundingElems(OdArray<OdBmRoomBoundingItemPtr> &) const;
  void getReferenceFaces(OdArray<OdBmObjectPtr> &) const;
  double getOutdoorAirflow() const;
  double getPrimaryAirflow() const;
  OdBmObjectId getGbxmlSpaceTypeId() const;
  //
  // Main functionality
  //


  /** \details
    Returns boundary segments of RoomElem
    \param arrSegments [in]  Array of segments.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getBoundarySegments(OdArray<OdArray<OdBmRoomBoundarySegmentPtr> >& arrSegments) const;
};


#endif // _BM_ROOMELEM_H_

