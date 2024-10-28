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

#ifndef _BM_METALLICPAINTAPPEARANCESCHEMAHELPER_H_
#define _BM_METALLICPAINTAPPEARANCESCHEMAHELPER_H_
#include "BmAppearanceSchemaBaseHelper.h"
#include "BmMetallicPaintAppearanceSchema.h"
#include "BmMetallicPaintAppearanceSchemaFlecks.h"
#include "BmMetallicPaintAppearanceSchemaPearl.h"
#include "BmMetallicPaintAppearanceSchemaTopCoat.h"

/** \details
  A helper class to work with MetallicPaint appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetallicPaintAppearanceSchemaHelper : public OdBmAppearanceSchemaBaseHelper {
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetallicPaintAppearanceSchemaHelper(const OdBmAssetPtr& pAsset) :
    OdBmAppearanceSchemaBaseHelper(pAsset) {}
  
  /** \details
    Retrieves the base part of the Metallic Paint material.
  */
  OdBmMetallicPaintAppearanceSchema& metallicPaint();
  
  /** \details
    Retrieves the base part of the Metallic Paint material as a constant.
  */
  const OdBmMetallicPaintAppearanceSchema& metallicPaint() const;
  
  /** \details
    Retrieves the flecks part of the Metallic Paint material.
  */
  OdBmMetallicPaintAppearanceSchemaFlecks& flecks();
  
  /** \details
    Retrieves the pearl part of the Metallic Paint material.
  */
  OdBmMetallicPaintAppearanceSchemaPearl& pearl();
  
  /** \details
    Retrieves the top coat part of the Metallic Paint material.
  */
  OdBmMetallicPaintAppearanceSchemaTopCoat& topCoat();

private:
  mutable std::unique_ptr<OdBmMetallicPaintAppearanceSchema> m_metallicPaint;
  mutable std::unique_ptr<OdBmMetallicPaintAppearanceSchemaFlecks> m_flecks;
  mutable std::unique_ptr<OdBmMetallicPaintAppearanceSchemaPearl> m_pearl;
  mutable std::unique_ptr<OdBmMetallicPaintAppearanceSchemaTopCoat> m_topCoat;
};

#endif // _BM_METALLICPAINTAPPEARANCESCHEMAHELPER_H_

