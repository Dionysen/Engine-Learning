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

#ifndef _BM_RBSSYSTEMTYPE_H_
#define _BM_RBSSYSTEMTYPE_H_
#include "Database/Entities/BmSymbol.h"
#include "Common/Enums/BmSystemType.h"



class OdBmRbsSystemType;
class OdBmRbsSystemTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsSystemType object.
 */
typedef OdSmartPtr<OdBmRbsSystemType> OdBmRbsSystemTypePtr;

/** \details
 A data type that represents an array of OdBmRbsSystemType objects.
 */
typedef OdArray<OdBmRbsSystemTypePtr> OdBmRbsSystemTypePtrArray;

//----------------------------------------------------------
//
// OdBmRbsSystemType
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRbsSystemType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsSystemType);
public:
  OdString getAbbreviation() const;
  OdBmObjectPtr getSystemOverrides() const;
  OdInt32 getCalculationLevel() const;
  OdBm::SystemType::Enum getBasicSystemType() const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSSYSTEMTYPE_H_

