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

#ifndef _BM_EXPORTDWGSETTINGS_H_
#define _BM_EXPORTDWGSETTINGS_H_
#include "Database/BmElement.h"

class OdBmExportFontTable;
typedef OdSmartPtr<OdBmExportFontTable> OdBmExportFontTablePtr;
class OdBmExportPatternTable;
typedef OdSmartPtr<OdBmExportPatternTable> OdBmExportPatternTablePtr;
class OdBmExportLinetypeTable;
typedef OdSmartPtr<OdBmExportLinetypeTable> OdBmExportLinetypeTablePtr;
class OdBmExportLayerTable;
typedef OdSmartPtr<OdBmExportLayerTable> OdBmExportLayerTablePtr;
class OdBmForgeTypeId;

class OdBmExportDWGSettings;
class OdBmExportDWGSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmExportDWGSettings object.
 */
typedef OdSmartPtr<OdBmExportDWGSettings> OdBmExportDWGSettingsPtr;

/** \details
 A data type that represents an array of OdBmExportDWGSettings objects.
 */
typedef OdArray<OdBmExportDWGSettingsPtr> OdBmExportDWGSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmExportDWGSettings
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmExportDWGSettings : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmExportDWGSettings);
public:
  OdString getName() const;
  OdInt32 getOverridesToLayers() const;
  OdInt32 getLineTypeMode() const;
  OdInt32 getSolidsMode() const;
  OdInt32 getObjectPrefs() const;
  OdInt32 getColourMode() const;
  OdInt32 getTextMode() const;
  OdInt32 getVersion() const;
  bool getExportInSharedCoordinates() const;
  bool getExportRoomBoundaries() const;
  bool getMarkNonplot() const;
  bool getCreateExternalReferences() const;
  bool getHideScopeBox() const;
  bool getHideReferencePlane() const;
  bool getHideUnreferenceViewTag() const;
  bool getPreserveCoincidentLines() const;
  OdString getLayerMapping() const;
  OdString getLineDefFileName() const;
  OdString getPatDefFileName() const;
  OdString getNonplotSuffix() const;
  OdBmExportFontTablePtr getFontTable() const;
  OdBmExportPatternTablePtr getPatternTable() const;
  OdBmExportLinetypeTablePtr getLinetypeTable() const;
  OdBmExportLayerTablePtr getLayerTable() const;
  OdUInt32 getHatchBackgroundColor() const;
  OdInt32 getHatchBackgroundColorMid() const;
  bool getTrueColorByView() const;
  bool getUseHatchBackgroundColor() const;
  bool getUseHatchBackgroundColorMid() const;
  OdBmForgeTypeId getUnitTypeId() const;
  //
  // Main functionality
  //
};
#endif // _BM_EXPORTDWGSETTINGS_H_

