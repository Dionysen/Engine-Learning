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

#ifndef _BM_BUILTATOMPAIR_H_
#define _BM_BUILTATOMPAIR_H_
#include "Base/BmObject.h"

class OdBmElementRegenerationInfo;
typedef OdSmartPtr<OdBmElementRegenerationInfo> OdBmElementRegenerationInfoPtr;
class OdBmObjectId;

class OdBmBuiltAtomPair;
class OdBmBuiltAtomPairImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBuiltAtomPair object.
 */
typedef OdSmartPtr<OdBmBuiltAtomPair> OdBmBuiltAtomPairPtr;

/** \details
 A data type that represents an array of OdBmBuiltAtomPair objects.
 */
typedef OdArray<OdBmBuiltAtomPairPtr> OdBmBuiltAtomPairPtrArray;

//----------------------------------------------------------
//
// OdBmBuiltAtomPair
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmBuiltAtomPair : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBuiltAtomPair);
public:
  OdBmElementRegenerationInfoPtr getInfo() const;
  OdBmObjectId getId() const;
  //
  // Main functionality
  //
};
#endif // _BM_BUILTATOMPAIR_H_

