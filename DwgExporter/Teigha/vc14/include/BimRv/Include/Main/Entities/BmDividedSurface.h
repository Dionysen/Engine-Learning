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

#ifndef _BM_DIVIDEDSURFACE_H_
#define _BM_DIVIDEDSURFACE_H_
#include "Database/BmElement.h"

class OdBmSpacingRule;
typedef OdSmartPtr<OdBmSpacingRule> OdBmSpacingRulePtr;
class OdBmSpacingRuleInst;
typedef OdSmartPtr<OdBmSpacingRuleInst> OdBmSpacingRuleInstPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmDividedSurface;
class OdBmDividedSurfaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDividedSurface object.
 */
typedef OdSmartPtr<OdBmDividedSurface> OdBmDividedSurfacePtr;

/** \details
 A data type that represents an array of OdBmDividedSurface objects.
 */
typedef OdArray<OdBmDividedSurfacePtr> OdBmDividedSurfacePtrArray;

//----------------------------------------------------------
//
// OdBmDividedSurface
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmDividedSurface : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDividedSurface);
public:
  double getSurfaceOffset() const;
  double getAllGridRotation() const;
  OdBmObjectId getTilePatternElemOrPatFamTypeId() const;
  OdBmObjectId getOriginalSurfaceMaterialId() const;
  OdBmObjectId getGridlinesStyleId() const;
  OdBmObjectId getPatternLinesStyleId() const;
  OdBmObjectId getPatternFillMaterialId() const;
  OdInt32 getDisplaySurfaceOption() const;
  OdInt32 getTilePatternIndentU() const;
  OdInt32 getTilePatternIndentV() const;
  OdInt32 getRotationAngle() const;
  OdInt32 getGridOptionFlag() const;
  OdInt32 getTileBorder() const;
  OdInt32 getComponentTrimType() const;
  bool getCoverFaceCompletely() const;
  bool getTilePatternFlip() const;
  bool getTilePatternMirror() const;
  bool getAllPoints() const;
  bool getDisplayOriginalSurface() const;
  bool getDisplayNodes() const;
  bool getDisplayGridlines() const;
  bool getDisplayDiscardedDivisionLines() const;
  bool getDisplayPatternLines() const;
  bool getDisplayPatternFill() const;
  bool getDisplayComponents() const;
  OdBmSpacingRulePtr getULineSpec() const;
  OdBmSpacingRulePtr getVLineSpec() const;
  OdBmSpacingRuleInstPtr getULineSpecInst() const;
  OdBmSpacingRuleInstPtr getVLineSpecInst() const;
  OdBmObjectPtr getRef() const;
  void getSplitRefs(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //


};


#endif // _BM_DIVIDEDSURFACE_H_

