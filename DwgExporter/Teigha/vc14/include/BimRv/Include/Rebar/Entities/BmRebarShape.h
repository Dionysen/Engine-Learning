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

#ifndef _BM_REBARSHAPE_H_
#define _BM_REBARSHAPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmRebarShapeMultiplanarDefinition;
typedef OdSmartPtr<OdBmRebarShapeMultiplanarDefinition> OdBmRebarShapeMultiplanarDefinitionPtr;
class OdBmRebarShapeDefinition;
typedef OdSmartPtr<OdBmRebarShapeDefinition> OdBmRebarShapeDefinitionPtr;
class OdBmFamilyTypeTable;
typedef OdSmartPtr<OdBmFamilyTypeTable> OdBmFamilyTypeTablePtr;
class OdBmParamVector;
typedef OdSmartPtr<OdBmParamVector> OdBmParamVectorPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRebarShape;
class OdBmRebarShapeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarShape object.
 */
typedef OdSmartPtr<OdBmRebarShape> OdBmRebarShapePtr;

/** \details
 A data type that represents an array of OdBmRebarShape objects.
 */
typedef OdArray<OdBmRebarShapePtr> OdBmRebarShapePtrArray;

//----------------------------------------------------------
//
// OdBmRebarShape
//
//----------------------------------------------------------

/** \details
    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarShape : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarShape);
public:
  OdBmRebarShapeMultiplanarDefinitionPtr getMultiplanarDefinition() const;
  OdBmRebarShapeDefinitionPtr getDefinition() const;
  OdBmFamilyTypeTablePtr getFamilyTypeTable() const;
  void getIllegalBarTypes(OdBmObjectIdArray &) const;
  OdBmParamVectorPtr getInstanceParams() const;
  OdBmObjectId getEndTreatmentIdsItem(OdUInt32 idx) const;
  OdBmObjectId getFamilyId() const;
  OdInt32 getHigherEnd() const;
  OdInt32 getHookItem(OdUInt32 idx) const;
  OdInt32 getHookOriItem(OdUInt32 idx) const;
  OdInt32 getMajorSegmentIndex() const;
  OdBmObjectId getShapeImageId() const;
  OdInt32 getStirrupTieAttachment() const;
  OdInt32 getStyle() const;
  OdBmObjectId getValidHookTypesItem(OdUInt32 idx) const;
  bool getInFamilyDoc() const;
  bool getIncomplete() const;
  double getOrientationAngleItem(OdUInt32 idx) const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARSHAPE_H_

