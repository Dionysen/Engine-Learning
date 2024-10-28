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




#ifndef _ODRXPROPERTYVARIANT_INCLUDED_
#define _ODRXPROPERTYVARIANT_INCLUDED_

#include "TD_PackPush.h"

#include "OdPlatformSettings.h"

#include "StringArray.h"
#include "BoolArray.h"
#include "Int8Array.h"
#include "Int16Array.h"
#include "Int32Array.h"
#include "Int64Array.h"
#include "UInt8Array.h"
#include "UInt16Array.h"
#include "UInt32Array.h"
#include "UInt64Array.h"
#include "DoubleArray.h"
#include "OdString.h"
#include "OdAnsiString.h"

#include "CDAExport.h"
#include "Ge/GePoint3d.h"
#include "Ge/GePoint2d.h"
#include "CmColorBase.h"
#include "Ge/GeVector2d.h"
#include "Ge/GeVector3d.h"
#include "Ge/GeVector3dArray.h"
#include "Ge/GeVector2dArray.h"
#include "Gs/GsFiler.h"
#include "CmEntityColorArray.h"
#include "CmTransparencyArray.h"
#include "Ge/GeMatrix2d.h"
#include "Ge/GeMatrix3d.h"
#include "Ge/GeMatrix2dArray.h"
#include "Ge/GeMatrix3dArray.h"
#include "OdTimeStamp.h"
#include "Ge/GeScale3d.h"
#include "Ge/GeExtents2d.h"
#include "Ge/GeExtents3d.h"
#include "Ge/GeQuaternion.h"
#include "Gi/GiDgLinetype.h"
#include "Gi/GiLightTraits.h"
#include "OdPlatform.h"
#include "Gi/GiDgLinetype.h"
#include "Gi/GiEnvironment.h"
#include "Gi/GiMaterial.h"
#include "Gi/GiViewportTraits.h"
#include "Gi/GiVisualStyle.h"


//DOM-IGNORE-BEGIN
const int OdRxPropertyVariantDataSize = 8;
//DOM-IGNORE-END

/** \details
    This class implements OdError objects with Result codes of eInvalidVariantType.

    Corresponding C++ library: TD_Root
    <group Error_Classes>
*/
class ODCDA_EXPORT OdError_InvalidRxPropertyVariantType : public OdError
{
public:
  OdError_InvalidRxPropertyVariantType();
};

/** \details
    This template class is a specialization of the OdArray class for OdGeScale3d objects.
*/
typedef OdArray<OdGeScale3d, OdMemoryAllocator<OdGeScale3d> > OdGeScale3dArray;

/** \details
    This template class is a specialization of the OdArray class for OdTimeStamp objects.
*/
typedef OdArray<OdTimeStamp, OdMemoryAllocator<OdTimeStamp> > OdTimeStampArray;

/** \details
    This template class is a specialization of the OdArray class for OdGeExtents2d objects.
*/
typedef OdArray<OdGeExtents2d, OdMemoryAllocator<OdGeExtents2d> > OdGeExtents2dArray;

/** \details
    This template class is a specialization of the OdArray class for OdGeExtents3d objects.
*/
typedef OdArray<OdGeExtents3d, OdMemoryAllocator<OdGeExtents3d> > OdGeExtents3dArray;

/** \details
    This template class is a specialization of the OdArray class for OdGeQuaternion objects.
*/
typedef OdArray<OdGeQuaternion, OdMemoryAllocator<OdGeQuaternion> > OdGeQuaternionArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiLightAttenuation objects.
*/
typedef OdArray<OdGiLightAttenuation, OdMemoryAllocator<OdGiLightAttenuation> > OdGiLightAttenuationArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiSkyParameters objects.
*/
typedef OdArray<OdGiSkyParameters, OdMemoryAllocator<OdGiSkyParameters> > OdGiSkyParametersArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiShadowParameters objects.
*/
typedef OdArray<OdGiShadowParameters, OdMemoryAllocator<OdGiShadowParameters> > OdGiShadowParametersArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiColorRGB objects.
*/
typedef OdArray<OdGiColorRGB, OdMemoryAllocator<OdGiColorRGB> > OdGiColorRGBArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrExposureType objects.
*/
typedef OdArray<OdGiMrExposureType, OdMemoryAllocator<OdGiMrExposureType> > OdGiMrExposureTypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrShadowMode objects.
*/
typedef OdArray<OdGiMrShadowMode, OdMemoryAllocator<OdGiMrShadowMode> > OdGiMrShadowModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrFinalGatheringMode objects.
*/
typedef OdArray<OdGiMrFinalGatheringMode, OdMemoryAllocator<OdGiMrFinalGatheringMode> > OdGiMrFinalGatheringModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrDiagnosticMode objects.
*/
typedef OdArray<OdGiMrDiagnosticMode, OdMemoryAllocator<OdGiMrDiagnosticMode> > OdGiMrDiagnosticModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrDiagnosticPhotonMode objects.
*/
typedef OdArray<OdGiMrDiagnosticPhotonMode, OdMemoryAllocator<OdGiMrDiagnosticPhotonMode> > OdGiMrDiagnosticPhotonModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrDiagnosticBSPMode objects.
*/
typedef OdArray<OdGiMrDiagnosticBSPMode, OdMemoryAllocator<OdGiMrDiagnosticBSPMode> > OdGiMrDiagnosticBSPModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrExportMIMode objects.
*/
typedef OdArray<OdGiMrExportMIMode, OdMemoryAllocator<OdGiMrExportMIMode> > OdGiMrExportMIModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMrTileOrder objects.
*/
typedef OdArray<OdGiMrTileOrder, OdMemoryAllocator<OdGiMrTileOrder> > OdGiMrTileOrderArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiLightingMode objects.
*/
typedef OdArray<OdGiLightingMode, OdMemoryAllocator<OdGiLightingMode> > OdGiLightingModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiFilterType objects.
*/
typedef OdArray<OdGiFilterType, OdMemoryAllocator< OdGiFilterType> > OdGiFilterTypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialColor objects.
*/
typedef OdArray<OdGiMaterialColor, OdMemoryAllocator<OdGiMaterialColor> > OdGiMaterialColorArray;

/** \details
    This template class is a specialization of the OdArray class for OdCmEntityColor::OdCmEntityColor objects.
*/
typedef OdArray<OdCmEntityColor::ColorMethod, OdMemoryAllocator<OdCmEntityColor::ColorMethod> > OdCmEntityColor_ColorMethodArray;

/** \details
    This template class is a specialization of the OdArray class for OdDb::LineWeight objects.
*/
typedef OdArray<OdDb::LineWeight, OdMemoryAllocator<OdDb::LineWeight> > OdDb_LineWeightArray;

/** \details
    This template class is a specialization of the OdArray class for OdDb::UnitsValue objects.
*/
typedef OdArray<OdDb::UnitsValue, OdMemoryAllocator<OdDb::UnitsValue> > OdDb_UnitsValueArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiDgLinetypeModifiers::WidthMode objects.
*/
typedef OdArray<OdGiDgLinetypeModifiers::WidthMode, OdMemoryAllocator<OdGiDgLinetypeModifiers::WidthMode> > OdGiDgLinetypeModifiers_WidthModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiDgLinetypeModifiers::ShiftMode objects.
*/
typedef OdArray<OdGiDgLinetypeModifiers::ShiftMode, OdMemoryAllocator<OdGiDgLinetypeModifiers::ShiftMode> > OdGiDgLinetypeModifiers_ShiftModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiDgLinetypeModifiers::CornersMode objects.
*/
typedef OdArray<OdGiDgLinetypeModifiers::CornersMode, OdMemoryAllocator<OdGiDgLinetypeModifiers::CornersMode> > OdGiDgLinetypeModifiers_CornersModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGe::OdGeKnotParameterization objects.
*/
typedef OdArray<OdGe::OdGeKnotParameterization, OdMemoryAllocator<OdGe::OdGeKnotParameterization> > OdGe_OdGeKnotParameterizationArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiLightAttenuation::AttenuationType objects.
*/
typedef OdArray<OdGiLightAttenuation::AttenuationType, OdMemoryAllocator<OdGiLightAttenuation::AttenuationType> > OdGiLightAttenuation_AttenuationTypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiDrawable::DrawableType objects.
*/
typedef OdArray<OdGiDrawable::DrawableType, OdMemoryAllocator<OdGiDrawable::DrawableType> > OdGiDrawable_DrawableTypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiShadowParameters::ShadowType objects.
*/
typedef OdArray<OdGiShadowParameters::ShadowType, OdMemoryAllocator<OdGiShadowParameters::ShadowType> > OdGiShadowParameters_ShadowTypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiShadowParameters::ExtendedLightShape objects.
*/
typedef OdArray<OdGiShadowParameters::ExtendedLightShape, OdMemoryAllocator<OdGiShadowParameters::ExtendedLightShape> > OdGiShadowParameters_ExtendedLightShapeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiViewportTraits::DefaultLightingType objects.
*/
typedef OdArray<OdGiViewportTraits::DefaultLightingType, OdMemoryAllocator<OdGiViewportTraits::DefaultLightingType> > OdGiViewportTraits_DefaultLightingTypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialTraits::LuminanceMode objects.
*/
typedef OdArray<OdGiMaterialTraits::LuminanceMode, OdMemoryAllocator<OdGiMaterialTraits::LuminanceMode> > OdGiMaterialTraits_LuminanceModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialTraits::GlobalIlluminationMode objects.
*/
typedef OdArray<OdGiMaterialTraits::GlobalIlluminationMode, OdMemoryAllocator<OdGiMaterialTraits::GlobalIlluminationMode> > OdGiMaterialTraits_GlobalIlluminationModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialTraits::FinalGatherMode objects.
*/
typedef OdArray<OdGiMaterialTraits::FinalGatherMode, OdMemoryAllocator<OdGiMaterialTraits::FinalGatherMode> > OdGiMaterialTraits_FinalGatherModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialTraits::ChannelFlags objects.
*/
typedef OdArray<OdGiMaterialTraits::ChannelFlags, OdMemoryAllocator<OdGiMaterialTraits::ChannelFlags> > OdGiMaterialTraits_ChannelFlagsArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialTraits::Mode objects.
*/
typedef OdArray<OdGiMaterialTraits::Mode, OdMemoryAllocator<OdGiMaterialTraits::Mode> > OdGiMaterialTraits_ModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiMaterialTraits::IlluminationModel objects.
*/
typedef OdArray<OdGiMaterialTraits::IlluminationModel, OdMemoryAllocator<OdGiMaterialTraits::IlluminationModel> > OdGiMaterialTraits_IlluminationModelArray;

/** \details
    This template class is a specialization of the OdArray class for dGiVisualStyle::Type objects.
*/
typedef OdArray<OdGiVisualStyle::Type, OdMemoryAllocator<OdGiVisualStyle::Type> > OdGiVisualStyle_TypeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiVisualStyleProperties::FaceColorMode objects.
*/
typedef OdArray<OdGiVisualStyleProperties::FaceColorMode, OdMemoryAllocator<OdGiVisualStyleProperties::FaceColorMode> > OdGiVisualStyleProperties_FaceColorModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiVisualStyleProperties::EdgeModel objects.
*/
typedef OdArray<OdGiVisualStyleProperties::EdgeModel, OdMemoryAllocator<OdGiVisualStyleProperties::EdgeModel> > OdGiVisualStyleProperties_EdgeModelArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiFaceStyle::FaceColorMode objects.
*/
typedef OdArray<OdGiFaceStyle::FaceColorMode, OdMemoryAllocator<OdGiFaceStyle::FaceColorMode> > OdGiFaceStyle_FaceColorModeArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiEdgeStyle::EdgeModel objects.
*/
typedef OdArray<OdGiEdgeStyle::EdgeModel, OdMemoryAllocator<OdGiEdgeStyle::EdgeModel> > OdGiEdgeStyle_EdgeModelArray;

/** \details
    This template class is a specialization of the OdArray class for OdGiToneOperatorParameters::ExteriorDaylightMode objects.
*/
typedef OdArray<OdGiToneOperatorParameters::ExteriorDaylightMode, OdMemoryAllocator<OdGiToneOperatorParameters::ExteriorDaylightMode> > OdGiToneOperatorParameters_ExteriorDaylightModeArray;

/** \details
    This class defines objects to store property values in the property cache for the Common Data Access API.
    <group OdRx_Classes>
*/
class ODCDA_EXPORT OdRxPropertyVariant 
{
  //DOM-IGNORE-BEGIN
protected:
  int m_type;
  union   // Union is required to have proper data alignment which is important
  {       // for some platforms
    OdUInt8 uint8[OdRxPropertyVariantDataSize];
    double  dbl;
    void* ptr;
  } m_uData;
  void* data() const;

  void setVarType(int newType, int& type, void* data);
  //DOM-IGNORE-END
public:
  
  struct TypeFactory
  {
    virtual void construct(void* pData) const = 0;
    virtual void destroy(void* pData) const = 0;
  };

  /** \details
  Gets the pointer to the factory object for the corresponding type.

  \param type [in] Type value.
  \returns Returns a pointer to the factory object for the corresponding type.
*/
  static const TypeFactory* typeFactory(int type);
  
