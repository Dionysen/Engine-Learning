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

#ifndef _BM_RECONCILEBROWSERSETTINGSELEM_H_
#define _BM_RECONCILEBROWSERSETTINGSELEM_H_
#include "Database/Entities/BmUniqueElement.h"

class OdBmGStyle;
typedef OdSmartPtr<OdBmGStyle> OdBmGStylePtr;

class OdBmReconcileBrowserSettingsElem;
class OdBmReconcileBrowserSettingsElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmReconcileBrowserSettingsElem object.
 */
typedef OdSmartPtr<OdBmReconcileBrowserSettingsElem> OdBmReconcileBrowserSettingsElemPtr;

/** \details
 A data type that represents an array of OdBmReconcileBrowserSettingsElem objects.
 */
typedef OdArray<OdBmReconcileBrowserSettingsElemPtr> OdBmReconcileBrowserSettingsElemPtrArray;

//----------------------------------------------------------
//
// OdBmReconcileBrowserSettingsElem
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmReconcileBrowserSettingsElem : public OdBmUniqueElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmReconcileBrowserSettingsElem);
public:
  OdBmGStylePtr getOldOrphanedGStyle() const;
  OdBmGStylePtr getNewOrphanedGStyle() const;
  OdInt32 getSortMode() const;
  bool getApplyGraphicsSettings() const;
  //
  // Main functionality
  //


};


#endif // _BM_RECONCILEBROWSERSETTINGSELEM_H_

