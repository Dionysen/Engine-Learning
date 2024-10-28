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

#ifndef _BM_RVTLINKSYMBOL_H_
#define _BM_RVTLINKSYMBOL_H_
#include "Database/Entities/BmLinkType.h"
// BEGIN: Includes
#include "Database/Entities/BmAllProjectPhases.h"
// END: Includes

class OdBmModelResolvableLocation;
typedef OdSmartPtr<OdBmModelResolvableLocation> OdBmModelResolvableLocationPtr;
class OdBmRvtLinkConversionData;
typedef OdSmartPtr<OdBmRvtLinkConversionData> OdBmRvtLinkConversionDataPtr;
class OdBmForeignElemRef;
typedef OdSmartPtr<OdBmForeignElemRef> OdBmForeignElemRefPtr;
class OdBmUniqueDocumentVersionIdentifierNew;
typedef OdSmartPtr<OdBmUniqueDocumentVersionIdentifierNew> OdBmUniqueDocumentVersionIdentifierNewPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRvtLinkSymbol;
class OdBmRvtLinkSymbolImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRvtLinkSymbol object.
 */
typedef OdSmartPtr<OdBmRvtLinkSymbol> OdBmRvtLinkSymbolPtr;

/** \details
 A data type that represents an array of OdBmRvtLinkSymbol objects.
 */
typedef OdArray<OdBmRvtLinkSymbolPtr> OdBmRvtLinkSymbolPtrArray;

//----------------------------------------------------------
//
// OdBmRvtLinkSymbol
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRvtLinkSymbol : public OdBmLinkType {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRvtLinkSymbol);
public:
  void getChildSymbolIds(OdBmObjectIdArray &) const;
  OdBmObjectPtr getClosedWorksetConfig() const;
  OdBmModelResolvableLocationPtr getOtherDocModelLocation() const;
  OdBmObjectPtr getOwnerWorksetConfig() const;
  OdBmRvtLinkConversionDataPtr getRvtLinkConversionData() const;
  void getPhaseMap(OdBmMap<OdBmObjectId, OdBmForeignElemRefPtr> &) const;
  OdBmForeignElemRefPtr getComplementParentSymbolId() const;
  OdGUID getContentKey() const;
  OdBmForeignElemRefPtr getInOtherDoc() const;
  OdBmUniqueDocumentVersionIdentifierNewPtr getLastId() const;
  OdBmObjectId getParentSymbolId() const;
  bool getIsAttachment() const;
  bool getIsLT() const;
  bool getIsRoomBounding() const;
  bool getRelative() const;
  bool getShouldLoadSource() const;
  bool getShouldUpdateExternalResourceReference() const;
  //
  // Main functionality
  //

  /** \details
  Sets a new path and pathType for linked file.

  /param sNewPath [in] Path to the new linked file.
  /param bRelative [in] Path type, [true - Relative path], [false - Absolute path].
  */
  OdResult setNewFilePath(const OdString sNewPath, bool bRelative);

  /** \details
  Creating a RvtLinkSymbol for new linked file.

  /param sNewPath [in] Path to the linked file.
  /param bRelative [in] Path type, [true - Relative path], [false - Absolute path].
  */
  OdResult addNewLinkFile(const OdString sNewPath, bool bRelative);

};
#endif // _BM_RVTLINKSYMBOL_H_

