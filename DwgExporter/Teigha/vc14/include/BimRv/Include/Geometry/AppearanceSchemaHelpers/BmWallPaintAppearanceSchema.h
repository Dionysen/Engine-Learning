//////////////////////////////////////////////////////////////////////////////
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

#ifndef _BM_WALLPAINTAPPEARANCESCHEMA_H_
#define _BM_WALLPAINTAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmWallPaintFinishType.h"
#include "Geometry/Enums/BmWallPaintApplicationType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Wall Paint appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmWallPaintAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmWallPaintAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves wall paint color.
    
    \param OdBmCmColor [out] Output A wall paint color.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.  
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the wall paint color.
    
    \param OdBmCmColor [in] Input A wall paint color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves the type of the wall paint material.
    
    \param OdBm::WallPaintFinishType::Enum [out] Output A value of the type of wall paint.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getFinishType(OdBm::WallPaintFinishType::Enum&) const;

  /** \details
    Sets the finish type of the wall paint material.
    
    \param OdBm::WallPaintFinishType::Enum [in] Input A value of the type of wall paint.
  */
  void setFinishType(const OdBm::WallPaintFinishType::Enum&);

  /** \details
    Retrieves the type of wall paint application.
    
    \param OdBm::WallPaintApplicationType::Enum [out] Output A value of the wall paint application type.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getApplicationType(OdBm::WallPaintApplicationType::Enum&) const;

  /** \details
    Sets the type of wall paint application.
    
    \param OdBm::WallPaintApplicationType::Enum [in] Input A value of the wall paint application type.
  */
  void setApplicationType(const OdBm::WallPaintApplicationType::Enum&);

private:
  OdBmAssetPtr m_pAsset;
};
// End of Wallpaint properties

#endif // _BM_WALLPAINTAPPEARANCESCHEMA_H_
