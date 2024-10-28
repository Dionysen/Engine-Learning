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

#ifndef _BM_FAMILYSYMBOL_H_
#define _BM_FAMILYSYMBOL_H_
#include "Database/Entities/BmInsertableObj.h"
// BEGIN: Includes
#include "Ge/GeMatrix3dArray.h"
// END: Includes

class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmControlIcon;
typedef OdSmartPtr<OdBmControlIcon> OdBmControlIconPtr;
class OdBmTextNoteData;
typedef OdSmartPtr<OdBmTextNoteData> OdBmTextNoteDataPtr;
class OdBmTagNoteData;
typedef OdSmartPtr<OdBmTagNoteData> OdBmTagNoteDataPtr;
class OdBmFamilyRef;
typedef OdSmartPtr<OdBmFamilyRef> OdBmFamilyRefPtr;
class OdBmFace;
typedef OdSmartPtr<OdBmFace> OdBmFacePtr;
class OdBmFamSymHandleMgr;
typedef OdSmartPtr<OdBmFamSymHandleMgr> OdBmFamSymHandleMgrPtr;
class OdBmMatrix;
typedef OdSmartPtr<OdBmMatrix> OdBmMatrixPtr;
class OdBmGTagDirFlagsPair;
typedef OdSmartPtr<OdBmGTagDirFlagsPair> OdBmGTagDirFlagsPairPtr;
class OdBmArrMembHistTable;
typedef OdSmartPtr<OdBmArrMembHistTable> OdBmArrMembHistTablePtr;
class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmGNode;
typedef OdSmartPtr<OdBmGNode> OdBmGNodePtr;
class OdBmGRep;
typedef OdSmartPtr<OdBmGRep> OdBmGRepPtr;
class OdBmParamStorage;
typedef OdSmartPtr<OdBmParamStorage> OdBmParamStoragePtr;
class OdBmCurveLoop;
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;
class OdBmConnectorData;
typedef OdSmartPtr<OdBmConnectorData> OdBmConnectorDataPtr;
class OdBmFamSubInstDescriptor;
typedef OdSmartPtr<OdBmFamSubInstDescriptor> OdBmFamSubInstDescriptorPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmFamilySymbol;
class OdBmFamilySymbolImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilySymbol object.
 */
typedef OdSmartPtr<OdBmFamilySymbol> OdBmFamilySymbolPtr;

/** \details
 A data type that represents an array of OdBmFamilySymbol objects.
 */
typedef OdArray<OdBmFamilySymbolPtr> OdBmFamilySymbolPtrArray;

//----------------------------------------------------------
//
// OdBmFamilySymbol
//
//----------------------------------------------------------

