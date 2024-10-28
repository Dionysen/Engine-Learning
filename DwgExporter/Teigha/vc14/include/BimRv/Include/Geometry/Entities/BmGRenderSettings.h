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

#ifndef _BM_GRENDERSETTINGS_H_
#define _BM_GRENDERSETTINGS_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Geometry/Enums/BmLightingScheme.h"
// END: Includes

class OdBmAsset;
typedef OdSmartPtr<OdBmAsset> OdBmAssetPtr;
class OdBmLightScheme;
typedef OdSmartPtr<OdBmLightScheme> OdBmLightSchemePtr;
class OdBmGBackgroundImageRenderSettings;
typedef OdSmartPtr<OdBmGBackgroundImageRenderSettings> OdBmGBackgroundImageRenderSettingsPtr;
class OdBmCmColor;

class OdBmGRenderSettings;
class OdBmGRenderSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGRenderSettings object.
 */
typedef OdSmartPtr<OdBmGRenderSettings> OdBmGRenderSettingsPtr;

/** \details
 A data type that represents an array of OdBmGRenderSettings objects.
 */
typedef OdArray<OdBmGRenderSettingsPtr> OdBmGRenderSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmGRenderSettings
//
//----------------------------------------------------------

/** \details
    This class stores render settings.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGRenderSettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGRenderSettings);
public:
  /** \details
    Returns the visibility distance as a double value.
  */
  double getVisibilityDistance() const;
  /** \details
    Returns the render resolution as an OdInt32 value.
  */
  OdInt32 getResolution() const;
  /** \details
    Returns the printed width of the page as an OdInt32 value.
  */
  OdInt32 getPrintPageWidth() const;
  /** \details
    Returns the render quality as an OdInt32 value.
  */
  OdInt32 getQuality() const;
  /** \details
    Returns the render lighting value as an OdInt32 value.
  */
  OdInt32 getLighting() const;
  /** \details
    Returns the background as an OdInt32 value.
  */
  OdInt32 getBackground() const;
  /** \details
    Returns the background color as an OdBmCmColor value.
  */
  OdBmCmColor getClrBackground() const;
  /** \details
    Returns true if this object has a screen resolution.
  */
  bool getScreenResolution() const;
  /** \details
    Returns environment assets as a pointer to an OdBmAsset object.
  */
  OdBmAssetPtr getEnvironmentAssets() const;
  /** \details
    Returns exposure assets as a pointer to an OdBmAsset object.
  */
  OdBmAssetPtr getExposureAssets() const;
  /** \details
    Returns the light scheme of this object as a pointer to an OdBmLightScheme object.
  */
  OdBmLightSchemePtr getLightScheme() const;
  /** \details
    Returns background image settings as a pointer to an OdBmGBackgroundImageRenderSettings object.
  */
  OdBmGBackgroundImageRenderSettingsPtr getBkImageSettings() const;
  /** \details
    Returns the custom quality asset as a pointer to an OdBmAsset object.
  */
  OdBmAssetPtr getCustomQualityAsset() const;
  //
  // Main functionality
  //

public:
};
#endif // _BM_GRENDERSETTINGS_H_

