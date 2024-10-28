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

#ifndef _BM_FABRICAREA_H_
#define _BM_FABRICAREA_H_
#include "Analytical/Entities/BmElementSystemBase.h"

class OdBmNumberingPartitionDataCell;
typedef OdSmartPtr<OdBmNumberingPartitionDataCell> OdBmNumberingPartitionDataCellPtr;
class OdBmObjectId;

class OdBmFabricArea;
class OdBmFabricAreaImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricArea object.
 */
typedef OdSmartPtr<OdBmFabricArea> OdBmFabricAreaPtr;

/** \details
 A data type that represents an array of OdBmFabricArea objects.
 */
typedef OdArray<OdBmFabricAreaPtr> OdBmFabricAreaPtrArray;

//----------------------------------------------------------
//
// OdBmFabricArea
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricArea : public OdBmElementSystemBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricArea);
public:
  double getCoverOffset() const;
  OdBmObjectId getFabricSheetTypeId() const;
  OdInt32 getHostFaceTag() const;
  OdBmObjectId getHostId() const;
  OdInt32 getLapSplicePosition() const;
  OdBmObjectId getSketchId() const;
  OdBmObjectId getTagViewId() const;
  OdBmNumberingPartitionDataCellPtr getNumberingPartitionCell() const;
  double getMajorLapSpliceLength() const;
  double getMinorLapSpliceLength() const;
  OdInt32 getFabricLocation() const;
  OdInt32 getMajorSheetAlignment() const;
  OdInt32 getMinorSheetAlignment() const;
  OdBmObjectId getTypeId() const;
  bool getHostIsValidPart() const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICAREA_H_

