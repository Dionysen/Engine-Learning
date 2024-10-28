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

#ifndef _BM_ASSET_H_
#define _BM_ASSET_H_
#include "Geometry/Entities/BmAProperties.h"

#define ASSET_PROP_COLOR_SHIFTING             OD_T("colorShifting")
#define ASSET_PROP_DISC_NORMAL                OD_T("disc_normal")
#define ASSET_PROP_DISC_RADIUS                OD_T("disc_radius")
#define ASSET_PROP_DISTRIBUTION               OD_T("distribution")
#define ASSET_PROP_ELECTRICAL_EFFICIENCY      OD_T("electricalEfficiency")
#define ASSET_PROP_FALL_OFF                   OD_T("fallOff")
#define ASSET_PROP_FILTER_COLOR               OD_T("filterColor")
#define ASSET_PROP_HOT_SPOT                   OD_T("hotSpot")
#define ASSET_PROP_INTENSITY_UNITS            OD_T("intensityUnits")
#define ASSET_PROP_INTENSITY_VALUE            OD_T("intensityValue")
#define ASSET_PROP_IS_LINEAR_LIGHT            OD_T("isLinearLight")
#define ASSET_PROP_LIGHT_COLOR_UNITS          OD_T("lightColorUnits")
#define ASSET_PROP_LIGHT_LOSS_FACTOR          OD_T("lightLossFactor")
#define ASSET_PROP_LIGHT_OBJECT_AREA_TYPE     OD_T("lightobjectareatype")
#define ASSET_PROP_LIGHT_OBJECT_VISIBLE       OD_T("lightobjectvisible")
#define ASSET_PROP_LIGHT_PROFILE_CACHE_DATA   OD_T("lightProfileCacheData")
#define ASSET_PROP_LIGHT_PROFILE_FILE_NAME    OD_T("lightProfileFileName")
#define ASSET_PROP_LIGHT_TEMP_PRESETS         OD_T("lightTempPresets")
#define ASSET_PROP_LIGHT_TEMPERATURE          OD_T("lightTemperature")
#define ASSET_PROP_ON                         OD_T("on")
#define ASSET_PROP_RECTANGLE_LENGTH           OD_T("rectangle_length")
#define ASSET_PROP_RECTANGLE_WIDTH            OD_T("rectangle_width")
#define ASSET_PROP_SHADOW_ON                  OD_T("shadowOn")



class OdBmAsset;
class OdBmAssetImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAsset object.
 */
typedef OdSmartPtr<OdBmAsset> OdBmAssetPtr;

/** \details
 A data type that represents an array of OdBmAsset objects.
 */
typedef OdArray<OdBmAssetPtr> OdBmAssetPtrArray;

//----------------------------------------------------------
//
// OdBmAsset
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmAsset : public OdBmAProperties {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAsset);
public:
  OdString getLibrary() const;
  OdResult setLibrary(const OdString&);
  OdString getScene() const;
  OdResult setScene(const OdString&);
  OdBmObjectPtr getImage() const;
  OdResult setImage(const OdBmObjectPtr&);
  OdInt32 getAssetType() const;
  OdResult setAssetType(OdInt32);
  //
  // Main functionality
  //

};


#endif // _BM_ASSET_H_

