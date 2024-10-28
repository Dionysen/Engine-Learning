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

#ifndef _BM_WALLTYPE_H_
#define _BM_WALLTYPE_H_
#include "Database/Entities/BmHostObjAttr.h"
#include "Database/Enums/BmCurtainWallFamType.h"
#include "Database/Enums/BmWallKind.h"

class OdBmSpacingRule;
typedef OdSmartPtr<OdBmSpacingRule> OdBmSpacingRulePtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmWallType;
class OdBmWallTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWallType object.
 */
typedef OdSmartPtr<OdBmWallType> OdBmWallTypePtr;

/** \details
 A data type that represents an array of OdBmWallType objects.
 */
typedef OdArray<OdBmWallTypePtr> OdBmWallTypePtrArray;

//----------------------------------------------------------
//
// OdBmWallType
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmWallType : public OdBmHostObjAttr {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWallType);
public:
  OdInt32 getAutoJoinCond() const;
  OdInt32 getStructHiddenViewDisplayType() const;
  OdBmObjectId getPanel() const;
  OdBmObjectId getIntMullionsItem(OdUInt32 idx) const;
  void getBordMullions(OdArray<OdBmObjectIdArray > &) const;
  OdInt32 getDefHeightConstraint() const;
  OdInt32 getFunction() const;
  bool getFixed() const;
  bool getAllowAutoEmbed() const;
  OdBmSpacingRulePtr getULineSpec() const;
  OdBmSpacingRulePtr getVLineSpec() const;
  //
  // Main functionality
  //

  //Type of the wall
  virtual OdBm::WallKind::Enum getWallKind() const;
  
  /** \details
    Retuns the curtain wall type.
  */
  OdBm::CurtainWallFamType::Enum getCurtainWallType() const;
};


#endif // _BM_WALLTYPE_H_

