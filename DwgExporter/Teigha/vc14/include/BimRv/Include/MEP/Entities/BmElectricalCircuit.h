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

#ifndef _BM_ELECTRICALCIRCUIT_H_
#define _BM_ELECTRICALCIRCUIT_H_
#include "Database/BmElement.h"

class OdBmConnectorManager;
typedef OdSmartPtr<OdBmConnectorManager> OdBmConnectorManagerPtr;
class OdBmObjectId;

class OdBmElectricalCircuit;
class OdBmElectricalCircuitImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElectricalCircuit object.
 */
typedef OdSmartPtr<OdBmElectricalCircuit> OdBmElectricalCircuitPtr;

/** \details
 A data type that represents an array of OdBmElectricalCircuit objects.
 */
typedef OdArray<OdBmElectricalCircuitPtr> OdBmElectricalCircuitPtrArray;

//----------------------------------------------------------
//
// OdBmElectricalCircuit
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmElectricalCircuit : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElectricalCircuit);
public:
  OdBmConnectorManagerPtr getConnectorMgr() const;
  OdString getDescription() const;
  OdString getWireSize() const;
  double getRating() const;
  double getLength() const;
  double getVoltageDrop() const;
  OdBmObjectId getWireType() const;
  OdBmObjectId getPanel() const;
  OdInt32 getType() const;
  OdInt32 getLoadClassification() const;
  OdInt32 getNPoles() const;
  OdInt32 getNStartSlot() const;
  //
  // Main functionality
  //
};
#endif // _BM_ELECTRICALCIRCUIT_H_

