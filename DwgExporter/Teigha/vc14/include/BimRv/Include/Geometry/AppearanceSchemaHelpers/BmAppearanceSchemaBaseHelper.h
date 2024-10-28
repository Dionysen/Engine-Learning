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

#ifndef _BM_APPEARANCESCHEMA_BASEHELPER_H_
#define _BM_APPEARANCESCHEMA_BASEHELPER_H_

#include "Base/BmObject.h"
#include "Geometry/Entities/BmAsset.h"
#include "Geometry/Enums/BmPredefinedAppearanceAsset.h"

/** \details
    <group Geometry_Classes>
*/

class TB_GEOMETRY_EXPORT OdBmAppearanceSchemaBaseHelper {
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmAppearanceSchemaBaseHelper(const OdBmAssetPtr& pAsset);

  /** \details
    Retrieves asset schema type.
    
    \returns A OdBm::PredefinedAppearanceAsset enum that contains schema type.
  */
  OdBm::PredefinedAppearanceAsset::Enum getSchemaType() const;

  /** \details
    Retrieves schema name.
    
    \returns A string that contains the schema name.
  */
  OdString getSchemaName() const;

  /** \details
    Retrieves schema description.
    
    \param OdString [out] Output A string that contains the schema description.
    \returns An OdResult value: eOk if description can be retrieved, eNotApplicable if not.
  */
  OdResult getSchemaDescription(OdString&) const;
  
  /** \details
    Sets the schema description.
    
    \param OdString [in] Input A string that contains the schema description.
  */
  void setSchemaDescription(const OdString&);

  /** \details
    Retrieves schema UI name.
    
    \param OdString [out] Output A string that contains the schema UI name.
    \returns An OdResult value: eOk if UI name can be retrieved, eNotApplicable if not.
  */
  OdResult getSchemaUIName(OdString&) const;

  /** \details
    Sets the schema UI name.
    
    \param OdString [in] Input A string that contains the schema UI name.
  */
  void setSchemaUIName(const OdString&);

  /** \details
    Retrieves schema keywords.
  
    \param OdString [out] Output A string that contains the schema keywords.
    \returns An OdResult value: eOk if keywords can be retrieved, eNotApplicable if not. 
*/
  OdResult getSchemaKeywords(OdString&) const;

  /** \details
    Sets the schema keywords.
    
    \param OdString [in] Input A string that contains the schema keywords.
  */
  void setSchemaKeywords(const OdString&);

  /** \details
    Returns the asset.
  */
  OdBmAssetPtr getAsset() { return m_pAsset; }

  /** \details
    Returns the asset.
  */
  OdBmAssetPtr getAsset() const { return m_pAsset; }

  // Tint properties
  /** \details
    Retrieves a common tint color of the material appearance.
  
    \param OdBmCmColor [out] Output A common tint color.
    \returns An OdResult value: eOk if schema contains a common tint color, eNotApplicable if not.
  */
  OdResult getCommonTintColor(OdBmCmColor&);

  /** \details
    Sets the material appearance common tint color.
    
    \param OdBmCmColor [in] Input A common tint color.
  */
  void setCommonTintColor(const OdBmCmColor&);

  /** \details
    Retrieves a value indicating whether the common tint color is enabled for the appearance of the material.
  
    \param value [out] Output A common tint color.
    \returns An OdResult value: eOk if schema contains a common tint color, eNotApplicable if not.
  */
  OdResult getCommonTintEnabled(bool& value);
    
  /** \details
    Enable or disable common tint color.
    
    \param bool [in] Input True or False value.
  */
  void setCommonTintEnabled(bool);

  /** \details
    Retrieves a schema-dependent tint color of the material appearance.
    
    \param OdBmCmColor& [out] Output A material tint color.
    \returns An OdResult value: eOk if schema contains a dependent tint color, eNotApplicable if not.
  */
  virtual OdResult getSchemaTintColor(OdBmCmColor&);

  /** \details
    Sets the material appearance schema-dependent tint color.
    
    \param OdBmCmColor [in] Input A tint color.
  */
  virtual void setSchemaTintColor(const OdBmCmColor&);

  /** \details
  Retrieves a value indicating whether the schema-dependent tint color is enabled for the appearance of the material.
  
  \param value [out] Output True or False value indicating that tint is enabled.
  \returns An OdResult value: eOk if schema contains a tint color, eNotApplicable if not.
  */
  virtual OdResult getSchemaTintEnabled(bool& value);

  /** \details
    Enable or disable schema-dependent tint color.
    
    \param bool [in] Input True or False value.
  */
  virtual void setSchemaTintEnabled(bool);
  // End of Tint properties

protected:
  mutable OdMutex m_mutex;

private:
  OdBmAssetPtr m_pAsset;
  mutable OdBm::PredefinedAppearanceAsset::Enum m_schemaType;
};

#endif // _BM_APPEARANCESCHEMA_BASEHELPER_H_

