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

#ifndef _BM_ELEMTABLE_H_
#define _BM_ELEMTABLE_H_
#include "Database/Entities/BmProxyElement.h"
// BEGIN: Includes
#include "Database/BmElement.h"
// END: Includes

class OdBmElemRec;
typedef OdSmartPtr<OdBmElemRec> OdBmElemRecPtr;
class OdBmGraveyardRec;
typedef OdSmartPtr<OdBmGraveyardRec> OdBmGraveyardRecPtr;
class OdBmIdentifierSource;
typedef OdSmartPtr<OdBmIdentifierSource> OdBmIdentifierSourcePtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmElemTable;
class OdBmElemTableImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElemTable object.
 */
typedef OdSmartPtr<OdBmElemTable> OdBmElemTablePtr;

/** \details
 A data type that represents an array of OdBmElemTable objects.
 */
typedef OdArray<OdBmElemTablePtr> OdBmElemTablePtrArray;

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

//----------------------------------------------------------
//
// OdBmElemTableIdHash
//
//----------------------------------------------------------

struct OdBmElemTableIdHash {
  enum { bucket_size = 4, min_buckets = 8 };

  size_t operator()(const OdBmObjectId &__v) const {
    return static_cast<size_t>(__v.getHandle());
  }

  bool operator()(const OdBmObjectId &lhs, const OdBmObjectId &rhs) const {
    return lhs < rhs;
  }
};

//----------------------------------------------------------
//
// OdBmElemTable
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElemTable : public OdBmProxyElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElemTable);
public:
  void getElements(OdArray<OdBmElemRecPtr> &) const;
  void getGraveyardRecs(OdArray<OdBmGraveyardRecPtr> &) const;
  OdBmIdentifierSourcePtr getSource() const;
  bool getExpandAllOnLoad() const;
  void getVisibleElements(OdBmObjectIdArray &) const;
  OdResult setVisibleElements(const OdBmObjectIdArray&);
  //
  // Main functionality
  //

  typedef OdHashMap<OdBmObjectId, OdBmElemRecPtr, OdBmElemTableIdHash>
      ElementsContainer;

  OdBmIteratorPtr<OdBmElemRecPtr> newIterator(const bool random = false) const;
};


#endif // _BM_ELEMTABLE_H_

