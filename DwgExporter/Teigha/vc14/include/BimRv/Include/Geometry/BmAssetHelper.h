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

#ifndef _BM_ASSETHELPER_H_
#define _BM_ASSETHELPER_H_
#include "Base/BmObject.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
    A helper class to work with assets.
    <group Geometry_Classes>
*/

class TB_GEOMETRY_EXPORT OdBmAssetHelper {
public:
  
  /** \details
    Constructor for OdBmAssetHelper.
    
    \param OdBmAssetPtr [in] Initializing object.
  */
  OdBmAssetHelper(const OdBmAssetPtr&);
  
  /** \details
    Returns the asset.
  */
  OdBmAssetPtr getAsset() const;
  
  /** \details
    Creates default asset schema. Should be implemented in inherited classes
      
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  virtual OdResult createDefaultSchema();

  /** \details
    Retrieves first connected asset of a property requested by name.

    \param OdString [in] A property name.
    \param OdBmAssetPtr [out] A reference to asset to retrieve data.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getFirstConnected(OdString, OdBmAssetPtr&) const;

  /** \details
    Sets first connected asset of a property requested by name.

    \param OdString [in] A property name.
    \param OdBmAssetPtr [in] An asset to be connected to a property.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setFirstConnected(OdString, OdBmAssetPtr);

protected:
  mutable OdBmAssetPtr m_pAsset;

};


#endif // _BM_ASSETHELPER_H_

