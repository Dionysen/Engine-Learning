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

#ifndef _BM_GEOMPOSITIONINGCELL_H_
#define _BM_GEOMPOSITIONINGCELL_H_
#include "Database/Entities/BmCell.h"

class OdBmLocationLineOffsetData;
typedef OdSmartPtr<OdBmLocationLineOffsetData> OdBmLocationLineOffsetDataPtr;

class OdBmGeomPositioningCell;
class OdBmGeomPositioningCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeomPositioningCell object.
 */
typedef OdSmartPtr<OdBmGeomPositioningCell> OdBmGeomPositioningCellPtr;

/** \details
 A data type that represents an array of OdBmGeomPositioningCell objects.
 */
typedef OdArray<OdBmGeomPositioningCellPtr> OdBmGeomPositioningCellPtrArray;

//----------------------------------------------------------
//
// OdBmGeomPositioningCell
//
//----------------------------------------------------------

/** \details
    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmGeomPositioningCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeomPositioningCell);
public:
  OdGePoint2d getCutbacks() const;
  OdGePoint2d getExtensions() const;
  OdGePoint2d getYOffsets() const;
  OdGePoint2d getZOffsets() const;
  OdInt32 getYJustificationItem(OdUInt32 idx) const;
  OdInt32 getYZJustification() const;
  OdInt32 getZJustificationItem(OdUInt32 idx) const;
  OdBmLocationLineOffsetDataPtr getLocationLineOffsetData() const;
  //
  // Main functionality
  //
};
#endif // _BM_GEOMPOSITIONINGCELL_H_

