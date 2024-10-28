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

#ifndef _BM_PARTMAKERMETHODTODIVIDEVOLUMES_H_
#define _BM_PARTMAKERMETHODTODIVIDEVOLUMES_H_
#include "Main/Entities/BmPartMakerMethod.h"

class OdBmPickToIntConverter;
typedef OdSmartPtr<OdBmPickToIntConverter> OdBmPickToIntConverterPtr;
class OdBmArrOfElementId;
typedef OdSmartPtr<OdBmArrOfElementId> OdBmArrOfElementIdPtr;
class OdBmSpacingRuleAppl;
typedef OdSmartPtr<OdBmSpacingRuleAppl> OdBmSpacingRuleApplPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmPartMakerMethodToDivideVolumes;
class OdBmPartMakerMethodToDivideVolumesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPartMakerMethodToDivideVolumes object.
 */
typedef OdSmartPtr<OdBmPartMakerMethodToDivideVolumes> OdBmPartMakerMethodToDivideVolumesPtr;

/** \details
 A data type that represents an array of OdBmPartMakerMethodToDivideVolumes objects.
 */
typedef OdArray<OdBmPartMakerMethodToDivideVolumesPtr> OdBmPartMakerMethodToDivideVolumesPtrArray;

//----------------------------------------------------------
//
// OdBmPartMakerMethodToDivideVolumes
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmPartMakerMethodToDivideVolumes : public OdBmPartMakerMethod {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPartMakerMethodToDivideVolumes);
public:
  void getDivSurfElemIds(OdBmObjectIdArray &) const;
  void getDividerGraphics(OdArray<OdBmObjectPtr> &) const;
  OdBmObjectPtr getGraphicsGeom() const;
  void getInterRefLines(OdArray<OdBmObjectPtr> &) const;
  void getInterRefLinesInSketch(OdBmObjectIdArray &) const;
  void getNonSlabSourceIds(OdBmObjectIdArray &) const;
  void getPatternLines(OdArray<OdBmObjectPtr> &) const;
  void getPatternLinesInSketch(OdBmObjectIdArray &) const;
  OdBmPickToIntConverterPtr getPickConverter() const;
  void getProfileInsts(OdBmObjectIdArray &) const;
  void getProfileUnfriendlyCurveIds(OdBmObjectIdArray &) const;
  void getSketchSilhouette(OdArray<OdBmObjectPtr> &) const;
  void getSplitRefs(OdBmObjectIdArray &) const;
  void getSplitRefsOffsets(OdBmMap<OdBmObjectId, double> &) const;
  void getStackElementIds(OdArray<OdBmArrOfElementIdPtr> &) const;
  void getTagsForOrigFace(OdInt32Array &) const;
  OdBmSpacingRuleApplPtr getUConstRuleAppl() const;
  OdBmSpacingRuleApplPtr getVConstRuleAppl() const;
  double getDivisionGap() const;
  double getDivisionRotationAngle() const;
  double getProfileOffset() const;
  OdInt32 getCurveNetQua() const;
  OdBmObjectId getDivisionRuleId() const;
  OdInt32 getEdgeMatchProblemCounter() const;
  OdInt32 getGapProblemCounter() const;
  OdInt32 getOtherOrient() const;
  OdInt32 getProfileRegenCounter() const;
  OdInt32 getProfileWidthProblemCounter() const;
  OdBmObjectId getSplitterProfileType() const;
  OdInt32 getUConstDivisionIndent() const;
  OdInt32 getVConstDivisionIndent() const;
  bool getDivisionPatternMirror() const;
  bool getProfileFlipAcross() const;
  bool getProfileFlipAlong() const;
  bool getSketchCurvesCannotHandleProfiles() const;
  //
  // Main functionality
  //
};
#endif // _BM_PARTMAKERMETHODTODIVIDEVOLUMES_H_

