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

#ifndef _BM_GENERICAPPEARANCESCHEMA_CUTOUTS_H_
#define _BM_GENERICAPPEARANCESCHEMA_CUTOUTS_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with cut-outs part of Generic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaCutouts
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaCutouts(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a cut-out pattern into the surface of the material.
    
    \param OdBmAssetPtr [out] Output A material cut-out pattern.
    \returns An OdResult value: eOk if schema contains a cut-out pattern, eNotApplicable if not.
  */
  OdResult getCutoutMap(OdBmAssetPtr&) const;

  /** \details
    Sets the translucency factor of the scattered light.
    
    \param OdBmAssetPtr [in] Input A material cut-out map.
  */
  void setCutoutMap(const OdBmAssetPtr&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GENERICAPPEARANCESCHEMA_CUTOUTS_H_
