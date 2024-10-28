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

#ifndef _BM_EXPORTDGNSETTINGS_H_
#define _BM_EXPORTDGNSETTINGS_H_
#include "Database/BmElement.h"

class OdBmExportFontTable;
typedef OdSmartPtr<OdBmExportFontTable> OdBmExportFontTablePtr;
class OdBmExportPatternTable;
typedef OdSmartPtr<OdBmExportPatternTable> OdBmExportPatternTablePtr;
class OdBmExportLayerTable;
typedef OdSmartPtr<OdBmExportLayerTable> OdBmExportLayerTablePtr;
class OdBmExportLinetypeTable;
typedef OdSmartPtr<OdBmExportLinetypeTable> OdBmExportLinetypeTablePtr;
class OdBmExportLineweightTable;
typedef OdSmartPtr<OdBmExportLineweightTable> OdBmExportLineweightTablePtr;

class OdBmExportDGNSettings;
class OdBmExportDGNSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmExportDGNSettings object.
 */
typedef OdSmartPtr<OdBmExportDGNSettings> OdBmExportDGNSettingsPtr;

/** \details
 A data type that represents an array of OdBmExportDGNSettings objects.
 */
typedef OdArray<OdBmExportDGNSettingsPtr> OdBmExportDGNSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmExportDGNSettings
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmExportDGNSettings : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmExportDGNSettings);
public:
  OdString get2DSeedFileName() const;
  OdString get3DSeedFileName() const;
  OdString getLayerMapping() const;
  OdString getPatDefFileName() const;
  OdBmExportFontTablePtr getFontTable() const;
  OdBmExportPatternTablePtr getPatternTable() const;
  OdBmExportLayerTablePtr getLayerTable() const;
  OdBmExportLinetypeTablePtr getLinetypeTable() const;
  OdBmExportLineweightTablePtr getLineweightTable() const;
  OdString getName() const;
  OdInt32 getOverridesToLayers() const;
  OdInt32 getColourMode() const;
  OdInt32 getFileVersion() const;
  bool getUsingMainUnits() const;
  bool getCreateExternalReferences() const;
  bool getHideScopeBox() const;
  bool getHideReferencePlane() const;
  bool getHideUnreferenceViewTag() const;
  bool getPreserveCoincidentLines() const;
  bool getTrueColorByView() const;
  //
  // Main functionality
  //
};
#endif // _BM_EXPORTDGNSETTINGS_H_

