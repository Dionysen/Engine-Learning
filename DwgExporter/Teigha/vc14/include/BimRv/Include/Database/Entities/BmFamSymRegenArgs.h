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

#ifndef _BM_FAMSYMREGENARGS_H_
#define _BM_FAMSYMREGENARGS_H_
#include "Base/BmObject.h"

class OdBmGFilterTable;
typedef OdSmartPtr<OdBmGFilterTable> OdBmGFilterTablePtr;
class OdBmGNode;
typedef OdSmartPtr<OdBmGNode> OdBmGNodePtr;
class OdBmFamSymMemberIdx;
typedef OdSmartPtr<OdBmFamSymMemberIdx> OdBmFamSymMemberIdxPtr;
class OdBmTagIdxPair;
typedef OdSmartPtr<OdBmTagIdxPair> OdBmTagIdxPairPtr;
class OdBmFSRModelGNodeData;
typedef OdSmartPtr<OdBmFSRModelGNodeData> OdBmFSRModelGNodeDataPtr;
class OdBmInt2ElementIdMapWrap;
typedef OdSmartPtr<OdBmInt2ElementIdMapWrap> OdBmInt2ElementIdMapWrapPtr;
class OdBmGTagDirFlagsPair;
typedef OdSmartPtr<OdBmGTagDirFlagsPair> OdBmGTagDirFlagsPairPtr;
class OdBmPlane;
typedef OdSmartPtr<OdBmPlane> OdBmPlanePtr;
class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmCurveLoop;
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;
class OdBmFamSymHandleMgr;
typedef OdSmartPtr<OdBmFamSymHandleMgr> OdBmFamSymHandleMgrPtr;
class OdBmFamHandleTempData;
typedef OdSmartPtr<OdBmFamHandleTempData> OdBmFamHandleTempDataPtr;
class OdBmGeometry;
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;
class OdBmArrVec3dWrap;
typedef OdSmartPtr<OdBmArrVec3dWrap> OdBmArrVec3dWrapPtr;
class OdBmParamStorage;
typedef OdSmartPtr<OdBmParamStorage> OdBmParamStoragePtr;
class OdBmConnectorData;
typedef OdSmartPtr<OdBmConnectorData> OdBmConnectorDataPtr;
class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmAuxData4ShapeHandle;
typedef OdSmartPtr<OdBmAuxData4ShapeHandle> OdBmAuxData4ShapeHandlePtr;
class OdBmObjectId;
class OdBmFailureDefinitionId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;
typedef OdArray<OdBmFailureDefinitionId, OdMemoryAllocator<OdBmFailureDefinitionId> > OdBmFailureDefinitionIdArray;

class OdBmFamSymRegenArgs;
class OdBmFamSymRegenArgsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamSymRegenArgs object.
 */
typedef OdSmartPtr<OdBmFamSymRegenArgs> OdBmFamSymRegenArgsPtr;

/** \details
 A data type that represents an array of OdBmFamSymRegenArgs objects.
 */
typedef OdArray<OdBmFamSymRegenArgsPtr> OdBmFamSymRegenArgsPtrArray;

