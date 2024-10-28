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

#ifndef _BM_FAMDIMCONSTRMGR_H_
#define _BM_FAMDIMCONSTRMGR_H_
#include "Base/BmObject.h"



class OdBmFamDimConstrMgr;
class OdBmFamDimConstrMgrImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamDimConstrMgr object.
 */
typedef OdSmartPtr<OdBmFamDimConstrMgr> OdBmFamDimConstrMgrPtr;

/** \details
 A data type that represents an array of OdBmFamDimConstrMgr objects.
 */
typedef OdArray<OdBmFamDimConstrMgrPtr> OdBmFamDimConstrMgrPtrArray;

//----------------------------------------------------------
//
// OdBmFamDimConstrMgr
//
//----------------------------------------------------------

/** \details
    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmFamDimConstrMgr : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamDimConstrMgr);
public:
  OdBmObject* getFam() const;
  OdResult setFam(OdBmObject*);
  //
  // Main functionality
  //


};


#endif // _BM_FAMDIMCONSTRMGR_H_

