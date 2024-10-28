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

#ifndef _BM_ARASTERIMAGE_H_
#define _BM_ARASTERIMAGE_H_
#include "Base/BmObject.h"



class OdBmARasterImage;
class OdBmARasterImageImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmARasterImage object.
 */
typedef OdSmartPtr<OdBmARasterImage> OdBmARasterImagePtr;

/** \details
 A data type that represents an array of OdBmARasterImage objects.
 */
typedef OdArray<OdBmARasterImagePtr> OdBmARasterImagePtrArray;

//----------------------------------------------------------
//
// OdBmARasterImage
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmARasterImage : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmARasterImage);
public:
  void getCompressedImage(OdUInt8Array &) const;
  OdResult setCompressedImage(const OdUInt8Array&);
  OdInt32 getWidth() const;
  OdResult setWidth(OdInt32);
  OdInt32 getHeight() const;
  OdResult setHeight(OdInt32);
  double getDpiX() const;
  OdResult setDpiX(double);
  double getDpiY() const;
  OdResult setDpiY(double);
  double getWidthInFeet() const;
  double getHeightInFeet() const;
  //
  // Main functionality
  //


};


#endif // _BM_ARASTERIMAGE_H_

