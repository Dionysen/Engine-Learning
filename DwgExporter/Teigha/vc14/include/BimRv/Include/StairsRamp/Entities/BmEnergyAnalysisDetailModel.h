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

#ifndef _BM_ENERGYANALYSISDETAILMODEL_H_
#define _BM_ENERGYANALYSISDETAILMODEL_H_
#include "Database/BmElement.h"

class OdBmDatabase;
class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmEnergyAnalysisDetailModel;
class OdBmEnergyAnalysisDetailModelImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisDetailModel object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisDetailModel> OdBmEnergyAnalysisDetailModelPtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisDetailModel objects.
 */
typedef OdArray<OdBmEnergyAnalysisDetailModelPtr> OdBmEnergyAnalysisDetailModelPtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisDetailModel
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisDetailModel : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisDetailModel);
public:
  OdBmObjectPtr getEnergyAnalysisConstructionData() const;
  OdBmObjectPtr getLightFixtureData() const;
  OdBmObjectPtr getScheduleData() const;
  OdBmObjectPtr getStoreyData() const;
  OdBmObjectId getDefaultZoneId() const;
  OdBmDatabase* getDatabase1() const;
  void getAssemblyTypes(OdBmMap<OdBmRoomBoundingItemPtr, OdString> &) const;
  void getComponentTypes(OdBmMap<OdBmRoomBoundingItemPtr, OdString> &) const;
  OdString getLocationName() const;
  void getOpeningIds(OdBmObjectIdArray &) const;
  OdString getPostalCode() const;
  OdString getProjectAddress() const;
  OdString getProjectName() const;
  void getShadingSurfaceIds(OdBmObjectIdArray &) const;
  void getSpaceIds(OdBmObjectIdArray &) const;
  void getSurfaceIds(OdBmObjectIdArray &) const;
  void getZoneIds(OdBmObjectIdArray &) const;
  double getBuildingArea() const;
  OdGeMatrix3d getFromInternalCoordSys() const;
  double getGradeElev() const;
  double getLatitude() const;
  double getLongitude() const;
  OdInt32 getBuildingEnvelopeDeterminationMethod() const;
  OdInt32 getConstructionClass() const;
  OdBmObjectId getExportCategory() const;
  OdBmObjectId getProjectPhaseId() const;
  OdInt32 getServiceType() const;
  OdInt32 getTier() const;
  bool getExportMullions() const;
  bool getIncludeShadingSurfaces() const;
  bool getSimplifyCurtainSystems() const;
  bool getUseExportDefaults() const;
  bool getUseLoadCredits() const;
  bool getUseThermalProperties() const;
  OdBmObjectId getBuildingTypeId() const;
  OdBmObjectPtr getAirLoopData() const;
  OdBmObjectPtr getWaterLoopData() const;
  OdBmObjectPtr getZoneEquipmentData() const;
  bool getAreSpacesAssignedToZoneEquipment() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISDETAILMODEL_H_

