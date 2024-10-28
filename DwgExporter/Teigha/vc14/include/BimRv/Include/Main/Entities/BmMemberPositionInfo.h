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

#ifndef _BM_MEMBERPOSITIONINFO_H_
#define _BM_MEMBERPOSITIONINFO_H_
#include "Base/BmObject.h"

class OdTfClass;
class OdBmObjectId;

class OdBmMemberPositionInfo;
class OdBmMemberPositionInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMemberPositionInfo object.
 */
typedef OdSmartPtr<OdBmMemberPositionInfo> OdBmMemberPositionInfoPtr;

/** \details
 A data type that represents an array of OdBmMemberPositionInfo objects.
 */
typedef OdArray<OdBmMemberPositionInfoPtr> OdBmMemberPositionInfoPtrArray;

//----------------------------------------------------------
//
// OdBmMemberPositionInfo
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmMemberPositionInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMemberPositionInfo);
public:
  double getControlParamEPS() const;
  double getTopHeight() const;
  double getBaseHeight() const;
  double getAdditionalHeight() const;
  double getTrfEPSItem(OdUInt32 idx) const;
  OdInt32 getMemberIndex() const;
  OdBmObjectId getMemberId() const;
  OdBmObjectId getCategoryId() const;
  OdBmObjectId getMasterSymbolId() const;
  bool getUseTopHeight() const;
  bool getUseBaseHeight() const;
  bool getUseAdditionalHeight() const;
  OdTfClass* getRuntimeClass() const;
  OdBmObjectPtr getTrf() const;
  OdBmObjectPtr getGCurve() const;
  void getControlParams(OdBmMap<OdInt32, double> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_MEMBERPOSITIONINFO_H_

