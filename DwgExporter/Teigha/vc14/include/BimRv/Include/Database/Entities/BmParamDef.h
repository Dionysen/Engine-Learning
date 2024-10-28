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

#ifndef _BM_PARAMDEF_H_
#define _BM_PARAMDEF_H_
#include "Base/BmObject.h"
#include "Common/Enums/BmParameterType.h"
#include "Database/Enums/BmStorageType.h"
#include "Common/Enums/BmUnitType.h"
// BEGIN: Includes
#include "Database/BmDatabase.h"
// END: Includes



class OdBmParamDef;
class OdBmParamDefImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmParamDef object.
 */
typedef OdSmartPtr<OdBmParamDef> OdBmParamDefPtr;

/** \details
 A data type that represents an array of OdBmParamDef objects.
 */
typedef OdArray<OdBmParamDefPtr> OdBmParamDefPtrArray;

//----------------------------------------------------------
//
// OdBmParamDef
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmParamDef : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmParamDef);
public:
  OdString getCaption() const;
  OdResult setCaption(const OdString&);
  OdBmObjectId::handle_type getParamElemId() const;
  OdResult setParamElemId(OdBmObjectId::handle_type);
  OdBmObjectId::handle_type getGroupElemId() const;
  OdResult setGroupElemId(OdBmObjectId::handle_type);
  bool getIsReadOnly() const;
  OdResult setIsReadOnly(bool);
  bool getIsUserVisible() const;
  OdResult setIsUserVisible(bool);
  bool getIsAllowVaryBetweenGroups() const;
  OdResult setIsAllowVaryBetweenGroups(bool);
  //
  // Main functionality
  //

  OdBm::StorageType::Enum getStorageType() const;
  OdBm::UnitType::Enum getUnitType() const;
  OdBm::ParameterType::Enum getParameterType() const;
  OdResult validateValue(const OdString& str, OdString& comment) const;
  OdResult validateValue(OdBmDatabase* pDb, double d, OdString& comment) const;
  OdResult validateValue(OdInt32 i, OdString& comment) const;
  OdResult validateValue(OdBmObjectId oid, OdString& comment) const;
};


#endif // _BM_PARAMDEF_H_

