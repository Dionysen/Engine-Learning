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

#ifndef _BM_GENERICAPPEARANCESCHEMA_REFLECTIVITY_H_
#define _BM_GENERICAPPEARANCESCHEMA_REFLECTIVITY_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Generic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaReflectivity
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaReflectivity(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}
  /** \details
    Retrieves a factor of light reflection of the material when the surface is directly facing the camera.
   
    \param double [out] Output A double value that contains a factor between 0 (no reflections) and 1 (maximum reflections).
    \returns An OdResult value: eOk if schema contains reflectivity, eNotApplicable if not.
  */
  OdResult getDirect(double&) const;

  /** \details
    Sets material direct reflectivity factor.
    
    \param double [in] Input highlight value.
  */
  void setDirect(const double&);

  /** \details
    Retrieves a value of light reflection of the material when the surface is at an angle to the camera.
    
    \param double [out] Output A double value between 0 (no reflections) and 1 (maximum reflections).
    \returns An OdResult value: eOk if schema contains reflectivity, eNotApplicable if not.
  */
  OdResult getOblique(double&) const;

  /** \details
    Sets material oblique reflectivity factor.
    
    \param double [in] Input highlight value.
  */
  void setOblique(const double&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GENERICAPPEARANCESCHEMA_REFLECTIVITY_H_
