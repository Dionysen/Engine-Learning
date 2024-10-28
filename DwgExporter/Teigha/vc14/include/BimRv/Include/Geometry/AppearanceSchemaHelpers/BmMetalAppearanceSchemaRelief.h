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

#ifndef _BM_METALAPPEARANCESCHEMA_RELIEF_H_
#define _BM_METALAPPEARANCESCHEMA_RELIEF_H_
#include "Geometry/Enums/BmMetalReliefType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with relief part of Metal appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetalAppearanceSchemaRelief
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetalAppearanceSchemaRelief(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves the type of decorative design (relief pattern) pressed onto the surface of the metal.
    
    \param OdBm::MetalReliefType::Enum [out] Output A value of metal pattern type.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.  
  */
  OdResult getPatternType(OdBm::MetalReliefType::Enum&) const;

  /** \details
    Sets the relief pattern of the metal surface.
    
    \param OdBm::MetalReliefType::Enum [in] Input A value of metal pattern type.
  */
  void setPatternType(const OdBm::MetalReliefType::Enum&);

  /** \details
    Retrieves a relative height of the relief pattern.
    
    \param double [out] Output A double value between 0 (flat pattern) and 2.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.  
  */
  OdResult getHeight(double&) const;

  /** \details
    Sets the relative height of the relief pattern.
    
    \param double [in] Input A double value between 0 (flat pattern) and 2.
  */
  void setHeight(const double&);

  /** \details
    Retrieves a relative scale of the relief pattern.
    
    \param double [out] Output A double value between 0 (lagger) and 50 (smaller).
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.   
  */
  OdResult getScale(double&) const;

  /** \details
    Sets the relative scale of the relief pattern.
    
    \param double [in] Input A double value between 0 (lagger) and 50 (smaller).
  */
  void setScale(const double&);

  /** \details
    Retrieves a map of the relief pattern.
    
    \param OdBmAssetPtr [out] Output A map of the relief pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatternMap(OdBmAssetPtr&) const;

  /** \details
    Sets the map of the relief pattern.
    
    \param OdBmAssetPtr [in] Input A map of the relief pattern.
  */
  void setPatternMap(const OdBmAssetPtr&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_METALAPPEARANCESCHEMAHELPER_H_
