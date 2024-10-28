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

#ifndef _BM_MASONRYAPPEARANCESCHEMA_H_
#define _BM_MASONRYAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmMasonryType.h"
#include "Geometry/Enums/BmMasonryFinishType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Masonry appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMasonryAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMasonryAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves the masonry type.
    
    \param OdBm::MasonryType::Enum [out] Output A type of masonry.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getMasonryType(OdBm::MasonryType::Enum&) const;

  /** \details
    Sets the mansory type.
    
    \param OdBm::MasonryType::Enum [in] Input A type of masonry.
  */
  void setMasonryType(const OdBm::MasonryType::Enum&);


  /** \details
  Retrieves a color of the masonry.
  
  \param OdBmCmColor [out] Output A masonry color.
  \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the color of the masonry.
    
    \param OdBmCmColor [in] Input A masonry color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves a masonry appearance pattern.
    
    \param OdBmAssetPtr [in] Input a properties asset.
    \returns An OdResult value: eOk if schema contains a diffuse pattern, eNotApplicable if not.
  */
  OdResult getAppearancePattern(OdBmAssetPtr&) const;

  /** \details
    Sets the masonry appearance pattern.
    
    \param OdBmAssetPtr [in] Input A masonry appearance pattern.
  */
  void setAppearancePattern(const OdBmAssetPtr&);

  /** \details
    Retrieves a type of masonry finish adjustment.
    
    \param OdBm::MasonryFinishType::Enum [out] Output A type of masonry finish adjustment.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getFinishType(OdBm::MasonryFinishType::Enum&) const;

  /** \details
    Sets the type of material.
    
    \param OdBm::MasonryFinishType::Enum [in] Input A type of masonry finish adjustment.
  */
  void setFinishType(const OdBm::MasonryFinishType::Enum&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_MASONRYAPPEARANCESCHEMA_H_
