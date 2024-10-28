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

#ifndef _BM_ENERGYANALYSISOPENING_H_
#define _BM_ENERGYANALYSISOPENING_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGeometry.h"
#include "StairsRamp/Entities/BmPolyloop.h"
// END: Includes

class OdBmGeometry;
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;
class OdBmPolyloop;
typedef OdSmartPtr<OdBmPolyloop> OdBmPolyloopPtr;
class OdBmObjectId;

class OdBmEnergyAnalysisOpening;
class OdBmEnergyAnalysisOpeningImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisOpening object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisOpening> OdBmEnergyAnalysisOpeningPtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisOpening objects.
 */
typedef OdArray<OdBmEnergyAnalysisOpeningPtr> OdBmEnergyAnalysisOpeningPtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisOpening
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisOpening : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisOpening);
public:
  OdString getCadObjectId2() const;
  OdBmGeometryPtr getFaceGeom() const;
  OdBmPolyloopPtr getPolyloop() const;
  OdString getId() const;
  OdString getName() const;
  OdString getConstructionIdRef() const;
  OdString getWindowTypeIdRef() const;
  double getHeight() const;
  double getWidth() const;
  double getPtCornerItem(OdUInt32 idx) const;
  OdInt32 getOriginatingElementHostElementIdAsInt() const;
  OdInt32 getOriginatingElementLinkInstanceIdAsInt() const;
  OdInt32 getConstructionIndex() const;
  OdBmObjectId getEnergyModelId() const;
  OdInt32 getType() const;
  OdInt32 getWindowTypeIndex() const;
  bool getIsAVBased() const;
  bool getIsExterior() const;
  double getHeatTransferCoefficient() const;
  double getSolarHeatGainCoefficient() const;
  double getThermalMass() const;
  double getThermalResistance() const;
  double getTransmittance() const;
  bool getHasThermalProperties() const;
  bool getIsBasedOnRoomSpaceVolumes() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISOPENING_H_

