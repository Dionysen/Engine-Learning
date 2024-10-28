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

#ifndef _BM_GREP_H_
#define _BM_GREP_H_
#include "Geometry/Entities/BmGGroup.h"



class OdBmGRep;
class OdBmGRepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGRep object.
 */
typedef OdSmartPtr<OdBmGRep> OdBmGRepPtr;

/** \details
 A data type that represents an array of OdBmGRep objects.
 */
typedef OdArray<OdBmGRepPtr> OdBmGRepPtrArray;

//----------------------------------------------------------
//
// OdBmGRep
//
//----------------------------------------------------------

/** \details
    This class stores a geometry representation of groups of nodes.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGRep : public OdBmGGroup {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGRep);
public:
  /** \details
    Returns the boundary box as an object of the OdGeExtents3d class.
  */
  OdGeExtents3d getBBox() const;
  /** \details
    Sets a boundary box to this object.

    \param OdGeExtents3d [in] Input b-box.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setBBox(const OdGeExtents3d&);
  /** \details
    Returns the GElement type as an OdInt32 value.
  */
  OdInt32 getGElemType() const;
  /** \details
    Sets a GElement type to this object.

    \param OdInt32 [in] Input GElement type.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setGElemType(OdInt32);
  /** \details
    Returns the object's flags as an OdUInt32 value.
  */
  OdUInt32 getFlags() const;
  /** \details
    Sets flags to this object.

    \param OdUInt32 [in] Input element type.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setFlags(OdUInt32);
  OdGeExtents3d getTightbBox() const;
  //
  // Main functionality
  //
};
#endif // _BM_GREP_H_

