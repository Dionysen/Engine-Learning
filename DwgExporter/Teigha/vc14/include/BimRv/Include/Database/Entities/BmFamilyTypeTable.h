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

#ifndef _BM_FAMILYTYPETABLE_H_
#define _BM_FAMILYTYPETABLE_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/Entities/BmFamilyParams.h"
// END: Includes

class OdBmFamilyTypePair;
typedef OdSmartPtr<OdBmFamilyTypePair> OdBmFamilyTypePairPtr;

class OdBmFamilyTypeTable;
class OdBmFamilyTypeTableImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyTypeTable object.
 */
typedef OdSmartPtr<OdBmFamilyTypeTable> OdBmFamilyTypeTablePtr;

/** \details
 A data type that represents an array of OdBmFamilyTypeTable objects.
 */
typedef OdArray<OdBmFamilyTypeTablePtr> OdBmFamilyTypeTablePtrArray;

//----------------------------------------------------------
//
// OdBmFamilyTypeTable
//
//----------------------------------------------------------

/** \details
    This class stores the family type pairs.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamilyTypeTable : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyTypeTable);
public:
  /** \details
    Returns an index of this Family type table.
  */
  OdInt32 getIdx() const;
  /** \details
   Returns the array of family type pairs of this Family type table object.
   \param OdArray<OdBmFamilyTypePairPtr> [out] Output array of family type pairs.
  */
  void getPairs(OdArray<OdBmFamilyTypePairPtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Sets an index to this Family type table.

    \param idx [in] Input index.
  */
  OdResult setIdx(OdInt32 idx);

  /** \details
    Appends the new Family type to this Family type table.

    \param name [in] Input family type name.
    \param pFamilyParams [in] Input family type parameters.
  */
  OdInt32 append(const OdString& name, const OdBmFamilyParamsPtr& pFamilyParams);

  /** \details
    Returns true if this Family type table contains family type with specified name.

    \param name [in] Input family type name.
  */
  bool contains(const OdString& name) const;

  /** \details
    Returns the family type pair on the specified index.

    \param idx [in] Input index.
  */
  OdBmFamilyTypePairPtr& getAt(OdInt32 idx);

  /** \details
    Removes the family type pair on the specified index.

    \param idx [in] Input index.
  */
  OdInt32 removeAt(OdInt32 idx);

  /** \details
    Removes all family types from the Family type table.
  */
  void clear();

  /** \details
    Returns the index of the family type by specified name.
  */
  OdInt32 index(const OdString& name) const;

  /** \details
    Returns the size of this Family type table.
  */
  OdInt32 size() const;

  /** \details
    Returns true if this Family type table is empty.
  */
  bool isEmpty() const;
};


#endif // _BM_FAMILYTYPETABLE_H_