  /** \details
  Defines additional types of stored value.
*/
  typedef enum
  {

    /** The value type is void*/
    kVoid = 0x0000,

    /** The value type is OdString*/
    kString = 0x0001,

    /** The value type is OdBool*/
    kBool = 0x0002,

    /** The value type is OdInt8*/
    kInt8 = 0x0003,

    /** The value type is OdUInt8*/
    kUInt8 = 0x0003,

    /** The value type is OdInt16*/
    kInt16 = 0x0004,

    /** The value type is OdUInt16*/
    kUInt16 = 0x0004,

    /** The value type is OdInt32*/
    kInt32 = 0x0005,

    /** The value type is OdUInt32*/
    kUInt32 = 0x0005,

    /** The value type is OdInt64*/
    kInt64 = 0x0006,

    /** The value type is OdUInt64*/
    kUInt64 = 0x0006,

    /** The value type is OdDouble*/
    kDouble = 0x0007,

    /** The value type is OdAnsiString*/
    kAnsiString = 0x0008,

    /** The value type is OdGePoint2d*/
    kGePoint2d = 0x000A, 

    /** The value type is OdGePoint3d*/
    kGePoint3d = 0x000B,

    /** The value type is OdGeVector2d*/
    kGeVector2d = 0x000C,

    /** The value type is OdGeVector3d*/
    kGeVector3d = 0x000D,

    /** The value type is OdCmEntityColor*/
    kCmEntityColor = 0x000E,

    /** The value type is OdCmTransparency*/
    kCmTransparency = 0x000F,

    /** The value type is OdGeMatrix2d*/
    kGeMatrix2d = 0x0010,

    /** The value type is OdGeMatrix3d*/
    kGeMatrix3d = 0x0011,

    /** The value type is OdGeScale3d*/
    kGeScale3d = 0x0012,

    /** The value type is OdTimeStamp*/
    kTimeStamp = 0x0013,

    /** The value type is OdGeExtents2d*/
    kGeExtents2d = 0x0014,

    /** The value type is OdGeExtents3d*/
    kGeExtents3d = 0x0015,

    /** The value type is OdGeQuaternion*/
    kGeQuaternion = 0x0016,

    /** The value type is OdGiLightAttenuation*/
    kGiLightAttenuation = 0x0017,

    /** The value type is OdGiSkyParameters*/
    kGiSkyParameters = 0x0018,

    /** The value type is OdGiShadowParameters*/
    kGiShadowParameters = 0x0019,

    /** The value type is OdGiColorRGB*/
    kGiColorRGB = 0x001A,

    /** The value type is OdGiMaterialColor*/
    kGiMaterialColor = 0x001B,

    /** The value type is OdGiMrExposureType*/
    kGiMrExposureType = 0x001C,

    /** The value type is OdGiMrShadowMode*/
    kGiMrShadowMode = 0x001D,

    /** The value type is OdGiMrFinalGatheringMode*/
    kGiMrFinalGatheringMode = 0x001E,

    /** The value type is OdGiMrDiagnosticMode*/
    kGiMrDiagnosticMode = 0x001F,

    /** The value type is OdGiMrDiagnosticPhotonMode*/
    kGiMrDiagnosticPhotonMode = 0x0020,

    /** The value type is OdGiMrDiagnosticBSPMode*/
    kGiMrDiagnosticBSPMode = 0x0021,

    /** The value type is OdGiMrExportMIMode*/
    kGiMrExportMIMode = 0x0022,

    /** The value type is OdGiMrTileOrder*/
    kGiMrTileOrder = 0x0023,

    /** The value type is OdGiLightingMode*/
    kGiLightingMode = 0x0024,

    /** The value type is OdGiFilterType*/
    kGiFilterType = 0x0025,

    /** The value type is OdCmEntityColor::ColorMethod*/
    kCmEntityColor_ColorMethod = 0x0026,

    /** The value type is OdDb::LineWeight*/
    kDb_LineWeight = 0x0027,

    /** The value type is OdDb::UnitsValue*/
    kDb_UnitsValue = 0x0028,

    /** The value type is OdGiDgLinetypeModifiers::WidthMode*/
    kGiDgLinetypeModifiers_WidthMode = 0x0029,

    /** The value type is OdGiDgLinetypeModifiers::ShiftMode*/
    kGiDgLinetypeModifiers_ShiftMode = 0x002A,

    /** The value type is OdGiDgLinetypeModifiers::CornersMode*/
    kGiDgLinetypeModifiers_CornersMode = 0x002B,

    /** The value type is OdGe::OdGeKnotParameterization*/
    kGe_OdGeKnotParameterization = 0x002C,

    /** The value type is OdGiLightAttenuation::AttenuationType*/
    kGiLightAttenuation_AttenuationType = 0x002D,

    /** The value type is OdGiDrawable::DrawableType*/
    kGiDrawable_DrawableType = 0x002E,

    /** The value type is OdGiShadowParameters::ShadowType*/
    kGiShadowParameters_ShadowType = 0x002F,

    /** The value type is OdGiShadowParameters::ExtendedLightShape*/
    kGiShadowParameters_ExtendedLightShape = 0x0030,

    /** The value type is OdGiViewportTraits::DefaultLightingType*/
    kGiViewportTraits_DefaultLightingType = 0x0031,

    /** The value type is OdGiMaterialTraits::LuminanceMode*/
    kGiMaterialTraits_LuminanceMode = 0x0032,

    /** The value type is OdGiMaterialTraits::GlobalIlluminationMode*/
    kGiMaterialTraits_GlobalIlluminationMode = 0x0033,

    /** The value type is OdGiMaterialTraits::FinalGatherMode*/
    kGiMaterialTraits_FinalGatherMode = 0x0034,

    /** The value type is OdGiMaterialTraits::ChannelFlags*/
    kGiMaterialTraits_ChannelFlags = 0x0035,

    /** The value type is OdGiMaterialTraits::Mode*/
    kGiMaterialTraits_Mode = 0x0036,

    /** The value type is OdGiMaterialTraits::IlluminationModel*/
    kGiMaterialTraits_IlluminationModel = 0x0037,

    /** The value type is OdGiVisualStyle::Type*/
    kGiVisualStyle_Type = 0x0038,

    /** The value type is OdGiVisualStyleProperties::FaceColorMode*/
    kGiVisualStyleProperties_FaceColorMode = 0x0039,

    /** The value type is OdGiVisualStyleProperties::EdgeModel*/
    kGiVisualStyleProperties_EdgeModel = 0x003A,

    /** The value type is OdGiFaceStyle::FaceColorMode*/
    kGiFaceStyle_FaceColorMode = 0x003B,

    /** The value type is OdGiEdgeStyle::EdgeModel*/
    kGiEdgeStyle_EdgeModel = 0x003C,

    /** The value type is OdGiToneOperatorParameters::ExteriorDaylightMode*/
    kGiToneOperatorParameters_ExteriorDaylightMode = 0x003D,

    /** The value type is Array flag*/
    kArray = 0x0080
  } Type;

  /** \details
   Default constructor for instance of OdRxPropertyVariant class.
  */
  OdRxPropertyVariant();

  /** \details
   Copy constructor for instance of OdRxPropertyVariant class.

   \param val [in] constant reference to OdRxPropertyVariant value.
  */
  OdRxPropertyVariant(const OdRxPropertyVariant& val);

  /** \details
  Returns the type of this OdRxPropertyVariant object, including ByRef and Array flags.
*/
  int  varType() const;

  /** \details
    Returns the type of this Variant object, excluding ByRef and Array flags.
  */
  Type type() const;

  /** \details
    Returns true if and only if this OdRxPropertyVariant object is an Array.
  */
  bool isArray() const;

  /** \details
   Copy constructor from OdString for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdString value.
  */
  OdRxPropertyVariant(const OdString& val);

  /** \details
   Copy constructor from OdAnsiString for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdAnsiString value.
  */
  OdRxPropertyVariant(const OdAnsiString& val);

  /** \details
   Copy constructor from bool for instance of OdRxPropertyVariant class.

   \param val [in]constant bool value.
  */
  OdRxPropertyVariant(const bool val);

  /** \details
   Copy constructor from OdInt8 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdInt8 value.
  */
  OdRxPropertyVariant(const OdInt8 val);

  /** \details
   Copy constructor from OdUInt8 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdUInt8 value.
  */
  OdRxPropertyVariant(const OdUInt8 val);

  /** \details
   Copy constructor from OdInt16 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdInt16 value.
  */
  OdRxPropertyVariant(const OdInt16 val);

  /** \details
   Copy constructor from OdUInt16 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdUInt16 value.
  */
  OdRxPropertyVariant(const OdUInt16 val);

  /** \details
   Copy constructor from OdInt32 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdInt32 value.
  */
  OdRxPropertyVariant(const OdInt32 val);

  /** \details
   Copy constructor from OdUInt32 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdUInt32 value.
  */
  OdRxPropertyVariant(const OdUInt32 val);

  /** \details
   Copy constructor from OdInt64 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdInt64 value.
  */
  OdRxPropertyVariant(const OdInt64 val);

  /** \details
   Copy constructor from OdUInt64 for instance of OdRxPropertyVariant class.

   \param val [in]constant OdUInt64 value.
  */
  OdRxPropertyVariant(const OdUInt64 val);

  /** \details
   Copy constructor from double for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to double value.
  */
  OdRxPropertyVariant(const double& val);

  /** \details
   Copy constructor from OdGePoint3d for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdGePoint3d value.
  */
  OdRxPropertyVariant(const OdGePoint3d& val);

  /** \details
   Copy constructor from OdGePoint2d for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdGePoint2d value.
  */
  OdRxPropertyVariant(const OdGePoint2d& val);

  /** \details
   Copy constructor from OdGeVector2d for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdGeVector2d value.
  */
  OdRxPropertyVariant(const OdGeVector2d& val);

  /** \details
   Copy constructor from OdGeVector3d for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdGeVector3d value.
  */
  OdRxPropertyVariant(const OdGeVector3d& val);

  /** \details
   Copy constructor from OdCmEntityColor for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdCmEntityColor value.
  */
  OdRxPropertyVariant(const OdCmEntityColor& val);

  /** \details
   Copy constructor from OdCmTransparency for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdCmTransparency value.
  */
  OdRxPropertyVariant(const OdCmTransparency& val);

  /** \details
 Copy constructor from OdGeMatrix2d for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGeMatrix2d value.
 */
  OdRxPropertyVariant(const OdGeMatrix2d& val);

  /** \details
   Copy constructor from OdGeMatrix3d for instance of OdRxPropertyVariant class.

   \param val [in]constant reference to OdGeMatrix3d value.
  */
  OdRxPropertyVariant(const OdGeMatrix3d& val);

  /** \details
 Copy constructor from OdGeScale3d for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGeScale3d value.
 */
  OdRxPropertyVariant(const OdGeScale3d& val);

  /** \details
 Copy constructor from OdTimeStamp for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdTimeStamp value.
 */
  OdRxPropertyVariant(const OdTimeStamp& val);

  /** \details
 Copy constructor from OdGeExtents2d for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGeExtents2d value.
 */
  OdRxPropertyVariant(const OdGeExtents2d& val);

  /** \details
 Copy constructor from OdGeExtents3d for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGeExtents2d value.
 */
  OdRxPropertyVariant(const OdGeExtents3d& val);

  /** \details
 Copy constructor from OdGeQuaternion for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGeQuaternion value.
 */
  OdRxPropertyVariant(const OdGeQuaternion& val);

  /** \details
 Copy constructor from OdGiLightAttenuation for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGiLightAttenuation value.
 */
  OdRxPropertyVariant(const OdGiLightAttenuation& val);

  /** \details
 Copy constructor from OdGiSkyParameters for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGiSkyParameters value.
 */
  OdRxPropertyVariant(const OdGiSkyParameters& val);

  /** \details
 Copy constructor from OdGiShadowParameters for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGiShadowParameters value.
 */
  OdRxPropertyVariant(const OdGiShadowParameters& val);

  /** \details
 Copy constructor from OdGiColorRGB for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGiColorRGB value.
 */
  OdRxPropertyVariant(const OdGiColorRGB& val);

  /** \details
 Copy constructor from OdGiMrExposureType for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrExposureType value.
 */
  OdRxPropertyVariant(const OdGiMrExposureType val);

  /** \details
 Copy constructor from OdGiMrShadowMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrShadowMode value.
 */
  OdRxPropertyVariant(const OdGiMrShadowMode val);

  /** \details
 Copy constructor from OdGiMrFinalGatheringMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrFinalGatheringMode value.
 */
  OdRxPropertyVariant(const OdGiMrFinalGatheringMode val);

  /** \details
 Copy constructor from OdGiMrDiagnosticMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrDiagnosticMode value.
 */
  OdRxPropertyVariant(const OdGiMrDiagnosticMode val);

  /** \details
 Copy constructor from OdGiMrDiagnosticPhotonMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrDiagnosticPhotonMode value.
 */
  OdRxPropertyVariant(const OdGiMrDiagnosticPhotonMode val);

  /** \details
 Copy constructor from OdGiMrDiagnosticBSPMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrDiagnosticBSPMode value.
 */
  OdRxPropertyVariant(const OdGiMrDiagnosticBSPMode val);

  /** \details
 Copy constructor from OdGiMrExportMIMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrExportMIMode value.
 */
  OdRxPropertyVariant(const OdGiMrExportMIMode val);

  /** \details
 Copy constructor from OdGiMrTileOrder for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiMrTileOrder value.
 */
  OdRxPropertyVariant(const OdGiMrTileOrder val);

  /** \details
 Copy constructor from OdGiLightingMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiLightingMode value.
 */
  OdRxPropertyVariant(const OdGiLightingMode val);

  /** \details
 Copy constructor from OdGiFilterType for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiFilterType value.
 */
  OdRxPropertyVariant(const OdGiFilterType val);

  /** \details
 Copy constructor from OdGiMaterialColor for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdGiMaterialColor value.
 */
  OdRxPropertyVariant(const OdGiMaterialColor& val);

  /** \details
 Copy constructor from OdCmEntityColor::ColorMethod for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdCmEntityColor::ColorMethod value.
 */
  OdRxPropertyVariant(const OdCmEntityColor::ColorMethod val);

