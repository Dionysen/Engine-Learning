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

#ifndef _BM_RBSELECTRICALSYSTEM_H_
#define _BM_RBSELECTRICALSYSTEM_H_
#include "MEP/Entities/BmRbsSystem.h"

class OdBmCircuitPathNode;
typedef OdSmartPtr<OdBmCircuitPathNode> OdBmCircuitPathNodePtr;
class OdBmObjectId;

class OdBmRbsElectricalSystem;
class OdBmRbsElectricalSystemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsElectricalSystem object.
 */
typedef OdSmartPtr<OdBmRbsElectricalSystem> OdBmRbsElectricalSystemPtr;

/** \details
 A data type that represents an array of OdBmRbsElectricalSystem objects.
 */
typedef OdArray<OdBmRbsElectricalSystemPtr> OdBmRbsElectricalSystemPtrArray;

//----------------------------------------------------------
//
// OdBmRbsElectricalSystem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsElectricalSystem : public OdBmRbsSystem {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsElectricalSystem);
public:
  void getLoadsPerClass(OdBmMap<OdBmObjectId, OdGePoint3d> &) const;
  OdString getNumber() const;
  OdString getStrDescription() const;
  OdString getStrNotes() const;
  OdString getStrWireSize() const;
  OdString getStrHotWireSize() const;
  OdString getStrNeutralWireSize() const;
  OdString getStrGroundWireSize() const;
  OdString getStrLoadClassifications() const;
  double getVoltage() const;
  double getRating() const;
  double getFrame() const;
  double getLength() const;
  double getVoltageDrop() const;
  double getApparentLoad() const;
  double getApparentLoadPhaseA() const;
  double getApparentLoadPhaseB() const;
  double getApparentLoadPhaseC() const;
  double getTrueLoad() const;
  double getTrueLoadPhaseA() const;
  double getTrueLoadPhaseB() const;
  double getTrueLoadPhaseC() const;
  OdBmObjectId getIdWireType() const;
  OdInt32 getPoles() const;
  OdInt32 getStartSlot() const;
  OdInt32 getNumRuns() const;
  OdInt32 getNumHots() const;
  OdInt32 getNumNeutrals() const;
  OdInt32 getNumGrounds() const;
  OdInt32 getGroupNumber() const;
  OdInt32 getCircuitType() const;
  OdInt32 getSystemType() const;
  bool getReserved() const;
  bool getSlotLocked() const;
  void getReactiveLoadsPerClass(OdBmMap<OdBmObjectId, OdGePoint3d> &) const;
  void getTrueLoadsPerClass(OdBmMap<OdBmObjectId, OdGePoint3d> &) const;
  void getCustomizePathNodes(OdArray<OdBmCircuitPathNodePtr> &) const;
  void getPathNodes(OdArray<OdBmCircuitPathNodePtr> &) const;
  double getPathOffset() const;
  double getPathOffsetAllDevice() const;
  OdInt32 getCircuitPathMode() const;
  OdInt32 getCircuitConnType() const;
  OdInt32 getNNamingIndex() const;
  OdInt32 getNPhaseInfo() const;
  //
  // Main functionality
  //

  OdResult getVoltageValue(double& voltage) const;
  OdResult getPanelName(OdString& name) const;
  OdResult getPowerFactor(double& factor) const;
};
#endif // _BM_RBSELECTRICALSYSTEM_H_

