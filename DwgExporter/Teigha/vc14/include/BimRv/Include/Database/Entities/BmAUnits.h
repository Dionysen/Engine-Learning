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

#ifndef _BM_AUNITS_H_
#define _BM_AUNITS_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmUnitSystem.h"
#include "Database/Enums/BmDecimalSymbol.h"
#include "Database/Enums/BmDigitGroupingSymbol.h"
#include "Database/Enums/BmDigitGroupingAmount.h"
#include "Common/Enums/BmUnitType.h"
// BEGIN: Includes
#include "Database/Entities/BmFormatOptions.h"
// END: Includes

class OdBmFormatOptions;
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;
class OdBmForgeTypeId;

class OdBmAUnits;
class OdBmAUnitsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAUnits object.
 */
typedef OdSmartPtr<OdBmAUnits> OdBmAUnitsPtr;

/** \details
 A data type that represents an array of OdBmAUnits objects.
 */
typedef OdArray<OdBmAUnitsPtr> OdBmAUnitsPtrArray;

//----------------------------------------------------------
//
// OdBmAUnits
//
//----------------------------------------------------------

/** \details
This class contains DB units settings.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAUnits : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAUnits);
public:
  /** \details
    Returns unit system.
  */
  OdBm::UnitSystem::Enum getUniversalUnitSystem() const;
  /** \details
    Returns decimal symbol.
  */
  OdBm::DecimalSymbol::Enum getDecimalSymbol() const;
  /** \details
    Sets decimal symbol.
    
    \param OdBm::DecimalSymbol::Enum [in] decimal symbol.
  */
  OdResult setDecimalSymbol(OdBm::DecimalSymbol::Enum);
  /** \details
    Returns digit groups separator.
  */
  OdBm::DigitGroupingSymbol::Enum getDigitGroupingSymbol() const;
  /** \details
    Sets digit groups separator.
    
    \param OdBm::DigitGroupingSymbol::Enum [in] digit groups separator.
  */
  OdResult setDigitGroupingSymbol(OdBm::DigitGroupingSymbol::Enum);
  /** \details
    Returns digits groupping number.
  */
  OdBm::DigitGroupingAmount::Enum getDigitGroupingAmount() const;
  /** \details
    Sets digits groupping number.
    
    \param OdBm::DigitGroupingAmount::Enum [in] digits groupping number.
  */
  OdResult setDigitGroupingAmount(OdBm::DigitGroupingAmount::Enum);
  void getFormatOptionsMap(OdBmMap<OdBmForgeTypeId, OdBmFormatOptionsPtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Returns the format options depending on the unit type.
    \param unitType [in] Enum unit type parameter.
  */
  OdBmFormatOptionsPtr getFormatOptions(const OdBm::UnitType::Enum unitType) const;

};


#endif // _BM_AUNITS_H_

