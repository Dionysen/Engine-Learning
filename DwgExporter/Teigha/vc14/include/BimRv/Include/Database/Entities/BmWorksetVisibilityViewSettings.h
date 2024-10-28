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

#ifndef _BM_WORKSETVISIBILITYVIEWSETTINGS_H_
#define _BM_WORKSETVISIBILITYVIEWSETTINGS_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmWorksetVisibility.h"
// BEGIN: Includes
#include "Database/Enums/BmWorksetVisibility.h"
// END: Includes



class OdBmWorksetVisibilityViewSettings;
class OdBmWorksetVisibilityViewSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWorksetVisibilityViewSettings object.
 */
typedef OdSmartPtr<OdBmWorksetVisibilityViewSettings> OdBmWorksetVisibilityViewSettingsPtr;

/** \details
 A data type that represents an array of OdBmWorksetVisibilityViewSettings objects.
 */
typedef OdArray<OdBmWorksetVisibilityViewSettingsPtr> OdBmWorksetVisibilityViewSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmWorksetVisibilityViewSettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmWorksetVisibilityViewSettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWorksetVisibilityViewSettings);
public:
  void getWorksetVisibilityPGUIDMap(OdBmMap<OdGUID, bool> &) const;
  //
  // Main functionality
  //

  /** \details
    Returns Workset Visibility setting.

    \param worksetId [in] Workset GUID
  */
  OdBm::WorksetVisibility::Enum getWorksetVisibility(const OdGUID& worksetGUID) const;

  /** \details
    Set Workset Visibility setting for the workset.

    \param worksetGUID [in] Workset GUID
    \param vis         [in] Workset Visibility
  */
  void setWorksetVisibility(const OdGUID& worksetGUID, OdBm::WorksetVisibility::Enum vis);
};


#endif // _BM_WORKSETVISIBILITYVIEWSETTINGS_H_

