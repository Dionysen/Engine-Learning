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

#ifndef _BM_ENERGYANALYSISCONSTRUCTION_H_
#define _BM_ENERGYANALYSISCONSTRUCTION_H_
#include "Base/BmObject.h"



class OdBmEnergyAnalysisConstruction;
class OdBmEnergyAnalysisConstructionImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisConstruction object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisConstruction> OdBmEnergyAnalysisConstructionPtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisConstruction objects.
 */
typedef OdArray<OdBmEnergyAnalysisConstructionPtr> OdBmEnergyAnalysisConstructionPtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisConstruction
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisConstruction : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisConstruction);
public:
  OdString getDescription() const;
  void getLayerIndices(OdInt32Array &) const;
  OdString getName() const;
  double getAbsorptance() const;
  double getUValue() const;
  OdInt32 getAbsorptanceType() const;
  OdInt32 getAbsorptanceUnits() const;
  OdInt32 getConceptualId() const;
  OdInt32 getRoughness() const;
  OdInt32 getUValueUnits() const;
  bool getHasAbsorptance() const;
  bool getHasRoughness() const;
  bool getHasUValue() const;
  bool getIsConceptualConstruction() const;
  double getCthValue() const;
  double getRValue() const;
  bool getHasCthValue() const;
  bool getHasRValue() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISCONSTRUCTION_H_

