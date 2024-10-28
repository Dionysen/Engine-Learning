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

#ifndef __BM_CMCOLOR_H__
#define __BM_CMCOLOR_H__

#include "TD_PackPush.h"

#include "OdString.h"
#include "CmColorBase.h"

/** \details
    <group Base_Classes>
*/
class TB_BASE_EXPORT OdBmCmColor : public OdCmColorBase
{
public:
  OdBmCmColor();
  OdBmCmColor(
    const OdBmCmColor& color);
  OdBmCmColor(
    const OdCmColorBase& color);
  OdBmCmColor(
    OdCmEntityColor::ColorMethod color);
  OdBmCmColor& operator=(
    const OdBmCmColor& color);
  OdBmCmColor& operator=(
    const OdCmColorBase& color);
  ~OdBmCmColor();

  bool operator ==(
    const OdBmCmColor& color) const;
  bool operator !=(
    const OdBmCmColor& color) const;
  bool operator ==(
    const OdCmColorBase& color) const;
  bool operator !=(
    const OdCmColorBase& color) const;

  // ------------OdCmColorBase----------------------
  virtual OdCmEntityColor::ColorMethod colorMethod() const;
  virtual void setColorMethod(OdCmEntityColor::ColorMethod colorMethod);

  virtual bool isByColor() const;
  virtual bool isByLayer() const;
  virtual bool isByBlock() const;
  virtual bool isByACI() const;
  virtual bool isForeground() const;
  virtual bool isByDgnIndex() const;
  
  /** \details
    Returns true if a color is set to none.
  */
  virtual bool isNone() const;
  virtual OdUInt32  color() const;
  virtual void setColor(OdUInt32 color);

  virtual void setRGB(OdUInt8 red,
                      OdUInt8 green,
                      OdUInt8 blue);
  virtual void setRGB(OdUInt32 rgb);

  virtual void setRed(OdUInt8 red);
  virtual void setGreen(OdUInt8 green);
  virtual void setBlue(OdUInt8 blue);

  virtual OdUInt8 red() const;
  virtual OdUInt8 green() const;
  virtual OdUInt8 blue() const;

  virtual OdUInt16 colorIndex() const;
  virtual void setColorIndex(OdUInt16 colorIndex);

  virtual bool  setNames( const OdString& colorName,
                          const OdString& bookName = OdString::kEmpty);

  virtual OdString colorName() const;
  virtual OdString bookName() const;
  virtual OdString colorNameForDisplay() const;

  OdCmEntityColor toCmEntityColor() const;

private:
  OdCmEntityColor::RGBM   m_RGBM;
  OdString                m_colorName;
  OdString                m_bookName;
};

TB_BASE_EXPORT const OdUInt32 swapRGB(const OdUInt32 src);

#include "TD_PackPop.h"

#endif // __BM_CMCOLOR_H__
