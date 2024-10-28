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

#ifndef _BM_GTEXT_H_
#define _BM_GTEXT_H_
#include "Geometry/Entities/BmGNode.h"
#include "Base/Enums/BmHorizontalAlignment.h"
#include "Base/Enums/BmVerticalAlignment.h"

class OdBmUniformTextFragment;
typedef OdSmartPtr<OdBmUniformTextFragment> OdBmUniformTextFragmentPtr;
class OdBmObjectId;

class OdBmGText;
class OdBmGTextImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGText object.
 */
typedef OdSmartPtr<OdBmGText> OdBmGTextPtr;

/** \details
 A data type that represents an array of OdBmGText objects.
 */
typedef OdArray<OdBmGTextPtr> OdBmGTextPtrArray;

//----------------------------------------------------------
//
// OdBmGText
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of text.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGText : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGText);
public:
  /** \details
    Returns the array of text fragments.

    \param OdArray<OdBmUniformTextFragmentPtr> [out] Output array of text fragments.
  */
  void getTextFragments(OdArray<OdBmUniformTextFragmentPtr> &) const;
  /** \details
    Returns the base direction of text as an object of the OdGeVector3d class.
  */
  OdGeVector3d getBaseDirection() const;
  /** \details
    Returns the up direction of text as an object of the OdGeVector3d class.
  */
  OdGeVector3d getUpDirection() const;
  /** \details
    Returns the origin point of text as an object of the OdGePoint3d class.
  */
  OdGePoint3d getOrigin() const;
  /** \details
    Returns the height of text as a double value.
  */
  double getHeight() const;
  /** \details
    Returns the width of text as a double value.
  */
  double getWidth() const;
  /** \details
    Returns the descent of text as a double value.
  */
  double getDescent() const;
  /** \details
    Returns the height of multi-line text as a double value.
  */
  double getMultiLineHeight() const;
  /** \details
    Returns the maximum width of multi-line text as a double value.
  */
  double getMultiLineMaxWidth() const;
  /** \details
    Returns the height of multi-line text without an ascender as a double value.
  */
  double getHeightMinusAscender() const;
  /** \details
    Returns the width of the first line on the sheet as a double value.
  */
  double getFirstLineWidthSheet() const;
  /** \details
    Returns the width of the last line on the sheet as a double value.
  */
  double getLastLineWidthSheet() const;
  /** \details
    Returns the size of the sheet tab as a double value.
  */
  double getSheetTabSize() const;
  /** \details
    Returns the width of the scale as a double value.
  */
  double getWidthScale() const;
  /** \details
    Returns the text alignment as an OdInt32 value.
  */
  OdInt32 getTextAlign() const;
  /** \details
    Returns the font ID as an object of the OdBmObjectId class.
  */
  OdBmObjectId getFontId() const;
  /** \details
    Returns object flags as an OdInt32 value.
  */
  OdInt32 getFlags() const;
  /** \details
    Returns the background as an OdInt32 value.
  */
  OdInt32 getBackground() const;
  /** \details
    Returns the fixed screen size of text as an OdInt32 value.
  */
  OdInt32 getTextFixedScreenSize() const;
  /** \details
    Returns true if text is bold.
  */
  bool getIsBold() const;
  /** \details
    Returns true if text is italic.
  */
  bool getIsItalic() const;
  /** \details
    Returns true if text has underline.
  */
  bool getIsUnderline() const;
  //
  // Main functionality
  //

  /** \details
    Returns the horizontal alignment method as one value from the OdBm::HorizontalAlignment enumeration.

    \remarks
    Returning value can be one of the next values:

    <table>
      <b>NoHorizAlignment</b>  0
      <b>Left</b>              64
      <b>Center</b>            128
      <b>Right</b>             256
    </table>
  */
  OdBm::HorizontalAlignment::Enum getHorzAlign() const;

  /** \details
    Returns the vertical alignment method as one value from the OdBm::VerticalAlignment enumeration.

    \remarks
    Returning value can be one of the next values:

    <table>
      <b>NoVertAlignment</b>  0
      <b>Top</b>              512
      <b>Middle</b>           1024
      <b>Bottom</b>           2048
    </table>
  */
  OdBm::VerticalAlignment::Enum getVertAlign() const;
};
#endif // _BM_GTEXT_H_

