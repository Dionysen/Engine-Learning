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

#ifndef _BM_ENTITYINFODATA_H_
#define _BM_ENTITYINFODATA_H_
#include "Base/BmObject.h"

class OdBmPolyFaceMeshFaces;
typedef OdSmartPtr<OdBmPolyFaceMeshFaces> OdBmPolyFaceMeshFacesPtr;

class OdBmEntityInfoData;
class OdBmEntityInfoDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEntityInfoData object.
 */
typedef OdSmartPtr<OdBmEntityInfoData> OdBmEntityInfoDataPtr;

/** \details
 A data type that represents an array of OdBmEntityInfoData objects.
 */
typedef OdArray<OdBmEntityInfoDataPtr> OdBmEntityInfoDataPtrArray;

//----------------------------------------------------------
//
// OdBmEntityInfoData
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmEntityInfoData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEntityInfoData);
public:
  OdInt32 getGNodeType() const;
  OdInt32 getLayerId() const;
  OdInt32 getMaterialId() const;
  OdInt32 getObjStyleId() const;
  void getIntData(OdInt32Array &) const;
  void getFacetData(OdArray<OdBmPolyFaceMeshFacesPtr> &) const;
  void getDoubleData(OdDoubleArray &) const;
  void getVec3dData(OdGeVector3dArray &) const;
  void getTrfData(OdGeMatrix3dArray &) const;
  void getBrepTags(OdArray<OdString> &) const;
  OdBmObjectPtr getImportVocabulary() const;
  OdBmObjectPtr getEntityTextInfo() const;
  OdBmObjectPtr getEntitySubMaterialInfo() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENTITYINFODATA_H_

