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

#ifndef _BM_STAIRSTYPE_H_
#define _BM_STAIRSTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmObjectId;

class OdBmStairsType;
class OdBmStairsTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsType object.
 */
typedef OdSmartPtr<OdBmStairsType> OdBmStairsTypePtr;

/** \details
 A data type that represents an array of OdBmStairsType objects.
 */
typedef OdArray<OdBmStairsTypePtr> OdBmStairsTypePtrArray;

//----------------------------------------------------------
//
// OdBmStairsType
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsType);
public:
  double getMaxRiserHeight() const;
  double getMinTreadDepth() const;
  double getMinTreadWidthOnInsideBoundary() const;
  double getMinRunWidth() const;
  double getCalcRuleMaxResult() const;
  double getCalcRuleMinResult() const;
  double getCalcRuleTargetResult() const;
  double getNotchExtension() const;
  double getNotchThickness() const;
  double getNotchCustomWidth() const;
  double getNotchHorizontalGap() const;
  double getNotchVerticalGap() const;
  double getRightSupportLateralOffset() const;
  double getLeftSupportLateralOffset() const;
  OdBmObjectId getRunTypeId() const;
  OdBmObjectId getLandingTypeId() const;
  OdBmObjectId getRightSideSupportTypeId() const;
  OdBmObjectId getLeftSideSupportTypeId() const;
  OdBmObjectId getRightSideCarriageTypeId() const;
  OdBmObjectId getLeftSideCarriageTypeId() const;
  OdBmObjectId getIntermediateSupportTypeId() const;
  OdBmObjectId getCutMarkTypeId() const;
  OdInt32 getNumberOfIntermediateSupports() const;
  OdInt32 getCalcRuleRiserMultiplier() const;
  OdInt32 getCalcRuleTreadMultiplier() const;
  OdInt32 getWinderStepFrontMeasurement() const;
  OdInt32 getGeomUnjoinedEndCutStyle() const;
  OdInt32 getNotchWidthStyle() const;
  OdInt32 getLeftSupportStyle() const;
  OdInt32 getRightSupportStyle() const;
  OdInt32 getConstructionMethod() const;
  bool getHasIntermediateSupport() const;
  bool getIsUseStairsCalculator() const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSTYPE_H_

