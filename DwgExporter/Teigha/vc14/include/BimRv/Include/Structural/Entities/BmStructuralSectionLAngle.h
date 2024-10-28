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

#ifndef _BM_STRUCTURALSECTIONLANGLE_H_
#define _BM_STRUCTURALSECTIONLANGLE_H_
#include "Structural/Entities/BmStructuralSectionGeneralW.h"



class OdBmStructuralSectionLAngle;
class OdBmStructuralSectionLAngleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStructuralSectionLAngle object.
 */
typedef OdSmartPtr<OdBmStructuralSectionLAngle> OdBmStructuralSectionLAnglePtr;

/** \details
 A data type that represents an array of OdBmStructuralSectionLAngle objects.
 */
typedef OdArray<OdBmStructuralSectionLAnglePtr> OdBmStructuralSectionLAnglePtrArray;

//----------------------------------------------------------
//
// OdBmStructuralSectionLAngle
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmStructuralSectionLAngle : public OdBmStructuralSectionGeneralW {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStructuralSectionLAngle);
public:
  double getBoltDiameterLongerFlange() const;
  double getBoltDiameterShorterFlange() const;
  double getBoltSpacing1LongerFlange() const;
  double getBoltSpacing2LongerFlange() const;
  double getBoltSpacingShorterFlange() const;
  //
  // Main functionality
  //
};
#endif // _BM_STRUCTURALSECTIONLANGLE_H_

