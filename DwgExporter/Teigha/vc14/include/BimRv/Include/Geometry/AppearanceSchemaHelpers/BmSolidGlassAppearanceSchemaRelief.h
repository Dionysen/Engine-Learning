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

#ifndef _BM_SOLIDGLASS_APPEARANCESCHEMA_RELIEF_H_
#define _BM_SOLIDGLASS_APPEARANCESCHEMA_RELIEF_H_
#include "BmFinishBumpsSchemaHelper.h"
#include "Geometry/Enums/BmSolidGlassReliefPattern.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with relief part of SolidGlass appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmSolidGlassAppearanceSchemaRelief : public OdBmFinishBumpsSchemaHelper
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmSolidGlassAppearanceSchemaRelief(const OdBmAssetPtr& pAsset) : OdBmFinishBumpsSchemaHelper(pAsset) {}

  /** \details
    Retrieves the type of decorative design (relief pattern) pressed onto the surface of the metal.
    
    \param OdBm::SolidGlassPatternType::Enum [out] Output A value of solid glass pattern type.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatternType(OdBm::SolidGlassPatternType::Enum&) const;

  /** \details
    Sets the relief pattern of the metal surface.
    
    \param OdBm::SolidGlassPatternType::Enum [in] Input A value of solid glass pattern type.
  */
  void setPatternType(const OdBm::SolidGlassPatternType::Enum&);

  /** \details
    Sets the relative height of the relief pattern.
    
    \param double [in] Input A double value between 0 (flat pattern) and 2.
  */
  void setHeight(const double&);

private:
  // hide default methods
  OdResult getPatternType(OdInt32&) const;
  void setPatternType(const OdInt32&);
};

#endif // _BM_SOLIDGLASS_APPEARANCESCHEMA_RELIEF_H_
