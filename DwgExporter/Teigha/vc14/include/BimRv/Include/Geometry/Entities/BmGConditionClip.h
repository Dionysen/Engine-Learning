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

#ifndef _BM_GCONDITIONCLIP_H_
#define _BM_GCONDITIONCLIP_H_
#include "Geometry/Entities/BmGConditionBase.h"



class OdBmGConditionClip;
class OdBmGConditionClipImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGConditionClip object.
 */
typedef OdSmartPtr<OdBmGConditionClip> OdBmGConditionClipPtr;

/** \details
 A data type that represents an array of OdBmGConditionClip objects.
 */
typedef OdArray<OdBmGConditionClipPtr> OdBmGConditionClipPtrArray;

//----------------------------------------------------------
//
// OdBmGConditionClip
//
//----------------------------------------------------------

/** \details
    This class stores data of a clipping condition.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGConditionClip : public OdBmGConditionBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGConditionClip);
public:
  /** \details
    Returns the clipping vertices as an array of 3D points.

    \param OdGePoint3dArray [out] Output array of vertices.
  */
  void getVertecies(OdGePoint3dArray &) const;
  //
  // Main functionality
  //


};


#endif // _BM_GCONDITIONCLIP_H_

