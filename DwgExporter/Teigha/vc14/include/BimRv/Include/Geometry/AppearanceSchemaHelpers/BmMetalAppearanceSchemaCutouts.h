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

#ifndef _BM_METALAPPEARANCESCHEMA_PERFORATIONS_H_
#define _BM_METALAPPEARANCESCHEMA_PERFORATIONS_H_
#include "Geometry/Entities/BmAppearanceAsset.h"
#include "Geometry/Enums/BmMetalPerforationType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with cut-outs part of Metal appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetalAppearanceSchemaCutouts
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetalAppearanceSchemaCutouts(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a type of shapes cut into the surface of the metal (perforation type).
    
    \param OdBm::MetalPerforationType::Enum [out] Output An enum value that contains the metal perforation type.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not. 
  */
  OdResult getType(OdBm::MetalPerforationType::Enum&) const;

  /** \details
    Sets the metal type.
    
    \param OdBm::MetalPerforationType::Enum [in] Input An enum value that contains the metal perforation type.
  */
  void setType(const OdBm::MetalPerforationType::Enum&);

  /** \details
    Retrieves a distance between centers (center spacing) of the perforation holes.
    
    \param double [out] Output A double value that contains a center spacing.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.    
  */
  OdResult getCenterSpacing(double&) const;

  /** \details
    Sets the distance between centers (center spacing) of the perforation holes.
    
    \param double [in] Input A double value that contains a center spacing.
  */
  void setCenterSpacing(const double&);

  /** \details
    Retrieves a size of the perforation holes or diameter of the circular relief patterns. 
    
    \param double [out] Output A double value that contains a size.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getSize(double&) const;

  /** \details
    Sets the size of the perforation holes.
    
    \param double [in] Input A double value that contains a size.
  */
  void setSize(const double&);

  /** \details
    Retrieves a perforation pattern using a black-and-white image. Perforation holes appears where the black areas occur.
  
    \param OdBmAssetPtr [out] Output A a perforation pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getCutoutMap(OdBmAssetPtr&) const;

  /** \details
    Sets the perforation pattern using a black-and-white image.
    
    \param OdBmAssetPtr [in] Input A a perforation pattern.
  */
  void setCutoutMap(const OdBmAssetPtr&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_METALAPPEARANCESCHEMA_PERFORATIONS_H_
