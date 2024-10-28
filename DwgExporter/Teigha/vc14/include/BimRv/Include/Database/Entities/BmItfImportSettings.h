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

#ifndef _BM_ITFIMPORTSETTINGS_H_
#define _BM_ITFIMPORTSETTINGS_H_
#include "Base/BmObject.h"

class OdBmCmColor;

class OdBmItfImportSettings;
class OdBmItfImportSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmItfImportSettings object.
 */
typedef OdSmartPtr<OdBmItfImportSettings> OdBmItfImportSettingsPtr;

/** \details
 A data type that represents an array of OdBmItfImportSettings objects.
 */
typedef OdArray<OdBmItfImportSettingsPtr> OdBmItfImportSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmItfImportSettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmItfImportSettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmItfImportSettings);
public:
  double getViewScale() const;
  OdResult setViewScale(double);
  OdBmCmColor getImportLayerColor() const;
  OdResult setImportLayerColor(const OdBmCmColor&);
  OdInt32 getPlacementModeAuto() const;
  OdResult setPlacementModeAuto(OdInt32);
  OdInt32 getPlacementModeManual() const;
  OdResult setPlacementModeManual(OdInt32);
  bool getIsLink() const;
  OdResult setIsLink(bool);
  bool getIsViewSpecific() const;
  OdResult setIsViewSpecific(bool);
  bool getIsOrientToView() const;
  OdResult setIsOrientToView(bool);
  bool getIsAutomaticPlacement() const;
  OdResult setIsAutomaticPlacement(bool);
  bool getIsFixLines() const;
  OdResult setIsFixLines(bool);
  //
  // Main functionality
  //


};


#endif // _BM_ITFIMPORTSETTINGS_H_

