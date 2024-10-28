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

#ifndef _BM_ES_SCHEMAHELPER_H_
#define _BM_ES_SCHEMAHELPER_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmESSchemaAccessLevel.h"
#include "Database/BmESFieldHelper.h"
#include "Base/BmObjectIdArray.h"

class OdBmDatabase;
typedef OdSmartPtr<OdBmDatabase> OdBmDatabasePtr;

/** \details
    This is a helper class to work with schemas.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmESSchemaHelper {
private:
  OdBmESSchemaHelper() {};
public:
  /** \details
    Construcor. Initializes a schema with val.
  */
  OdBmESSchemaHelper(const OdTfClass* val);

  /** Description:
    Returns helper for field with specified name
  */
  OdBmESFieldHelper getField(const OdString& fieldName) const;

  /** Description:
    Returns the complete list of fields in the Schema, sorted by name.
  */
  std::set<OdString> listFields() const;

  /** Description:
  Returns schema documentation attribute
  */
  OdString getDocumentation() const;

  /** Description:
  Returns schema name
  */
  OdString getSchemaName() const;

  /** Description:
  Returns the ID of the third-party vendor that may access entities
  of this Schema under the Vendor acess level, and to generally identify
  the owner of this Schema.
  */
  OdString getVendorId() const;

  /** Description:
  Returns the GUID of the application or add-in that may access entities
  of this Schema under the Application acess level.
  */
  OdGUID getApplicationGUID() const;

  /** Description:
  Returns schema GUID
  */
  OdGUID getSchemaGUID() const;

  /** Description:
  Returns top level read access
  */
  OdBm::ESSchemaAccessLevel::Enum getReadAccessLevel() const;

  /** Description:
  Returns top level write access
  */
  OdBm::ESSchemaAccessLevel::Enum getWriteAccessLevel() const;

  /** Description:
    Returns the complete list of schemas, stored in database.
  */
  static std::set<OdGUID> listSchemas(const OdBmDatabasePtr&);

  /** Description:
    Returns the array of elements in database, related to specified Schema GUID.
  */
  static OdBmObjectIdArray getElements(const OdGUID&, const OdBmDatabasePtr&);
private:
  const OdTfClass* m_pSchema;
};


#endif // _BM_ES_SCHEMAHELPER_H_
