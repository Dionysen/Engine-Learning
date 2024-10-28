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

#ifndef _BMELEMENTCDAPROPS_H_
#define _BMELEMENTCDAPROPS_H_

#include "OdaCommon.h"
#include "RxProperty.h"
#include "RxObjectImpl.h"
#include "RxAttribute.h"
#include "RxCategory.h"
#include "RxValueTypeUtil.h"
#include "BimCommon.h"
#include "Database/Enums/BmStorageType.h"

/** \details
  RxProperty for BuiltIn representation of OdBmElement object's Params.
  To enable BuiltIn Properties display - add BUILTINPROPENABLE in preprocessor definitions
*/
struct OdBmElementBuiltInProperty : OdRxProperty
{
  
  /** \details
    Creates an OdBmElementBuiltInProperty object.
    \param strName [in] Name.
    \param odType [in] Enum value. Can be: Integer, Double, String, ElementId.
    \param parameterId [in] id that will be set to a parameter.
    \param owner [in] Owner of the object.
  */
  static OdRxMemberPtr createObject(const OdString& strName, OdBm::StorageType::Enum odType, OdBm::BuiltInParameter::Enum parameterId, const OdRxClass* owner);
  
  /** \details
    Gets the property value. 
    \param pO [in] The object which property to retrieve. 
    \param value [out] Resulting value.
    \returns Returns eOk if successful. Returns eNotApplicable - otherwise.
  */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;
  
  /** \details
    Checks if the object is only readable.
    \param obj [in] The object to check.
  */
  virtual bool isReadOnly(const OdRxObject* pO) const ODRX_OVERRIDE { return true; };

private:
  /** \details
    Defines type of RxProperty ValueType.
    Supported types:
    OdVariant::kInt32
    OdVariant::kDouble
    OdVariant::kString
    OdTfVariant::kDbStubPtr
    details: https://docs.opendesign.com/tbim/tbim_parameters_overview.html
  */
  OdBm::StorageType::Enum odType_;
  
  /** \details
    Stores the corresponding Element Parameter Id
    details: https://docs.opendesign.com/tbim/tbim_parameters_built_in.html
  */
  OdBm::BuiltInParameter::Enum parameterId_;
};

/** \details
  RxProperty for customer representation of OdBmElement object's Params.
*/
struct OdBmElementCustomerProperty : OdRxProperty
{
  /** \details
    Creates an OdBmElementCustomerProperty object.
    \param strName [in] Name.
    \param strGroup [in] Group.
    \param odType [in] Enum value. Can be: Integer, Double, String, ElementId.
    \param parameterId [in] id that will be set to a parameter.
    \param owner [in] Owner of the object.
  */
  static OdRxMemberPtr createObject(const OdString& strName, const OdString& strGroup, OdBm::StorageType::Enum odType, OdBm::BuiltInParameter::Enum parameterId, const OdRxClass* owner);
  
  /** \details
    Gets the property value. 
    \param pO [in] The object which property to retrieve. 
    \param value [out] Resulting value.
    \returns Returns eOk if successful. Returns eNotApplicable - otherwise.
  */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;
  
  /** \details
    Checks if the object is only readable.
    \param obj [in] The object to check.
  */
  virtual bool isReadOnly(const OdRxObject* pO) const ODRX_OVERRIDE { return true; };

private:
  /** \details
    Defines type of RxProperty ValueType.
    Supported types:
    OdVariant::kInt32
    OdVariant::kDouble
    OdVariant::kString
    OdTfVariant::kDbStubPtr
    details: https://docs.opendesign.com/tbim/tbim_parameters_overview.html
  */
  OdBm::StorageType::Enum odType_;

  /** \details
    Stores the corresponding Element Parameter Id
    details: https://docs.opendesign.com/tbim/tbim_parameters_built_in.html
  */
  OdBm::BuiltInParameter::Enum parameterId_;
};

/** \details
  RxProperty for OdBmElement ODAUniqueID property.
  Uses database handle as ODAUniqueId
*/
struct OdBmElementUniqueIdProperty : OdRxProperty
{
  /** \details
    Creates an OdBmElementUniqueIdProperty object.
    \param owner [in] Owner of the object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
  
  /** \details
    Gets the property value. 
    \param pO [in] The object which property to retrieve. 
    \param value [out] Resulting value.
    \returns Returns eOk if successful. Returns eNotApplicable - otherwise.
  */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;
  
  /** \details
    Checks if the object is only readable.
    \param obj [in] The object to check.
  */
  virtual bool isReadOnly(const OdRxObject* pO) const ODRX_OVERRIDE { return true; };
};

/** \details
  RxProperty for OdBmElement name property.
  Try to name BmElement from getShortDescriptiveName(), then from getElementName(), then from isA()->name().
*/
struct OdBmElementShortDescProperty : OdRxProperty
{
  /** \details
    Creates an OdBmElementShortDescProperty object.
    \param owner [in] Owner of the object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
  
  /** \details
    Gets the property value. 
    \param pO [in] The object which property to retrieve. 
    \param value [out] Resulting value.
    \returns Returns eOk if successful. Returns eNotApplicable - otherwise.
  */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;
  
  /** \details
    Checks if the object is only readable.
    \param obj [in] The object to check.
  */
  virtual bool isReadOnly(const OdRxObject* pO) const ODRX_OVERRIDE { return true; };
};

#endif // _BMELEMENTCDAPROPS_H_
