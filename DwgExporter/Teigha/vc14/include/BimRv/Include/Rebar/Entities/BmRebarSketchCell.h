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

#ifndef _BM_REBARSKETCHCELL_H_
#define _BM_REBARSKETCHCELL_H_
#include "Database/Entities/BmCell.h"

class OdBmRebarShapeMultiplanarDefinition;
typedef OdSmartPtr<OdBmRebarShapeMultiplanarDefinition> OdBmRebarShapeMultiplanarDefinitionPtr;
class OdBmObjectId;

class OdBmRebarSketchCell;
class OdBmRebarSketchCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarSketchCell object.
 */
typedef OdSmartPtr<OdBmRebarSketchCell> OdBmRebarSketchCellPtr;

/** \details
 A data type that represents an array of OdBmRebarSketchCell objects.
 */
typedef OdArray<OdBmRebarSketchCellPtr> OdBmRebarSketchCellPtrArray;

//----------------------------------------------------------
//
// OdBmRebarSketchCell
//
//----------------------------------------------------------

/** \details
    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarSketchCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarSketchCell);
public:
  OdBmRebarShapeMultiplanarDefinitionPtr getMultiplanarDefinition() const;
  double getColHeight() const;
  OdGeMatrix3d getStoredHostTrf() const;
  OdInt32 getHookOriItem(OdUInt32 idx) const;
  OdInt32 getHooksPlacement() const;
  OdInt32 getStirrupTieAttachmentType() const;
  OdInt32 getOrientTag0() const;
  OdInt32 getOrientTag1() const;
  OdBmObjectId getShapeIdBeforeEditSketch() const;
  OdInt32 getShiftTag() const;
  OdBmObjectId getSketchId() const;
  OdInt32 getStyle() const;
  OdInt32 getSwapTag() const;
  bool getIsInMirror() const;
  bool getLegacy() const;
  bool getOldLinearBarTagging() const;
  bool getSwapped() const;
  OdBmObjectPtr getBendingPlaneNormalBeforeSketch() const;
  void getOldDrivingCurvesBeforeSketch(OdArray<OdBmObjectPtr> &) const;
  double getOrientationAngleAtEnd() const;
  double getOrientationAngleAtStart() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARSKETCHCELL_H_

