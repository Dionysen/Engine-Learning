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

#ifndef _BM_RVTLINKDISPLAYSETTINGS_H_
#define _BM_RVTLINKDISPLAYSETTINGS_H_
#include "Base/BmObject.h"

class OdBmForeignElemRef;
typedef OdSmartPtr<OdBmForeignElemRef> OdBmForeignElemRefPtr;
class OdBmRvtLinkGraphicSettings;
typedef OdSmartPtr<OdBmRvtLinkGraphicSettings> OdBmRvtLinkGraphicSettingsPtr;
class OdBmRvtLinkDisplaySettings;
typedef OdSmartPtr<OdBmRvtLinkDisplaySettings> OdBmRvtLinkDisplaySettingsPtr;

class OdBmRvtLinkDisplaySettings;
class OdBmRvtLinkDisplaySettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRvtLinkDisplaySettings object.
 */
typedef OdSmartPtr<OdBmRvtLinkDisplaySettings> OdBmRvtLinkDisplaySettingsPtr;

/** \details
 A data type that represents an array of OdBmRvtLinkDisplaySettings objects.
 */
typedef OdArray<OdBmRvtLinkDisplaySettingsPtr> OdBmRvtLinkDisplaySettingsPtrArray;

//----------------------------------------------------------
//
// OdBmRvtLinkDisplaySettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRvtLinkDisplaySettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRvtLinkDisplaySettings);
public:
  OdInt32 getOverallHLE() const;
  OdBmForeignElemRefPtr getLinkedView() const;
  OdInt32 getViewRangeHLE() const;
  OdInt32 getPhaseHLE() const;
  OdBmForeignElemRefPtr getPhase() const;
  OdInt32 getPhaseFilterHLE() const;
  OdBmForeignElemRefPtr getPhaseFilter() const;
  OdInt32 getDetailLevelHLE() const;
  OdInt32 getDetailLevel() const;
  OdInt32 getDisciplineHLE() const;
  OdInt32 getDiscipline() const;
  OdInt32 getObjectStylesHLE() const;
  OdInt32 getColorSchemeHLE() const;
  OdInt32 getModelHLE() const;
  OdInt32 getAnnotationHLE() const;
  OdInt32 getAnalyticalModelHLE() const;
  OdInt32 getImportHLE() const;
  OdInt32 getPartsVisibilityHLE() const;
  OdInt32 getDesignOptionsHLE() const;
  OdInt32 getNestedLinksHLE() const;
  OdInt32 getViewFilterHLE() const;
  OdInt32 getWorksetsHLE() const;
  OdInt32 getCleanupType() const;
  OdInt32 getPartsVisibility() const;
  bool getHostOverridden() const;
  bool getModelsExcluded() const;
  bool getAnnotationsExcluded() const;
  bool getAnalyticalModelsExcluded() const;
  bool getImportsExcluded() const;
  bool getProjectImportsExcluded() const;
  void getGraphicSettingsMap(OdBmMap<OdBmForeignElemRefPtr, OdBmRvtLinkGraphicSettingsPtr> &) const;
  void getDesignOptionsMap(OdBmMap<OdBmForeignElemRefPtr, OdBmForeignElemRefPtr> &) const;
  void getNestedLinksMap(OdBmMap<OdBmForeignElemRefPtr, OdBmRvtLinkDisplaySettingsPtr> &) const;
  void getWorksetsLinksMap(OdBmMap<OdGUID, bool> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_RVTLINKDISPLAYSETTINGS_H_

