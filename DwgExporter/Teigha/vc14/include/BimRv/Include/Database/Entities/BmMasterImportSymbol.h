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

#ifndef _BM_MASTERIMPORTSYMBOL_H_
#define _BM_MASTERIMPORTSYMBOL_H_
#include "Database/Entities/BmImportSymbol.h"

class OdBmImportFileData;
typedef OdSmartPtr<OdBmImportFileData> OdBmImportFileDataPtr;
class OdBmItfImportSettings;
typedef OdSmartPtr<OdBmItfImportSettings> OdBmItfImportSettingsPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;
class OdBmForgeTypeId;

class OdBmMasterImportSymbol;
class OdBmMasterImportSymbolImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMasterImportSymbol object.
 */
typedef OdSmartPtr<OdBmMasterImportSymbol> OdBmMasterImportSymbolPtr;

/** \details
 A data type that represents an array of OdBmMasterImportSymbol objects.
 */
typedef OdArray<OdBmMasterImportSymbolPtr> OdBmMasterImportSymbolPtrArray;

//----------------------------------------------------------
//
// OdBmMasterImportSymbol
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmMasterImportSymbol : public OdBmImportSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMasterImportSymbol);
public:
  void getSubSymbolMapInt2(OdInt32Array &) const;
  OdResult setSubSymbolMapInt2(const OdInt32Array&);
  void getSubSymbolMapElemId2(OdBmObjectIdArray &) const;
  OdResult setSubSymbolMapElemId2(const OdBmObjectIdArray&);
  OdBmImportFileDataPtr getImportFileData() const;
  OdResult setImportFileData(const OdBmImportFileDataPtr&);
  OdGePoint3d getBasePoint() const;
  OdResult setBasePoint(const OdGePoint3d&);
  OdGeVector3d getLastExtents() const;
  OdResult setLastExtents(const OdGeVector3d&);
  OdUInt32 getSize() const;
  OdResult setSize(OdUInt32);
  OdTimeStamp getModtime() const;
  bool getIsRotateToTN() const;
  OdResult setIsRotateToTN(bool);
  OdBmItfImportSettingsPtr getImportSettings() const;
  OdResult setImportSettings(const OdBmItfImportSettingsPtr&);
  OdBmForgeTypeId getUnitTypeId() const;
  OdResult setUnitTypeId(const OdBmForgeTypeId&);
  //
  // Main functionality
  //


};


#endif // _BM_MASTERIMPORTSYMBOL_H_

