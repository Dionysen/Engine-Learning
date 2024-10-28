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

#ifndef _BM_CONNECTORELEMDOMAINELECTRICAL_H_
#define _BM_CONNECTORELEMDOMAINELECTRICAL_H_
#include "MEP/Entities/BmConnectorElemDomain.h"
#include "MEP/Enums/BmElectricalSystemType.h"

class OdBmObjectId;

class OdBmConnectorElemDomainElectrical;
class OdBmConnectorElemDomainElectricalImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmConnectorElemDomainElectrical object.
 */
typedef OdSmartPtr<OdBmConnectorElemDomainElectrical> OdBmConnectorElemDomainElectricalPtr;

/** \details
 A data type that represents an array of OdBmConnectorElemDomainElectrical objects.
 */
typedef OdArray<OdBmConnectorElemDomainElectricalPtr> OdBmConnectorElemDomainElectricalPtrArray;

//----------------------------------------------------------
//
// OdBmConnectorElemDomainElectrical
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmConnectorElemDomainElectrical : public OdBmConnectorElemDomain {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmConnectorElemDomainElectrical);
public:
  double getVoltage() const;
  double getApparentLoad() const;
  double getApparentLoadPhase1() const;
  double getApparentLoadPhase2() const;
  double getApparentLoadPhase3() const;
  double getPowerFactor() const;
  OdBmObjectId getIdLoadClassification() const;
  OdInt32 getNumberOfPoles() const;
  OdBm::ElectricalSystemType::Enum getSystemType() const;
  OdInt32 getPowerFactorState() const;
  bool getIsConnectorPrimary() const;
  bool getConnectorUtility() const;
  bool getSubClassificationMotor() const;
  OdString getStrConnectorDescription() const;
  //
  // Main functionality
  //

};


#endif // _BM_CONNECTORELEMDOMAINELECTRICAL_H_

