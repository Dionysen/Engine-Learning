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

#ifndef _BM_GBACKGROUNDIMAGERENDERSETTINGS_H_
#define _BM_GBACKGROUNDIMAGERENDERSETTINGS_H_
#include "Base/BmObject.h"



class OdBmGBackgroundImageRenderSettings;
class OdBmGBackgroundImageRenderSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGBackgroundImageRenderSettings object.
 */
typedef OdSmartPtr<OdBmGBackgroundImageRenderSettings> OdBmGBackgroundImageRenderSettingsPtr;

/** \details
 A data type that represents an array of OdBmGBackgroundImageRenderSettings objects.
 */
typedef OdArray<OdBmGBackgroundImageRenderSettingsPtr> OdBmGBackgroundImageRenderSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmGBackgroundImageRenderSettings
//
//----------------------------------------------------------

/** \details
    This class stores render settings of the background image.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGBackgroundImageRenderSettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGBackgroundImageRenderSettings);
public:
  /** \details
    Returns the file name of the image as an OdString value.
  */
  OdString getImageFileName() const;
  /** \details
    Returns the offset width as a double value.
  */
  double getOffsetWidth() const;
  /** \details
    Returns the offset height as a double value.
  */
  double getOffsetHeight() const;
  /** \details
    Returns the fit type as an OdInt32 value.
  */
  OdInt32 getFitType() const;
  //
  // Main functionality
  //
};
#endif // _BM_GBACKGROUNDIMAGERENDERSETTINGS_H_

