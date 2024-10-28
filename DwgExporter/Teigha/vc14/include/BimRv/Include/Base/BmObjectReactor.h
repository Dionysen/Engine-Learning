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
#ifndef __BM_OBJECTREACTOR_H__
#define __BM_OBJECTREACTOR_H__

#include "Tf/TfObjectReactor.h"

/** \details
    <group Database_Classes>
*/
class TB_BASE_EXPORT OdBmObjectReactor : public OdTfObjectReactor {
public:
  ODRX_DECLARE_MEMBERS(OdBmObjectReactor);

  virtual void copied(const OdTfObject* pElement,
                      const OdTfObject* pNewElement);
  virtual void erased(const OdTfObject* pElement, bool erasing = true);

  virtual void goodbye(const OdTfObject* pElement);

  virtual void openedForModify(const OdTfObject* pElement);

  virtual void modified(const OdTfObject* pElement);

  virtual void modifiedGraphics(const OdTfObject* pElement);

  virtual void modifiedLinkages(const OdTfObject* pElement);

  virtual void subElementModified(const OdTfObject* pElement,
                                  const OdTfObject* pSubElm);

  virtual void modifyUndone(const OdTfObject* pElement);

  virtual void unappended(const OdTfObject* pElement);

  virtual void reappended(const OdTfObject* pElement);

  virtual void freed(const OdTfObject* pElement);

  virtual void closed(OdDbStub* elementId) final { throw OdError(eNotHandled); }
};

typedef OdSmartPtr<OdBmObjectReactor> OdBmObjectReactorPtr;
typedef OdArray<OdBmObjectReactorPtr> OdBmObjectReactorArray;

#endif // __BM_OBJECTREACTOR_H__
