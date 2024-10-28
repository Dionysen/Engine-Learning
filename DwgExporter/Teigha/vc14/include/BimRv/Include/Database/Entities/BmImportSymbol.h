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

#ifndef _BM_IMPORTSYMBOL_H_
#define _BM_IMPORTSYMBOL_H_
#include "Database/Entities/BmLinkType.h"

class OdBmEntityInfo;
typedef OdSmartPtr<OdBmEntityInfo> OdBmEntityInfoPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmImportSymbol;
class OdBmImportSymbolImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmImportSymbol object.
 */
typedef OdSmartPtr<OdBmImportSymbol> OdBmImportSymbolPtr;

/** \details
 A data type that represents an array of OdBmImportSymbol objects.
 */
typedef OdArray<OdBmImportSymbolPtr> OdBmImportSymbolPtrArray;

//----------------------------------------------------------
//
// OdBmImportSymbol
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmImportSymbol : public OdBmLinkType {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmImportSymbol);
public:
  void getParentIdSet(OdBmObjectIdArray &) const;
  OdResult setParentIdSet(const OdBmObjectIdArray&);
  void getEntities(OdArray<OdBmEntityInfoPtr> &) const;
  OdResult setEntities(const OdArray<OdBmEntityInfoPtr>&);
  void getLayerCategoryIdSet(OdBmObjectIdArray &) const;
  OdResult setLayerCategoryIdSet(const OdBmObjectIdArray&);
  void getFontIds(OdBmObjectIdArray &) const;
  OdResult setFontIds(const OdBmObjectIdArray&);
  void getGStyleIds(OdBmObjectIdArray &) const;
  OdResult setGStyleIds(const OdBmObjectIdArray&);
  OdBmObjectId getViewId() const;
  OdResult setViewId(const OdBmObjectId&);
  OdBmObjectId getCategoryId() const;
  OdResult setCategoryId(const OdBmObjectId&);
  OdInt32 getDgnViewNum() const;
  OdResult setDgnViewNum(OdInt32);
  OdBmObjectId getMasterSymbolId() const;
  OdResult setMasterSymbolId(const OdBmObjectId&);
  bool getIsModifiable() const;
  OdResult setIsModifiable(bool);
  bool getIsVirginData() const;
  OdResult setIsVirginData(bool);
  bool getIsVirginGeom() const;
  OdResult setIsVirginGeom(bool);
  void getSubSymbolMapInt(OdInt32Array &) const;
  OdResult setSubSymbolMapInt(const OdInt32Array&);
  void getSubSymbolMapElemId(OdBmObjectIdArray &) const;
  OdResult setSubSymbolMapElemId(const OdBmObjectIdArray&);
  void getUsedMaterialIds(OdBmObjectIdArray &) const;
  void getSubSymbolMap(OdBmMap<OdInt32, OdBmObjectId> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_IMPORTSYMBOL_H_

