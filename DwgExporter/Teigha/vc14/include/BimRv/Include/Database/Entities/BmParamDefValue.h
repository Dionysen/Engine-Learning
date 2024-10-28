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

#ifndef _BM_PARAMDEFVALUE_H_
#define _BM_PARAMDEFVALUE_H_
#include "Database/Entities/BmParamDef.h"
#include "Common/Enums/BmUnitType.h"

class OdBmForgeTypeId;

class OdBmParamDefValue;
class OdBmParamDefValueImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmParamDefValue object.
 */
typedef OdSmartPtr<OdBmParamDefValue> OdBmParamDefValuePtr;

/** \details
 A data type that represents an array of OdBmParamDefValue objects.
 */
typedef OdArray<OdBmParamDefValuePtr> OdBmParamDefValuePtrArray;

//----------------------------------------------------------
//
// OdBmParamDefValue
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmParamDefValue : public OdBmParamDef {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmParamDefValue);
public:
  OdInt32 getRestriction() const;
  OdResult setRestriction(OdInt32);
  bool getBoundless() const;
  OdResult setBoundless(bool);
  OdBmForgeTypeId getSpecTypeId() const;
  OdResult setSpecTypeId(const OdBmForgeTypeId&);
  //
  // Main functionality
  //

  void setUnitType(const OdBm::UnitType::Enum value);

};


#endif // _BM_PARAMDEFVALUE_H_

