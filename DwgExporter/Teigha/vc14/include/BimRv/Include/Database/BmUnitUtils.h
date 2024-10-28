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
#ifndef __BM_UNITUTILS_H__
#define __BM_UNITUTILS_H__

#include "Geometry/Entities/BmAsset.h"
#include "BmUnitEnums.h"
#include "Database/Entities/BmAUnits.h"

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmUnitUtils {
public:

  /** \details
    Contains information about the unit type.
  */
  struct UnitTypeInfo {
    /** Unit group type.*/
    OdBm::UnitGroup::Enum group;
    
    /** Valid display unit types. */
    OdBm::DisplayUnitTypeArray validDisplayUnitTypes;
    
    /** Unit type catalog string. */
    OdString typeCatalogString;
  };
  
  /** \details
    Contains information about the display unit type.
  */
  struct DisplayUnitTypeInfo {
    
    /** Coefficient. */
    double inIntUnitsCoeff;
    
    /** Unit type catalog string. */
    OdString typeCatalogString;
    
    /** Allowed format options. */
    OdInt32 allowedFormatOptions;
    
    /** Unit system type. */
    OdBm::UnitSystem::Enum unitSystem;
    
    /** \details
      Constructor. Initializes the unit system as imperial.
    */
    DisplayUnitTypeInfo() : unitSystem(OdBm::UnitSystem::Imperial){};
  };
  
  /** \details
    Contains information about the unit symbol type.
  */
  struct UnitSymbolTypeInfo {
    /** Display unit type. */
    OdBm::DisplayUnitType::Enum dut;
  };

  /** \details
    Returns unit type info by enum value.

    \param unitType [in] unit type
  */
  static const UnitTypeInfo*
  getUnitTypeInfo(OdBm::UnitType::Enum unitType);

  /** \details
    Returns display unit type info by enum value.

    \param displayUnitType [in] display unit type
  */
  static const DisplayUnitTypeInfo*
  getDisplayUnitTypeInfo(OdBm::DisplayUnitType::Enum displayUnitType);

  /** \details
    Returns unit symbol type info by enum value.

    \param unitSymbolType [in] unit symbol type
  */
  static const UnitSymbolTypeInfo*
  getUnitSymbolTypeInfo(OdBm::UnitSymbolType::Enum unitSymbolType);

  /** \details
    Converts a value from one display unit to another

    \param value [in] value in current display unit
    \param currentDisplayUnit [in] current display unit
    \param desiredDisplayUnit [in] display unit to convert to
  */
  static double
  convert(const double value,
    const OdBm::DisplayUnitType::Enum currentDisplayUnit,
    const OdBm::DisplayUnitType::Enum desiredDisplayUnit);

  /** \details
    Converts 3d point from one display unit to another

    \param value [in] 3d point with coordinates in current display unit
    \param currentDisplayUnit [in] current display unit
    \param desiredDisplayUnit [in] display unit to convert to
  */
  static OdGePoint3d
  convert(const OdGePoint3d& value,
    const OdBm::DisplayUnitType::Enum currentDisplayUnit,
    const OdBm::DisplayUnitType::Enum desiredDisplayUnit);

  /** \details
    Converts 2d point from one display unit to another

    \param value [in] 2d point with coordinates in current display unit
    \param currentDisplayUnit [in] current display unit
    \param desiredDisplayUnit [in] display unit to convert to
  */
  static OdGePoint2d
  convert(const OdGePoint2d& value,
    const OdBm::DisplayUnitType::Enum currentDisplayUnit,
    const OdBm::DisplayUnitType::Enum desiredDisplayUnit);

  /** \details
    Converts a value from internally stored in DB to desired display unit

    \param value [in] value to convert
    \param displayUnit [in] display unit to convert to
  */
  static double
  convertFromInternalUnits(double value,
    OdBm::DisplayUnitType::Enum displayUnit);

  /** \details
    Converts a value from current display unit to DB stored value

    \param value [in] value to convert
    \param displayUnit [in] display unit to convert from
  */
  static double
  convertToInternalUnits(double value,
    OdBm::DisplayUnitType::Enum displayUnit);

  /** \details
    Checks if unit type valid

    \param unitType [in] unit type to check
  */
  static bool
  isValidUnitType(OdBm::UnitType::Enum unitType);

  /** \details
    Returns array of unit types

    \param aUnitTypes [out] array to fill
    \param unitGroup [in] optional, unit type group to filter by
  */
  static void
  getValidUnitTypes(OdBm::UnitTypeArray& aUnitTypes,
                    OdBm::UnitGroup::Enum unitGroup = OdBm::UnitGroup::None);

  /** \details
    Checks if display unit type valid and belongs to unit type

    \param unitType [in] unit type display unit type must belong to
    \param displayUnit [in] display unit type to check
  */
  static bool
  isValidDisplayUnit(OdBm::UnitType::Enum unitType,
                     OdBm::DisplayUnitType::Enum displayUnit);
  /** \details
    Checks if display unit type valid

    \param displayUnit [in] display unit type to check
  */
  static bool
  isValidDisplayUnit(OdBm::DisplayUnitType::Enum displayUnit);

  /** \details
    Returns array of display unit types that belong to given unit type

    \param unitType [in] unit type display unit types must belong to
  */
  static const OdBm::DisplayUnitTypeArray&
  getValidDisplayUnits(OdBm::UnitType::Enum unitType);

  /** \details
    Returns array of display unit types

    \param aDisplayUnitTypes [out] display unit type array to fill
  */
  static void getValidDisplayUnits(OdBm::DisplayUnitTypeArray& aDisplayUnitTypes);

  /** \details
    Returns unit group given unit type belongs to

    \param unitType [in] unit type
  */
  static OdBm::UnitGroup::Enum getUnitGroup(OdBm::UnitType::Enum unitType);

  /** \details
    Returns display unit type catalog string

    \param displayUnit [in] display unit type
  */
  static OdString getTypeCatalogString(OdBm::DisplayUnitType::Enum displayUnit);

  /** \details
    Returns unit type catalog string

    \param unitType [in] unit type
  */
  static OdString getTypeCatalogString(OdBm::UnitType::Enum unitType);

  /** \details
    Returns array of unit symbol types

    \param aUnitSymbolTypes [out] array to fill
    \param displayUnitType [in] optional, display unit type group to filter by
  */
  static void getValidUnitSymbols(OdBm::UnitSymbolTypeArray& aUnitSymbolTypes,
                                  OdBm::DisplayUnitType::Enum displayUnitType =
                                      OdBm::DisplayUnitType::DUT_UNDEFINED);

  /** \details
    Returns decimal symbol char by enum value

    \param symbol [in] decimal symbol enum value
  */
  static OdChar getDecimalSymbol(OdBm::DecimalSymbol::Enum symbol);

  /** \details
    Returns grouping symbol char by enum value

    \param symbol [in] grouping symbol enum value
  */
  static OdChar getGroupingSymbol(OdBm::DigitGroupingSymbol::Enum symbol);

  /** \details
    Returns default display unit type for given unit type

    \param aUnits [in] object stores unit types settings in DB
    \param unitType [in] unit type to get display unit type for
  */
  static OdBm::DisplayUnitType::Enum
  getDefaultDUT(const OdBmAUnitsPtr& aUnits, const OdBm::UnitType::Enum unitType);

  /** \details
    Returns default display unit type for given unit type

    \param unitSystem [in] unit system
    \param unitType [in] unit type to get display unit type for
  */
  static OdBm::DisplayUnitType::Enum
  getDefaultDUT(const OdBm::UnitSystem::Enum unitSystem,
    const OdBm::UnitType::Enum unitType);

  /** \details
    Checks if scale predifined in given unit system

    \param unitSystem [in] unit system
    \param scale [in] scale value to check
  */
  static bool isScalePredefined(OdBm::UnitSystem::Enum unitSystem, OdInt32 scale);

  /** \details
    returns scale value as string

    \param feetInches [in] true if scale in feet/inches must be returned, false otherwise
    \param scale [in] scale to get string value for
  */
  static OdString getScaleAsString(bool feetInches, double scale);
};

#endif //__BM_UNITUTILS_H__
