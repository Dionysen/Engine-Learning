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

#ifndef _BM_GENERICAPPEARANCESCHEMA_DIFFUSE_H_
#define _BM_GENERICAPPEARANCESCHEMA_DIFFUSE_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Generic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaDiffuse
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaDiffuse(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a color of the render appearance for the material.
    
    \param OdBmCmColor [out] Output A color of the render appearance.
    \returns An OdResult value: eOk if schema contains a diffuse color, eNotApplicable if not.
  */
  OdResult getDiffuseColor(OdBmCmColor&) const;

  /** \details
    Sets a render appearance color.
    
    \param OdBmCmColor [in] Input A color for the render appearance.
  */
  void setDiffuseColor(const OdBmCmColor&);

  /** \details
    Retrieves a material diffuse pattern.
    
    \param OdBmAssetPtr [in] Input A material diffuse pattern.
    \returns An OdResult value: eOk if schema contains a diffuse pattern, eNotApplicable if not.
  */
  OdResult getDiffuseMap(OdBmAssetPtr&) const;

  /** \details
    Sets the material diffuse map.
    
    \param OdBmAssetPtr [in] Input material diffuse pattern.
  */
  void setDiffuseMap(const OdBmAssetPtr&);

  /** \details
    Retrieves a composite between the base color and the diffuse image.
    
    \param double [out] Output A double value that contains a value of a composite.
    \returns An OdResult value: eOk if schema contains texture, eNotApplicable if not.
  */
  OdResult getImageFade(double&) const;

  /** \details
    Sets the composite between the base color and the diffuse image.
    
    \param double [in] Input composite value.
  */
  void setImageFade(const double&);

  /** \details
    Retrieves a glossy quality of the surface.
    
    \param double [out] Output A double value that contains a glossiness value.
    \returns An OdResult value: eOk if schema contains glossiness, eNotApplicable if not.
  */
  OdResult getGlossiness(double&) const;

  /** \details
    Sets the glossy quality of the surface.
    
    \param double [in] Input composite value.
  */
  void setGlossiness(const double&);

  /** \details
    Retrieves a glossiness pattern of the surface.
    
    \param OdBmAssetPtr [out] Output A glossiness pattern of the surface.
    \returns An OdResult value: eOk if schema contains glossiness pattern, eNotApplicable if not.
  */
  OdResult getGlossinessMap(OdBmAssetPtr&) const;

  /** \details
    Sets the glossiness pattern of the surface.
    
    \param OdBmAssetPtr [in] Input A glossiness pattern of the surface.
  */
  void setGlossinessMap(const OdBmAssetPtr&);

  /** \details
    Retrieves a status of using metallic highlights.
    
    \param double [out] Output A boolean value that contains a status of metallic highlight.
    \returns An OdResult value: eOk if schema contains glossiness, eNotApplicable if not.
  */
  OdResult getMetallicHighlight(bool&) const;

  /** \details
    Switches metallic highlights on or off.
    
    \param double [in] Input highlight value.
  */
  void setMetallicHighlight(bool);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GENERICAPPEARANCESCHEMA_DIFFUSE_H_
