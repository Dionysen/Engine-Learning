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

#ifndef _BM_STRUCTURALSECTIONCSLOPEDFLANGE_H_
#define _BM_STRUCTURALSECTIONCSLOPEDFLANGE_H_
#include "Structural/Entities/BmStructuralSectionGeneralU.h"



class OdBmStructuralSectionCSlopedFlange;
class OdBmStructuralSectionCSlopedFlangeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStructuralSectionCSlopedFlange object.
 */
typedef OdSmartPtr<OdBmStructuralSectionCSlopedFlange> OdBmStructuralSectionCSlopedFlangePtr;

/** \details
 A data type that represents an array of OdBmStructuralSectionCSlopedFlange objects.
 */
typedef OdArray<OdBmStructuralSectionCSlopedFlangePtr> OdBmStructuralSectionCSlopedFlangePtrArray;

//----------------------------------------------------------
//
// OdBmStructuralSectionCSlopedFlange
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmStructuralSectionCSlopedFlange : public OdBmStructuralSectionGeneralU {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStructuralSectionCSlopedFlange);
public:
  double getBoltDiameter() const;
  double getBoltSpacing() const;
  double getClearWebHeight() const;
  //
  // Main functionality
  //
};
#endif // _BM_STRUCTURALSECTIONCSLOPEDFLANGE_H_

