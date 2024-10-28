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

#ifndef _BM_DIMENSIONSTYLE_H_
#define _BM_DIMENSIONSTYLE_H_
#include "Database/Entities/BmSymbol.h"
#include "Database/Enums/BmDimensionType.h"

class OdBmLineAndTextAttribute;
typedef OdSmartPtr<OdBmLineAndTextAttribute> OdBmLineAndTextAttributePtr;
class OdBmFormatOptions;
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;
class OdBmDimensionEqualityLabelFormatting;
typedef OdSmartPtr<OdBmDimensionEqualityLabelFormatting> OdBmDimensionEqualityLabelFormattingPtr;
class OdBmObjectId;

class OdBmDimensionStyle;
class OdBmDimensionStyleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDimensionStyle object.
 */
typedef OdSmartPtr<OdBmDimensionStyle> OdBmDimensionStylePtr;

/** \details
 A data type that represents an array of OdBmDimensionStyle objects.
 */
typedef OdArray<OdBmDimensionStylePtr> OdBmDimensionStylePtrArray;

//----------------------------------------------------------
//
// OdBmDimensionStyle
//
//----------------------------------------------------------

/** \details
    This class stores properties of the dimension style.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDimensionStyle : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDimensionStyle);
public:
  OdBmLineAndTextAttributePtr getLineAndTextAttributes() const;
  OdBmObjectPtr getOrdinateDimSetting() const;
  double getDimLineSnapDistance() const;
  double getLeaderShoulderLength() const;
  OdInt32 getLeaderDisplayCondition() const;
  OdInt32 getLeaderType() const;
  OdInt32 getLeaderTextLocation() const;
  OdInt32 getTextAlignment() const;
  OdInt32 getLinearTickType() const;
  OdInt32 getRadialTickType() const;
  /** \details
    Returns DimensionStyleType as DimensionType enum.
  */
  OdBm::DimensionType::Enum getDimensionStyleType() const;
  OdInt32 getTextLocation() const;
  OdInt32 getRadiusDiameterSymbolLocation() const;
  OdInt32 getEqualityWitnessDisplay() const;
  OdInt32 getAlternateUnits() const;
  OdBmObjectId getTickCategoryId() const;
  OdBmObjectId getHeavyEndCatId() const;
  OdBmObjectId getCenterlinePatternCatId() const;
  /** \details
    Returns the StyleId of Centerline Tick Mark.

    \remarks
    -1 means no Style Id
    -2 means default Style Id
  */
  OdBmObjectId getCenterlineTickMarkStyleId() const;
  OdBmObjectId getArrowHeadStyleId() const;
  OdBmObjectId getInteriorTickMarkStyleId() const;
  OdInt32 getInteriorTickMarkDisplay() const;
  OdBmObjectId getLeaderTickMarkStyleId() const;
  OdBmObjectId getWitnessLineTickMarkStyleId() const;
  OdInt32 getLinearDimType() const;
  bool getIsArcCenterMark() const;
  bool getIsRadiusPrefix() const;
  bool getIsTxtBackgroundTransparent() const;
  bool getIsDimWitnCntrlExtBelow() const;
  bool getIsShowOpeningHt() const;
  bool getIsLinearFilledTick() const;
  bool getIsRadialFilledTick() const;
  bool getIsSuppressSpaces() const;
  OdBmFormatOptionsPtr getLineFormatOptions() const;
  OdBmFormatOptionsPtr getLineFormatOptionsAlternate() const;
  OdBmFormatOptionsPtr getAngelFormatOptions() const;
  OdBmFormatOptionsPtr getAngelFormatOptionsAlternate() const;
  OdString getEqualityText() const;
  OdString getRadiusDiameterPrefixText() const;
  OdString getAlternateUnitsPrefix() const;
  OdString getAlternateUnitsSuffix() const;
  void getEqualityFormattingArr(OdArray<OdBmDimensionEqualityLabelFormattingPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_DIMENSIONSTYLE_H_

