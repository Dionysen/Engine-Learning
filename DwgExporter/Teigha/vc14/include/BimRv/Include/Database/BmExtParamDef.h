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

#ifndef __BM_EXT_PARAMDEF_H__
#define __BM_EXT_PARAMDEF_H__

#include "Database/Entities/BmParamDef.h"
#include "Database/BmDatabase.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmExtParamDef {
  OdString m_name;
  OdBm::ParameterType::Enum m_dataType;
  OdInt64 m_dataCategory;
  OdUInt32 m_groupId;
  bool m_isVisible;
  OdString m_description;
  bool m_isUserMidifiable;
public:
  OdString getName() const {return m_name;};
  OdBm::ParameterType::Enum getDataType() const {return m_dataType;};
  OdInt64 getDataCategory() const {return m_dataCategory;};
  OdUInt32 getGroupId() const {return m_groupId;};
  void setGroupId(OdUInt32 groupId) {m_groupId = groupId;};
  bool getIsVisible() const {return m_isVisible;};
  OdString getDescription() const {return m_description;};
  bool getIsUserMidifiable() const {return m_isUserMidifiable;};
  OdBmParamDefPtr getParamDef(const OdBmDatabasePtr& pDb) const;
  OdBmExtParamDef(const OdBmParamDefPtr& pParamDef, OdUInt32 groupId, const OdString& description);
  OdBmExtParamDef(OdString name, OdBm::ParameterType::Enum dataType, OdInt64 dataCategory, OdUInt32 groupId, bool isVisible, OdString description, bool isUserMidifiable):
                                  m_name(name),
                                  m_dataType(dataType),
                                  m_dataCategory(dataCategory),
                                  m_groupId(groupId),
                                  m_isVisible(isVisible),
                                  m_description(description),
                                  m_isUserMidifiable(isUserMidifiable) {};
};

typedef OdBmMap<OdUInt32, OdString> ExtParamGroupsMap;
typedef OdBmMap<OdGUID, OdBmExtParamDef> ExtParamsMap;

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmExtParamDefFile {
  OdUInt32 m_maxGroupId;
  ExtParamGroupsMap m_groups;
  ExtParamsMap m_params;
  OdUInt32 version, minVersion;

public:
  OdBmExtParamDefFile(): m_maxGroupId(0), version(2), minVersion(1) {};
  const ExtParamGroupsMap& getGroups() const {return m_groups;};
  OdResult addGroup(OdString name, OdInt32& id);
  OdResult deleteGroup(OdUInt32 id);
  OdResult renameGroup(OdUInt32 id, OdString name);
  bool isValidGroup(OdUInt32 id) const;

  const ExtParamsMap& getParams() const {return m_params;};
  const ExtParamsMap getParamsByGroup(OdInt32 groupId) const;
  const OdBmParamDefPtr getParamByGUID(const OdBmDatabasePtr& pDb, const OdGUID& guid) const;
  OdResult addParam(const OdGUID& guid, OdBmExtParamDef& pParamDef);
  OdResult deleteParam(const OdGUID& guid);
  OdResult moveParam(const OdGUID& guid, OdUInt32 groupId);

  static OdBm::ParameterType::Enum getParamTypeByTag(OdString paramTypeTag);
  static OdString getParamTypeTag(OdBm::ParameterType::Enum paramType);

  OdResult loadFromStream(OdStreamBufPtr pStream);
  OdResult saveToStream(OdStreamBufPtr pStream) const;
  void clear();
};

#endif // __BM_EXT_PARAMDEF_H__
