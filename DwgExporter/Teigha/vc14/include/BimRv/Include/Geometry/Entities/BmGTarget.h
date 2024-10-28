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

#ifndef _BM_GTARGET_H_
#define _BM_GTARGET_H_
#include "Base/BmObject.h"



class OdBmGTarget;
class OdBmGTargetImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGTarget object.
 */
typedef OdSmartPtr<OdBmGTarget> OdBmGTargetPtr;

/** \details
 A data type that represents an array of OdBmGTarget objects.
 */
typedef OdArray<OdBmGTargetPtr> OdBmGTargetPtrArray;

//----------------------------------------------------------
//
// OdBmGTarget
//
//----------------------------------------------------------

/** \details
    This class stores a bit flag of a target.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGTarget : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGTarget);
public:
  /** \details
    Returns bit flag targets as an OdInt32 value.
  */
  OdInt32 getTargets() const;
  /** \details
    Sets bit flag targets to this object.

    \param OdInt32 [in] Input bit flag targets.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setTargets(OdInt32);
  //
  // Main functionality
  //
};
#endif // _BM_GTARGET_H_

