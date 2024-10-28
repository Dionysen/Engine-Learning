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

#ifndef _BM_PATH3DGROUPHELPER_H_
#define _BM_PATH3DGROUPHELPER_H_
#include "Database/Entities/BmGroupHelper.h"



class OdBmPath3dGroupHelper;
class OdBmPath3dGroupHelperImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPath3dGroupHelper object.
 */
typedef OdSmartPtr<OdBmPath3dGroupHelper> OdBmPath3dGroupHelperPtr;

/** \details
 A data type that represents an array of OdBmPath3dGroupHelper objects.
 */
typedef OdArray<OdBmPath3dGroupHelperPtr> OdBmPath3dGroupHelperPtrArray;

//----------------------------------------------------------
//
// OdBmPath3dGroupHelper
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmPath3dGroupHelper : public OdBmGroupHelper {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPath3dGroupHelper);
public:
  //
  // Main functionality
  //
};
#endif // _BM_PATH3DGROUPHELPER_H_

