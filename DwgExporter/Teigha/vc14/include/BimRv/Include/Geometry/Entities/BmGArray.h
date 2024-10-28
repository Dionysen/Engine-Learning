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

#ifndef _BM_GARRAY_H_
#define _BM_GARRAY_H_
#include "Geometry/Entities/BmGInstance.h"



class OdBmGArray;
class OdBmGArrayImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGArray object.
 */
typedef OdSmartPtr<OdBmGArray> OdBmGArrayPtr;

/** \details
 A data type that represents an array of OdBmGArray objects.
 */
typedef OdArray<OdBmGArrayPtr> OdBmGArrayPtrArray;

//----------------------------------------------------------
//
// OdBmGArray
//
//----------------------------------------------------------

/** \details
    This class stores properties of GInstances.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGArray : public OdBmGInstance {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGArray);
public:
  /** \details
    Returns the transformation matrix as an object of the OdGeMatrix3d class.
  */
  OdGeMatrix3d getStepTrf() const;
  /** \details
    Returns the number of instances in the array as an OdInt32 value.
  */
  OdInt32 getNumInstances() const;
  //
  // Main functionality
  //


};


#endif // _BM_GARRAY_H_