  /** \details
 Copy constructor from OdDb::LineWeight for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdDb::LineWeight value.
 */
  OdRxPropertyVariant(const OdDb::LineWeight val);

  /** \details
 Copy constructor from OdDb::UnitsValue for instance of OdRxPropertyVariant class.

 \param val [in]constant reference to OdDb::UnitsValue value.
 */
  OdRxPropertyVariant(const OdDb::UnitsValue val);

  /** \details
 Copy constructor from OdGiDgLinetypeModifiers::WidthMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiDgLinetypeModifiers::WidthMode value.
 */
  OdRxPropertyVariant(const OdGiDgLinetypeModifiers::WidthMode val);
    
  /** \details
 Copy constructor from OdGiDgLinetypeModifiers::ShiftMode for instance of OdRxPropertyVariant class.

 \param val [in]constant OdGiDgLinetypeModifiers::ShiftMode value.
 */
  OdRxPropertyVariant(const OdGiDgLinetypeModifiers::ShiftMode val);

  /** \details
  Copy constructor from OdGiDgLinetypeModifiers::CornersMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiDgLinetypeModifiers::CornersMode value.
  */
  OdRxPropertyVariant(const OdGiDgLinetypeModifiers::CornersMode val);

  /** \details
  Copy constructor from OdGe::OdGeKnotParameterization for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGe::OdGeKnotParameterization value.
  */
  OdRxPropertyVariant(const OdGe::OdGeKnotParameterization val);

  /** \details
  Copy constructor from OdGiLightAttenuation::AttenuationType for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiLightAttenuation::AttenuationType value.
  */
  OdRxPropertyVariant(const OdGiLightAttenuation::AttenuationType val);

  /** \details
  Copy constructor from OdGiDrawable::DrawableType for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiDrawable::DrawableType value.
  */
  OdRxPropertyVariant(const OdGiDrawable::DrawableType val);

  /** \details
  Copy constructor from OdGiShadowParameters::ShadowType for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiShadowParameters::ShadowType value.
  */
  OdRxPropertyVariant(const OdGiShadowParameters::ShadowType val);

  /** \details
  Copy constructor from OdGiShadowParameters::ExtendedLightShape for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiShadowParameters::ExtendedLightShape value.
  */
  OdRxPropertyVariant(const OdGiShadowParameters::ExtendedLightShape val);

  /** \details
  Copy constructor from OdGiViewportTraits::DefaultLightingType for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiViewportTraits::DefaultLightingType value.
  */
  OdRxPropertyVariant(const OdGiViewportTraits::DefaultLightingType val);

  /** \details
  Copy constructor from OdGiMaterialTraits::LuminanceMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiMaterialTraits::LuminanceMode value.
  */
  OdRxPropertyVariant(const OdGiMaterialTraits::LuminanceMode val);

  /** \details
  Copy constructor from OdGiMaterialTraits::GlobalIlluminationMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiMaterialTraits::GlobalIlluminationMode value.
  */
  OdRxPropertyVariant(const OdGiMaterialTraits::GlobalIlluminationMode val);

  /** \details
  Copy constructor from OdGiMaterialTraits::FinalGatherMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiMaterialTraits::FinalGatherMode value.
  */
  OdRxPropertyVariant(const OdGiMaterialTraits::FinalGatherMode val);

  /** \details
  Copy constructor from OdGiMaterialTraits::ChannelFlags for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiMaterialTraits::ChannelFlags value.
  */
  OdRxPropertyVariant(const OdGiMaterialTraits::ChannelFlags val);

  /** \details
  Copy constructor from OdGiMaterialTraits::Mode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiMaterialTraits::Mode value.
  */
  OdRxPropertyVariant(const OdGiMaterialTraits::Mode val);

  /** \details
  Copy constructor from OdGiMaterialTraits::IlluminationModel for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiMaterialTraits::IlluminationModel value.
  */
  OdRxPropertyVariant(const OdGiMaterialTraits::IlluminationModel val);

  /** \details
  Copy constructor from OdGiVisualStyle::Type for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiVisualStyle::Type value.
  */
  OdRxPropertyVariant(const OdGiVisualStyle::Type val);

  /** \details
  Copy constructor from OdGiVisualStyleProperties::FaceColorMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiVisualStyleProperties::FaceColorMode value.
  */
  OdRxPropertyVariant(const OdGiVisualStyleProperties::FaceColorMode val);

  /** \details
  Copy constructor from OdGiVisualStyleProperties::EdgeModel for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiVisualStyleProperties::EdgeModel value.
  */
  OdRxPropertyVariant(const OdGiVisualStyleProperties::EdgeModel val);

  /** \details
  Copy constructor from OdGiFaceStyle::FaceColorMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiFaceStyle::FaceColorMode value.
  */
  OdRxPropertyVariant(const OdGiFaceStyle::FaceColorMode val);

  /** \details
  Copy constructor from OdGiEdgeStyle::EdgeModel for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiEdgeStyle::EdgeModel value.
  */
  OdRxPropertyVariant(const OdGiEdgeStyle::EdgeModel val);

