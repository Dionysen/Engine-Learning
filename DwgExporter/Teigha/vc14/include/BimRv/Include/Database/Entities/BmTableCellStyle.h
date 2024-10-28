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

#ifndef _BM_TABLECELLSTYLE_H_
#define _BM_TABLECELLSTYLE_H_
#include "Base/BmObject.h"

class OdBmTableCellStyleHelper;
typedef OdSmartPtr<OdBmTableCellStyleHelper> OdBmTableCellStyleHelperPtr;
class OdBmObjectId;
class OdBmCmColor;

class OdBmTableCellStyle;
class OdBmTableCellStyleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTableCellStyle object.
 */
typedef OdSmartPtr<OdBmTableCellStyle> OdBmTableCellStylePtr;

/** \details
 A data type that represents an array of OdBmTableCellStyle objects.
 */
typedef OdArray<OdBmTableCellStylePtr> OdBmTableCellStylePtrArray;

//----------------------------------------------------------
//
// OdBmTableCellStyle
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmTableCellStyle : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTableCellStyle);
public:
  OdString getFontName() const;
  OdBmTableCellStyleHelperPtr getHelper() const;
  double getTextSize() const;
  OdBmCmColor getBackgroundColor() const;
  OdBmObjectId getBorderBottomLineStyle() const;
  OdBmObjectId getBorderLeftLineStyle() const;
  OdBmObjectId getBorderRightLineStyle() const;
  OdBmObjectId getBorderTopLineStyle() const;
  OdInt32 getFlag() const;
  OdInt32 getHorizontalAlignment() const;
  OdBmCmColor getSheetBackgroundColor() const;
  OdBmCmColor getTextColor() const;
  OdInt32 getTextOrientation() const;
  OdInt32 getVerticalAlignment() const;
  //
  // Main functionality
  //


};


#endif // _BM_TABLECELLSTYLE_H_

