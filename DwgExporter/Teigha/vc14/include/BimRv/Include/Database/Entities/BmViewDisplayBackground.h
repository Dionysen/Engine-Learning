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

#ifndef _BM_VIEWDISPLAYBACKGROUND_H_
#define _BM_VIEWDISPLAYBACKGROUND_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmViewDisplayBackgroundType.h"

class OdBmCmColor;

class OdBmViewDisplayBackground;
class OdBmViewDisplayBackgroundImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmViewDisplayBackground object.
 */
typedef OdSmartPtr<OdBmViewDisplayBackground> OdBmViewDisplayBackgroundPtr;

/** \details
 A data type that represents an array of OdBmViewDisplayBackground objects.
 */
typedef OdArray<OdBmViewDisplayBackgroundPtr> OdBmViewDisplayBackgroundPtrArray;

//----------------------------------------------------------
//
// OdBmViewDisplayBackground
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmViewDisplayBackground : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmViewDisplayBackground);
public:
  OdString getImagePath() const;
  OdResult setImagePath(const OdString&);
  OdGeVector2d getImageOffsets() const;
  OdResult setImageOffsets(const OdGeVector2d&);
  double getImageScalesItem(OdUInt32 idx) const;
  OdResult setImageScalesItem(OdUInt32 idx, double);
  OdBmCmColor getBackgroundColor() const;
  OdResult setBackgroundColor(const OdBmCmColor&);
  OdBmCmColor getGroundColor() const;
  OdResult setGroundColor(const OdBmCmColor&);
  OdInt32 getImageFlags() const;
  OdResult setImageFlags(OdInt32);
  OdBmCmColor getSkyColor() const;
  OdResult setSkyColor(const OdBmCmColor&);
  OdBm::ViewDisplayBackgroundType::Enum getType() const;
  OdResult setType(OdBm::ViewDisplayBackgroundType::Enum);
  //
  // Main functionality
  //


};


#endif // _BM_VIEWDISPLAYBACKGROUND_H_

