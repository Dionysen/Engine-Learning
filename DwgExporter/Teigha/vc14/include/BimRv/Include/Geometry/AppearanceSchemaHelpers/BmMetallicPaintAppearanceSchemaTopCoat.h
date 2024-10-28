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

#ifndef _BM_METALLICPAINTAPPEARANCESCHEMA_TOPCOAT_H_
#define _BM_METALLICPAINTAPPEARANCESCHEMA_TOPCOAT_H_
#include "Geometry/Enums/BmMetallicPaintTopCoatFinishType.h"
#include "Geometry/Enums/BmMetallicPaintTopCoatType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with top coat part of Metallic Paint appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetallicPaintAppearanceSchemaTopCoat
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetallicPaintAppearanceSchemaTopCoat(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a type of top coat of paint appearance.
    
    \param OdBm::MetallicPaintTopCoatType::Enum [out] Output A type of top coat finish adjustment.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.    
  */
  OdResult getType(OdBm::MetallicPaintTopCoatType::Enum&) const;

  /** \details
    Sets the type of top coat of paint appearance.
    
    \param OdBm::MetallicPaintTopCoatType::Enum [in] Input A type of topCoat finish adjustment.
  */
  void setType(const OdBm::MetallicPaintTopCoatType::Enum&);

  /** \details
    Retrieves a glossiness level of top coat of paint appearance.
    
    \param double [out] Output A value that contains the glossiness level.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.   
  */
  OdResult getGlossiness(double&) const;

  /** \details
    Sets the glossiness level of top coat. Applicable for custom top coats.
    
    \param double [in] Input A glossiness level between 0 to 100.
  */
  void setGlossiness(const double&);

  /** \details
    Retrieves a level of Fresnel effect for surface of material.
    
    \param double [out] Output A value that contains the glossiness level.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not. 
  */
  OdResult getAngleFalloff(double&) const;

  /** \details
    Sets the level of Fresnel effect for surface of material: 0 - no effect, constant reflections; 
    100 - reflections only in a narrow zone at extreme angles.
    Applicable for custom top coats.
    
    \param double [in] Input A glossiness level between 0 to 100.
  */
  void setAngleFalloff(const double&);

  /** \details
    Retrieves a type of top coat finish adjustment.
    
    \param OdBm::MetallicPaintTopCoatFinishType::Enum [out] Output A type of top coat finish adjustment.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.    
  */
  OdResult getFinishType(OdBm::MetallicPaintTopCoatFinishType::Enum&) const;

  /** \details
    Sets the type of top coat finish adjustment.
    
    \param OdBm::MetallicPaintTopCoatFinishType::Enum [in] Input A type of top coat finish adjustment.
  */
  void setFinishType(const OdBm::MetallicPaintTopCoatFinishType::Enum&);

  /** \details
    Retrieves a chromatic finish amount of Orange Peel finish type.
    
    \param double [out] Output A value that contains amount of chromatic finish.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.  
  */
  OdResult getAmount(double&) const;

  /** \details
    Sets the a chromatic finish amount for Orange Peel finish type.
    
    \param double [in] Input A chromatic finish amount between 0 to 100.
  */
  void setAmount(const double&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_METALLICPAINTAPPEARANCESCHEMA_TOPCOAT_H_
