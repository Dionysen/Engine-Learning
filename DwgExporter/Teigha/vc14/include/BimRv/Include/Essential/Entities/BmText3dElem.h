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

#ifndef _BM_TEXT3DELEM_H_
#define _BM_TEXT3DELEM_H_
#include "Database/BmElement.h"
#include "Base/Enums/BmHorizontalAlignment.h"
// BEGIN: Includes
#include "Essential/Entities/BmTextOutline.h"
// END: Includes

class OdBmTextOutline;
typedef OdSmartPtr<OdBmTextOutline> OdBmTextOutlinePtr;
class OdBmObjectId;

class OdBmText3dElem;
class OdBmText3dElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmText3dElem object.
 */
typedef OdSmartPtr<OdBmText3dElem> OdBmText3dElemPtr;

/** \details
 A data type that represents an array of OdBmText3dElem objects.
 */
typedef OdArray<OdBmText3dElemPtr> OdBmText3dElemPtrArray;

//----------------------------------------------------------
//
// OdBmText3dElem
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmText3dElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmText3dElem);
public:
  OdBmTextOutlinePtr getTextOutline() const;
  OdGeMatrix3d getOldPlaneTransformation() const;
  double getExtrusionHeight() const;
  OdBmObjectId getAttrId() const;
  OdBmObjectId getHostId() const;
  OdBmObjectId getMaterialId() const;
  OdBmObjectId getCategoryId() const;
  OdInt32 getFamElemVisibility() const;
  //
  // Main functionality
  //

  //The horizontal alignment.
  OdBm::HorizontalAlignment::Enum getHorizontalAlignment() const;
  //Set new horizontal alignment.
  OdResult setHorizontalAlignment(OdBm::HorizontalAlignment::Enum var);
};


#endif // _BM_TEXT3DELEM_H_

