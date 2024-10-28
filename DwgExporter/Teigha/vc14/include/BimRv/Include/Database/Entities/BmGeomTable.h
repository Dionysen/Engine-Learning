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

#ifndef _BM_GEOMTABLE_H_
#define _BM_GEOMTABLE_H_
#include "Base/BmObject.h"
#include "Database/Entities/BmGeomTabEntry.h"
#include "Database/Entities/BmGeomMaterialMarker.h"
#include "Database/Entities/BmGeomFaceTypeMarker.h"



class OdBmGeomTable;
class OdBmGeomTableImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeomTable object.
 */
typedef OdSmartPtr<OdBmGeomTable> OdBmGeomTablePtr;

/** \details
 A data type that represents an array of OdBmGeomTable objects.
 */
typedef OdArray<OdBmGeomTablePtr> OdBmGeomTablePtrArray;

//----------------------------------------------------------
//
// OdBmGeomTable
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmGeomTable : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeomTable);
public:
  OdInt32 getMaxSafeTag() const;
  OdResult setMaxSafeTag(OdInt32);
  OdInt32 getLastCheckedKingsUserModificationDate() const;
  OdResult setLastCheckedKingsUserModificationDate(OdInt32);
  bool getRefPntMirrored() const;
  OdResult setRefPntMirrored(bool);
  void getTable(OdArray<OdBmGeomTabEntry> &) const;
  OdResult setTable(const OdArray<OdBmGeomTabEntry>&);
  OdBmObjectPtr getBigTableOwner() const;
  OdResult setBigTableOwner(const OdBmObjectPtr&);
  void getMaterialMarkers(OdArray<OdBmGeomMaterialMarker> &) const;
  OdResult setMaterialMarkers(const OdArray<OdBmGeomMaterialMarker>&);
  void getFaceTypeMarkers(OdArray<OdBmGeomFaceTypeMarker> &) const;
  OdResult setFaceTypeMarkers(const OdArray<OdBmGeomFaceTypeMarker>&);
  //
  // Main functionality
  //


};


#endif // _BM_GEOMTABLE_H_

