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

#ifndef _BM_GENERICAPPEARANCESCHEMA_TRANSPARENCY_H_
#define _BM_GENERICAPPEARANCESCHEMA_TRANSPARENCY_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with transparency part of Generic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaTransparency
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaTransparency(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves an amount of material transparency.
    When Transparency is 0, Translucency and Index of Refraction are not available.
    
    \param double [out] Output A double value between 0 (completely opaque) and 1 (completely transparent).
    \returns An OdResult value: eOk if schema contains transparency, eNotApplicable if not.    
  */
  OdResult getAmount(double&) const;

  /** \details
    Sets an amount of material transparency.
    
    \param double [in] Input highlight value.
  */
  void setAmount(const double&);

  /** \details
    Retrieves material transparency pattern.
    
    \param OdBmAssetPtr [out] Output A material transparency pattern.
    \returns An OdResult value: eOk if schema contains a transparency pattern, eNotApplicable if not.
  */
  OdResult getTransparencyMap(OdBmAssetPtr&) const;

  /** \details
    Sets the transparency pattern.
    
    \param OdBmAssetPtr [in] Input A transparency pattern.
  */
  void setTransparencyMap(const OdBmAssetPtr&);

  /** \details
    Retrieves a composite between the base color and the transparency image.
    
    \param double [out] Output A double value that contains a value of a composite.
    \returns An OdResult value: eOk if schema contains texture, eNotApplicable if not.
  */
  OdResult getImageFade(double&) const;

  /** \details
    Sets the composite between the base color and the transparency image.
    
    \param double [in] Input composite value.
  */
  void setImageFade(const double&);

  /** \details
    Retrieves a percent (as factor) of the light which is scattered by the material, so that objects behind the material cannot be seen clearly.
    
    \param double [out] Output A value of translucency: 0 (not translucent) and 1 (completely translucent, such as frosted glass).
    \returns An OdResult value: eOk if schema contains a translucency, eNotApplicable if not.
  */
  OdResult getTranslucency(double&) const;

  /** \details
    Sets the translucency value.
    
    \param double [in] Input composite value.
  */
  void setTranslucency(const double&);

  /** \details
    Retrieves a translucency pattern.
    
    \param OdBmAssetPtr [out] Output A material translucency pattern.
    \returns An OdResult value: eOk if schema contains translucency pattern, eNotApplicable if not.
  */
  OdResult getTranslucencyMap(OdBmAssetPtr&) const;

  /** \details
    Sets the translucency factor of the scattered light.
    
    \param OdBmAssetPtr [in] Input A material translucency pattern.
  */
  void setTranslucencyMap(const OdBmAssetPtr&);

  /** \details
    Retrieves a light bends factor when the light passes through the material.
    
    \param double [out] Output A value of refraction: 0 (no refraction) and 5 (most refraction).
    \returns An OdResult value: eOk if schema contains a refraction, eNotApplicable if not.
  */
  OdResult getRefraction(double&) const;

  /** \details
    Sets the light bends factor.
    
    \param double [in] Input composite value.
  */
  void setRefraction(const double&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GENERICAPPEARANCESCHEMA_TRANSPARENCY_H_