//----------------------------------------------------------
//
// OdBmFamSymRegenArgs
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamSymRegenArgs : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamSymRegenArgs);
public:
  double getSymOriginItem(OdUInt32 idx) const;
  double getHostDirItem(OdUInt32 idx) const;
  OdGeExtents3d getNewOutline() const;
  OdGeExtents3d getNewOutlineBeforeBending() const;
  OdGeExtents3d getThinOutline() const;
  OdGeExtents3d getBackupThinOutline() const;
  double getCutPlaneHeightsItem(OdUInt32 idx) const;
  double getBendZItem(OdUInt32 idx) const;
  double getBendXItem(OdUInt32 idx) const;
  double getBendOrigItem(OdUInt32 idx) const;
  OdGeMatrix3d getTheMirrorTrf() const;
  OdInt32 getGstepVersion() const;
  OdInt32 getImportInstanceTagVersion() const;
  OdBmObjectId getFamSymCategoryId() const;
  OdInt32 getFaceBasedHostNormal() const;
  OdInt32 getPlacementMethod() const;
  OdBmFailureDefinitionId getBendMsgId() const;
  bool getNeed3dview() const;
  bool getIsInvisibleHere() const;
  bool getIsInvisibleHereProcessed() const;
  bool getIsTitleblock() const;
  bool getIsFamRef() const;
  bool getIsMirrored() const;
  bool getSkipEmptyGeom() const;
  bool getIsPreview() const;
  bool getStretchableCrvDriven() const;
  bool getElemIsUserCreated() const;
  bool getFamilyGeomArrsOrderIsNew() const;
  bool getOriginDefinedItem(OdUInt32 idx) const;
  bool getIsHostBased() const;
  bool getHasComplexCuts() const;
  bool getIsFamOwned() const;
  bool getCantBeStretched() const;
  OdBmGFilterTablePtr getFilterTablesItem(OdUInt32 idx) const;
  void getFamilyGeom(OdArray<OdBmGNodePtr> &) const;
  void getFamilyPlanCutGeom(OdArray<OdBmGNodePtr> &) const;
  void getFamilyRCPCutGeom(OdArray<OdBmGNodePtr> &) const;
  void getFamilyGeomIndices(OdArray<OdBmFamSymMemberIdxPtr> &) const;
  void getFamilyGeomVis(OdInt32Array &) const;
  void getFamilyGeomAntecedents(OdBmMap<OdInt32, OdBmMap<OdInt32, OdBmTagIdxPairPtr> > &) const;
  void getMemberIdx2MaterialId(OdBmMap<OdInt32, OdBmObjectId> &) const;
  void getModelGNodeVis(OdInt32Array &) const;
  void getModelGNodeDataArr(OdArray<OdBmFSRModelGNodeDataPtr> &) const;
  void getFamilyImportGInstances(OdArray<OdBmObjectPtr> &) const;
  void getFamilyImportIndices(OdArray<OdBmFamSymMemberIdxPtr> &) const;
  void getFamilyImportGeomVis(OdInt32Array &) const;
  void getFamilyImportNothingVisibleArr(OdBoolArray &) const;
  void getFamilyImportGeomTag2MaterialId_v2(OdBmMap<OdInt32, OdBmInt2ElementIdMapWrapPtr> &) const;
  void getViewDirSpecGNodes(OdArray<OdBmGNodePtr> &) const;
  void getViewDirSpecGNodesVis(OdInt32Array &) const;
  void getViewDirSpecGNodesDirIdx(OdInt32Array &) const;
  void getViewDirSpecGNodesIndices(OdInt32Array &) const;
  void getViewDirSpecGNodesPlacement(OdInt32Array &) const;
  void getViewDirSpecNonGCurveGNodes(OdArray<OdBmGNodePtr> &) const;
  void getViewDirSpecNonGCurveGNodesVis(OdInt32Array &) const;
  void getViewDirSpecNonGCurveGNodesDirIdx(OdInt32Array &) const;
  void getViewDirSpecNonGCurveGNodesIndices(OdArray<OdBmFamSymMemberIdxPtr> &) const;
  void getViewDirSpecNonGCurveGNodesPlacement(OdInt32Array &) const;
  void getGTagDirFlagsPairs(OdArray<OdBmGTagDirFlagsPairPtr> &) const;
  void getRefPlanes(OdArray<OdBmPlanePtr> &) const;
  void getRefPlaneIndices(OdInt32Array &) const;
  void getRefPlaneGRefs(OdArray<OdBmGeomRefPtr> &) const;
  void getRefPlaneNames(OdInt32Array &) const;
  void getRefPlaneIsRef(OdBoolArray &) const;
  void getOpeningBlocksElev(OdBoolArray &) const;
  void getCutLoops(OdArray<OdBmCurveLoopPtr> &) const;
  void getCutDirs(OdGeVector3dArray &) const;
  void getCutRefs(OdInt32Array &) const;
  void getFamPreviewDims(OdArray<OdBmObjectPtr> &) const;
  void getDimGRepLabels(OdBmObjectIdArray &) const;
  OdBmFamSymHandleMgrPtr getHandleMgr() const;
  void getHandleIndices(OdBmMap<OdInt32, OdBmFamHandleTempDataPtr> &) const;
  void getComplexCutGeoms(OdArray<OdBmGeometryPtr> &) const;
  void getComplexCutGeomsRefIdxs(OdInt32Array &) const;
  void getDummyHostRefIdxs(OdInt32Array &) const;
  void getDummyHostGeoms(OdArray<OdBmGeometryPtr> &) const;
  void getDummyHostCutFaceTags(OdArray<OdBmObjectPtr> &) const;
  void getDummyHostRefIdxsNoSimulatedBoolOp(OdInt32Array &) const;
  void getDummyHostInsertionFaceTags(OdArray<OdInt32Array > &) const;
  OdBmObjectPtr getProjSurf() const;
  void getStrongRefs(OdArray<OdBmGeomRefPtr> &) const;
  void getStrongCurveRefs_v2(OdInt32Array &) const;
  void getRefPntsFromStructLayers(OdBmMap<OdGePoint2d, OdBmArrVec3dWrapPtr> &) const;
  void getNotRotatedNodes(OdArray<OdBmGNodePtr> &) const;
  void getLightSrcParamIds(OdBmObjectIdArray &) const;
  void getLightSrcGReps(OdArray<OdBmObjectPtr> &) const;
  void getLightSrcValues(OdArray<OdBmParamStoragePtr> &) const;
  void getRasterGImages(OdArray<OdBmObjectPtr> &) const;
  void getOpeningGroups(OdArray<OdBmObjectPtr> &) const;
  void getCuttingPrimitives(OdArray<OdBmObjectPtr> &) const;
  void getCuttingPrimitiveIsUnattached(OdBoolArray &) const;
  void getProfileLoops(OdArray<OdBmCurveLoopPtr> &) const;
  void getClosurePlanes(OdArray<OdBmObjectPtr> &) const;
  void getPretaggingGNodes(OdArray<OdBmGNodePtr> &) const;
  void getPretaggingTranslations(OdGeVector3dArray &) const;
  void getPretaggingVis(OdInt32Array &) const;
  void getConnectorData(OdArray<OdBmConnectorDataPtr> &) const;
  void getFamSymRegenData(OdArray<OdBmObjectPtr> &) const;
  void getFlippedGeomRefHandles(OdArray<OdBmGeomRefPtr> &) const;
  OdBmObjectPtr getFamMoveRestrictions() const;
  OdBmObjectPtr getFamilyParams() const;
  void getSubInstGeomArr(OdArray<OdBmObjectPtr> &) const;
  void getImposterLightTrfs(OdGeMatrix3dArray &) const;
  OdBmObjectPtr getGeomBender() const;
  void getCurveRefIds(OdBmObjectIdArray &) const;
  void getBendWarnings(OdBmFailureDefinitionIdArray &) const;
  OdBmFamilyParamsPtr getReportingParams() const;
  OdBmAuxData4ShapeHandlePtr getAuxData4Handles() const;
  //
  // Main functionality
  //
};
#endif // _BM_FAMSYMREGENARGS_H_

