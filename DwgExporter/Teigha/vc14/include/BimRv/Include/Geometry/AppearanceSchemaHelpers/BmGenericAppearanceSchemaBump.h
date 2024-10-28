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

#ifndef _BM_GENERICAPPEARANCESCHEMA_BUMP_H_
#define _BM_GENERICAPPEARANCESCHEMA_BUMP_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with relief part of Generic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmGenericAppearanceSchemaBump
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmGenericAppearanceSchemaBump(const OdBmAssetPtr& pAsset) : m_pAsset(pAsset) {}

  /** \details
    Retrieves a bump pattern which defines lowered and raised areas based on light and dark areas of an image file.
    
    \param OdBmAssetPtr [out] Output A material bump pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getBumpPattern(OdBmAssetPtr&) const;

  /** \details
    Sets the bump map.
    
    \param OdBmAssetPtr [in] Input A material bump pattern.
  */
  void setBumpPattern(const OdBmAssetPtr&);

  /** \details
    Retrieves a relative depth or height of the specified bump pattern.
    
    \param double [out] Output A value that contains depth of surface irregularities.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getAmount(double&) const;

  /** \details
    Sets the bump amount: from -1000 to 1000 to increase the depth of the surface irregularities, 0 to make the surface flat.
    
    \param double [in] Input A bump amount.
  */
  void setAmount(const double&);

  /** \details
    Retrieves a pattern of bump amount which defines lowered and raised areas based on light and dark areas of an image file.
  
    \param OdBmAssetPtr [out] Output A material bump pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getBumpAmountPattern(OdBmAssetPtr&) const;

  /** \details
    Sets the pattern of bump amount.
    
    \param OdBmAssetPtr [in] Input A pattern of bump amount.
  */
  void setBumpAmountPattern(const OdBmAssetPtr&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_GENERICAPPEARANCESCHEMA_BUMP_H_
