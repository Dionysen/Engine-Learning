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

#ifndef _BM_TAGEND_H_
#define _BM_TAGEND_H_
#include "Base/BmObject.h"



class OdBmTagEnd;
class OdBmTagEndImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTagEnd object.
 */
typedef OdSmartPtr<OdBmTagEnd> OdBmTagEndPtr;

/** \details
 A data type that represents an array of OdBmTagEnd objects.
 */
typedef OdArray<OdBmTagEndPtr> OdBmTagEndPtrArray;

//----------------------------------------------------------
//
// OdBmTagEnd
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmTagEnd : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTagEnd);
public:
  OdInt32 getTag() const;
  OdInt32 getEnd() const;
  //
  // Main functionality
  //


};

bool TB_HOSTOBJ_EXPORT operator<(const OdBmTagEndPtr& lhs, const OdBmTagEndPtr& rhs);

#endif // _BM_TAGEND_H_

