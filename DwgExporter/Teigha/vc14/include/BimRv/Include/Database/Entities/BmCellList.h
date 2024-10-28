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

#ifndef _BM_CELLLIST_H_
#define _BM_CELLLIST_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/Entities/BmCell.h"
// END: Includes



class OdBmCellList;
class OdBmCellListImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCellList object.
 */
typedef OdSmartPtr<OdBmCellList> OdBmCellListPtr;

/** \details
 A data type that represents an array of OdBmCellList objects.
 */
typedef OdArray<OdBmCellListPtr> OdBmCellListPtrArray;

//----------------------------------------------------------
//
// OdBmCellList
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCellList : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCellList);
public:
  void getCells(OdArray<OdBmObjectPtr> &) const;
  OdResult setCells(const OdArray<OdBmObjectPtr>&);
  //
  // Main functionality
  //

  //Return a cell by the OdRxClass
  OdBmCellPtr getUniqueCell(const OdTfClass* pClass) const;
};


#endif // _BM_CELLLIST_H_

