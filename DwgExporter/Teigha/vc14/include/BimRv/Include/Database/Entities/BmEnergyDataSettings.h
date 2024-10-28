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

#ifndef _BM_ENERGYDATASETTINGS_H_
#define _BM_ENERGYDATASETTINGS_H_
#include "Database/BmElement.h"
#include "Database/Enums/BmAnalysisModeType.h"
#include "Database/Enums/BmBuildingHVACLoadConstructionClassType.h"
#include "Database/Enums/BmExportBuildingEnvelopeType.h"
#include "Database/Enums/BmBuildingHVACSystemType.h"
#include "Database/Enums/BmBuildingOperatingScheduleType.h"
#include "Database/Enums/BmExportComplexityType.h"
#include "Database/Enums/BmHVACLoadLoadsReportType.h"
#include "Database/Enums/BmServiceType.h"

class OdBmObjectId;

class OdBmEnergyDataSettings;
class OdBmEnergyDataSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyDataSettings object.
 */
typedef OdSmartPtr<OdBmEnergyDataSettings> OdBmEnergyDataSettingsPtr;

/** \details
 A data type that represents an array of OdBmEnergyDataSettings objects.
 */
typedef OdArray<OdBmEnergyDataSettingsPtr> OdBmEnergyDataSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmEnergyDataSettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmEnergyDataSettings : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyDataSettings);
public:
  OdString getPostalCode() const;
  double getAnalyticalGridCellSize() const;
  double getMassZoneCoreOffset() const;
  double getOutsideAirChangesRatePerHour() const;
  double getOutsideAirPerArea() const;
  double getOutsideAirPerPerson() const;
  double getPercentageGlazing() const;
  double getPercentageSkylights() const;
  double getShadeDepth() const;
  double getSillHeight() const;
  double getSkylightWidth() const;
  double getSliverSpaceTolerance() const;
  double getSpaceResolution() const;
  double getSurfaceResolution() const;
  OdBm::AnalysisModeType::Enum getAnalysisType() const;
  OdBm::BuildingHVACLoadConstructionClassType::Enum getBuildingConstructionClass() const;
  OdBm::ExportBuildingEnvelopeType::Enum getBuildingEnvelopeDeterminationMethod() const;
  OdBm::BuildingHVACSystemType::Enum getBuildingHVACSystem() const;
  OdBm::BuildingOperatingScheduleType::Enum getBuildingOperatingSchedule() const;
  OdBmObjectId getConstructionSetElementId() const;
  OdBmObjectId getExportCategory() const;
  OdBm::ExportComplexityType::Enum getExportComplexity() const;
  OdBmObjectId getGroundPlane() const;
  OdBmObjectId getProjectPhase() const;
  OdBm::HVACLoadLoadsReportType::Enum getProjectReportType() const;
  OdBm::ServiceType::Enum getServiceType() const;
  OdInt32 getShadingSurfaces() const;
  bool getDmeaEnabled() const;
  bool getUseHeatingCredits() const;
  bool getCreateAnalyticalModel() const;
  bool getEnergyModel() const;
  bool getExportDefaults() const;
  bool getGlazingIsShaded() const;
  bool getIncludeThermalProperties() const;
  bool getMassZoneDividePerimeter() const;
  bool getUseAirChangesPerHour() const;
  bool getUseOutsideAirPerArea() const;
  bool getUseOutsideAirPerPerson() const;
  OdBmObjectId getBuildingTypeId() const;
  void getEnergyModelViewOverrides(OdArray<OdBmObjectPtr> &) const;
  double getHorizontalVoidThreshold() const;
  double getVerticalVoidThreshold() const;
  OdInt32 getState() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYDATASETTINGS_H_

