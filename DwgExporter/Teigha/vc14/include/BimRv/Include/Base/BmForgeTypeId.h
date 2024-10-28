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

#ifndef _BM_FORGE_TYPE_ID_H_
#define _BM_FORGE_TYPE_ID_H_

#include "Common/Enums/BmDisplayUnitType.h"
#include "Common/Enums/BmUnitSymbolType.h"
#include "Common/Enums/BmUnitType.h"


//----------------------------------------------------------
//
// OdBmForgeTypeId
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_BASE_EXPORT OdBmForgeTypeId {
public:
  OdBmForgeTypeId(const OdBm::UnitType::Enum);
  OdBmForgeTypeId(const OdBm::DisplayUnitType::Enum);
  OdBmForgeTypeId(const OdBm::UnitSymbolType::Enum);
  OdBmForgeTypeId(const OdString& value = OdString::kEmpty);
  OdBmForgeTypeId(const OdBmForgeTypeId& originalObject);
  OdBmForgeTypeId& operator=(const OdBmForgeTypeId& originalObject);

  operator OdBm::UnitType::Enum() const;
  operator OdBm::UnitSymbolType::Enum() const;
  operator OdBm::DisplayUnitType::Enum() const;
  operator OdString() const;

  bool operator==(const OdBmForgeTypeId& other) const;
  bool operator!=(const OdBmForgeTypeId& other) const;

  bool operator==(const OdBm::UnitType::Enum other) const;
  bool operator==(const OdBm::UnitSymbolType::Enum other) const;
  bool operator==(const OdBm::DisplayUnitType::Enum other) const;
  bool operator!=(const OdBm::UnitType::Enum other) const;
  bool operator!=(const OdBm::UnitSymbolType::Enum other) const;
  bool operator!=(const OdBm::DisplayUnitType::Enum other) const;

  OdString asString() const;
  OdResult asUnitType(OdBm::UnitType::Enum& value) const;
  OdResult asUnitSymbolType(OdBm::UnitSymbolType::Enum& value) const;
  OdResult asDisplayUnitType(OdBm::DisplayUnitType::Enum& value) const;

private:
  OdString m_typeId;

};

bool TB_BASE_EXPORT operator<(const OdBmForgeTypeId& lhs,
                              const OdBmForgeTypeId& rhs);

bool TB_BASE_EXPORT operator==(const OdBm::UnitType::Enum lhs,
                               const OdBmForgeTypeId& rhs);
bool TB_BASE_EXPORT operator==(const OdBm::UnitSymbolType::Enum lhs,
                               const OdBmForgeTypeId& rhs);
bool TB_BASE_EXPORT operator==(const OdBm::DisplayUnitType::Enum lhs,
                               const OdBmForgeTypeId& rhs);
bool TB_BASE_EXPORT operator!=(const OdBm::UnitType::Enum lhs,
                               const OdBmForgeTypeId& rhs);
bool TB_BASE_EXPORT operator!=(const OdBm::UnitSymbolType::Enum lhs,
                               const OdBmForgeTypeId& rhs);
bool TB_BASE_EXPORT operator!=(const OdBm::DisplayUnitType::Enum lhs,
                               const OdBmForgeTypeId& rhs);

#endif // _BM_FORGE_TYPE_ID_H_
