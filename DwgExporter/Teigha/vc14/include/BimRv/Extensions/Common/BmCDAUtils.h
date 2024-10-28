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

#ifndef _BM_CDA_UTILS_H_
#define _BM_CDA_UTILS_H_

#include "Database/Managers/BmViewTable.h"
#include "Database/Entities/BmDBView3d.h"

template <class T>
const OdTfAttribute* attribute(T&& value, const OdString& name) {
  OdBmObjectPtr pBmObj = OdBmObject::cast(std::forward<T>(value));
  if (pBmObj.isNull()) {
    return nullptr;
  }

  OdTfClass* pObjClass = pBmObj->isA();

  const OdTfAttributesContainerPtr attrCont = pObjClass->attributes();
  const OdTfAttribute* attr = attrCont->find(name);

  return attr;
}

inline OdResult getViews(const OdRxObject* pObj, OdBmObjectIdArray& aViews) {
  if (pObj->isA()->name() != L"viewsNodeEntity") {
    return eNotApplicable;
  }

  OdBmDatabasePtr pDb = attribute(pObj, "DatabasePtr")->value().getRxObjectPtr();

  OdBmViewTablePtr pViewTable = pDb->getAppInfo(OdBm::ManagerType::ViewTable);

  for (OdBmObjectId id: pViewTable->createIteratorViews()) {
    if (OdBm::Utils::descById(id) == OdBmDBView3d::desc()) {
      aViews.push_back(id);
    }
  }
  return eOk;
}

#endif // _BM_CDA_UTILS_H_
