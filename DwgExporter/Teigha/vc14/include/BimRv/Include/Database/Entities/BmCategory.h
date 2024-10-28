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

#ifndef _BM_CATEGORY_H_
#define _BM_CATEGORY_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmCategoryType.h"
// BEGIN: Includes
class OdBmDatabase;
// END: Includes



class OdBmCategory;
class OdBmCategoryImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCategory object.
 */
typedef OdSmartPtr<OdBmCategory> OdBmCategoryPtr;

/** \details
 A data type that represents an array of OdBmCategory objects.
 */
typedef OdArray<OdBmCategoryPtr> OdBmCategoryPtrArray;

//----------------------------------------------------------
//
// OdBmCategory
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCategory : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCategory);
public:
  OdString getName() const;
  OdResult setName(const OdString&);
  OdBmObjectId::handle_type getParentCategoryHandle() const;
  OdResult setParentCategoryHandle(OdBmObjectId::handle_type);
  OdBm::CategoryType::Enum getCategoryType() const;
  OdResult setCategoryType(OdBm::CategoryType::Enum);
  OdInt32 getFlags() const;
  OdResult setFlags(OdInt32);
  //
  // Main functionality
  //

  /** \details
    Checks if this category is cuttable.

    \returns true if this category is cuttable, false - otherwise.
  */
  bool isCuttable() const;

  /** \details
    Returns disciplines associated with category as bit mask of ViewDiscipline values.
  */
  OdInt32 getDisciplines() const;
};


#endif // _BM_CATEGORY_H_

