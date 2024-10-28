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

#ifndef _BM_FIXTURECOPYWATCHFUNCTIONREGREC_H_
#define _BM_FIXTURECOPYWATCHFUNCTIONREGREC_H_
#include "Essential/Entities/BmCopyWatchSettingsFncRegRec.h"

class OdBmObjectId;

class OdBmFixtureCopyWatchFunctionRegRec;
class OdBmFixtureCopyWatchFunctionRegRecImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFixtureCopyWatchFunctionRegRec object.
 */
typedef OdSmartPtr<OdBmFixtureCopyWatchFunctionRegRec> OdBmFixtureCopyWatchFunctionRegRecPtr;

/** \details
 A data type that represents an array of OdBmFixtureCopyWatchFunctionRegRec objects.
 */
typedef OdArray<OdBmFixtureCopyWatchFunctionRegRecPtr> OdBmFixtureCopyWatchFunctionRegRecPtrArray;

//----------------------------------------------------------
//
// OdBmFixtureCopyWatchFunctionRegRec
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFixtureCopyWatchFunctionRegRec : public OdBmCopyWatchSettingsFncRegRec {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFixtureCopyWatchFunctionRegRec);
public:
  OdBmObjectId getCategoryId() const;
  //
  // Main functionality
  //
};
#endif // _BM_FIXTURECOPYWATCHFUNCTIONREGREC_H_

