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

#ifndef _BM_GENERICAPPEARANCESCHEMA_SELFILLUMINATION_H_
#define _BM_GENERICAPPEARANCESCHEMA_SELFILLUMINATION_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with self-illumination part of Generic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaSelfIllumination
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaSelfIllumination(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a color transmitted through a semi-transparent or transparent material.
  
    \param OdBmCmColor [out] Output A filtered color.
    \returns An OdResult value: eOk if schema contains a self-illumination, eNotApplicable if not.
  */
  OdResult getFilterColor(OdBmCmColor&) const;

  /** \details
    Sets a filtered color.
    
    \param OdBmCmColor [in] Input A color to be transmitted.
  */
  void setFilterColor(const OdBmCmColor&);

  /** \details
    Retrieves a pattern of colors transmitted through a semi-transparent or transparent material.
    
    \param OdBmAssetPtr [out] Output A material cut-out map.
    \returns An OdResult value: eOk if schema contains a filter pattern, eNotApplicable if not.
  */
  OdResult getFilterMap(OdBmAssetPtr&) const;

  /** \details
    Sets the pattern of colors transmitted through a semi-transparent or transparent material.
    
    \param OdBmAssetPtr [in] Input A filter map.
  */
  void setFilterMap(const OdBmAssetPtr&);

  /** \details
    Retrieves a brightness of the light emitted by the material (candelas per square meter).
    
    \param double [out] Output A value of luminance.
    \returns An OdResult value: eOk if schema contains a luminance, eNotApplicable if not.
  */
  OdResult getLuminance(double&) const;

  /** \details
    Sets the luminance.
    
    \param double [in] Input A value of luminance.
  */
  void setLuminance(const double&);

  /** \details
    Retrieves a color temperature of the light emitted by the material (Kelvin degrees (K)).
    
    \param double [out] Output A double value that contains a value of color temperature.
    \returns An OdResult value: eOk if schema contains a color temperature, eNotApplicable if not.
  */
  OdResult getColorTemperature(double&) const;

  /** \details
    Sets the light bends factor.
    
    \param double [in] Input A value of color temperature.
  */
  void setColorTemperature(const double&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GENERICAPPEARANCESCHEMA_SELFILLUMINATION_H_
