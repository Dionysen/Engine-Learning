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

#ifndef _BM_GSYSTEM_H_
#define _BM_GSYSTEM_H_
#include "Geometry/Entities/BmGText.h"



class OdBmGSystem;
class OdBmGSystemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGSystem object.
 */
typedef OdSmartPtr<OdBmGSystem> OdBmGSystemPtr;

/** \details
 A data type that represents an array of OdBmGSystem objects.
 */
typedef OdArray<OdBmGSystemPtr> OdBmGSystemPtrArray;

//----------------------------------------------------------
//
// OdBmGSystem
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of system text.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGSystem : public OdBmGText {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGSystem);
public:
  /** \details
    Returns the line width as a double value.
  */
  double getLineWidth() const;
  /** \details
    Returns the parameter type as an OdInt32 value.
  */
  OdInt32 getParameterType() const;
  //
  // Main functionality
  //
};
#endif // _BM_GSYSTEM_H_

