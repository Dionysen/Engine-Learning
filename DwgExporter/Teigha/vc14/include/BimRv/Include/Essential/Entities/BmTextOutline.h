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

#ifndef _BM_TEXTOUTLINE_H_
#define _BM_TEXTOUTLINE_H_
#include "Base/BmObject.h"
#include "Base/Enums/BmHorizontalAlignment.h"



class OdBmTextOutline;
class OdBmTextOutlineImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTextOutline object.
 */
typedef OdSmartPtr<OdBmTextOutline> OdBmTextOutlinePtr;

/** \details
 A data type that represents an array of OdBmTextOutline objects.
 */
typedef OdArray<OdBmTextOutlinePtr> OdBmTextOutlinePtrArray;

//----------------------------------------------------------
//
// OdBmTextOutline
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmTextOutline : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTextOutline);
public:
  OdString getText() const;
  OdString getFontName() const;
  OdGeMatrix3d getTransformation() const;
  OdGePoint3d getOrigin() const;
  double getHeight() const;
  double getFontHeight() const;
  double getDescent() const;
  double getLineGap() const;
  double getAccuracy() const;
  OdInt32 getTextAlign() const;
  bool getIsBold() const;
  bool getIsItalic() const;
  bool getIsUnderline() const;
  bool getComplexScript() const;
  bool getDoUnion() const;
  //
  // Main functionality
  //

  OdBm::HorizontalAlignment::Enum getHorizontalAlignment() const;

  OdResult setHorizontalAlignment(OdBm::HorizontalAlignment::Enum var);
};


#endif // _BM_TEXTOUTLINE_H_

