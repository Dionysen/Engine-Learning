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

#ifndef _BM_GRICHTEXT_H_
#define _BM_GRICHTEXT_H_
#include "Geometry/Entities/BmGNode.h"

class OdBmCmColor;

class OdBmGRichText;
class OdBmGRichTextImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGRichText object.
 */
typedef OdSmartPtr<OdBmGRichText> OdBmGRichTextPtr;

/** \details
 A data type that represents an array of OdBmGRichText objects.
 */
typedef OdArray<OdBmGRichTextPtr> OdBmGRichTextPtrArray;

//----------------------------------------------------------
//
// OdBmGRichText
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of rich (formatted) text.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGRichText : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGRichText);
public:
  /** \details
    Returns the array of RTF raw data.
  */
  void getArrRtfRawData(OdUInt8Array &) const;
  /** \details
    Returns the dafault font name as an OdString value.
  */
  OdString getDefaultFontName() const;
  /** \details
    Returns the model origin point as an object of the OdGePoint3d class.
  */
  OdGePoint3d getModelOrigin() const;
  /** \details
    Returns the model X-Vector as an object of the OdGeVector3d class.
  */
  OdGeVector3d getModelXUnitVec() const;
  /** \details
    Returns the model Y-Vector as an object of the OdGeVector3d class.
  */
  OdGeVector3d getModelYUnitVec() const;
  /** \details
    Returns the default font size as a double value.
  */
  double getDefaultFontSize() const;
  /** \details
    Returns the 'model to sheet' scale as a double value.
  */
  double getModelToSheetScale() const;
  /** \details
    Returns the border offset as a double value.
  */
  double getBorderOffset() const;
  /** \details
    Returns the width scale as a double value.
  */
  double getWidthScale() const;
  /** \details
    Returns the default tab size as a double value.
  */
  double getDefaultTabSize() const;
  /** \details
    Returns the left overhang ratio as a double value.
  */
  double getLeftOverhangRatio() const;
  /** \details
    Returns the right overhang ratio as a double value.
  */
  double getRightOverhangRatio() const;
  /** \details
    Returns the default text color as an OdBmCmColor value.
  */
  OdBmCmColor getDefaultTextColor() const;
  /** \details
    Returns the layout width himetric as an OdInt32 value.
  */
  OdInt32 getLayoutWidthHimetric() const;
  /** \details
    Returns the layout height himetric as an OdInt32 value.
  */
  OdInt32 getLayoutHeightHimetric() const;
  /** \details
    Returns the text height himetric as an OdInt32 value.
  */
  OdInt32 getTextHeightHimetric() const;
  /** \details
    Returns the text width himetric as an OdInt32 value.
  */
  OdInt32 getTextWidthHimetric() const;
  /** \details
    Returns the himetric of the text's horizontal offset as an OdInt32 value.
  */
  OdInt32 getTextHorzOffsetHimetric() const;
  /** \details
    Returns the himeric of the text's vertical offset as an OdInt32 value.
  */
  OdInt32 getTextVertOffsetHimetric() const;
  /** \details
    Returns the default alignment of horizontal text as an OdInt32 value.
  */
  OdInt32 getDefaultHorizontalTextAlignment() const;
  /** \details
    Returns the default alignment of vertical text as an OdInt32 value.
  */
  OdInt32 getDefaultVerticalTextAlignment() const;
  /** \details
    Returns true if a prehilite box will be drawn.
  */
  bool getDrawPrehiliteBox() const;
  /** \details
    Returns true if the default font is bold.
  */
  bool getIsDefaultFontBold() const;
  /** \details
    Returns true if the default font is italic.
  */
  bool getIsDefaultFontItalic() const;
  /** \details
    Returns true if the default font is underlined.
  */
  bool getIsDefaultFontUnderlined() const;
  /** \details
    Returns true if the text object will be kept readable.
  */
  bool getKeepReadable() const;
  /** \details
    Returns true if the background is transparrent.
  */
  bool getTransparentBackground() const;
  /** \details
    Returns true if the text object has no wrapping.
  */
  bool getNoWrapping() const;
  bool getPickWithBorderOffset() const;
  bool getUseModelVecsIn3D() const;
  //
  // Main functionality
  //
};
#endif // _BM_GRICHTEXT_H_

