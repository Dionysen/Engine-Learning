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

#ifndef _BM_STONEAPPEARANCESCHEMA_RELIEF_H_
#define _BM_STONEAPPEARANCESCHEMA_RELIEF_H_
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with relief part of Stone appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmStoneAppearanceSchemaRelief
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmStoneAppearanceSchemaRelief(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves an additional relief pattern, superimposed on the Finish Bumps pattern.
    
    \param OdBmAssetPtr [out] Output An additional relief pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getBumpPattern(OdBmAssetPtr&) const;

  /** \details
    Sets the additional relief pattern.
    
    \param OdBmAssetPtr [in] Input An additional relief pattern.
  */
  void setBumpPattern(const OdBmAssetPtr&);

  /** \details
    Retrieves a relative depth or height of the additional relief pattern.
    
    \param double [out] Output A value that contains depth of surface irregularities.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getAmount(double&) const;

  /** \details
    Sets the bump amount: 0 to 1 to increase the depth of the surface irregularities, 0 to make the surface flat.
    
    \param double [in] Input A bump amount.
  */
  void setAmount(const double&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_STONEAPPEARANCESCHEMA_RELIEF_H_
