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

#ifndef _BM_FABRICATIONPARTTYPE_H_
#define _BM_FABRICATIONPARTTYPE_H_
#include "Database/Entities/BmSymbol.h"
#include "MEP/Enums/BmBehaviorType.h"

class OdBmFabricationPartUsageDefinition;
typedef OdSmartPtr<OdBmFabricationPartUsageDefinition> OdBmFabricationPartUsageDefinitionPtr;
class OdBmForgeTypeId;

class OdBmFabricationPartType;
class OdBmFabricationPartTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricationPartType object.
 */
typedef OdSmartPtr<OdBmFabricationPartType> OdBmFabricationPartTypePtr;

/** \details
 A data type that represents an array of OdBmFabricationPartType objects.
 */
typedef OdArray<OdBmFabricationPartTypePtr> OdBmFabricationPartTypePtrArray;

//----------------------------------------------------------
//
// OdBmFabricationPartType
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricationPartType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricationPartType);
public:
  OdString getFamilyId() const;
  OdString getFamName() const;
  OdString getImageGlob() const;
  OdBmFabricationPartUsageDefinitionPtr getUsageType() const;
  void getUsedByServices(OdInt32Array &) const;
  double getUserDefinedItemLength() const;
  OdBm::BehaviorType::Enum getBehaviorType() const;
  OdInt32 getDomainType() const;
  bool getIsBlocked() const;
  OdString getItmPath() const;
  OdInt32 getLoadedVersion() const;
  bool getIsLoadedOutOfService() const;
  OdInt32 getPatternNumber() const;
  OdBmForgeTypeId getSpecTypeId() const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICATIONPARTTYPE_H_

