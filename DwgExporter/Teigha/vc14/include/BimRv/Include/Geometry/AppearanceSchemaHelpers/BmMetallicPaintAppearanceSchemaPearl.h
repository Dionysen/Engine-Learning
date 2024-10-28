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

#ifndef _BM_METALLICPAINTAPPEARANCESCHEMA_PEARL_H_
#define _BM_METALLICPAINTAPPEARANCESCHEMA_PEARL_H_
#include "Geometry/Enums/BmMetallicPaintPearlType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with pearl part of Metallic Paint appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetallicPaintAppearanceSchemaPearl
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetallicPaintAppearanceSchemaPearl(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a type of pearl effect of paint appearance.
    
    \param OdBm::MetallicPaintPearlType::Enum [out] Output A type of top coat finish adjustment.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.   
  */
  OdResult getType(OdBm::MetallicPaintPearlType::Enum&) const;

  /** \details
    Sets the type of pearl effect of paint appearance.
    
    \param OdBm::MetallicPaintPearlType::Enum [in] Input A type of topCoat finish adjustment.
  */
  void setType(const OdBm::MetallicPaintPearlType::Enum&);


  /** \details
    Retrieves a color of pearl effect of paint appearance.
    
    \param OdBmCmColor [out] Output A metallic paint pearl color.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the metallic paint pearl color.
    Applicable for pearl type of Second color.
    
    \param OdBmCmColor [in] Input A metallic paint pearl color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves a blend ratio of pearl colors.
    
    \param double [out] Output A blend ratio.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.  
  */
  OdResult getBlend(double&) const;

  /** \details
    Sets the blend ratio of pearl colors.
    Applicable for pearl type of Second color.
    
    \param double [in] Input A value between 0 to 100.
  */
  void setBlend(const double&);

  /** \details
    Retrieves a blend ratio between pearl effect and the base color.
    
    \param double [out] Output A blend ratio.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.  
  */
  OdResult getAmount(double&) const;

  /** \details
    Sets the blend ratio between pearl effect and the base color.
    
    \param double [in] Input A value between 0 to 100.
  */
  void setAmount(const double&);
 
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_METALLICPAINTAPPEARANCESCHEMA_PEARL_H_
