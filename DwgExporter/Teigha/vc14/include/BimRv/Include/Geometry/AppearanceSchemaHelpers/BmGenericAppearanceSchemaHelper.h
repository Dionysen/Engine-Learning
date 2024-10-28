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

#ifndef _BM_GENERICAPPEARANCESCHEMAHELPER_H_
#define _BM_GENERICAPPEARANCESCHEMAHELPER_H_
#include "BmAppearanceSchemaBaseHelper.h"
#include "BmGenericAppearanceSchemaDiffuse.h"
#include "BmGenericAppearanceSchemaReflectivity.h"
#include "BmGenericAppearanceSchemaTransparency.h"
#include "BmGenericAppearanceSchemaSelfIllumination.h"
#include "BmGenericAppearanceSchemaBump.h"
#include "BmGenericAppearanceSchemaCutouts.h"

/** \details
  A helper class to work with Generic appearance schema.
  All schemas in diffuse, transparency, cut-out, self illumination and bump maps
  can be one of the following: image, checkers, gradient, marble, noise, speckle, tiles, waves, wood
 */
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaHelper: public OdBmAppearanceSchemaBaseHelper {
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaHelper(const OdBmAssetPtr& pAsset) :
    OdBmAppearanceSchemaBaseHelper(pAsset) {}

  /** \details
    Retrieves the base color of appearance of the material.
  */
  virtual OdResult getColor(OdBmCmColor& color) const;
  
  /** \details
    Sets the base color of appearance of the material.
  */
  virtual OdResult setColor(const OdBmCmColor& color);

  /** \details
    Retrieves the base part of the Generic material.
  */
  OdBmGenericAppearanceSchemaDiffuse& diffuse();
  
  /** \details
    Retrieves the generic part of the Generic material as a constant.
  */
  const OdBmGenericAppearanceSchemaDiffuse& diffuse() const;
  
  /** \details
    Retrieves the weathering part of the Generic material.
  */
  OdBmGenericAppearanceSchemaReflectivity& reflectivity();
  
  /** \details
    Retrieves the transparency part of the Generic material.
  */
  OdBmGenericAppearanceSchemaTransparency& transparency();
  
  /** \details
    Retrieves the cut outs part of the Generic material.
  */
  OdBmGenericAppearanceSchemaCutouts& cutouts();
  
  /** \details
    Retrieves the self illumination part of the Generic material.
  */
  OdBmGenericAppearanceSchemaSelfIllumination& selfIllumination();
  
  /** \details
    Retrieves the relief part of the Generic material.
  */
  OdBmGenericAppearanceSchemaBump& bump();

private:
  mutable std::unique_ptr<OdBmGenericAppearanceSchemaDiffuse> m_diffuse;
  mutable std::unique_ptr<OdBmGenericAppearanceSchemaReflectivity> m_reflectivity;
  mutable std::unique_ptr<OdBmGenericAppearanceSchemaTransparency> m_transparency;
  mutable std::unique_ptr<OdBmGenericAppearanceSchemaCutouts> m_cutouts;
  mutable std::unique_ptr<OdBmGenericAppearanceSchemaSelfIllumination> m_selfIllumination;
  mutable std::unique_ptr<OdBmGenericAppearanceSchemaBump> m_bump;
};

#endif // _BM_GENERICAPPEARANCESCHEMAHELPER_H_