/** \details
    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmFamilySymbol : public OdBmInsertableObj {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilySymbol);
public:
  OdBmFamilyParamsPtr getParams() const;
  OdResult setParams(const OdBmFamilyParamsPtr&);
  void getControlIcons(OdArray<OdBmControlIconPtr> &) const;
  void getControlIconTags(OdInt32Array &) const;
  void getTextNoteData(OdArray<OdBmTextNoteDataPtr> &) const;
  void getTagNoteData(OdArray<OdBmTagNoteDataPtr> &) const;
  void getRefs(OdArray<OdBmFamilyRefPtr> &) const;
  void getRefFaces(OdArray<OdBmFacePtr> &) const;
  OdResult setRefFaces(const OdArray<OdBmFacePtr>&);
  OdBmFamSymHandleMgrPtr getHandleMgr() const;
  OdBmMatrixPtr getMoveRestrictions() const;
  OdResult setMoveRestrictions(const OdBmMatrixPtr&);
  void getClosurePlanes(OdArray<OdBmObjectPtr> &) const;
  void getGTagDirFlagsPairs(OdArray<OdBmGTagDirFlagsPairPtr> &) const;
  void getNonBRepGeomPtrs(OdArray<OdBmObjectPtr> &) const;
  OdBmArrMembHistTablePtr getOArrMembHistTable() const;
  OdGeExtents3d getOutline() const;
  OdResult setOutline(const OdGeExtents3d&);
  OdGePoint3d getOrigin() const;
  OdResult setOrigin(const OdGePoint3d&);
  OdGePoint3d getRotCenter() const;
  OdResult setRotCenter(const OdGePoint3d&);
  double getCutPlaneHeightsItem(OdUInt32 idx) const;
  OdResult setCutPlaneHeightsItem(OdUInt32 idx, double);
  OdBmObjectId getFamilyId() const;
  OdResult setFamilyId(const OdBmObjectId&);
  OdBmObjectId getMasterId() const;
  OdBmObjectId getPartitionSurrogateId() const;
  OdResult setPartitionSurrogateId(const OdBmObjectId&);
  OdBmObjectId getOwnerInstanceId() const;
  OdResult setOwnerInstanceId(const OdBmObjectId&);
  OdBmObjectId getStretchPrototypeId() const;
  OdInt32 getStretchCount() const;
  OdInt32 getGeomTagOfDummyCurveRef() const;
  OdInt32 getIdxOfFirstCoreLayerRefFace() const;
  OdInt32 getHasParamDefValue() const;
  OdResult setHasParamDefValue(OdInt32);
  OdInt32 getFaceBasedHostNormal() const;
  bool getMirrored() const;
  bool getHostLayersFlippedY() const;
  bool getActive() const;
  OdResult setActive(bool);
  bool getPreview() const;
  bool getHasRotCenter() const;
  bool getVisibilityIsOld() const;
  bool getMayBeStretchable() const;
  bool getConfirmedStretchable() const;
  bool getHasNothingVisible() const;
  void getLabelParamTagInfo(OdBmObjectIdArray &) const;
  void getComplexCutRefIds(OdInt32Array &) const;
  void getComplexCutGeoms(OdArray<OdBmObjectPtr> &) const;
  void getDummyHostGeoms(OdArray<OdBmObjectPtr> &) const;
  void getDummyHostCutFaceTags(OdArray<OdBmObjectPtr> &) const;
  void getDummyHostInsertionFaceTags(OdArray<OdInt32Array > &) const;
  void getStrongRefs(OdArray<OdBmGeomRefPtr> &) const;
  void getSetOfInPlaceTotalParentIds(OdBmObjectIdArray &) const;
  void getNotRotatedNodes(OdArray<OdBmGNodePtr> &) const;
  void getLightSrcParamIds(OdBmObjectIdArray &) const;
  void getLightSrcGReps(OdArray<OdBmGRepPtr> &) const;
  void getLightSrcValues(OdArray<OdBmParamStoragePtr> &) const;
  void getProfileLoops(OdArray<OdBmCurveLoopPtr> &) const;
  void getPretaggingGNodes(OdArray<OdBmGNodePtr> &) const;
  void getPretaggingTranslations(OdGePoint3dArray &) const;
  void getArrConnectorData(OdArray<OdBmConnectorDataPtr> &) const;
  void getArrFamSymRegenData(OdArray<OdBmObjectPtr> &) const;
  void getFlippedGeomRefHandlesSet(OdArray<OdBmGeomRefPtr> &) const;
  void getSubInstData(OdBmMap<OdInt32, OdBmFamSubInstDescriptorPtr> &) const;
  void getImposterLightTrfs(OdGeMatrix3dArray &) const;
  OdBmObjectPtr getOFamMoveRestrictions() const;
  OdResult setOFamMoveRestrictions(const OdBmObjectPtr&);
  void getGeomTag2MaterialId(OdBmMap<OdInt32, OdBmObjectId> &) const;
  OdBmObjectId getSlaveTrackerId() const;
  bool getCantBeStretched() const;
  //
  // Main functionality
  //

  /** \details
    It returns number of ProfileLoops
  */
  OdUInt32 numProfileLoops() const;

  /** \details
    Activates the FamilySymbol. If the FamilySymbol is already active,
      then activation does not take place.
  */
  OdResult activate();
};
#endif // _BM_FAMILYSYMBOL_H_

