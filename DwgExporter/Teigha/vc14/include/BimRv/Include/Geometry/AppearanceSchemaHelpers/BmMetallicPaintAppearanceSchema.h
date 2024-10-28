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

#ifndef _BM_METALLICPAINTAPPEARANCESCHEMA_H_
#define _BM_METALLICPAINTAPPEARANCESCHEMA_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Metallic Paint appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetallicPaintAppearanceSchema
{
public:
  /** \details
    Default constructor.
  
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetallicPaintAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a metallic paint color.
    
    \param OdBmCmColor [out] Output A metallic paint color.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the metallic paint color.
    
    \param OdBmCmColor [in] Input A metallic paint color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves a metallic paint appearance pattern.
    
    \param OdBmAssetPtr [in] Input a properties asset.
    \returns An OdResult value: eOk if schema contains a diffuse pattern, eNotApplicable if not.  
  */
  OdResult getAppearancePattern(OdBmAssetPtr&) const;

  /** \details
    Sets the metallic paint appearance pattern.
    
    \param OdBmAssetPtr [in] Input A topCoat appearance pattern.
  */
  void setAppearancePattern(const OdBmAssetPtr&);

  /** \details
    Retrieves a level of highlight spread of specular reflection.
    
    \param double [out] Output A value that contains the highlight spread level.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getHighlightSpread(double&) const;

  /** \details
    Sets the level of highlight spread of specular reflection.
    
    \param double [in] Input A value between 0 to 100.
  */
  void setHighlightSpread(const double&);
 
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_METALLICPAINTAPPEARANCESCHEMA_H_
