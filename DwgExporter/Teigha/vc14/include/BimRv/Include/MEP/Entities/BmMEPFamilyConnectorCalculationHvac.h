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

#ifndef _BM_MEPFAMILYCONNECTORCALCULATIONHVAC_H_
#define _BM_MEPFAMILYCONNECTORCALCULATIONHVAC_H_
#include "MEP/Entities/BmMEPFamilyConnectorCalculation.h"
#include "MEP/Enums/BmDuctSystemType.h"

class OdBmObjectId;

class OdBmMEPFamilyConnectorCalculationHvac;
class OdBmMEPFamilyConnectorCalculationHvacImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMEPFamilyConnectorCalculationHvac object.
 */
typedef OdSmartPtr<OdBmMEPFamilyConnectorCalculationHvac> OdBmMEPFamilyConnectorCalculationHvacPtr;

/** \details
 A data type that represents an array of OdBmMEPFamilyConnectorCalculationHvac objects.
 */
typedef OdArray<OdBmMEPFamilyConnectorCalculationHvacPtr> OdBmMEPFamilyConnectorCalculationHvacPtrArray;

//----------------------------------------------------------
//
// OdBmMEPFamilyConnectorCalculationHvac
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmMEPFamilyConnectorCalculationHvac : public OdBmMEPFamilyConnectorCalculation {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMEPFamilyConnectorCalculationHvac);
public:
  double getCoefficient() const;
  double getFlow() const;
  OdInt32 getDirection() const;
  OdBm::DuctSystemType::Enum getSystemType() const;
  OdBmObjectId getIdSystem() const;
  OdInt32 getSection() const;
  //
  // Main functionality
  //
};
#endif // _BM_MEPFAMILYCONNECTORCALCULATIONHVAC_H_

