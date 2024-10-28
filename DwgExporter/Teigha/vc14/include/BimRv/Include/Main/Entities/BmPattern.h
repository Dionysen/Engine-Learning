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

#ifndef _BM_PATTERN_H_
#define _BM_PATTERN_H_
#include "Main/Entities/BmBaseArray.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmPattern;
class OdBmPatternImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPattern object.
 */
typedef OdSmartPtr<OdBmPattern> OdBmPatternPtr;

/** \details
 A data type that represents an array of OdBmPattern objects.
 */
typedef OdArray<OdBmPatternPtr> OdBmPatternPtrArray;

//----------------------------------------------------------
//
// OdBmPattern
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmPattern : public OdBmBaseArray {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPattern);
public:
  void getOrigIds(OdBmObjectIdArray &) const;
  void getCopyIdArrs(OdBmObjectIdArray &) const;
  void getDimIds(OdBmObjectIdArray &) const;
  void getDimIdxs(OdInt32Array &) const;
  double getLeaderLength() const;
  double getLeaderGap() const;
  OdGeVector3d getProjVec() const;
  OdInt32 getNum() const;
  OdInt32 getNumDimsPerElem() const;
  OdInt32 getNewElementPosition() const;
  OdInt32 getViewDirTypeDeprecated() const;
  //
  // Main functionality
  //
};
#endif // _BM_PATTERN_H_

