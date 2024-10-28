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

#ifndef _BM_ENERGYANALYSISSPACE_H_
#define _BM_ENERGYANALYSISSPACE_H_
#include "Database/BmElement.h"

class OdBmEnergyAnalysisSpaceData;
typedef OdSmartPtr<OdBmEnergyAnalysisSpaceData> OdBmEnergyAnalysisSpaceDataPtr;
class OdBmGeometry;
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;
class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmEnergyAnalysisSpace;
class OdBmEnergyAnalysisSpaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisSpace object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisSpace> OdBmEnergyAnalysisSpacePtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisSpace objects.
 */
typedef OdArray<OdBmEnergyAnalysisSpacePtr> OdBmEnergyAnalysisSpacePtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisSpace
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisSpace : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisSpace);
public:
  OdBmEnergyAnalysisSpaceDataPtr getSpaceData() const;
  OdBmObjectId getZoneId() const;
  void getLightFixtures(OdArray<OdBmObjectPtr> &) const;
  OdString getDesc() const;
  OdString getName() const;
  OdBmGeometryPtr getPolyhedralGeom() const;
  void getShellPolyloopsFromSubfaces(OdArray<OdBmObjectPtr> &) const;
  void getSurfaceIds(OdBmObjectIdArray &) const;
  OdString getXslId() const;
  double getAnalyticalVolume() const;
  double getArea() const;
  double getInnerVolume() const;
  double getFloorArea() const;
  double getVolume() const;
  OdInt32 getBuildingStoreyIndex() const;
  OdBmObjectId getEnergyModelId() const;
  bool getIsAVBased() const;
  void getSystemZoneIds(OdArray<OdBmRoomBoundingItemPtr> &) const;
  void getZoneEquipmentIds(OdArray<OdBmRoomBoundingItemPtr> &) const;
  OdBmObjectId getReferenceLevelId() const;
  bool getIsBasedOnRoomSpaceVolumes() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISSPACE_H_

