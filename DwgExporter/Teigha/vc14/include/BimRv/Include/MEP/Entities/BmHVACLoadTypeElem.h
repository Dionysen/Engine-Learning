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

#ifndef _BM_HVACLOADTYPEELEM_H_
#define _BM_HVACLOADTYPEELEM_H_
#include "Database/BmElement.h"
#include "StairsRamp/Enums/BmOutdoorAirflowStdType.h"

class OdBmObjectId;

class OdBmHVACLoadTypeElem;
class OdBmHVACLoadTypeElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmHVACLoadTypeElem object.
 */
typedef OdSmartPtr<OdBmHVACLoadTypeElem> OdBmHVACLoadTypeElemPtr;

/** \details
 A data type that represents an array of OdBmHVACLoadTypeElem objects.
 */
typedef OdArray<OdBmHVACLoadTypeElemPtr> OdBmHVACLoadTypeElemPtrArray;

//----------------------------------------------------------
//
// OdBmHVACLoadTypeElem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmHVACLoadTypeElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmHVACLoadTypeElem);
public:
  double getAreaPerPerson() const;
  double getSensibleHeatGainPerPerson() const;
  double getLatentHeatGainPerPerson() const;
  double getLightingLoadDensity() const;
  double getPowerLoadDensity() const;
  double getEquipmentRadiant() const;
  double getInfiltration() const;
  double getPlenumLighting() const;
  OdBmObjectId getOccupancySchedule() const;
  OdBmObjectId getLightingSchedule() const;
  OdBmObjectId getPowerSchedule() const;
  bool getCarpeting() const;
  double getAirChangesPerHour() const;
  double getOutdoorAirPerArea() const;
  double getOutdoorAirPerPerson() const;
  OdBm::OutdoorAirflowStandardType::Enum getOutdoorAirFlowStandard() const;
  double getbaseCoolingSetPoint() const;
  double getDehumidificationSetPoint() const;
  double getHeatingSetPoint() const;
  double getHumidificationSetPoint() const;
  //
  // Main functionality
  //
};
#endif // _BM_HVACLOADTYPEELEM_H_

