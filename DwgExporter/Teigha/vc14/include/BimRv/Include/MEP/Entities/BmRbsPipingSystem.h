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

#ifndef _BM_RBSPIPINGSYSTEM_H_
#define _BM_RBSPIPINGSYSTEM_H_
#include "MEP/Entities/BmRbsSystem.h"



class OdBmRbsPipingSystem;
class OdBmRbsPipingSystemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsPipingSystem object.
 */
typedef OdSmartPtr<OdBmRbsPipingSystem> OdBmRbsPipingSystemPtr;

/** \details
 A data type that represents an array of OdBmRbsPipingSystem objects.
 */
typedef OdArray<OdBmRbsPipingSystemPtr> OdBmRbsPipingSystemPtrArray;

//----------------------------------------------------------
//
// OdBmRbsPipingSystem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsPipingSystem : public OdBmRbsSystem {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsPipingSystem);
public:
  //
  // Main functionality
  //
};
#endif // _BM_RBSPIPINGSYSTEM_H_

