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

#include "OdaCommon.h"
#include "RxProperty.h"
#include "RxObjectImpl.h"
#include "RxAttribute.h"
#include "RxCategory.h"
#include "RxValueTypeUtil.h"
#include "Database/BmElement.h"

#ifndef _BMDYNNODECDAPROPS_H_
#define _BMDYNNODECDAPROPS_H_

/** \details
  RxProperty for Dynamic node objects collection.
  Collects dynamic object childs.
*/
struct OdBmDynNodeChildsProperty : OdRxCollectionProperty
{
  /** \details
    Sets the it to the beginning of the children array, itEnd - to the end.
    Retruns the instance of the I struct.
    \param pO [in] The object which property to retrieve.
  */
  virtual OdRxValueIteratorPtr subNewValueIterator(const OdRxObject* pO) const ODRX_OVERRIDE;
  
  /** \details
    Counts the size of children.
    \param pO [in] The object which property to retrieve.
    \param count [out] Size of the children array.
    \returns eOk if the operation is applicable. eNotApplicable - otherwise.
  */
  virtual OdResult subTryGetCount(const OdRxObject* pO, int& count) const ODRX_OVERRIDE;
  
  /** \details
    Retuns an OdBmDynNodeChildsProperty object.
    \param owner [in] Owner of the object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
};

/** \details
  RxProperty for Dynamic node name property
*/
struct OdBmDynNodeNameProperty : OdRxProperty
{
  
  /** \details
    Retuns an OdBmDynNodeNameProperty object.
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
  virtual bool isReadOnly(const OdRxObject* obj) const ODRX_OVERRIDE { return true; }
};

#endif // _BMDYNNODECDAPROPS_H_
