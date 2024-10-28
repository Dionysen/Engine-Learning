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

#ifndef _BM_OVERRIDEGRAPHICSETTINGS_H_
#define _BM_OVERRIDEGRAPHICSETTINGS_H_
#include "Base/BmObject.h"
// BEGIN: Includes
class OdBmGStyleColorOverrider;
typedef OdSmartPtr<OdBmGStyleColorOverrider> OdBmGStyleColorOverriderPtr;
class OdBmGLinePatternOverrider;
typedef OdSmartPtr<OdBmGLinePatternOverrider> OdBmGLinePatternOverriderPtr;
class OdBmGPenNumberOverrider;
typedef OdSmartPtr<OdBmGPenNumberOverrider> OdBmGPenNumberOverriderPtr;
class OdBmGFillPatternOverrider;
typedef OdSmartPtr<OdBmGFillPatternOverrider> OdBmGFillPatternOverriderPtr;
class OdBmGFillColorOverrider;
typedef OdSmartPtr<OdBmGFillColorOverrider> OdBmGFillColorOverriderPtr;
class OdBmGSurfacesTransparencyOverrider;
typedef OdSmartPtr<OdBmGSurfacesTransparencyOverrider> OdBmGSurfacesTransparencyOverriderPtr;
// END: Includes

class OdBmGSurfacesTransparencyOverrider;
typedef OdSmartPtr<OdBmGSurfacesTransparencyOverrider> OdBmGSurfacesTransparencyOverriderPtr;

class OdBmOverrideGraphicSettings;
class OdBmOverrideGraphicSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmOverrideGraphicSettings object.
 */
typedef OdSmartPtr<OdBmOverrideGraphicSettings> OdBmOverrideGraphicSettingsPtr;

/** \details
 A data type that represents an array of OdBmOverrideGraphicSettings objects.
 */
