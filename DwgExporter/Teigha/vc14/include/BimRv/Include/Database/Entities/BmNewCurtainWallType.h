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

#ifndef _BM_NEWCURTAINWALLTYPE_H_
#define _BM_NEWCURTAINWALLTYPE_H_
#include "Database/Entities/BmWallType.h"
#include "Database/Enums/BmWallKind.h"



class OdBmNewCurtainWallType;
class OdBmNewCurtainWallTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNewCurtainWallType object.
 */
typedef OdSmartPtr<OdBmNewCurtainWallType> OdBmNewCurtainWallTypePtr;

/** \details
 A data type that represents an array of OdBmNewCurtainWallType objects.
 */
typedef OdArray<OdBmNewCurtainWallTypePtr> OdBmNewCurtainWallTypePtrArray;

//----------------------------------------------------------
//
// OdBmNewCurtainWallType
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmNewCurtainWallType : public OdBmWallType {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNewCurtainWallType);
public:
  //
  // Main functionality
  //

  OdBm::WallKind::Enum getWallKind() const
  {
    return OdBm::WallKind::Curtain;
  }
};


#endif // _BM_NEWCURTAINWALLTYPE_H_

