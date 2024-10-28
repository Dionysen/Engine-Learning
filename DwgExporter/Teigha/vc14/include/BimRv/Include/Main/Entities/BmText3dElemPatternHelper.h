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

#ifndef _BM_TEXT3DELEMPATTERNHELPER_H_
#define _BM_TEXT3DELEMPATTERNHELPER_H_
#include "Database/Entities/BmPatternHelper.h"



class OdBmText3dElemPatternHelper;
class OdBmText3dElemPatternHelperImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmText3dElemPatternHelper object.
 */
typedef OdSmartPtr<OdBmText3dElemPatternHelper> OdBmText3dElemPatternHelperPtr;

/** \details
 A data type that represents an array of OdBmText3dElemPatternHelper objects.
 */
typedef OdArray<OdBmText3dElemPatternHelperPtr> OdBmText3dElemPatternHelperPtrArray;

//----------------------------------------------------------
//
// OdBmText3dElemPatternHelper
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmText3dElemPatternHelper : public OdBmPatternHelper {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmText3dElemPatternHelper);
public:
  //
  // Main functionality
  //
};
#endif // _BM_TEXT3DELEMPATTERNHELPER_H_

