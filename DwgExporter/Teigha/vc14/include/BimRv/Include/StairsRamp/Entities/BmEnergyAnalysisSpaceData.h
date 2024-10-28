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

#ifndef _BM_ENERGYANALYSISSPACEDATA_H_
#define _BM_ENERGYANALYSISSPACEDATA_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmEnergyAnalysisSpaceData;
class OdBmEnergyAnalysisSpaceDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisSpaceData object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisSpaceData> OdBmEnergyAnalysisSpaceDataPtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisSpaceData objects.
 */
typedef OdArray<OdBmEnergyAnalysisSpaceDataPtr> OdBmEnergyAnalysisSpaceDataPtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisSpaceData
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisSpaceData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisSpaceData);
public:
  OdString getCADObjectId() const;
  void getAnalyticalVolumeBoundary(OdArray<OdBmObjectPtr> &) const;
  void getInnerVolumeBoundary(OdArray<OdBmObjectPtr> &) const;
  OdBmObjectPtr getRoom3DGeometry() const;
  OdBmObjectPtr getRoomGeometry() const;
  OdString getSpaceName() const;
  double getEquipmentPowerPerArea() const;
  double getLatentHeatGainPerPerson() const;
  double getLightPowerPerArea() const;
  double getPeopleNumber() const;
  double getSensibleHeatGainPerPerson() const;
  double getTotalHeatGainPerPerson() const;
  OdInt32 getConditionType() const;
  OdInt32 getLightingScheduleIndex() const;
  OdInt32 getOccupancyScheduleIndex() const;
  OdInt32 getPowerScheduleIndex() const;
  OdInt32 getSpaceType() const;
  bool getHasEquipmentPowerPerArea() const;
  bool getHasLatentHeatGainPerPerson() const;
  bool getHasLightPowerPerArea() const;
  bool getHasLocation() const;
  bool getHasPeopleNumber() const;
  bool getHasSensibleHeatGainPerPerson() const;
  bool getHasTotalHeatGainPerPerson() const;
  bool getIsDefaultPeopleNumber() const;
  bool getIsEquipmentLoadBasedOnDefaults() const;
  bool getIsHeatLoadBasedOnDefaults() const;
  bool getIsLightLoadBasedOnDefaults() const;
  bool getIsOccupiable() const;
  bool getIsPlenum() const;
  bool getIsThermalSpace() const;
  OdString getSpaceTypeName() const;
  OdBmObjectId getSpaceTypeId() const;
  double getAirChangesPerHour() const;
  double getAreaPerPerson() const;
  double getInfiltrationAirflowPerArea() const;
  double getOutdoorAirflow() const;
  double getOutdoorAirflowPerArea() const;
  double getOutdoorAirflowPerPerson() const;
  bool getHasAirChangesPerHour() const;
  bool getHasAreaPerPerson() const;
  bool getHasInfiltrationAirflowPerArea() const;
  bool getHasOutdoorAirflow() const;
  bool getHasOutdoorAirflowPerArea() const;
  bool getHasOutdoorAirflowPerPerson() const;
  double getCoolingSetPoint() const;
  double getDehumidificationSetPoint() const;
  double getHeatingSetPoint() const;
  double getHumidificationSetPoint() const;
  bool getHasCoolingSetPoint() const;
  bool getHasDehumidificationSetPoint() const;
  bool getHasHeatingSetPoint() const;
  bool getHasHumidificationSetPoint() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISSPACEDATA_H_

