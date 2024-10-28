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

#ifndef _BM_ENERGYANALYSISZONE_H_
#define _BM_ENERGYANALYSISZONE_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "StairsRamp/Entities/BmEnergyAnalysisZoneData.h"
// END: Includes

class OdBmEnergyAnalysisZoneData;
typedef OdSmartPtr<OdBmEnergyAnalysisZoneData> OdBmEnergyAnalysisZoneDataPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmEnergyAnalysisZone;
class OdBmEnergyAnalysisZoneImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisZone object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisZone> OdBmEnergyAnalysisZonePtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisZone objects.
 */
typedef OdArray<OdBmEnergyAnalysisZonePtr> OdBmEnergyAnalysisZonePtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisZone
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisZone : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisZone);
public:
  OdBmEnergyAnalysisZoneDataPtr getZoneData() const;
  OdBmObjectId getEnergyModelId() const;
  void getSpaceIds(OdBmObjectIdArray &) const;
  OdString getId() const;
  OdString getName() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISZONE_H_

