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

#ifndef _BM_ZONEELEMENT_H_
#define _BM_ZONEELEMENT_H_
#include "Database/BmElement.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmZoneElement;
class OdBmZoneElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmZoneElement object.
 */
typedef OdSmartPtr<OdBmZoneElement> OdBmZoneElementPtr;

/** \details
 A data type that represents an array of OdBmZoneElement objects.
 */
typedef OdArray<OdBmZoneElementPtr> OdBmZoneElementPtrArray;

//----------------------------------------------------------
//
// OdBmZoneElement
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmZoneElement : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmZoneElement);
public:
  void getSpaceIds(OdBmObjectIdArray &) const;
  OdGePoint3d getPtPoint() const;
  double getCalculatedSupplyAirflow() const;
  double getCalculatedHeatingLoad() const;
  double getCalculatedCoolingLoad() const;
  double getHeatingSetPoint() const;
  double getCoolingSetPoint() const;
  double getHeatingAirTemperature() const;
  double getCoolingAirTemperature() const;
  double getHumidificationSetPoint() const;
  double getDehumidificationSetPoint() const;
  double getOAPerPerson() const;
  double getOAPerArea() const;
  double getOARatePerACH() const;
  double getCoilBypassPercentage() const;
  double getPerimeter() const;
  OdInt32 getServiceType() const;
  OdBmObjectId getZoneSchemeId() const;
  OdBmObjectId getPhaseId() const;
  bool getDefault() const;
  bool getRefPointDefined() const;
  bool getUseHumidificationSetPoint() const;
  bool getUseDehumidificationSetPoint() const;
  bool getUseOAPerPerson() const;
  bool getUseOAPerArea() const;
  bool getUseAirChangesPerHour() const;
  double getCalculatedHydronicHeatingFlow() const;
  double getCalculatedHydronicCoolingFlow() const;
  OdInt32 getSpaceOAOption() const;
  OdBmObjectId getSketchId() const;
  //
  // Main functionality
  //


};


#endif // _BM_ZONEELEMENT_H_