typedef OdArray<OdBmOverrideGraphicSettingsPtr> OdBmOverrideGraphicSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmOverrideGraphicSettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmOverrideGraphicSettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmOverrideGraphicSettings);
public:
  OdInt32 getDetailLevel() const;
  bool getHalftone() const;
  bool getProjFillPatternVisible() const;
  bool getCutFillPatternVisible() const;
  OdBmObjectPtr getProjPenNumber() const;
  OdBmObjectPtr getCutPenNumber() const;
  OdBmObjectPtr getProjLinePattern() const;
  OdBmObjectPtr getCutLinePattern() const;
  OdBmObjectPtr getProjPenColor() const;
  OdBmObjectPtr getCutPenColor() const;
  OdBmObjectPtr getProjFillPattern() const;
  OdBmObjectPtr getCutFillPattern() const;
  OdBmObjectPtr getProjFillColor() const;
  OdBmObjectPtr getCutFillColor() const;
  OdBmGSurfacesTransparencyOverriderPtr getSurfacesTransparency() const;
  bool getSurfaceBackgroundFillPatternVisible() const;
  bool getCutBackgroundFillPatternVisible() const;
  OdBmObjectPtr getSurfaceBackgroundPatternIdOverrider() const;
  OdBmObjectPtr getCutBackgroundPatternIdOverrider() const;
  OdBmObjectPtr getSurfaceBackgroundPatternColorOverrider() const;
  OdBmObjectPtr getCutBackgroundPatternColorOverrider() const;
  //
  // Main functionality
  //

  /** \details
    Sets the the detail level.

    \param OdInt32 [in] Detail level value.
  */
  OdResult setDetailLevel(OdInt32);
  
  /** \details
    Sets the value of the halftone override.

    \param bool [in] Value of the halftone override.
  */
  OdResult setHalftone(bool);

  /** \details
    Sets the value of the projection surface fillpattern override.

    \param bool [in] Value of the projection fillpattern override.
  */
  OdResult setProjFillPatternVisible(bool);

  /** \details
    Sets the value of the cut surface fillpattern override.

    \param bool [in] Value of the cut fillpattern override.
  */
  OdResult setCutFillPatternVisible(bool);

  /** \details
    Sets the projection surface line weight using OdBmGPenNumberOverrider.

    \param OdBmGPenNumberOverriderPtr [in] Value of the projection surface line weight for the override.
  */
  OdResult setProjPenNumber(const OdBmGPenNumberOverriderPtr&);

  /** \details
    Sets the cut surface line weight using OdBmGPenNumberOverrider.

    \param OdBmGPenNumberOverriderPtr [in] Value of the cut surface line weight for the override.
  */
  OdResult setCutPenNumber(const OdBmGPenNumberOverriderPtr&);

  /** \details
    Sets the ObjectId of the projection surface line pattern using OdBmGLinePatternOverrider.

    \param OdBmGLinePatternOverriderPtr [in] Value of the projection surface line pattern for the override.
  */
  OdResult setProjLinePattern(const OdBmGLinePatternOverriderPtr&);

  /** \details
    Sets the ObjectId of the cut surface line pattern using OdBmGLinePatternOverrider.

    \param OdBmGLinePatternOverriderPtr [in] Value of the cut surface line pattern for the override.
  */
  OdResult setCutLinePattern(const OdBmGLinePatternOverriderPtr&);

  /** \details
    Sets the projection surface line color using OdBmGStyleColorOverrider.

    \param OdBmGStyleColorOverriderPtr [in] Value of the projection surface line color for the override.
  */
  OdResult setProjPenColor(const OdBmGStyleColorOverriderPtr&);

  /** \details
    Sets the cut surface line color using OdBmGStyleColorOverrider.

    \param OdBmGStyleColorOverriderPtr [in] Value of the cut surface line color for the override.
  */
  OdResult setCutPenColor(const OdBmGStyleColorOverriderPtr&);

  /** \details
    Sets the ObjectId of the projection surface fillpattern using OdBmGFillPatternOverrider.

    \param OdBmGFillPatternOverriderPtr [in] Value of the projection surface fillpattern for the override.
  */
  OdResult setProjFillPattern(const OdBmGFillPatternOverriderPtr&);

  /** \details
    Sets the ObjectId of the cut surface fillpattern using OdBmGFillPatternOverrider.

    \param OdBmGFillPatternOverriderPtr [in] Value of the cut surface fillpattern for the override.
  */
  OdResult setCutFillPattern(const OdBmGFillPatternOverriderPtr&);

  /** \details
    Sets the projection surface fill color using OdBmGFillColorOverrider.

    \param OdBmGFillColorOverriderPtr [in] Value of the projection surface fill color for the override.
  */
  OdResult setProjFillColor(const OdBmGFillColorOverriderPtr&);

  /** \details
    Sets the cut surface fill color using OdBmGFillColorOverrider.

    \param OdBmGFillColorOverriderPtr [in] Value of the cut surface fill color for the override.
  */
  OdResult setCutFillColor(const OdBmGFillColorOverriderPtr&);

  /** \details
    Sets the projection surface transparency using OdBmGSurfacesTransparencyOverrider.

    \param OdBmGSurfacesTransparencyOverriderPtr [in] Value of the projection surface transparency for the override.
  */
  OdResult setSurfacesTransparency(const OdBmGSurfacesTransparencyOverriderPtr&);

  /** \details
    Sets the visibility of the surface background fillpattern.

    \param bool [in] Value of the surface background fillpattern visibility.
  */
  OdResult setSurfaceBackgroundFillPatternVisible(bool);

  /** \details
    Sets the visibility of the cut surface background fillpattern.

    \param bool [in] Value of the cut surface background fillpattern visibility.
  */
  OdResult setCutBackgroundFillPatternVisible(bool);

  /** \details
    Sets the ObjectId of the projection surface background fillpattern using OdBmGFillPatternOverrider.

    \param OdBmGFillPatternOverriderPtr [in] Value of the projection surface background fillpattern for the override.
  */
  OdResult setSurfaceBackgroundPatternIdOverrider(const OdBmGFillPatternOverriderPtr&);

  /** \details
    Sets the ObjectId of the cut surface background fillpattern using OdBmGFillPatternOverrider.

    \param OdBmGFillPatternOverriderPtr [in] Value of the cut surface background fillpattern for the override.
  */
  OdResult setCutBackgroundPatternIdOverrider(const OdBmGFillPatternOverriderPtr&);

  /** \details
    Sets the projection surface background fillpattern color using OdBmGStyleColorOverrider.

    \param OdBmGStyleColorOverriderPtr [in] Value of the projection surface background fillpattern color for the override.
  */
  OdResult setSurfaceBackgroundPatternColorOverrider(const OdBmGStyleColorOverriderPtr&);

  /** \details
    Sets the cut surface background fillpattern color using OdBmGStyleColorOverrider.

    \param OdBmGStyleColorOverriderPtr [in] Value of the cut surface background fillpattern color for the override.
  */
  OdResult setCutBackgroundPatternColorOverrider(const OdBmGStyleColorOverriderPtr&);

};


#endif // _BM_OVERRIDEGRAPHICSETTINGS_H_

