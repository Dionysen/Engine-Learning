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

#ifndef _BM_BLOB_OBJECT_H_
#define _BM_BLOB_OBJECT_H_

#include "Tf/TfObject.h"

class OdBmBlobObject;
class OdBmBlobObjectImpl;
typedef OdSmartPtr<OdBmBlobObject> OdBmBlobObjectPtr;

/** \details
    <group Base_Classes>
*/
class TB_BASE_EXPORT OdBmBlobObject : public OdTfObject {
  ODBM_DECLARE_BASE_MEMBERS(OdBmBlobObject);
public:
  typedef OdTfObject super;
  typedef super::PropertyIndexType PropertyIndexType;
  typedef super::ItemIndexType ItemIndexType;
  typedef OdArray<OdUInt8> BlobStorage;

  OdBmBlobObject();
  ~OdBmBlobObject();

  const BlobStorage& data() const;

  virtual OdResult getProperty(
      const OdTfProperty* pPI, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const OdTfProperty* pPI, const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) ODRX_OVERRIDE;

  virtual OdResult getProperty(
      const OdString& name, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1,
      const OdTfClass* pClass = NULL) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const OdString& name, const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1,
      const OdTfClass* pClass = NULL) ODRX_OVERRIDE;

  virtual OdResult getProperty(
      const PropertyIndexType propertyIndex, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const PropertyIndexType propertyIndex,
      const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) ODRX_OVERRIDE;

  virtual const OdTfObject* getOwner() const ODRX_OVERRIDE { throw OdError(eNotHandled); }
  virtual void addReactor(OdTfObjectReactor* pReactor) ODRX_OVERRIDE;
  virtual void removeReactor(OdTfObjectReactor* pReactor) ODRX_OVERRIDE;
  virtual void addPersistentReactor(OdTfPersistentReactor*) ODRX_OVERRIDE;
  virtual void removePersistentReactor(OdTfPersistentReactor*) ODRX_OVERRIDE;
  virtual bool hasPersistentReactor(OdTfPersistentReactor*) const ODRX_OVERRIDE;
  virtual void getPersistentReactors(OdTfPersistentReactorArray& elmIds) ODRX_OVERRIDE;
  virtual void getTransientReactors(OdTfObjectReactorArray& reactors) ODRX_OVERRIDE;

  virtual OdDbStub* id(void) const ODRX_OVERRIDE;
  virtual bool subWorldDraw(OdGiWorldDraw*) const ODRX_OVERRIDE;
  virtual void subViewportDraw(OdGiViewportDraw*) const ODRX_OVERRIDE;
  virtual bool isPersistent(void) const ODRX_OVERRIDE;
  virtual void setGsNode(OdGsCache*) ODRX_OVERRIDE;
  virtual OdGsCache* gsNode(void) const ODRX_OVERRIDE;
  virtual OdUInt32 subSetAttributes(OdGiDrawableTraits*) const ODRX_OVERRIDE;
  virtual OdGiDrawable::DrawableType drawableType() const ODRX_OVERRIDE;

  virtual OdRxObjectPtr clone() const ODRX_OVERRIDE;
protected:
  OdBmBlobObjectImpl* m_pImpl;
};

#endif // _BM_BLOB_OBJECT_H_
