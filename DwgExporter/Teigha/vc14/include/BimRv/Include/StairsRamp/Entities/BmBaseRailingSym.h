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

#ifndef _BM_BASERAILINGSYM_H_
#define _BM_BASERAILINGSYM_H_
#include "Database/Entities/BmSymbol.h"

class OdBmParamsAndId;
typedef OdSmartPtr<OdBmParamsAndId> OdBmParamsAndIdPtr;
class OdBmGNode;
typedef OdSmartPtr<OdBmGNode> OdBmGNodePtr;
class OdBmRailingCurveLoopData;
typedef OdSmartPtr<OdBmRailingCurveLoopData> OdBmRailingCurveLoopDataPtr;
class OdBmRailingSweepPath;
typedef OdSmartPtr<OdBmRailingSweepPath> OdBmRailingSweepPathPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmBaseRailingSym;
class OdBmBaseRailingSymImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBaseRailingSym object.
 */
typedef OdSmartPtr<OdBmBaseRailingSym> OdBmBaseRailingSymPtr;

/** \details
 A data type that represents an array of OdBmBaseRailingSym objects.
 */
typedef OdArray<OdBmBaseRailingSymPtr> OdBmBaseRailingSymPtrArray;

//----------------------------------------------------------
//
// OdBmBaseRailingSym
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmBaseRailingSym : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBaseRailingSym);
public:
  void getParamsAndIds(OdArray<OdBmParamsAndIdPtr> &) const;
  void getBalusterInstances(OdArray<OdBmGNodePtr> &) const;
  void getGRepLoops(OdArray<OdBmRailingCurveLoopDataPtr> &) const;
  OdGeVector3d getRailYDir() const;
  double getMaxOffset() const;
  double getApproxLength() const;
  OdBmObjectId getBaseRailingId() const;
  bool getFlipped() const;
  bool getDisplayBalustersInGRep() const;
  bool getUseIndexForStairsRailingTags() const;
  void getUsedBalusterSymIds(OdBmObjectIdArray &) const;
  OdBmRailingSweepPathPtr getRailingSweepPath() const;
  //
  // Main functionality
  //
};
#endif // _BM_BASERAILINGSYM_H_

