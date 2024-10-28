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

#ifndef _BM_GLAZINGAPPEARANCESCHEMA_H_
#define _BM_GLAZINGAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmGlassColorId.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Glazing appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGlazingAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGlazingAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a predefined Glass color.
    
    \param OdBm::GlassColor::Enum [out] Output An enum value that contains the id of predefined Glass color.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBm::GlassColor::Enum&) const;

  /** \details
    Retrieves the calculated Glazing color.

    \param OdBmCmColor [out] Output A color value calculated using id of the predefined Glazing color.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the predefined Glass color.
    
    \param OdBm::GlassColor::Enum [in] Input An enum value that contains the id of predefined Glass color.
  */
  void setColor(const OdBm::GlassColor::Enum&);

  /** \details
    Retrieves a custom color of the Glazing.
    
    \param OdBmCmColor [out] Output A custom color of the Glazing.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getCustomColor(OdBmCmColor&) const;

  /** \details
    Sets the custom color of the Glazing.
    
    \param OdBmCmColor [in] Input A custom color of the Glazing.
  */
  void setCustomColor(const OdBmCmColor&);

  /** \details
    Retrieves a pattern of custom color of the Glazing.
  
    \param OdBmAssetPtr [out] Output A pattern of custom color of the Glazing.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getCustomColorMap(OdBmAssetPtr&) const;

  /** \details
    Sets the pattern of custom color of the Glazing.
    
    \param OdBmAssetPtr [in] Input A pattern of custom color of the Glazing.
  */
  void setCustomColorMap(const OdBmAssetPtr&);

  /** \details
    Retrieves the amount of light that is reflected from the surface of the glass rather than passed through it.
    
    \param double [out] Output A double value between 0 (none) and 1 (full).
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getReflectance(double&) const;

  /** \details
    Sets the reflectance level.
    
    \param double [in] Input A double value between 0 (none) and 1 (full).
  */
  void setReflectance(const double&);

  /** \details
    Retrieves the number of glass sheets.
    
    \param OdInt32 [out] Output A value between 1 and 6.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getSheetsOfGlass(OdInt32&) const;

  /** \details
    Sets the number of glass sheets.
    
    \param OdInt32 [in] Input A value between 1 and 6.
  */
  void setSheetsOfGlass(OdInt32);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GLAZINGAPPEARANCESCHEMA_H_
