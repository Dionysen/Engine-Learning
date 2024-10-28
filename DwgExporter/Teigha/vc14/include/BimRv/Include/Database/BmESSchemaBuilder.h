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

#ifndef _BM_ES_SCHEMA_BUILDER_H_
#define _BM_ES_SCHEMA_BUILDER_H_

#include "Base/BmObject.h"
#include "Database/Enums/BmESContainerType.h"
#include "Database/Enums/BmESSchemaAccessLevel.h"
#include "Common/Enums/BmUnitType.h"
#include "Common/Enums/BmDisplayUnitType.h"
#include "Database/BmESFieldBuilder.h"

class OdBmDatabase;
class OdBmESSchemaBuilderImpl;

/** \details
    <group Database_Classes>

  Description:
  This class is used to create Schemas in the Extensible Storage framework.
*/
class TB_DB_EXPORT OdBmESSchemaBuilder {
public:
  /** Description:
    Checks whether the supplied GUID value is valid.
  */
  static bool isValidGUID(const OdBmDatabase*, const OdGUID&);
  /** Description:
    Checks whether the given vendor ID string is valid.
    A valid vendor ID string:
    Has a length of at least 4 characters and no more than 253 characters
    and contains only letters, digits, or any of the following special characters: ! " # & \ ( ) + , . - : ; < = > ? _ ` | ~
  */
  static bool isValidVendorId(const OdString&);

  /** Description:
    Checks whether a string is an acceptable name for a Schema or a Field.
    Returns:
    True if the name is acceptable.
    Remarks:
    For interoperability, names are required to be usable as C++ identifiers.
    The allowable characters are ASCII letters, numbers (except the first character) and underscore.
    The length must be between 1 and 247 characters.
  */
  static bool isAcceptableName(const OdString&);

  /** \details
    Constructor. Assigns a schema builder to a database and preallocates memory.
  */
  OdBmESSchemaBuilder(const OdBmDatabase* pDb);

  /** \details
    Destructor.
  */
  ~OdBmESSchemaBuilder();

  /** Description:
    Sets the GUID of the Schema.
  */
  OdBmESSchemaBuilder& setSchemaGUID(const OdGUID&);
  /** Description:
    Sets the name of the Schema.
  */
  OdBmESSchemaBuilder& setSchemaName(const OdString&);
  /** Description:
    Sets the documentation string for the Schema.
  */
  OdBmESSchemaBuilder& setDocumentation(const OdString&);
  /** Description:
    Sets the ID of the third-party vendor that may access entities of this Schema under the Vendor acess level, and to generally identify the owner of this Schema.
  */
  OdBmESSchemaBuilder& setVendorId(const OdString&);
  /** Description:
    Sets the GUID of the application or add-in that may access entities of this Schema under the Application acess level.
  */
  OdBmESSchemaBuilder& setApplicationGUID(const OdGUID&);
  /** Description:
    Sets top level read access (for entities).
  */
  OdBmESSchemaBuilder& setReadAccessLevel(const OdBm::ESSchemaAccessLevel::Enum&);
  /** Description:
    Sets top level write access (for entities).
  */
  OdBmESSchemaBuilder& setWriteAccessLevel(const OdBm::ESSchemaAccessLevel::Enum&);
  /** Description:
    Checks whether the builder may be used.
    Returns:
    True if the SchemaBuilder has been finished.
    Remarks:
    All newly constructed SchemaBuilders are usable until the call to the createSchema method.
  */
  bool isFinished() const;
  /** Description:
    Returns the finished Schema.
    throws
    eInvalid
    if the SchemaBuilder has already finished building the Schema;
    or two fields with the same name are detected;
    or at least one field has invalid units;
    or SchemaName is not set;
    or VendorId is not set for a restricted access level;
    or ApplicationGUID is not set for an application access level;
    or More than 256 fields were added to the schema.
  */
  OdTfClass* finish();

  /** Description:
    Creates a field containing a value in the Schema, with given name and type.
    The supported types are bool, char, OdInt16, OdInt32, float, double, OdBmObjectId, OdGUID,
    OdString, OdGePoint3d, OdGePoint2d, OdGeVector3d, OdGeVector2d, Entity.
  */
  template<class T>
  TB_DB_EXPORT OdBmESFieldBuilder addSimpleField(const OdString& fieldName);

  /** \details
    Creates an array field containing values in the Schema, with a given name and a type.
    The supported types are bool, char, OdInt16, OdInt32, float, double, OdBmObjectId, OdGUID,
    OdString, OdGePoint3d, OdGePoint2d, OdGeVector3d, OdGeVector2d, Entity.
  */
  template<class T>
  TB_DB_EXPORT OdBmESFieldBuilder addArrayField(const OdString& fieldName);

  /** \details
    Creates an map field containing keys and values in the Schema, with given name and type.
    The supported types are bool, char, OdInt16, OdInt32, float, double, OdBmObjectId, OdGUID,
    OdString, OdGePoint3d, OdGePoint2d, OdGeVector3d, OdGeVector2d, Entity.
  */
  template<class K, class V>
  TB_DB_EXPORT OdBmESFieldBuilder addMapField(const OdString& fieldName);
private:
  inline OdBmESSchemaBuilderImpl* getImpl() {
    return reinterpret_cast<OdBmESSchemaBuilderImpl*>(m_pImpl);
  }
  inline const OdBmESSchemaBuilderImpl* getImpl() const {
    return reinterpret_cast<const OdBmESSchemaBuilderImpl*>(m_pImpl);
  }
  friend class OdBmESSchemaBuilderImpl;
protected:
  OdBmESSchemaBuilder() {};
  OdBmESSchemaBuilder(OdBmESSchemaBuilderImpl* pImpl);

  OdBmESSchemaBuilderImpl* m_pImpl;
};

#endif // _BM_ES_SCHEMA_BUILDER_H_
