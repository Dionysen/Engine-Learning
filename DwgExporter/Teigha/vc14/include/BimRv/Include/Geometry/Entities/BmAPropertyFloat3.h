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

#ifndef _BM_APROPERTYFLOAT3_H_
#define _BM_APROPERTYFLOAT3_H_
#include "Geometry/Entities/BmAProperty.h"



class OdBmAPropertyFloat3;
class OdBmAPropertyFloat3Impl;

 /** \details
 A data type that represents a smart pointer to an OdBmAPropertyFloat3 object.
 */
typedef OdSmartPtr<OdBmAPropertyFloat3> OdBmAPropertyFloat3Ptr;

/** \details
 A data type that represents an array of OdBmAPropertyFloat3 objects.
 */
typedef OdArray<OdBmAPropertyFloat3Ptr> OdBmAPropertyFloat3PtrArray;

//----------------------------------------------------------
//
// OdBmAPropertyFloat3
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmAPropertyFloat3 : public OdBmAProperty {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAPropertyFloat3);
public:
  double getValueItem(OdUInt32 idx) const;
  //
  // Main functionality
  //

  OdResult get(double& d1, double& d2, double& d3);
  OdResult set(double d1, double d2, double d3);
};


#endif // _BM_APROPERTYFLOAT3_H_

