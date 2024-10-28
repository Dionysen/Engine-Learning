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
#include "Base/BmDynamicObject.h"

#ifndef _BMDATABASECDAPROPS_H_
#define _BMDATABASECDAPROPS_H_

/** \details
  RxProperty for Database node Views property.
  Creates Views node from temporary dynamic object.
*/
struct OdBmDatabaseViewsNodeProperty : OdRxProperty
{
  /** \details
    Retuns an OdBmDatabaseViewsNodeProperty object.
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

/** \details
  RxProperty for Database node filename property
*/
struct OdBmDatabaseFileNameProperty : OdRxProperty
{
  /** \details
    Retuns an OdBmDatabaseFileNameProperty object.
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

/** \details
  RxProperty for Database node View property
  Sets active view to filter visible elements.
*/
struct OdBmDatabaseViewProperty : OdRxProperty
{
  
  /** \details
    Retuns an OdBmDatabaseViewProperty object.
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
    Sets the property value.
    \param pO [in] The object which property to set.
    \param value [in] Property value to set.
    \returns Returns eOk if successful. If it returns eNotApplicable the property is considered read-only.
  */
  virtual OdResult subSetValue(OdRxObject* pO, const OdRxValue& value) const ODRX_OVERRIDE;
};

/** \details
  RxProperty for database categories collection.
  Collects databse's elements categories.
*/
struct OdBmDatabaseCategoriesProperty : OdRxCollectionProperty
{
  /** \details
    Sets the it to the beginning of the CategoriesNodes, itEnd - to the end.
    Retruns the instance of the I struct.
    \param pO [in] The object which property to retrieve.
  */
  virtual OdRxValueIteratorPtr subNewValueIterator(const OdRxObject* pO) const ODRX_OVERRIDE;
  
  /** \details
    Counts the size of the CategoriesNodes.
    \param pO [in] The object which property to retrieve.
    \param count [out] Size of the CategoriesNodes.
    \returns eOk if the operation is applicable. eNotApplicable - otherwise.
  */
  virtual OdResult subTryGetCount(const OdRxObject* pO, int& count) const ODRX_OVERRIDE;
  
  /** \details
    Retuns an OdBmDatabaseCategoriesProperty object.
    \param owner [in] Owner of the object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
private:
  OdResult makeCache(OdBmDatabase *pDb) const;
};

/** \details
  RxProperty for Database node display mode.
  If false - group nodes will display with quantity of elements under node: "Category (XX)",
  and elemements will display with DbHandle value after name in [] brackets: "Element [XXXXXX]".
  If true node names will contain description only.
*/
struct OdBmDatabaseClearNamesProperty : OdRxProperty
{
  
  /** \details
    Retuns an OdBmDatabaseClearNamesProperty object.
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
    Sets the property value.
    \param pO [in] The object which property to set.
    \param value [in] Property value to set.
    \returns Returns eOk if successful. If it returns eNotApplicable the property is considered read-only.
  */
  virtual OdResult subSetValue(OdRxObject* pO, const OdRxValue& value) const ODRX_OVERRIDE;
};

#endif // _BMDATABASECDAPROPS_H_
