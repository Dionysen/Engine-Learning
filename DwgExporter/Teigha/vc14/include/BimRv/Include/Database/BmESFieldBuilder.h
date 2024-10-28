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

#ifndef _BM_ES_FIELD_BUILDER_H_
#define _BM_ES_FIELD_BUILDER_H_

#include "Database/Enums/BmESFieldType.h"
#include "Database/Enums/BmESContainerType.h"
#include "Common/Enums/BmUnitType.h"

/** \details
  This structure stores data about a field.
*/
struct OdBmESFieldData {
  /** Identifier. */
  OdInt32 m_idx;

  /** Spec type. */
  OdBmForgeTypeId m_specTypeId;

  /** Flag to restrict setting for non-float types. */
  bool m_unitTypeEnabled;                        // used to restrict setting for non-float types

  /** Field type. */
  OdBm::ESFieldType::Enum m_fieldType;

  /** Variant type. */
  OdTfVariant::Type m_variantType;

  /** Container type. */
  OdBm::ESContainerType::Enum m_containerType;

  /** Schema unique id. */
  OdGUID m_subSchemaGuid;

  /** Name. */
  OdString m_name;

  /** Documentation. */
  OdString m_doc;

  /** Subclass. */
  OdTfClass* m_pSubClass;

  /** \details
    Constructor. Sets unit type to undefined, variant type to empty and
    m_unitTypeEnabled to false.
  */
  OdBmESFieldData()
    : m_specTypeId(OdBm::UnitType::UT_Undefined),
      m_variantType(OdTfVariant::kEmpty),
      m_unitTypeEnabled(false){}
};

/** \details
  This is a field builder class.
*/
class TB_DB_EXPORT OdBmESFieldBuilder {
public:

  /** \details
    Constructor for OdBmESFieldBuilder.

    \param data [in] Special object to initialize data fields.
  */
  OdBmESFieldBuilder(OdBmESFieldData& data);

  /** \details
    Sets documentation for a field.

    \param value [in] Documentation text to be set.
  */
  OdBmESFieldBuilder& setDocumentation(const OdString& value);

  /** \details
    Sets a schema GUID.

    \param value [in] GUID to be set.
  */
  OdBmESFieldBuilder& setSubSchemaGUID(const OdGUID& value);

  /** \details
    Sets a unit type.

    \param value [in] Unit type to be set.
  */
  OdBmESFieldBuilder& setUnitType(const OdBm::UnitType::Enum value);

private:
  OdBmESFieldData& m_data;
};

#endif // _BM_ES_FIELD_BUILDER_H_
