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

#ifndef _BM_PULLBACK_H_
#define _BM_PULLBACK_H_
#include "Base/BmObject.h"

class OdBmReturnInfo;
typedef OdSmartPtr<OdBmReturnInfo> OdBmReturnInfoPtr;

class OdBmPullBack;
class OdBmPullBackImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPullBack object.
 */
typedef OdSmartPtr<OdBmPullBack> OdBmPullBackPtr;

/** \details
 A data type that represents an array of OdBmPullBack objects.
 */
typedef OdArray<OdBmPullBackPtr> OdBmPullBackPtrArray;

//----------------------------------------------------------
//
// OdBmPullBack
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmPullBack : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPullBack);
public:
  OdInt32 getEnd() const;
  void getOffsets(OdDoubleArray &) const;
  void getReturns(OdArray<OdBmReturnInfoPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_PULLBACK_H_

