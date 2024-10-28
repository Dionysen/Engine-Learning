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

#ifndef _BM_ES_FIELDHELPER_H_
#define _BM_ES_FIELDHELPER_H_
#include "Base/BmObject.h"
#include "Common/Enums/BmUnitType.h"
#include "Common/Enums/BmDisplayUnitType.h"
#include "Database/Enums/BmESContainerType.h"

/** \details
    This is a helper class to work with fields.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmESFieldHelper {
private:
  OdBmESFieldHelper() {};
public:
  /**
    Constructor. Initializes a property with val.
  */
  OdBmESFieldHelper(const OdTfProperty* val);

  /** Description:
    Returns documentation string for the Field.
  */
  OdString getDocumentation() const;

  /** Description:
    Returns name of the Field.
  */
  OdString getFieldName() const;

  /** Description:
  Returns container type of the Field.
*/
  OdBm::ESContainerType::Enum getContainerType() const;

  /** Description:
    Returns the index of the field.
  */
  OdInt32 getEntryIndex() const;

  /** Description:
    Returns the GUID of the Schema of the entities that are intended to be stored in this field.
  */
  OdGUID getSubSchemaGUID() const;

  /** Description:
    Returns the type of units for the field.
  */
  OdBm::UnitType::Enum getUnitType() const;

private:
  const OdTfProperty* m_pProp;
};


#endif // _BM_ES_FIELDHELPER_H_