  /** \details
  Copy constructor from OdGiToneOperatorParameters::ExteriorDaylightMode for instance of OdRxPropertyVariant class.

  \param val [in]constant OdGiToneOperatorParameters::ExteriorDaylightMode value.
  */
  OdRxPropertyVariant(const OdGiToneOperatorParameters::ExteriorDaylightMode val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdRxPropertyVariant value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdRxPropertyVariant& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] bool value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const bool& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] double value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const double& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdInt8 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdInt8& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdUInt8 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdUInt8& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdInt16 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdInt16& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdUInt16 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdUInt16& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdInt32 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdInt32& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdUInt32 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdUInt32& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdInt64 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdInt64& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdUInt64 value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdUInt64& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdString value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdString& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdAnsiString value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdAnsiString& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdGePoint2d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGePoint2d& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdGePoint3d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGePoint3d& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdGeVector2d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeVector2d& val);

  /** \details
   Assigns a new value to the OdRxPropertyVariant, replacing its current contents.

  \param val [in] OdGeVector3d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeVector3d& val);

  /** \details
   Assigns a new value to the OdCmEntityColor, replacing its current contents.

  \param val [in] OdGeVector3d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdCmEntityColor& val);

  /** \details
   Assigns a new value to the OdCmEntityColor, replacing its current contents.

  \param val [in] OdCmTransparency value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdCmTransparency& val);

  /** \details
   Assigns a new value to the OdGeMatrix2d, replacing its current contents.

  \param val [in] OdGeMatrix2d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeMatrix2d& val);

  /** \details
   Assigns a new value to the OdGeMatrix3d, replacing its current contents.

  \param val [in] OdGeMatrix3d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeMatrix3d& val);

  /** \details
   Assigns a new value to the OdGeScale3d, replacing its current contents.

  \param val [in] OdGeScale3d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeScale3d& val);

  /** \details
   Assigns a new value to the OdTimeStamp, replacing its current contents.

  \param val [in] OdTimeStamp value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdTimeStamp& val);

  /** \details
   Assigns a new value to the OdGeExtents2d, replacing its current contents.

  \param val [in] OdGeExtents2d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeExtents2d& val);

  /** \details
   Assigns a new value to the OdGeExtents3d, replacing its current contents.

  \param val [in] OdGeExtents3d value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeExtents3d& val);

  /** \details
   Assigns a new value to the OdGeQuaternion, replacing its current contents.

  \param val [in] OdGeQuaternion value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGeQuaternion& val);

  /** \details
   Assigns a new value to the OdGiLightAttenuation, replacing its current contents.

  \param val [in] OdGiLightAttenuation value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiLightAttenuation& val);

  /** \details
   Assigns a new value to the OdGiSkyParameters, replacing its current contents.

  \param val [in] OdGiSkyParameters value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiSkyParameters& val);

  /** \details
   Assigns a new value to the OdGiShadowParameters, replacing its current contents.

  \param val [in] OdGiShadowParameters value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiShadowParameters& val);

  /** \details
   Assigns a new value to the OdGiColorRGB, replacing its current contents.

  \param val [in] OdGiColorRGB value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiColorRGB& val);

  /** \details
   Assigns a new value to the OdGiMrExposureType, replacing its current contents.

  \param val [in] OdGiMrExposureType value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrExposureType& val);

  /** \details
   Assigns a new value to the OdGiMrShadowMode, replacing its current contents.

  \param val [in] OdGiMrShadowMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrShadowMode& val);

  /** \details
   Assigns a new value to the OdGiMrFinalGatheringMode, replacing its current contents.

  \param val [in] OdGiMrFinalGatheringMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrFinalGatheringMode& val);

  /** \details
   Assigns a new value to the OdGiMrDiagnosticMode, replacing its current contents.

  \param val [in] OdGiMrDiagnosticMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrDiagnosticMode& val);

  /** \details
   Assigns a new value to the OdGiMrDiagnosticPhotonMode, replacing its current contents.

  \param val [in] OdGiMrDiagnosticPhotonMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrDiagnosticPhotonMode& val);

  /** \details
   Assigns a new value to the OdGiMrDiagnosticBSPMode, replacing its current contents.

  \param val [in] OdGiMrDiagnosticBSPMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrDiagnosticBSPMode& val);

  /** \details
   Assigns a new value to the OdGiMrExportMIMode, replacing its current contents.

  \param val [in] OdGiMrExportMIMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrExportMIMode& val);

  /** \details
   Assigns a new value to the OdGiMrTileOrder, replacing its current contents.

  \param val [in] OdGiMrTileOrder value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMrTileOrder& val);

  /** \details
   Assigns a new value to the OdGiLightingMode, replacing its current contents.

  \param val [in] OdGiLightingMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiLightingMode& val);

  /** \details
   Assigns a new value to the OdGiFilterType, replacing its current contents.

  \param val [in] OdGiFilterType value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiFilterType& val);

  /** \details
   Assigns a new value to the OdGiMaterialColor, replacing its current contents.

  \param val [in] OdGiMaterialColor value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialColor& val);

  /** \details
   Assigns a new value to the OdCmEntityColor::ColorMethod, replacing its current contents.

  \param val [in] OdCmEntityColor::ColorMethod value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdCmEntityColor::ColorMethod& val);

  /** \details
   Assigns a new value to the OdDb::LineWeight, replacing its current contents.

  \param val [in] OdDb::LineWeight value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdDb::LineWeight& val);

  /** \details
   Assigns a new value to the OdDb::UnitsValue, replacing its current contents.

  \param val [in] OdDb::UnitsValue value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdDb::UnitsValue& val);

  /** \details
   Assigns a new value to the OdGiDgLinetypeModifiers::WidthMode, replacing its current contents.

  \param val [in] OdGiDgLinetypeModifiers::WidthMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiDgLinetypeModifiers::WidthMode& val);

  /** \details
   Assigns a new value to the OdGiDgLinetypeModifiers::ShiftMode, replacing its current contents.

  \param val [in] OdGiDgLinetypeModifiers::ShiftMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiDgLinetypeModifiers::ShiftMode& val);

  /** \details
   Assigns a new value to the OdGiDgLinetypeModifiers::CornersMode, replacing its current contents.

  \param val [in] OdGiDgLinetypeModifiers::CornersMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiDgLinetypeModifiers::CornersMode& val);

  /** \details
   Assigns a new value to the OdGe::OdGeKnotParameterization, replacing its current contents.

  \param val [in] OdGe::OdGeKnotParameterization value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGe::OdGeKnotParameterization& val);

  /** \details
   Assigns a new value to the OdGiLightAttenuation::AttenuationType, replacing its current contents.

  \param val [in] OdGiLightAttenuation::AttenuationType value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiLightAttenuation::AttenuationType& val);

  /** \details
   Assigns a new value to the OdGiDrawable::DrawableType, replacing its current contents.

  \param val [in] OdGiDrawable::DrawableType value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiDrawable::DrawableType& val);

  /** \details
   Assigns a new value to the OdGiShadowParameters::ShadowType, replacing its current contents.

  \param val [in] OdGiShadowParameters::ShadowType value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiShadowParameters::ShadowType& val);

  /** \details
   Assigns a new value to the OdGiShadowParameters::ExtendedLightShape, replacing its current contents.

  \param val [in] OdGiShadowParameters::ExtendedLightShape value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiShadowParameters::ExtendedLightShape& val);

  /** \details
   Assigns a new value to the OdGiViewportTraits::DefaultLightingType, replacing its current contents.

  \param val [in] OdGiViewportTraits::DefaultLightingType value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiViewportTraits::DefaultLightingType& val);

  /** \details
   Assigns a new value to the OdGiMaterialTraits::LuminanceMode, replacing its current contents.

  \param val [in] OdGiMaterialTraits::LuminanceMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialTraits::LuminanceMode& val);

  /** \details
   Assigns a new value to the OdGiMaterialTraits::GlobalIlluminationMode, replacing its current contents.

  \param val [in] OdGiMaterialTraits::GlobalIlluminationMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialTraits::GlobalIlluminationMode& val);

  /** \details
   Assigns a new value to the OdGiMaterialTraits::FinalGatherMode, replacing its current contents.

  \param val [in] OdGiMaterialTraits::FinalGatherMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialTraits::FinalGatherMode& val);

  /** \details
   Assigns a new value to the OdGiMaterialTraits::ChannelFlags, replacing its current contents.

  \param val [in] OdGiMaterialTraits::ChannelFlags value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialTraits::ChannelFlags& val);

  /** \details
   Assigns a new value to the OdGiMaterialTraits::Mode, replacing its current contents.

  \param val [in] OdGiMaterialTraits::Mode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialTraits::Mode& val);

  /** \details
   Assigns a new value to the OdGiMaterialTraits::IlluminationModel, replacing its current contents.

  \param val [in] OdGiMaterialTraits::IlluminationModel value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiMaterialTraits::IlluminationModel& val);

  /** \details
   Assigns a new value to the OdGiVisualStyle::Type, replacing its current contents.

  \param val [in] OdGiVisualStyle::Type value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiVisualStyle::Type& val);

  /** \details
   Assigns a new value to the OdGiVisualStyleProperties::FaceColorMode, replacing its current contents.

  \param val [in] OdGiVisualStyleProperties::FaceColorMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiVisualStyleProperties::FaceColorMode& val);

  /** \details
   Assigns a new value to the OdGiVisualStyleProperties::EdgeModel, replacing its current contents.

  \param val [in] OdGiVisualStyleProperties::EdgeModel value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiVisualStyleProperties::EdgeModel& val);

  /** \details
   Assigns a new value to the OdGiFaceStyle::FaceColorMode, replacing its current contents.

  \param val [in] OdGiFaceStyle::FaceColorMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiFaceStyle::FaceColorMode& val);

  /** \details
   Assigns a new value to the OdGiEdgeStyle::EdgeModel, replacing its current contents.

  \param val [in] OdGiEdgeStyle::EdgeModel value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiEdgeStyle::EdgeModel& val);

  /** \details
   Assigns a new value to the OdGiToneOperatorParameters::ExteriorDaylightMode, replacing its current contents.

  \param val [in] OdGiToneOperatorParameters::ExteriorDaylightMode value.
  \returns Returns a reference to this object.
  */
  OdRxPropertyVariant& operator =(const OdGiToneOperatorParameters::ExteriorDaylightMode& val);

  /** \details
   Destroys an instance of the OdRxPropertyVariant class.
 */
  ~OdRxPropertyVariant();

  /** \details
    Gets the value as OdString.

    \returns Returns a constant reference OdString.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdString& getString() const;

  /** \details
    Gets the value as OdAnsiString.

  \returns Returns a constant reference OdAnsiString.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdAnsiString& getAnsiString() const;

  /** \details
    Gets the value as bool.

    \returns Returns a bool object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  bool getBool() const;

  /** \details
    Gets the value as OdInt8.

    \returns Returns an OdInt8 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdInt8 getInt8()   const;

  /** \details
    Gets the value as OdUInt8.

    \returns Returns an OdUInt8 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdUInt8 getUInt8()  const;

  /** \details
    Gets the value as OdInt16.

    \returns Returns an OdInt16 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdInt16 getInt16()  const;

  /** \details
    Gets the value as OdUInt16.

    \returns Returns an OdUInt16 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdUInt16 getUInt16() const;

  /** \details
    Gets the value as OdInt32.

    \returns Returns an OdInt32 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdInt32 getInt32()  const;

  /** \details
    Gets the value as OdUInt32.

    \returns Returns an OdUInt32 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdUInt32 getUInt32() const;

  /** \details
   Gets the value as OdInt64

    \returns Returns an OdInt64 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdInt64 getInt64()  const;

  /** \details
    Gets the value as OdUInt64.

    \returns Returns an OdUInt64 object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdUInt64 getUInt64() const;

  /** \details
    Gets the value as double.

    \returns Returns a constant reference double.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const double& getDouble() const;

  /** \details
   Gets the value as OdGePoint3d.

  \returns Returns a constant reference OdGePoint3d.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGePoint3d&      getGePoint3d()        const;

  /** \details
   Gets the value as OdGePoint2d.

  \returns Returns a constant reference OdGePoint2d.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGePoint2d&      getGePoint2d()        const;

  /** \details
   Gets the value as OdGeVector2d.

  \returns Returns a constant reference OdGeVector2d.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeVector2d&     getGeVector2d()       const;

  /** \details
   Gets the value as OdGeVector3d.

  \returns Returns a constant reference OdGeVector3d.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeVector3d&     getGeVector3d()       const;

  /** \details
   Gets the value as OdCmEntityColor.

  \returns Returns a constant reference OdCmEntityColor.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdCmEntityColor&  getCmEntityColor()    const;

  /** \details
   Gets the value as OdCmTransparency.

  \returns Returns a constant reference OdCmTransparency.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdCmTransparency&  getCmTransparency()  const;

  /** \details
   Gets the value as OdGeMatrix2d.

  \returns Returns a constant reference OdGeMatrix2d.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeMatrix2d& getGeMatrix2d()    const;

  /** \details
   Gets the value as OdGeMatrix3d.

  \returns Returns a constant reference OdGeMatrix3d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeMatrix3d& getGeMatrix3d()  const;

  /** \details
   Gets the value as OdGeScale3d.

  \returns Returns a constant reference OdGeScale3d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeScale3d& getGeScale3d()  const;

  /** \details
   Gets the value as OdTimeStamp.

  \returns Returns a constant reference OdTimeStamp.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdTimeStamp& getTimeStamp()  const;

  /** \details
   Gets the value as OdGeExtents2d.

  \returns Returns a constant reference OdGeExtents2d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeExtents2d& getGeExtents2d()  const;

  /** \details
   Gets the value as OdGeExtents3d.

  \returns Returns a constant reference OdGeExtents3d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeExtents3d& getGeExtents3d()  const;

  /** \details
   Gets the value as OdGeQuaternion.

  \returns Returns a constant reference OdGeQuaternion.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeQuaternion& getGeQuaternion()  const;

  /** \details
   Gets the value as OdGiLightAttenuation.

  \returns Returns a constant reference OdGiLightAttenuation.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiLightAttenuation& getGiLightAttenuation()  const;

  /** \details
   Gets the value as OdGiSkyParameters.

  \returns Returns a constant reference OdGiSkyParameters.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiSkyParameters& getGiSkyParameters()  const;

  /** \details
   Gets the value as OdGiShadowParameters.

  \returns Returns a constant reference OdGiShadowParameters.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiShadowParameters& getGiShadowParameters()  const;

  /** \details
   Gets the value as OdGiColorRGB.

  \returns Returns a constant reference OdGiColorRGB.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiColorRGB& getGiColorRGB()  const;

  /** \details
   Gets the value as OdGiMaterialColor.

  \returns Returns a constant reference OdGiMaterialColor.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialColor& getGiMaterialColor()  const;

  /** \details
   Gets the value as OdGiMrExposureType

    \returns Returns an OdGiMrExposureType object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrExposureType getGiMrExposureType()  const;

  /** \details
   Gets the value as OdGiMrShadowMode

    \returns Returns an OdGiMrShadowMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrShadowMode getGiMrShadowMode()  const;

  /** \details
   Gets the value as OdGiMrFinalGatheringMode

    \returns Returns an OdGiMrFinalGatheringMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrFinalGatheringMode getGiMrFinalGatheringMode()  const;

  /** \details
   Gets the value as OdGiMrDiagnosticMode

    \returns Returns an OdGiMrDiagnosticMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrDiagnosticMode getGiMrDiagnosticMode()  const;

  /** \details
   Gets the value as OdGiMrDiagnosticPhotonMode

    \returns Returns an OdGiMrDiagnosticPhotonMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrDiagnosticPhotonMode getGiMrDiagnosticPhotonMode()  const;

  /** \details
   Gets the value as OdGiMrDiagnosticBSPMode

    \returns Returns an OdGiMrDiagnosticBSPMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrDiagnosticBSPMode getGiMrDiagnosticBSPMode()  const;

  /** \details
   Gets the value as OdGiMrExportMIMode

    \returns Returns an OdGiMrExportMIMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrExportMIMode getGiMrExportMIMode()  const;

  /** \details
   Gets the value as OdGiMrTileOrder

    \returns Returns an OdGiMrTileOrder object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMrTileOrder getGiMrTileOrder()  const;

  /** \details
   Gets the value as OdGiLightingMode

    \returns Returns an OdGiLightingMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiLightingMode getGiLightingMode()  const;

  /** \details
   Gets the value as OdGiFilterType

    \returns Returns an OdGiFilterType object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiFilterType getGiFilterType()  const;
  
  /** \details
  Gets the value as OdCmEntityColor::ColorMethod

   \returns Returns an OdCmEntityColor::ColorMethod object.
   \remarks
   No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdCmEntityColor::ColorMethod getCmEntityColor_ColorMethod() const;
  /** \details
   Gets the value as OdDb::LineWeight

    \returns Returns an OdDb::LineWeight object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdDb::LineWeight getDb_LineWeight() const;
  /** \details
   Gets the value as OdDb::UnitsValue

    \returns Returns an OdDb::UnitsValue object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdDb::UnitsValue getDb_UnitsValue() const;
  /** \details
   Gets the value as OdGiDgLinetypeModifiers::WidthMode

    \returns Returns an OdGiDgLinetypeModifiers::WidthMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiDgLinetypeModifiers::WidthMode getGiDgLinetypeModifiers_WidthMode() const;
  /** \details
   Gets the value as OdGiDgLinetypeModifiers::ShiftMode

    \returns Returns an OdGiDgLinetypeModifiers::ShiftMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiDgLinetypeModifiers::ShiftMode getGiDgLinetypeModifiers_ShiftMode() const;
  /** \details
   Gets the value as OdGiDgLinetypeModifiers::CornersMode

    \returns Returns an OdGiDgLinetypeModifiers::CornersMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiDgLinetypeModifiers::CornersMode getGiDgLinetypeModifiers_CornersMode() const;
  /** \details
   Gets the value as OdGe::OdGeKnotParameterization

    \returns Returns an OdGe::OdGeKnotParameterization object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGe::OdGeKnotParameterization getGe_OdGeKnotParameterization() const;
  /** \details
   Gets the value as OdGiLightAttenuation::AttenuationType

    \returns Returns an OdGiLightAttenuation::AttenuationType object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiLightAttenuation::AttenuationType getGiLightAttenuation_AttenuationType() const;
  /** \details
   Gets the value as OdGiDrawable::DrawableType

    \returns Returns an OdGiDrawable::DrawableType object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiDrawable::DrawableType getGiDrawable_DrawableType() const;
  /** \details
   Gets the value as OdGiShadowParameters::ShadowType

    \returns Returns an OdGiShadowParameters::ShadowType object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiShadowParameters::ShadowType getGiShadowParameters_ShadowType() const;
  /** \details
   Gets the value as OdGiShadowParameters::ExtendedLightShape

    \returns Returns an OdGiShadowParameters::ExtendedLightShape object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiShadowParameters::ExtendedLightShape getGiShadowParameters_ExtendedLightShape() const;
  /** \details
   Gets the value as OdGiViewportTraits::DefaultLightingType

    \returns Returns an OdGiViewportTraits::DefaultLightingType object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiViewportTraits::DefaultLightingType getGiViewportTraits_DefaultLightingType() const;
  /** \details
   Gets the value as OdGiMaterialTraits::LuminanceMode

    \returns Returns an OdGiMaterialTraits::LuminanceMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMaterialTraits::LuminanceMode getGiMaterialTraits_LuminanceMode() const;
  /** \details
   Gets the value as OdGiMaterialTraits::GlobalIlluminationMode

    \returns Returns an OdGiMaterialTraits::GlobalIlluminationMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMaterialTraits::GlobalIlluminationMode getGiMaterialTraits_GlobalIlluminationMode() const;
  /** \details
   Gets the value as OdGiMaterialTraits::FinalGatherMode

    \returns Returns an OdGiMaterialTraits::FinalGatherMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMaterialTraits::FinalGatherMode getGiMaterialTraits_FinalGatherMode() const;
  /** \details
   Gets the value as OdGiMaterialTraits::ChannelFlags

    \returns Returns an OdGiMaterialTraits::ChannelFlags object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMaterialTraits::ChannelFlags getGiMaterialTraits_ChannelFlags() const;
  /** \details
   Gets the value as OdGiMaterialTraits::Mode

    \returns Returns an OdGiMaterialTraits::Mode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMaterialTraits::Mode getGiMaterialTraits_Mode() const;
  /** \details
   Gets the value as OdGiMaterialTraits::IlluminationModel

    \returns Returns an OdGiMaterialTraits::IlluminationModel object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiMaterialTraits::IlluminationModel getGiMaterialTraits_IlluminationModel() const;
  /** \details
   Gets the value as OdGiVisualStyle::Type

    \returns Returns an OdGiVisualStyle::Type object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiVisualStyle::Type getGiVisualStyle_Type() const;
  /** \details
   Gets the value as OdGiVisualStyleProperties::FaceColorMode

    \returns Returns an OdGiVisualStyleProperties::FaceColorMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiVisualStyleProperties::FaceColorMode getGiVisualStyleProperties_FaceColorMode() const;
  /** \details
   Gets the value as OdGiVisualStyleProperties::EdgeModel

    \returns Returns an OdGiVisualStyleProperties::EdgeModel object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiVisualStyleProperties::EdgeModel getGiVisualStyleProperties_EdgeModel() const;
  /** \details
   Gets the value as OdGiFaceStyle::FaceColorMode

    \returns Returns an OdGiFaceStyle::FaceColorMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiFaceStyle::FaceColorMode getGiFaceStyle_FaceColorMode() const;
  /** \details
   Gets the value as OdGiEdgeStyle::EdgeModel

    \returns Returns an OdGiEdgeStyle::EdgeModel object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiEdgeStyle::EdgeModel getGiEdgeStyle_EdgeModel() const;
  /** \details
   Gets the value as OdGiToneOperatorParameters::ExteriorDaylightMode

    \returns Returns an OdGiToneOperatorParameters::ExteriorDaylightMode object.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  OdGiToneOperatorParameters::ExteriorDaylightMode getGiToneOperatorParameters_ExteriorDaylightMode() const;

  /** \details
   Gets the value as constant array of OdString.

  \returns Returns a constant reference array of OdString.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdStringArray& getStringArray() const;

  /** \details
   Gets the value as constant array of OdAnsiString.

  \returns Returns a constant reference array of OdAnsiString.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdAnsiStringArray& getAnsiStringArray() const;

  /** \details
   Gets the value as constant array of bool.

  \returns Returns a constant reference array of bool.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdBoolArray& getBoolArray() const;

  /** \details
   Gets the value as constant array of OdInt8.

  \returns Returns a constant reference array of OdInt8.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdInt8Array& getInt8Array() const;

  /** \details
   Gets the value as constant array of OdUInt8.

  \returns Returns a constant reference array of OdUInt8.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdUInt8Array& getUInt8Array() const;

  /** \details
   Gets the value as constant array of OdInt16.

  \returns Returns a constant reference array of OdInt16.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdInt16Array& getInt16Array() const;

  /** \details
   Gets the value as constant array of OdUInt16.

  \returns Returns a constant reference array of OdUInt16.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdUInt16Array& getUInt16Array() const;

  /** \details
   Gets the value as constant array of OdInt32.

  \returns Returns a constant reference array of OdInt32.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdInt32Array& getInt32Array() const;

  /** \details
   Gets the value as constant array of OdUInt32.

  \returns Returns a constant reference array of OdUInt32.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdUInt32Array& getUInt32Array() const;

  /** \details
   Gets the value as constant array of OdInt64.

  \returns Returns a constant reference array of OdInt64.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdInt64Array& getInt64Array() const;

  /** \details
   Gets the value as constant array of OdUInt64.

  \returns Returns a constant reference array of OdUInt64.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdUInt64Array& getUInt64Array() const;

  /** \details
   Gets the value as constant array of double.

  \returns Returns a constant reference array of double.
    \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdDoubleArray& getDoubleArray() const;

  /** \details
   Gets the value as constant array of OdGePoint3d.

  \returns Returns a constant reference array of OdGePoint3d.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGePoint3dArray&      getGePoint3dArray()        const;

  /** \details
   Gets the value as constant array of OdGePoint2d.

  \returns Returns a constant reference array of OdGePoint2d.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGePoint2dArray&      getGePoint2dArray()        const;

  /** \details
   Gets the value as constant array of OdGeVector2d.

  \returns Returns a constant reference array of OdGeVector2d.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeVector2dArray&     getGeVector2dArray()       const;

  /** \details
   Gets the value as constant array of OdGeVector3d.

  \returns Returns a constant reference array of OdGeVector3d.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeVector3dArray&     getGeVector3dArray()       const;

  /** \details
   Gets the value as constant array of OdCmEntityColor.

  \returns Returns a constant reference array of OdCmEntityColor.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdCmEntityColorArray&  getCmEntityColorArray()    const;

  /** \details
   Gets the value as constant array of OdCmEntityColor.

  \returns Returns a constant reference array of OdCmEntityColor.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdCmTransparencyArray& getCmTransparencyArray()   const;

  /** \details
   Gets the value as constant array of OdGeMatrix2d.

  \returns Returns a constant reference array of OdGeMatrix2d.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeMatrix2dArray&  getGeMatrix2dArray()    const;

  /** \details
   Gets the value as constant array of OdGeMatrix3d.

  \returns Returns a constant reference array of OdGeMatrix3d.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeMatrix3dArray& getGeMatrix3dArray()   const;

  /** \details
   Gets the value as constant array of OdGeScale3d.

  \returns Returns a constant reference array of OdGeScale3d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeScale3dArray& getGeScale3dArray() const;
  /** \details
   Gets the value as constant array of OdTimeStamp.

  \returns Returns a constant reference array of OdTimeStamp.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdTimeStampArray& getTimeStampArray() const;
  /** \details
   Gets the value as constant array of OdGeExtents2d.

  \returns Returns a constant reference array of OdGeExtents2d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeExtents2dArray& getGeExtents2dArray() const;
  /** \details
   Gets the value as constant array of OdGeExtents3d.

  \returns Returns a constant reference array of OdGeExtents3d.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeExtents3dArray& getGeExtents3dArray() const;
  /** \details
   Gets the value as constant array of OdGeQuaternion.

  \returns Returns a constant reference array of OdGeQuaternion.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGeQuaternionArray& getGeQuaternionArray() const;
  /** \details
   Gets the value as constant array of OdGiLightAttenuation.

  \returns Returns a constant reference array of OdGiLightAttenuation.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiLightAttenuationArray& getGiLightAttenuationArray() const;
  /** \details
   Gets the value as constant array of OdGiSkyParameters.

  \returns Returns a constant reference array of OdGiSkyParameters.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiSkyParametersArray& getGiSkyParametersArray() const;
  /** \details
   Gets the value as constant array of OdGiShadowParameters.

  \returns Returns a constant reference array of OdGiShadowParameters.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiShadowParametersArray& getGiShadowParametersArray() const;
  /** \details
   Gets the value as constant array of OdGiColorRGB.

  \returns Returns a constant reference array of OdGiColorRGB.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiColorRGBArray& getGiColorRGBArray() const;
  /** \details
   Gets the value as constant array of OdGiMrExposureType.

  \returns Returns a constant reference array of OdGiMrExposureType.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrExposureTypeArray& getGiMrExposureTypeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrShadowMode.

  \returns Returns a constant reference array of OdGiMrShadowMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrShadowModeArray& getGiMrShadowModeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrFinalGatheringMode.

  \returns Returns a constant reference array of OdGiMrFinalGatheringMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrFinalGatheringModeArray& getGiMrFinalGatheringModeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrDiagnosticMode.

  \returns Returns a constant reference array of OdGiMrDiagnosticMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrDiagnosticModeArray& getGiMrDiagnosticModeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrDiagnosticPhotonMode.

  \returns Returns a constant reference array of OdGiMrDiagnosticPhotonMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrDiagnosticPhotonModeArray& getGiMrDiagnosticPhotonModeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrDiagnosticBSPMode.

  \returns Returns a constant reference array of OdGiMrDiagnosticBSPMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrDiagnosticBSPModeArray& getGiMrDiagnosticBSPModeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrExportMIMode.

  \returns Returns a constant reference array of OdGiMrExportMIMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrExportMIModeArray& getGiMrExportMIModeArray() const;
  /** \details
   Gets the value as constant array of OdGiMrTileOrder.

  \returns Returns a constant reference array of OdGiMrTileOrder.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMrTileOrderArray& getGiMrTileOrderArray() const;
  /** \details
   Gets the value as constant array of OdGiLightingMode.

  \returns Returns a constant reference array of OdGiLightingMode.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiLightingModeArray& getGiLightingModeArray() const;
  /** \details
   Gets the value as constant array of OdGiFilterType.

  \returns Returns a constant reference array of OdGiFilterType.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiFilterTypeArray& getGiFilterTypeArray() const;
  /** \details
   Gets the value as constant array of OdGiMaterialColor.

  \returns Returns a constant reference array of OdGiMaterialColor.
  \remarks
    No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialColorArray& getGiMaterialColorArray() const;

  /** \details
  Gets the value as constant array of OdCmEntityColor::ColorMethod.

  \returns Returns a constant reference array of OdCmEntityColor::ColorMethod.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdCmEntityColor_ColorMethodArray& getCmEntityColor_ColorMethodArray() const;
  /** \details
  Gets the value as constant array of OdDb::LineWeight.

  \returns Returns a constant reference array of OdDb::LineWeight.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdDb_LineWeightArray& getDb_LineWeightArray() const;
  /** \details
  Gets the value as constant array of OdDb::UnitsValue.

  \returns Returns a constant reference array of OdDb::UnitsValue.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdDb_UnitsValueArray& getDb_UnitsValueArray() const;
  /** \details
  Gets the value as constant array of OdGiDgLinetypeModifiers::WidthMode.

  \returns Returns a constant reference array of OdGiDgLinetypeModifiers::WidthMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiDgLinetypeModifiers_WidthModeArray& getGiDgLinetypeModifiers_WidthModeArray() const;
  /** \details
  Gets the value as constant array of OdGiDgLinetypeModifiers::ShiftMode.

  \returns Returns a constant reference array of OdGiDgLinetypeModifiers::ShiftMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiDgLinetypeModifiers_ShiftModeArray& getGiDgLinetypeModifiers_ShiftModeArray() const;
  /** \details
  Gets the value as constant array of OdGiDgLinetypeModifiers::CornersMode.

  \returns Returns a constant reference array of OdGiDgLinetypeModifiers::CornersMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiDgLinetypeModifiers_CornersModeArray& getGiDgLinetypeModifiers_CornersModeArray() const;
  /** \details
  Gets the value as constant array of OdGe::OdGeKnotParameterization.

  \returns Returns a constant reference array of OdGe::OdGeKnotParameterization.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGe_OdGeKnotParameterizationArray& getGe_OdGeKnotParameterizationArray() const;
  /** \details
  Gets the value as constant array of OdGiLightAttenuation::AttenuationType.

  \returns Returns a constant reference array of OdGiLightAttenuation::AttenuationType.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiLightAttenuation_AttenuationTypeArray& getGiLightAttenuation_AttenuationTypeArray() const;
  /** \details
  Gets the value as constant array of OdGiDrawable::DrawableType.

  \returns Returns a constant reference array of OdGiDrawable::DrawableType.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiDrawable_DrawableTypeArray& getGiDrawable_DrawableTypeArray() const;
  /** \details
  Gets the value as constant array of OdGiShadowParameters::ShadowType.

  \returns Returns a constant reference array of OdGiShadowParameters::ShadowType.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiShadowParameters_ShadowTypeArray& getGiShadowParameters_ShadowTypeArray() const;
  /** \details
  Gets the value as constant array of OdGiShadowParameters::ExtendedLightShape.

  \returns Returns a constant reference array of OdGiShadowParameters::ExtendedLightShape.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiShadowParameters_ExtendedLightShapeArray& getGiShadowParameters_ExtendedLightShapeArray() const;
  /** \details
  Gets the value as constant array of OdGiViewportTraits::DefaultLightingType.

  \returns Returns a constant reference array of OdGiViewportTraits::DefaultLightingType.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiViewportTraits_DefaultLightingTypeArray& getGiViewportTraits_DefaultLightingTypeArray() const;
  /** \details
  Gets the value as constant array of OdGiMaterialTraits::LuminanceMode.

  \returns Returns a constant reference array of OdGiMaterialTraits::LuminanceMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialTraits_LuminanceModeArray& getGiMaterialTraits_LuminanceModeArray() const;
  /** \details
  Gets the value as constant array of OdGiMaterialTraits::GlobalIlluminationMode.

  \returns Returns a constant reference array of OdGiMaterialTraits::GlobalIlluminationMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialTraits_GlobalIlluminationModeArray& getGiMaterialTraits_GlobalIlluminationModeArray() const;
  /** \details
  Gets the value as constant array of OdGiMaterialTraits::FinalGatherMode.

  \returns Returns a constant reference array of OdGiMaterialTraits::FinalGatherMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialTraits_FinalGatherModeArray& getGiMaterialTraits_FinalGatherModeArray() const;
  /** \details
  Gets the value as constant array of OdGiMaterialTraits::ChannelFlags.

  \returns Returns a constant reference array of OdGiMaterialTraits::ChannelFlags.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialTraits_ChannelFlagsArray& getGiMaterialTraits_ChannelFlagsArray() const;
  /** \details
  Gets the value as constant array of OdGiMaterialTraits::Mode.

  \returns Returns a constant reference array of OdGiMaterialTraits::Mode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialTraits_ModeArray& getGiMaterialTraits_ModeArray() const;
  /** \details
  Gets the value as constant array of OdGiMaterialTraits::IlluminationModel.

  \returns Returns a constant reference array of OdGiMaterialTraits::IlluminationModel.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiMaterialTraits_IlluminationModelArray& getGiMaterialTraits_IlluminationModelArray() const;
  /** \details
  Gets the value as constant array of OdGiVisualStyle::Type.

  \returns Returns a constant reference array of OdGiVisualStyle::Type.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiVisualStyle_TypeArray& getGiVisualStyle_TypeArray() const;
  /** \details
  Gets the value as constant array of OdGiVisualStyleProperties::FaceColorMode.

  \returns Returns a constant reference array of OdGiVisualStyleProperties::FaceColorMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiVisualStyleProperties_FaceColorModeArray& getGiVisualStyleProperties_FaceColorModeArray() const;
  /** \details
  Gets the value as constant array of OdGiVisualStyleProperties::EdgeModel.

  \returns Returns a constant reference array of OdGiVisualStyleProperties::EdgeModel.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiVisualStyleProperties_EdgeModelArray& getGiVisualStyleProperties_EdgeModelArray() const;
  /** \details
  Gets the value as constant array of OdGiFaceStyle::FaceColorMode.

  \returns Returns a constant reference array of OdGiFaceStyle::FaceColorMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiFaceStyle_FaceColorModeArray& getGiFaceStyle_FaceColorModeArray() const;
  /** \details
  Gets the value as constant array of OdGiEdgeStyle::EdgeModel.

  \returns Returns a constant reference array of OdGiEdgeStyle::EdgeModel.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiEdgeStyle_EdgeModelArray& getGiEdgeStyle_EdgeModelArray() const;
  /** \details
  Gets the value as constant array of OdGiToneOperatorParameters::ExteriorDaylightMode.

  \returns Returns a constant reference array of OdGiToneOperatorParameters::ExteriorDaylightMode.
  \remarks
  No check is made to determine that this OdRxPropertyVariant object is of the specified type.
  */
  const OdGiToneOperatorParameters_ExteriorDaylightModeArray& getGiToneOperatorParameters_ExteriorDaylightModeArray() const;

  /** \details
   Gets the value as array of OdString.

  \returns Returns a reference array of OdString.
  */
  OdStringArray& asStringArray();

  /** \details
   Gets the value as array of OdAnsiString.

  \returns Returns a reference array of OdAnsiString.
  */
  OdAnsiStringArray& asAnsiStringArray();

  /** \details
   Gets the value as array of bool.

  \returns Returns a reference array of bool.
  */
  OdBoolArray& asBoolArray();

  /** \details
   Gets the value as array of OdInt8.

  \returns Returns a reference array of OdInt8.
  */
  OdInt8Array& asInt8Array();

  /** \details
   Gets the value as array of OdUInt8.

  \returns Returns a reference array of OdUInt8.
  */
  OdUInt8Array& asUInt8Array();

  /** \details
   Gets the value as array of OdInt16.

  \returns Returns a reference array of OdInt16.
  */
  OdInt16Array& asInt16Array();

  /** \details
   Gets the value as array of OdUInt16.

  \returns Returns a reference array of OdUInt16.
  */
  OdUInt16Array& asUInt16Array();

  /** \details
   Gets the value as array of OdInt32.

  \returns Returns a reference array of OdInt32.
  */
  OdInt32Array& asInt32Array();

  /** \details
   Gets the value as array of OdUInt32.

  \returns Returns a reference array of OdUInt32.
  */
  OdUInt32Array& asUInt32Array();

  /** \details
   Gets the value as array of OdInt64.

  \returns Returns a reference array of OdInt64.
  */
  OdInt64Array& asInt64Array();

  /** \details
   Gets the value as array of OdUInt64.

  \returns Returns a reference array of OdUInt64.
  */
  OdUInt64Array& asUInt64Array();

  /** \details
   Gets the value as array of double.

  \returns Returns a reference array of double.
  */
  OdDoubleArray& asDoubleArray();

  /** \details
   Gets the value as array of OdGePoint3d.

  \returns Returns a reference array of OdGePoint3d.
  */
  OdGePoint3dArray&      asGePoint3dArray();

  /** \details
   Gets the value as array of OdGePoint2d.

  \returns Returns a reference array of OdGePoint2d.
  */
  OdGePoint2dArray&      asGePoint2dArray();

  /** \details
   Gets the value as array of OdGeVector2d.

  \returns Returns a reference array of OdGeVector2d.
  */
  OdGeVector2dArray&     asGeVector2dArray();

  /** \details
   Gets the value as array of OdGeVector3d.

  \returns Returns a reference array of OdGeVector3d.
  */
  OdGeVector3dArray&     asGeVector3dArray();

  /** \details
   Gets the value as array of OdCmEntityColor.

  \returns Returns a reference array of OdCmEntityColor.
  */
  OdCmEntityColorArray&  asCmEntityColorArray();

  /** \details
   Gets the value as array of OdCmEntityColor.

  \returns Returns a reference array of OdCmEntityColor.
  */
  OdCmTransparencyArray& asCmTransparencyArray();

  /** \details
   Gets the value as array of OdGeMatrix2d.

  \returns Returns a reference array of OdGeMatrix2d.
  */
  OdGeMatrix2dArray& asGeMatrix2dArray();

  /** \details
   Gets the value as array of OdGeMatrix3d.

  \returns Returns a reference array of OdGeMatrix3d.
  */
  OdGeMatrix3dArray& asGeMatrix3dArray();

  /** \details
  Gets the value as array of OdGeScale3d.

  \returns Returns a reference array of OdGeScale3d.
  */
  OdGeScale3dArray& asGeScale3dArray();
  /** \details
  Gets the value as array of OdTimeStamp.

  \returns Returns a reference array of OdTimeStamp.
  */
  OdTimeStampArray& asTimeStampArray();
  /** \details
  Gets the value as array of OdGeExtents2d.

  \returns Returns a reference array of OdGeExtents2d.
  */
  OdGeExtents2dArray& asGeExtents2dArray();
  /** \details
  Gets the value as array of OdGeExtents3d.

  \returns Returns a reference array of OdGeExtents3d.
  */
  OdGeExtents3dArray& asGeExtents3dArray();
  /** \details
  Gets the value as array of OdGeQuaternion.

  \returns Returns a reference array of OdGeQuaternion.
  */
  OdGeQuaternionArray& asGeQuaternionArray();
  /** \details
  Gets the value as array of OdGiLightAttenuation.

  \returns Returns a reference array of OdGiLightAttenuation.
  */
  OdGiLightAttenuationArray& asGiLightAttenuationArray();
  /** \details
  Gets the value as array of OdGiSkyParameters.

  \returns Returns a reference array of OdGiSkyParameters.
  */
  OdGiSkyParametersArray& asGiSkyParametersArray();
  /** \details
  Gets the value as array of OdGiShadowParameters.

  \returns Returns a reference array of OdGiShadowParameters.
  */
  OdGiShadowParametersArray& asGiShadowParametersArray();
  /** \details
  Gets the value as array of OdGiColorRGB.

  \returns Returns a reference array of OdGiColorRGB.
  */
  OdGiColorRGBArray& asGiColorRGBArray();
  /** \details
  Gets the value as array of OdGiMrExposureType.

  \returns Returns a reference array of OdGiMrExposureType.
  */
  OdGiMrExposureTypeArray& asGiMrExposureTypeArray();
  /** \details
  Gets the value as array of OdGiMrShadowMode.

  \returns Returns a reference array of OdGiMrShadowMode.
  */
  OdGiMrShadowModeArray& asGiMrShadowModeArray();
  /** \details
  Gets the value as array of OdGiMrFinalGatheringMode.

  \returns Returns a reference array of OdGiMrFinalGatheringMode.
  */
  OdGiMrFinalGatheringModeArray& asGiMrFinalGatheringModeArray();
  /** \details
  Gets the value as array of OdGiMrDiagnosticMode.

  \returns Returns a reference array of OdGiMrDiagnosticMode.
  */
  OdGiMrDiagnosticModeArray& asGiMrDiagnosticModeArray();
  /** \details
  Gets the value as array of OdGiMrDiagnosticPhotonMode.

  \returns Returns a reference array of OdGiMrDiagnosticPhotonMode.
  */
  OdGiMrDiagnosticPhotonModeArray& asGiMrDiagnosticPhotonModeArray();
  /** \details
  Gets the value as array of OdGiMrDiagnosticBSPMode.

  \returns Returns a reference array of OdGiMrDiagnosticBSPMode.
  */
  OdGiMrDiagnosticBSPModeArray& asGiMrDiagnosticBSPModeArray();
  /** \details
  Gets the value as array of OdGiMrExportMIMode.

  \returns Returns a reference array of OdGiMrExportMIMode.
  */
  OdGiMrExportMIModeArray& asGiMrExportMIModeArray();
  /** \details
  Gets the value as array of OdGiMrTileOrder.

  \returns Returns a reference array of OdGiMrTileOrder.
  */
  OdGiMrTileOrderArray& asGiMrTileOrderArray();
  /** \details
  Gets the value as array of OdGiLightingMode.

  \returns Returns a reference array of OdGiLightingMode.
  */
  OdGiLightingModeArray& asGiLightingModeArray();
  /** \details
  Gets the value as array of OdGiFilterType.

  \returns Returns a reference array of OdGiFilterType.
  */
  OdGiFilterTypeArray& asGiFilterTypeArray();
  /** \details
  Gets the value as array of OdGiMaterialColor.

  \returns Returns a reference array of OdGiMaterialColor.
  */
  OdGiMaterialColorArray& asGiMaterialColorArray();

  /** \details
  Gets the value as array of OdCmEntityColor::ColorMethod.

  \returns Returns a reference array of OdCmEntityColor::ColorMethod.
  */
  OdCmEntityColor_ColorMethodArray& asCmEntityColor_ColorMethodArray();
  /** \details
  Gets the value as array of OdDb::LineWeight.

  \returns Returns a reference array of OdDb::LineWeight.
  */
  OdDb_LineWeightArray& asDb_LineWeightArray();
  /** \details
  Gets the value as array of OdDb::UnitsValue.

  \returns Returns a reference array of OdDb::UnitsValue.
  */
  OdDb_UnitsValueArray& asDb_UnitsValueArray();
  /** \details
  Gets the value as array of OdGiDgLinetypeModifiers::WidthMode.

  \returns Returns a reference array of OdGiDgLinetypeModifiers::WidthMode.
  */
  OdGiDgLinetypeModifiers_WidthModeArray& asGiDgLinetypeModifiers_WidthModeArray();
  /** \details
  Gets the value as array of OdGiDgLinetypeModifiers::ShiftMode.

  \returns Returns a reference array of OdGiDgLinetypeModifiers::ShiftMode.
  */
  OdGiDgLinetypeModifiers_ShiftModeArray& asGiDgLinetypeModifiers_ShiftModeArray();
  /** \details
  Gets the value as array of OdGiDgLinetypeModifiers::CornersMode.

  \returns Returns a reference array of OdGiDgLinetypeModifiers::CornersMode.
  */
  OdGiDgLinetypeModifiers_CornersModeArray& asGiDgLinetypeModifiers_CornersModeArray();
  /** \details
  Gets the value as array of OdGe::OdGeKnotParameterization.

  \returns Returns a reference array of OdGe::OdGeKnotParameterization.
  */
  OdGe_OdGeKnotParameterizationArray& asGe_OdGeKnotParameterizationArray();
  /** \details
  Gets the value as array of OdGiLightAttenuation::AttenuationType.

  \returns Returns a reference array of OdGiLightAttenuation::AttenuationType.
  */
  OdGiLightAttenuation_AttenuationTypeArray& asGiLightAttenuation_AttenuationTypeArray();
  /** \details
  Gets the value as array of OdGiDrawable::DrawableType.

  \returns Returns a reference array of OdGiDrawable::DrawableType.
  */
  OdGiDrawable_DrawableTypeArray& asGiDrawable_DrawableTypeArray();
  /** \details
  Gets the value as array of OdGiShadowParameters::ShadowType.

  \returns Returns a reference array of OdGiShadowParameters::ShadowType.
  */
  OdGiShadowParameters_ShadowTypeArray& asGiShadowParameters_ShadowTypeArray();
  /** \details
  Gets the value as array of OdGiShadowParameters::ExtendedLightShape.

  \returns Returns a reference array of OdGiShadowParameters::ExtendedLightShape.
  */
  OdGiShadowParameters_ExtendedLightShapeArray& asGiShadowParameters_ExtendedLightShapeArray();
  /** \details
  Gets the value as array of OdGiViewportTraits::DefaultLightingType.

  \returns Returns a reference array of OdGiViewportTraits::DefaultLightingType.
  */
  OdGiViewportTraits_DefaultLightingTypeArray& asGiViewportTraits_DefaultLightingTypeArray();
  /** \details
  Gets the value as array of OdGiMaterialTraits::LuminanceMode.

  \returns Returns a reference array of OdGiMaterialTraits::LuminanceMode.
  */
  OdGiMaterialTraits_LuminanceModeArray& asGiMaterialTraits_LuminanceModeArray();
  /** \details
  Gets the value as array of OdGiMaterialTraits::GlobalIlluminationMode.

  \returns Returns a reference array of OdGiMaterialTraits::GlobalIlluminationMode.
  */
  OdGiMaterialTraits_GlobalIlluminationModeArray& asGiMaterialTraits_GlobalIlluminationModeArray();
  /** \details
  Gets the value as array of OdGiMaterialTraits::FinalGatherMode.

  \returns Returns a reference array of OdGiMaterialTraits::FinalGatherMode.
  */
  OdGiMaterialTraits_FinalGatherModeArray& asGiMaterialTraits_FinalGatherModeArray();
  /** \details
  Gets the value as array of OdGiMaterialTraits::ChannelFlags.

  \returns Returns a reference array of OdGiMaterialTraits::ChannelFlags.
  */
  OdGiMaterialTraits_ChannelFlagsArray& asGiMaterialTraits_ChannelFlagsArray();
  /** \details
  Gets the value as array of OdGiMaterialTraits::Mode.

  \returns Returns a reference array of OdGiMaterialTraits::Mode.
  */
  OdGiMaterialTraits_ModeArray& asGiMaterialTraits_ModeArray();
  /** \details
  Gets the value as array of OdGiMaterialTraits::IlluminationModel.

  \returns Returns a reference array of OdGiMaterialTraits::IlluminationModel.
  */
  OdGiMaterialTraits_IlluminationModelArray& asGiMaterialTraits_IlluminationModelArray();
  /** \details
  Gets the value as array of OdGiVisualStyle::Type.

  \returns Returns a reference array of OdGiVisualStyle::Type.
  */
  OdGiVisualStyle_TypeArray& asGiVisualStyle_TypeArray();
  /** \details
  Gets the value as array of OdGiVisualStyleProperties::FaceColorMode.

  \returns Returns a reference array of OdGiVisualStyleProperties::FaceColorMode.
  */
  OdGiVisualStyleProperties_FaceColorModeArray& asGiVisualStyleProperties_FaceColorModeArray();
  /** \details
  Gets the value as array of OdGiVisualStyleProperties::EdgeModel.

  \returns Returns a reference array of OdGiVisualStyleProperties::EdgeModel.
  */
  OdGiVisualStyleProperties_EdgeModelArray& asGiVisualStyleProperties_EdgeModelArray();
  /** \details
  Gets the value as array of OdGiFaceStyle::FaceColorMode.

  \returns Returns a reference array of OdGiFaceStyle::FaceColorMode.
  */
  OdGiFaceStyle_FaceColorModeArray& asGiFaceStyle_FaceColorModeArray();
  /** \details
  Gets the value as array of OdGiEdgeStyle::EdgeModel.

  \returns Returns a reference array of OdGiEdgeStyle::EdgeModel.
  */
  OdGiEdgeStyle_EdgeModelArray& asGiEdgeStyle_EdgeModelArray();
  /** \details
  Gets the value as array of OdGiToneOperatorParameters::ExteriorDaylightMode.

  \returns Returns a reference array of OdGiToneOperatorParameters::ExteriorDaylightMode.
  */
  OdGiToneOperatorParameters_ExteriorDaylightModeArray& asGiToneOperatorParameters_ExteriorDaylightModeArray();

  /** \details
   Sets value from the OdString object.

   \param val [in] constant reference to OdString.

   \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setString(const OdString& val);

  /** \details
  Sets value from the OdAnsiString object.

  \param val [in]  constant reference to OdAnsiString.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setAnsiString(const OdAnsiString& val);

  /** \details
    Sets value from the bool object.

    \param val [in] constant bool.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setBool(const bool val);

  /** \details
    Sets value from the OdInt8 object.

    \param val [in] constant OdInt8.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setInt8(const OdInt8 val);

  /** \details
    Sets value from the OdUInt8 object.

    \param val [in] constant OdUInt8.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setUInt8(const OdUInt8 val);

  /** \details
    Sets value from the OdInt16 object.

    \param val [in] constant OdInt16.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setInt16(const OdInt16 val);

  /** \details
    Sets value from the OdUInt16 object.

    \param val [in] constant OdUInt16.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setUInt16(const OdUInt16 val);

  /** \details
    Sets value from the OdInt32 object.

    \param val [in] constant OdInt32.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setInt32(const OdInt32 val);

  /** \details
    Sets value from the OdUInt32 object.

    \param val [in] constant OdUInt32.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setUInt32(const OdUInt32 val);

  /** \details
    Sets value from the OdInt64 object.

    \param val [in]   constant OdInt64.
OdInt64
    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setInt64(const OdInt64 val);

  /** \details
    Sets value from the OdUInt64 object.

    \param val [in]  constant OdUInt64.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setUInt64(const OdUInt64 val);

  /** \details
    Sets value from the double object.

    \param val [in] constant reference to double.

    \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setDouble(const double& val);

  /** \details
    Sets value from the OdGePoint3d object.

    \param val [in] constant reference to OdGePoint3d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGePoint3d(const OdGePoint3d& val);

  /** \details
    Sets value from the OdGePoint2d object.

    \param val [in] constant reference to OdGePoint2d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGePoint2d(const OdGePoint2d& val);

  /** \details
    Sets value from the OdGeVector2d object.

    \param val [in] constant reference to OdGeVector2d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeVector2d(const OdGeVector2d& val);

  /** \details
    Sets value from the OdGeVector3d object.

    \param val [in] constant reference to OdGeVector3d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeVector3d(const OdGeVector3d& val);

  /** \details
    Sets value from the OdCmEntityColor object.

    \param val [in] constant reference to OdCmEntityColor.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setCmEntityColor(const OdCmEntityColor& val);

  /** \details
    Sets value from the OdCmTransparency object.

    \param val [in] constant reference to OdCmTransparency.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setCmTransparency(const OdCmTransparency& val);

  /** \details
    Sets value from the OdGeMatrix2d object.

    \param val [in] constant reference to OdGeMatrix2d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeMatrix2d(const OdGeMatrix2d& val);

  /** \details
    Sets value from the OdGeMatrix3d object.

    \param val [in] constant reference to OdGeMatrix3d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeMatrix3d(const OdGeMatrix3d& val);

  /** \details
  Sets value from the OdGeScale3d object.

  \param val[in] constant reference to OdGeScale3d.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGeScale3d(const OdGeScale3d& val);
  /** \details
  Sets value from the OdTimeStamp object.

  \param val[in] constant reference to OdTimeStamp.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setTimeStamp(const OdTimeStamp& val);
  /** \details
  Sets value from the OdGeExtents2d object.

  \param val[in] constant reference to OdGeExtents2d.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGeExtents2d(const OdGeExtents2d& val);
  /** \details
  Sets value from the OdGeExtents3d object.

  \param val[in] constant reference to OdGeExtents3d.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGeExtents3d(const OdGeExtents3d& val);
  /** \details
  Sets value from the OdGeQuaternion object.

  \param val[in] constant reference to OdGeQuaternion.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGeQuaternion(const OdGeQuaternion& val);
  /** \details
  Sets value from the OdGiLightAttenuation object.

  \param val[in] constant reference to OdGiLightAttenuation.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiLightAttenuation(const OdGiLightAttenuation& val);
  /** \details
  Sets value from the OdGiSkyParameters object.

  \param val[in] constant reference to OdGiSkyParameters.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiSkyParameters(const OdGiSkyParameters& val);
  /** \details
  Sets value from the OdGiShadowParameters object.

  \param val[in] constant reference to OdGiShadowParameters.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiShadowParameters(const OdGiShadowParameters& val);
  /** \details
  Sets value from the OdGiColorRGB object.

  \param val[in] constant reference to OdGiColorRGB.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiColorRGB(const OdGiColorRGB& val);
  /** \details
  Sets value from the OdGiMaterialColor object.

  \param val[in] constant reference to OdGiMaterialColor.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialColor(const OdGiMaterialColor& val);

  /** \details
  Sets value from the OdGiMrExposureType object.

  \param val[in] constant OdGiMrExposureType.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrExposureType(const OdGiMrExposureType val);
  /** \details
  Sets value from the OdGiMrShadowMode object.

  \param val[in] constant OdGiMrShadowMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrShadowMode(const OdGiMrShadowMode val);
  /** \details
  Sets value from the OdGiMrFinalGatheringMode object.

  \param val[in] constant OdGiMrFinalGatheringMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrFinalGatheringMode(const OdGiMrFinalGatheringMode val);
  /** \details
  Sets value from the OdGiMrDiagnosticMode object.

  \param val[in] constant OdGiMrDiagnosticMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrDiagnosticMode(const OdGiMrDiagnosticMode val);
  /** \details
  Sets value from the OdGiMrDiagnosticPhotonMode object.

  \param val[in] constant OdGiMrDiagnosticPhotonMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrDiagnosticPhotonMode(const OdGiMrDiagnosticPhotonMode val);
  /** \details
  Sets value from the OdGiMrDiagnosticBSPMode object.

  \param val[in] constant OdGiMrDiagnosticBSPMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrDiagnosticBSPMode(const OdGiMrDiagnosticBSPMode val);
  /** \details
  Sets value from the OdGiMrExportMIMode object.

  \param val[in] constant OdGiMrExportMIMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrExportMIMode(const OdGiMrExportMIMode val);
  /** \details
  Sets value from the OdGiMrTileOrder object.

  \param val[in] constant OdGiMrTileOrder.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMrTileOrder(const OdGiMrTileOrder val);
  /** \details
  Sets value from the OdGiLightingMode object.

  \param val[in] constant OdGiLightingMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiLightingMode(const OdGiLightingMode val);
  /** \details
  Sets value from the OdGiFilterType object.

  \param val[in] constant OdGiFilterType.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiFilterType(const OdGiFilterType val);
  /** \details
  Sets value from the OdCmEntityColor::ColorMethod object.

  \param val[in] constant OdCmEntityColor::ColorMethod.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setCmEntityColor_ColorMethod(const OdCmEntityColor::ColorMethod val);
  /** \details
  Sets value from the OdDb::LineWeight object.

  \param val[in] constant OdDb::LineWeight.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setDb_LineWeight(const OdDb::LineWeight val);
  /** \details
  Sets value from the OdDb::UnitsValue object.

  \param val[in] constant OdDb::UnitsValue.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setDb_UnitsValue(const OdDb::UnitsValue val);
  /** \details
  Sets value from the OdGiDgLinetypeModifiers::WidthMode object.

  \param val[in] constant OdGiDgLinetypeModifiers::WidthMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiDgLinetypeModifiers_WidthMode(const OdGiDgLinetypeModifiers::WidthMode val);
  /** \details
  Sets value from the OdGiDgLinetypeModifiers::ShiftMode object.

  \param val[in] constant OdGiDgLinetypeModifiers::ShiftMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiDgLinetypeModifiers_ShiftMode(const OdGiDgLinetypeModifiers::ShiftMode val);
  /** \details
  Sets value from the OdGiDgLinetypeModifiers::CornersMode object.

  \param val[in] constant OdGiDgLinetypeModifiers::CornersMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiDgLinetypeModifiers_CornersMode(const OdGiDgLinetypeModifiers::CornersMode val);
  /** \details
  Sets value from the OdGe::OdGeKnotParameterization object.

  \param val[in] constant OdGe::OdGeKnotParameterization.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGe_OdGeKnotParameterization(const OdGe::OdGeKnotParameterization val);
  /** \details
  Sets value from the OdGiLightAttenuation::AttenuationType object.

  \param val[in] constant OdGiLightAttenuation::AttenuationType.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiLightAttenuation_AttenuationType(const OdGiLightAttenuation::AttenuationType val);
  /** \details
  Sets value from the OdGiDrawable::DrawableType object.

  \param val[in] constant OdGiDrawable::DrawableType.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiDrawable_DrawableType(const OdGiDrawable::DrawableType val);
  /** \details
  Sets value from the OdGiShadowParameters::ShadowType object.

  \param val[in] constant OdGiShadowParameters::ShadowType.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiShadowParameters_ShadowType(const OdGiShadowParameters::ShadowType val);
  /** \details
  Sets value from the OdGiShadowParameters::ExtendedLightShape object.

  \param val[in] constant OdGiShadowParameters::ExtendedLightShape.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiShadowParameters_ExtendedLightShape(const OdGiShadowParameters::ExtendedLightShape val);
  /** \details
  Sets value from the OdGiViewportTraits::DefaultLightingType object.

  \param val[in] constant OdGiViewportTraits::DefaultLightingType.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiViewportTraits_DefaultLightingType(const OdGiViewportTraits::DefaultLightingType val);
  /** \details
  Sets value from the OdGiMaterialTraits::LuminanceMode object.

  \param val[in] constant OdGiMaterialTraits::LuminanceMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialTraits_LuminanceMode(const OdGiMaterialTraits::LuminanceMode val);
  /** \details
  Sets value from the OdGiMaterialTraits::GlobalIlluminationMode object.

  \param val[in] constant OdGiMaterialTraits::GlobalIlluminationMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialTraits_GlobalIlluminationMode(const OdGiMaterialTraits::GlobalIlluminationMode val);
  /** \details
  Sets value from the OdGiMaterialTraits::FinalGatherMode object.

  \param val[in] constant OdGiMaterialTraits::FinalGatherMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialTraits_FinalGatherMode(const OdGiMaterialTraits::FinalGatherMode val);
  /** \details
  Sets value from the OdGiMaterialTraits::ChannelFlags object.

  \param val[in] constant OdGiMaterialTraits::ChannelFlags.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialTraits_ChannelFlags(const OdGiMaterialTraits::ChannelFlags val);
  /** \details
  Sets value from the OdGiMaterialTraits::Mode object.

  \param val[in] constant OdGiMaterialTraits::Mode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialTraits_Mode(const OdGiMaterialTraits::Mode val);
  /** \details
  Sets value from the OdGiMaterialTraits::IlluminationModel object.

  \param val[in] constant OdGiMaterialTraits::IlluminationModel.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiMaterialTraits_IlluminationModel(const OdGiMaterialTraits::IlluminationModel val);
  /** \details
  Sets value from the OdGiVisualStyle::Type object.

  \param val[in] constant OdGiVisualStyle::Type.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiVisualStyle_Type(const OdGiVisualStyle::Type val);
  /** \details
  Sets value from the OdGiVisualStyleProperties::FaceColorMode object.

  \param val[in] constant OdGiVisualStyleProperties::FaceColorMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiVisualStyleProperties_FaceColorMode(const OdGiVisualStyleProperties::FaceColorMode val);
  /** \details
  Sets value from the OdGiVisualStyleProperties::EdgeModel object.

  \param val[in] constant OdGiVisualStyleProperties::EdgeModel.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiVisualStyleProperties_EdgeModel(const OdGiVisualStyleProperties::EdgeModel val);
  /** \details
  Sets value from the OdGiFaceStyle::FaceColorMode object.

  \param val[in] constant OdGiFaceStyle::FaceColorMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiFaceStyle_FaceColorMode(const OdGiFaceStyle::FaceColorMode val);
  /** \details
  Sets value from the OdGiEdgeStyle::EdgeModel object.

  \param val[in] constant OdGiEdgeStyle::EdgeModel.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiEdgeStyle_EdgeModel(const OdGiEdgeStyle::EdgeModel val);
  /** \details
  Sets value from the OdGiToneOperatorParameters::ExteriorDaylightMode object.

  \param val[in] constant OdGiToneOperatorParameters::ExteriorDaylightMode.

  \returns Returns a reference to the OdRxPropertyVariant object.
  */
  OdRxPropertyVariant& setGiToneOperatorParameters_ExteriorDaylightMode(const OdGiToneOperatorParameters::ExteriorDaylightMode val);

  /** \details
    Sets value from the array of OdString objects.

    \param val [in] constant reference to array of OdString.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setStringArray(const OdStringArray& val);

  /** \details
    Sets value from the array of OdAnsiString objects.

    \param val [in] constant reference to array of OdAnsiString.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setAnsiStringArray(const OdAnsiStringArray& val);

  /** \details
    Sets value from the array of bool objects.

    \param val [in] constant reference to array of bool.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setBoolArray(const OdBoolArray& val);

  /** \details
    Sets value from the array of OdInt8 objects.

    \param val [in] constant reference to array of OdInt8.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setInt8Array(const OdInt8Array& val);

  /** \details
    Sets value from the array of OdUInt8 objects.

    \param val [in] constant reference to array of OdUInt8.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setUInt8Array(const OdUInt8Array& val);

  /** \details
    Sets value from the array of OdInt16 objects.

    \param val [in] constant reference to array of OdInt16.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setInt16Array(const OdInt16Array& val);

  /** \details
    Sets value from the array of OdUInt16 objects.

    \param val [in] constant reference to array of OdUInt16.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setUInt16Array(const OdUInt16Array& val);

  /** \details
    Sets value from the array of OdInt32 objects.

    \param val [in] constant reference to array of OdInt32.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setInt32Array(const OdInt32Array& val);

  /** \details
    Sets value from the array of OdUInt32 objects.

    \param val [in] constant reference to array of OdUInt32.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setUInt32Array(const OdUInt32Array& val);

  /** \details
    Sets value from the array of OdInt64 objects.

    \param val [in] constant reference to array of OdInt64.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setInt64Array(const OdInt64Array& val);

  /** \details
    Sets value from the array of OdUInt64 objects.

    \param val [in] constant reference to array of OdUInt64.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setUInt64Array(const OdUInt64Array& val);

  /** \details
    Sets value from the array of double objects.

    \param val [in] constant reference to array of double.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setDoubleArray(const OdDoubleArray& val);

  /** \details
    Sets value from the array of OdGePoint3d objects.

    \param val [in] constant reference to array of OdGePoint3d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGePoint3dArray(const OdGePoint3dArray& val);

  /** \details
    Sets value from the array of OdGePoint2d objects.

    \param val [in] constant reference to array of OdGePoint2d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGePoint2dArray(const OdGePoint2dArray& val);

  /** \details
    Sets value from the array of OdGeVector2d objects.

    \param val [in] constant reference to array of OdGeVector2d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeVector2dArray(const OdGeVector2dArray& val);

  /** \details
    Sets value from the array of OdGeVector3d objects.

    \param val [in] constant reference to array of OdGeVector3d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeVector3dArray(const OdGeVector3dArray& val);

  /** \details
    Sets value from the array of OdCmEntityColor objects.

    \param val [in] constant reference to array of OdCmEntityColor.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setCmEntityColorArray(const OdCmEntityColorArray& val);

  /** \details
    Sets value from the array of OdCmTransparency objects.

    \param val [in] constant reference to array of OdCmTransparency.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setCmTransparencyArray(const OdCmTransparencyArray& val);

  /** \details
    Sets value from the array of OdGeMatrix2d objects.

    \param val [in] constant reference to array of OdGeMatrix2d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeMatrix2dArray(const OdGeMatrix2dArray& val);

  /** \details
    Sets value from the array of OdGeMatrix3d objects.

    \param val [in] constant reference to array of OdGeMatrix3d.
    \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeMatrix3dArray(const OdGeMatrix3dArray& val);

  /** \details
  Sets value from the array of OdGeScale3d objects.

  \param val[in] constant reference to array of OdGeScale3d.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeScale3dArray(const OdGeScale3dArray& val);
  /** \details
  Sets value from the array of OdTimeStamp objects.

  \param val[in] constant reference to array of OdTimeStamp.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setTimeStampArray(const OdTimeStampArray& val);
  /** \details
  Sets value from the array of OdGeExtents2d objects.

  \param val[in] constant reference to array of OdGeExtents2d.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeExtents2dArray(const OdGeExtents2dArray& val);
  /** \details
  Sets value from the array of OdGeExtents3d objects.

  \param val[in] constant reference to array of OdGeExtents3d.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeExtents3dArray(const OdGeExtents3dArray& val);
  /** \details
  Sets value from the array of OdGeQuaternion objects.

  \param val[in] constant reference to array of OdGeQuaternion.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGeQuaternionArray(const OdGeQuaternionArray& val);
  /** \details
  Sets value from the array of OdGiLightAttenuation objects.

  \param val[in] constant reference to array of OdGiLightAttenuation.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiLightAttenuationArray(const OdGiLightAttenuationArray& val);
  /** \details
  Sets value from the array of OdGiSkyParameters objects.

  \param val[in] constant reference to array of OdGiSkyParameters.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiSkyParametersArray(const OdGiSkyParametersArray& val);
  /** \details
  Sets value from the array of OdGiShadowParameters objects.

  \param val[in] constant reference to array of OdGiShadowParameters.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiShadowParametersArray(const OdGiShadowParametersArray& val);
  /** \details
  Sets value from the array of OdGiColorRGB objects.

  \param val[in] constant reference to array of OdGiColorRGB.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiColorRGBArray(const OdGiColorRGBArray& val);
  /** \details
  Sets value from the array of OdGiMaterialColor objects.

  \param val[in] constant reference to array of OdGiMaterialColor.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialColorArray(const OdGiMaterialColorArray& val);
  /** \details
  Sets value from the array of OdGiMrExposureType objects.

  \param val[in] constant reference to array of OdGiMrExposureType.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrExposureTypeArray(const OdGiMrExposureTypeArray& val);
  /** \details
  Sets value from the array of OdGiMrShadowMode objects.

  \param val[in] constant reference to array of OdGiMrShadowMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrShadowModeArray(const OdGiMrShadowModeArray& val);
  /** \details
  Sets value from the array of OdGiMrFinalGatheringMode objects.

  \param val[in] constant reference to array of OdGiMrFinalGatheringMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrFinalGatheringModeArray(const OdGiMrFinalGatheringModeArray& val);
  /** \details
  Sets value from the array of OdGiMrDiagnosticMode objects.

  \param val[in] constant reference to array of OdGiMrDiagnosticMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrDiagnosticModeArray(const OdGiMrDiagnosticModeArray& val);
  /** \details
  Sets value from the array of OdGiMrDiagnosticPhotonMode objects.

  \param val[in] constant reference to array of OdGiMrDiagnosticPhotonMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrDiagnosticPhotonModeArray(const OdGiMrDiagnosticPhotonModeArray& val);
  /** \details
  Sets value from the array of OdGiMrDiagnosticBSPMode objects.

  \param val[in] constant reference to array of OdGiMrDiagnosticBSPMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrDiagnosticBSPModeArray(const OdGiMrDiagnosticBSPModeArray& val);
  /** \details
  Sets value from the array of OdGiMrExportMIMode objects.

  \param val[in] constant reference to array of OdGiMrExportMIMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrExportMIModeArray(const OdGiMrExportMIModeArray& val);
  /** \details
  Sets value from the array of OdGiMrTileOrder objects.

  \param val[in] constant reference to array of OdGiMrTileOrder.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMrTileOrderArray(const OdGiMrTileOrderArray& val);
  /** \details
  Sets value from the array of OdGiLightingMode objects.

  \param val[in] constant reference to array of OdGiLightingMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiLightingModeArray(const OdGiLightingModeArray& val);
  /** \details
  Sets value from the array of OdGiFilterType objects.

  \param val[in] constant reference to array of OdGiFilterType.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiFilterTypeArray(const OdGiFilterTypeArray& val);
  /** \details
  Sets value from the array of OdCmEntityColor::ColorMethod objects.

  \param val[in] constant reference to array of OdCmEntityColor::ColorMethod.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setCmEntityColor_ColorMethodArray(const OdCmEntityColor_ColorMethodArray& val);
  /** \details
  Sets value from the array of OdDb::LineWeight objects.

  \param val[in] constant reference to array of OdDb::LineWeight.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setDb_LineWeightArray(const OdDb_LineWeightArray& val);
  /** \details
  Sets value from the array of OdDb::UnitsValue objects.

  \param val[in] constant reference to array of OdDb::UnitsValue.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setDb_UnitsValueArray(const OdDb_UnitsValueArray& val);
  /** \details
  Sets value from the array of OdGiDgLinetypeModifiers::WidthMode objects.

  \param val[in] constant reference to array of OdGiDgLinetypeModifiers::WidthMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiDgLinetypeModifiers_WidthModeArray(const OdGiDgLinetypeModifiers_WidthModeArray& val);
  /** \details
  Sets value from the array of OdGiDgLinetypeModifiers::ShiftMode objects.

  \param val[in] constant reference to array of OdGiDgLinetypeModifiers::ShiftMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiDgLinetypeModifiers_ShiftModeArray(const OdGiDgLinetypeModifiers_ShiftModeArray& val);
  /** \details
  Sets value from the array of OdGiDgLinetypeModifiers::CornersMode objects.

  \param val[in] constant reference to array of OdGiDgLinetypeModifiers::CornersMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiDgLinetypeModifiers_CornersModeArray(const OdGiDgLinetypeModifiers_CornersModeArray& val);
  /** \details
  Sets value from the array of OdGe::OdGeKnotParameterization objects.

  \param val[in] constant reference to array of OdGe::OdGeKnotParameterization.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGe_OdGeKnotParameterizationArray(const OdGe_OdGeKnotParameterizationArray& val);
  /** \details
  Sets value from the array of OdGiLightAttenuation::AttenuationType objects.

  \param val[in] constant reference to array of OdGiLightAttenuation::AttenuationType.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiLightAttenuation_AttenuationTypeArray(const OdGiLightAttenuation_AttenuationTypeArray& val);
  /** \details
  Sets value from the array of OdGiDrawable::DrawableType objects.

  \param val[in] constant reference to array of OdGiDrawable::DrawableType.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiDrawable_DrawableTypeArray(const OdGiDrawable_DrawableTypeArray& val);
  /** \details
  Sets value from the array of OdGiShadowParameters::ShadowType objects.

  \param val[in] constant reference to array of OdGiShadowParameters::ShadowType.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiShadowParameters_ShadowTypeArray(const OdGiShadowParameters_ShadowTypeArray& val);
  /** \details
  Sets value from the array of OdGiShadowParameters::ExtendedLightShape objects.

  \param val[in] constant reference to array of OdGiShadowParameters::ExtendedLightShape.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiShadowParameters_ExtendedLightShapeArray(const OdGiShadowParameters_ExtendedLightShapeArray& val);
  /** \details
  Sets value from the array of OdGiViewportTraits::DefaultLightingType objects.

  \param val[in] constant reference to array of OdGiViewportTraits::DefaultLightingType.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiViewportTraits_DefaultLightingTypeArray(const OdGiViewportTraits_DefaultLightingTypeArray& val);
  /** \details
  Sets value from the array of OdGiMaterialTraits::LuminanceMode objects.

  \param val[in] constant reference to array of OdGiMaterialTraits::LuminanceMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialTraits_LuminanceModeArray(const OdGiMaterialTraits_LuminanceModeArray& val);
  /** \details
  Sets value from the array of OdGiMaterialTraits::GlobalIlluminationMode objects.

  \param val[in] constant reference to array of OdGiMaterialTraits::GlobalIlluminationMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialTraits_GlobalIlluminationModeArray(const OdGiMaterialTraits_GlobalIlluminationModeArray& val);
  /** \details
  Sets value from the array of OdGiMaterialTraits::FinalGatherMode objects.

  \param val[in] constant reference to array of OdGiMaterialTraits::FinalGatherMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialTraits_FinalGatherModeArray(const OdGiMaterialTraits_FinalGatherModeArray& val);
  /** \details
  Sets value from the array of OdGiMaterialTraits::ChannelFlags objects.

  \param val[in] constant reference to array of OdGiMaterialTraits::ChannelFlags.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialTraits_ChannelFlagsArray(const OdGiMaterialTraits_ChannelFlagsArray& val);
  /** \details
  Sets value from the array of OdGiMaterialTraits::Mode objects.

  \param val[in] constant reference to array of OdGiMaterialTraits::Mode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialTraits_ModeArray(const OdGiMaterialTraits_ModeArray& val);
  /** \details
  Sets value from the array of OdGiMaterialTraits::IlluminationModel objects.

  \param val[in] constant reference to array of OdGiMaterialTraits::IlluminationModel.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiMaterialTraits_IlluminationModelArray(const OdGiMaterialTraits_IlluminationModelArray& val);
  /** \details
  Sets value from the array of OdGiVisualStyle::Type objects.

  \param val[in] constant reference to array of OdGiVisualStyle::Type.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiVisualStyle_TypeArray(const OdGiVisualStyle_TypeArray& val);
  /** \details
  Sets value from the array of OdGiVisualStyleProperties::FaceColorMode objects.

  \param val[in] constant reference to array of OdGiVisualStyleProperties::FaceColorMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiVisualStyleProperties_FaceColorModeArray(const OdGiVisualStyleProperties_FaceColorModeArray& val);
  /** \details
  Sets value from the array of OdGiVisualStyleProperties::EdgeModel objects.

  \param val[in] constant reference to array of OdGiVisualStyleProperties::EdgeModel.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiVisualStyleProperties_EdgeModelArray(const OdGiVisualStyleProperties_EdgeModelArray& val);
  /** \details
  Sets value from the array of OdGiFaceStyle::FaceColorMode objects.

  \param val[in] constant reference to array of OdGiFaceStyle::FaceColorMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiFaceStyle_FaceColorModeArray(const OdGiFaceStyle_FaceColorModeArray& val);
  /** \details
  Sets value from the array of OdGiEdgeStyle::EdgeModel objects.

  \param val[in] constant reference to array of OdGiEdgeStyle::EdgeModel.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiEdgeStyle_EdgeModelArray(const OdGiEdgeStyle_EdgeModelArray& val);
  /** \details
  Sets value from the array of OdGiToneOperatorParameters::ExteriorDaylightMode objects.

  \param val[in] constant reference to array of OdGiToneOperatorParameters::ExteriorDaylightMode.
  \returns Returns a reference to the OdRxPropertyVariant.
  */
  OdRxPropertyVariant& setGiToneOperatorParameters_ExteriorDaylightModeArray(const OdGiToneOperatorParameters_ExteriorDaylightModeArray& val);

};


#include "TD_PackPop.h"

#endif //_ODRXPROPERTYVARIANT_INCLUDED_


