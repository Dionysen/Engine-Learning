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

#ifndef _BM_MATERIAL_H_
#define _BM_MATERIAL_H_
#include "Base/BmObject.h"

class OdBmPhysicalParamSet;
typedef OdSmartPtr<OdBmPhysicalParamSet> OdBmPhysicalParamSetPtr;
class OdBmPropertySetBase;
typedef OdSmartPtr<OdBmPropertySetBase> OdBmPropertySetBasePtr;
class OdBmAsset;
typedef OdSmartPtr<OdBmAsset> OdBmAssetPtr;
class OdBmMaterialAssetMap;
typedef OdSmartPtr<OdBmMaterialAssetMap> OdBmMaterialAssetMapPtr;
class OdBmObjectId;
class OdBmCmColor;

class OdBmMaterial;
class OdBmMaterialImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMaterial object.
 */
typedef OdSmartPtr<OdBmMaterial> OdBmMaterialPtr;

/** \details
 A data type that represents an array of OdBmMaterial objects.
 */
typedef OdArray<OdBmMaterialPtr> OdBmMaterialPtrArray;

//----------------------------------------------------------
//
// OdBmMaterial
//
//----------------------------------------------------------

/** \details
    This class represents a material object.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmMaterial : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMaterial);
public:
  /** \details
    Returns a name of this material object as OdString object.
  */
  OdString getName() const;
  /** \details
    Sets a name of this material object.

    \param OdString [in] Input pointer to a material object.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setName(const OdString&);
  /** \details
    Returns a set of structural properties as a pointer to a OdBmPhysicalParamSet object.
  */
  OdBmPhysicalParamSetPtr getStructuralPropertySet() const;
  /** \details
    Returns a set of structural properties as a pointer to a OdBmPropertySetBase object.
  */
  OdBmPropertySetBasePtr getStructuralPropertySetNew() const;
  /** \details
    Sets a material path map.

    \param OdBmPropertySetBasePtr [in] Input set of structural properties.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setStructuralPropertySetNew(const OdBmPropertySetBasePtr&);
  /** \details
    Returns a material transparency as a double value.
  */
  double getTransparency() const;
  /** \details
    Sets a material transparency value.

    \param double [in] Input material transparency value.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setTransparency(double);
  /** \details
    Returns a material smoothness as a double value.
  */
  double getSmoothness() const;
  /** \details
    Sets a material smoothness value.

    \param double [in] Input material smoothness value.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setSmoothness(double);
  /** \details
    Returns an ID of the FillPattern associated with the cut views of faces as an OdBmObjectId object.
  */
  OdBmObjectId getCutPatternId() const;
  /** \details
    Sets an ID of the FillPattern associated with the cut views of faces.

    \param OdBmObjectId [in] Input FillPattern Id associated with the cut views.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setCutPatternId(const OdBmObjectId&);
  /** \details
    Returns material cut pattern color as an OdBmCmColor object.
  */
  OdBmCmColor getCutPatternColor() const;
  /** \details
    Sets a material cut pattern color.

    \param OdBmCmColor [in] Input material cut pattern color.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setCutPatternColor(const OdBmCmColor&);
  /** \details
    Returns an ID of the FillPattern associated with the normal views of faces as an OdBmObjectId object.
  */
  OdBmObjectId getSurfacePatternId() const;
  /** \details
    Sets an ID of the FillPattern associated with the normal views of faces.

    \param OdBmObjectId [in] Input FillPattern ID associated with the normal views of faces.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setSurfacePatternId(const OdBmObjectId&);
  /** \details
    Returns a color of the FillPattern associated with the normal views of faces as an OdBmCmColor object.
  */
  OdBmCmColor getSurfacePatternColor() const;
  /** \details
    Sets a color of the FillPattern associated with the normal views of faces.

    \param OdBmCmColor [in] Input color of the FillPattern.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setSurfacePatternColor(const OdBmCmColor&);
  /** \details
    Returns a material color as an OdBmCmColor object.
  */
  OdBmCmColor getColor() const;
  /** \details
    Sets a material color.

    \param OdBmCmColor [in] Input material color.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setColor(const OdBmCmColor&);
  /** \details
    Returns a material shininess as an OdInt32 value.
  */
  OdInt32 getShininess() const;
  /** \details
    Sets a material shininess.

    \param OdInt32 [in] Input material shininess.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setShininess(OdInt32);
  /** \details
    Returns an ID of the appearance asset as an OdBmObjectId object.
  */
  OdBmObjectId getAppearanceAssetId() const;
  /** \details
    Sets an ID of the appearance asset.

    \param OdBmObjectId [in] Input ID of the appearance asset.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAppearanceAssetId(const OdBmObjectId&);
  /** \details
    Returns an ID of the structural property set as an OdBmObjectId object.
  */
  OdBmObjectId getStructuralPropertySetId() const;
  /** \details
    Sets an ID of the structural property set.

    \param OdBmObjectId [in] Input ID of the structural property set.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setStructuralPropertySetId(const OdBmObjectId&);
  /** \details
    Returns a flag, that determines whether or not the material is glowing as a bool value.
  */
  bool getGlow() const;
  /** \details
    Sets a flag, that determines whether or not the material is glowing.

    \param bool [in] Input "is glowing" flag.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setGlow(bool);
  /** \details
    Returns a flag, that determines whether or not the material uses appearance asset.
  */
  bool getUseRenderAppearance() const;
  /** \details
    Sets a flag, that determines whether or not the material uses appearance asset.

    \param bool [in] Input "use appearance asset" flag.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setUseRenderAppearance(bool);
  /** \details
    Returns the library name of the accu rendering as an OdString value.
  */
  OdString getAccuRenderLib() const;
  /** \details
    Sets the library name of the accu rendering.

    \param OdString [in] Input library name.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAccuRenderLib(const OdString&);
  /** \details
    Returns a name of the accu rendering as an OdString value.
  */
  OdString getAccuRenderName() const;
  /** \details
    Sets a name of the accu rendering.

    \param OdString [in] Input name of the accu rendering.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAccuRenderName(const OdString&);
  /** \details
    Returns a material keywords as an OdString value.
  */
  OdString getKeywords() const;
  /** \details
    Sets a material keywords.

    \param OdString [in] Input material keywords.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setKeywords(const OdString&);
  /** \details
    Returns a material class name as an OdString value.
  */
  OdString getMaterialClass() const;
  /** \details
    Sets a material class name.

    \param OdString [in] Input material class name.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setMaterialClass(const OdString&);
  /** \details
    Returns a material category name as an OdString value.
  */
  OdString getCategory() const;
  /** \details
    Sets a material category name.

    \param OdString [in] Input material category name.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setCategory(const OdString&);
  /** \details
    Returns a material asset as a pointer to an OdBmAsset object.
  */
  OdBmAssetPtr getAsset() const;
  /** \details
    Sets a material asset.

    \param OdBmAssetPtr [in] Input material asset.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAsset(const OdBmAssetPtr&);
  /** \details
    Returns a material asset map as a pointer to an OdBmMaterialAssetMap object.
  */
  OdBmMaterialAssetMapPtr getAssetMap() const;
  /** \details
    Sets a material asset map.

    \param OdBmMaterialAssetMapPtr [in] Input material asset map.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAssetMap(const OdBmMaterialAssetMapPtr&);
  OdBmObjectId getCutBackgroundPatternId() const;
  OdUInt32 getCutBackgroundPatternColor() const;
  OdBmObjectId getSurfaceBackgroundPatternId() const;
  OdUInt32 getSurfaceBackgroundPatternColor() const;
  //
  // Main functionality
  //

  /** \details
    Returns the ID of the structural asset as object of OdBmObjectId class.
  */
  OdBmObjectId getStructuralAssetId() const;

  /** \details
    Sets the ID of the structural asset.

	\param OdBmObjectId [in] Input structural asset ID
  */
  void setStructuralAssetId(const OdBmObjectId&);

  /** \details
    Returns the ID of the thermal asset as object of OdBmObjectId class.
  */
  OdBmObjectId getThermalAssetId() const;

  /** \details
    Sets the ID of the thermal asset.

	\param OdBmObjectId [in] Input thermal asset ID
  */
  void setThermalAssetId(const OdBmObjectId&);
};


#endif // _BM_MATERIAL_H_

