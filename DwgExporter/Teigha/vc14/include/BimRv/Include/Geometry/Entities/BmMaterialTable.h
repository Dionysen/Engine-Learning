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

#ifndef _BM_MATERIALTABLE_H_
#define _BM_MATERIALTABLE_H_
#include "Base/BmObject.h"

class OdBmMaterialData;
typedef OdSmartPtr<OdBmMaterialData> OdBmMaterialDataPtr;

class OdBmMaterialTable;
class OdBmMaterialTableImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMaterialTable object.
 */
typedef OdSmartPtr<OdBmMaterialTable> OdBmMaterialTablePtr;

/** \details
 A data type that represents an array of OdBmMaterialTable objects.
 */
typedef OdArray<OdBmMaterialTablePtr> OdBmMaterialTablePtrArray;

//----------------------------------------------------------
//
// OdBmMaterialTable
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmMaterialTable : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMaterialTable);
public:
  void getMaterialTableSet(OdArray<OdBmMaterialDataPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_MATERIALTABLE_H_

