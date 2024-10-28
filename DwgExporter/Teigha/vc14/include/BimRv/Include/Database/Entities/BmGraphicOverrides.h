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

#ifndef _BM_GRAPHICOVERRIDES_H_
#define _BM_GRAPHICOVERRIDES_H_
#include "Base/BmObject.h"

class OdBmGStyle;
typedef OdSmartPtr<OdBmGStyle> OdBmGStylePtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmGraphicOverrides;
class OdBmGraphicOverridesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGraphicOverrides object.
 */
typedef OdSmartPtr<OdBmGraphicOverrides> OdBmGraphicOverridesPtr;

/** \details
 A data type that represents an array of OdBmGraphicOverrides objects.
 */
typedef OdArray<OdBmGraphicOverridesPtr> OdBmGraphicOverridesPtrArray;

class OdBmOverrideGraphicSettings;
typedef OdSmartPtr<OdBmOverrideGraphicSettings> OdBmOverrideGraphicSettingsPtr;

//----------------------------------------------------------
//
// OdBmGraphicOverrides
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmGraphicOverrides : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGraphicOverrides);
public:
  OdInt32 getStructuralLayerCleanupType() const;
  bool getHostLayersOverridden() const;
  void getGStylesProj(OdBmMap<OdBmObjectId, OdBmGStylePtr> &) const;
  void getGStylesCut(OdBmMap<OdBmObjectId, OdBmGStylePtr> &) const;
  void getFillPatternsProj(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getFillPatternsCut(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getFillColorsProj(OdBmMap<OdBmObjectId, OdUInt32> &) const;
  void getFillColorsCut(OdBmMap<OdBmObjectId, OdUInt32> &) const;
  void getFillHiddenProj(OdBmObjectIdArray &) const;
  void getFillHiddenCut(OdBmObjectIdArray &) const;
  void getHalftones(OdBmObjectIdArray &) const;
  void getSurfacesTransparency(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getDetailLevels(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getBackgroundFillPatternsProj(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getBackgroundFillPatternsCut(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getBackgroundFillColorsProj(OdBmMap<OdBmObjectId, OdUInt32> &) const;
  void getBackgroundFillColorsCut(OdBmMap<OdBmObjectId, OdUInt32> &) const;
  void getBackgroundFillHiddenProj(OdBmObjectIdArray &) const;
  void getBackgroundFillHiddenCut(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //

  /** \details
    Returns graphic overrides for an object in view.

    \param OdBmObjectId [in] Input object ID.
  */
  OdBmOverrideGraphicSettingsPtr getOverrideGraphicSettings(const OdBmObjectId&) const;

  /** \details
    Sets graphic overrides for an object in view.

    \param OdBmObjectId [in] Input object ID. OdBmOverrideGraphicSettingsPtr [in] Input pointer to graphic overrides
  */
  OdResult setOverrideGraphicSettings(const OdBmObjectId&, const OdBmOverrideGraphicSettingsPtr&);
};


#endif // _BM_GRAPHICOVERRIDES_H_

