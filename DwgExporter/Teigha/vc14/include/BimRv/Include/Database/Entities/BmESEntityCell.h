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

#ifndef _BM_ESENTITYCELL_H_
#define _BM_ESENTITYCELL_H_
#include "Database/Entities/BmCell.h"



class OdBmESEntityCell;
class OdBmESEntityCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmESEntityCell object.
 */
typedef OdSmartPtr<OdBmESEntityCell> OdBmESEntityCellPtr;

/** \details
 A data type that represents an array of OdBmESEntityCell objects.
 */
typedef OdArray<OdBmESEntityCellPtr> OdBmESEntityCellPtrArray;

//----------------------------------------------------------
//
// OdBmESEntityCell
//
//----------------------------------------------------------

/** \details
This class represents an entity cell.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmESEntityCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmESEntityCell);
public:
  /** \details
    Returns the entity map.
    
    \param map [out] Map to store the entities.
  */
  void getEntityMap(OdBmMap<OdGUID, OdBmObjectPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_ESENTITYCELL_H_

