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

#ifndef _BM_ENERGYANALYSISCONSTRUCTIONDATA_H_
#define _BM_ENERGYANALYSISCONSTRUCTIONDATA_H_
#include "Base/BmObject.h"

class OdBmEnergyAnalysisConstruction;
typedef OdSmartPtr<OdBmEnergyAnalysisConstruction> OdBmEnergyAnalysisConstructionPtr;
class OdBmEnergyAnalysisLayer;
typedef OdSmartPtr<OdBmEnergyAnalysisLayer> OdBmEnergyAnalysisLayerPtr;
class OdBmEnergyAnalysisMaterial;
typedef OdSmartPtr<OdBmEnergyAnalysisMaterial> OdBmEnergyAnalysisMaterialPtr;
class OdBmEnergyAnalysisWindowType;
typedef OdSmartPtr<OdBmEnergyAnalysisWindowType> OdBmEnergyAnalysisWindowTypePtr;

class OdBmEnergyAnalysisConstructionData;
class OdBmEnergyAnalysisConstructionDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisConstructionData object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisConstructionData> OdBmEnergyAnalysisConstructionDataPtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisConstructionData objects.
 */
typedef OdArray<OdBmEnergyAnalysisConstructionDataPtr> OdBmEnergyAnalysisConstructionDataPtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisConstructionData
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisConstructionData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisConstructionData);
public:
  void getConstructions(OdBmMap<OdInt32, OdBmEnergyAnalysisConstructionPtr> &) const;
  void getLayers(OdBmMap<OdInt32, OdBmEnergyAnalysisLayerPtr> &) const;
  void getMaterials(OdBmMap<OdInt32, OdBmEnergyAnalysisMaterialPtr> &) const;
  void getWindowTypes(OdBmMap<OdInt32, OdBmEnergyAnalysisWindowTypePtr> &) const;
  OdInt32 getNextConstructionIndex() const;
  OdInt32 getNextLayerIndex() const;
  OdInt32 getNextMaterialIndex() const;
  OdInt32 getNextWindowTypeIndex() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISCONSTRUCTIONDATA_H_

