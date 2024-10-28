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

#ifndef _BM_PATHREIN_H_
#define _BM_PATHREIN_H_
#include "Rebar/Entities/BmRebarSystemBase.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmPathRein;
class OdBmPathReinImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPathRein object.
 */
typedef OdSmartPtr<OdBmPathRein> OdBmPathReinPtr;

/** \details
 A data type that represents an array of OdBmPathRein objects.
 */
typedef OdArray<OdBmPathReinPtr> OdBmPathReinPtrArray;

//----------------------------------------------------------
//
// OdBmPathRein
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmPathRein : public OdBmRebarSystemBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPathRein);
public:
  void getShapeIds(OdBmObjectIdArray &) const;
  double getAltOffset() const;
  double getBarLengthItem(OdUInt32 idx) const;
  double getOffsetTopBotCover() const;
  double getSpacing() const;
  OdInt32 getAlternatingBarOrientation() const;
  OdInt32 getFace() const;
  OdInt32 getFlipControlTag() const;
  OdInt32 getHookOrientationItem(OdUInt32 idx) const;
  OdBmObjectId getBarTypeItem(OdUInt32 idx) const;
  OdBmObjectId getHookTypeItem(OdUInt32 idx) const;
  OdInt32 getNumberOfBars() const;
  OdInt32 getPrimaryBarOrientation() const;
  OdInt32 getRuleType() const;
  bool getAlternating() const;
  bool getFlipBars() const;
  bool getHostStructuralRebar() const;
  //
  // Main functionality
  //
};
#endif // _BM_PATHREIN_H_

