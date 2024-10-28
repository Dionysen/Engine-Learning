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

#ifndef _BM_FAMILYGEOMCOMBINATION_H_
#define _BM_FAMILYGEOMCOMBINATION_H_
#include "Essential/Entities/BmGeomCombination.h"



class OdBmFamilyGeomCombination;
class OdBmFamilyGeomCombinationImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyGeomCombination object.
 */
typedef OdSmartPtr<OdBmFamilyGeomCombination> OdBmFamilyGeomCombinationPtr;

/** \details
 A data type that represents an array of OdBmFamilyGeomCombination objects.
 */
typedef OdArray<OdBmFamilyGeomCombinationPtr> OdBmFamilyGeomCombinationPtrArray;

//----------------------------------------------------------
//
// OdBmFamilyGeomCombination
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmFamilyGeomCombination : public OdBmGeomCombination {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyGeomCombination);
public:
  //
  // Main functionality
  //

  /** \details
    Adds specified GenSweep element identifier to geometry combination as solid form.

    \param id [in] The identifier of the solid GenSweep element.
    \returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult addSolidGeomToCombination(const OdBmObjectId& id);

  /** \details
    Adds specified GenSweep element identifier to geometry combination as void form.

    \param id [in] The identifier of the void GenSweep element.
    \param solidId [in] The identifier of existed solid GenSweep element in combination.
    \returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult addVoidGeomToCombination(const OdBmObjectId& id, const OdBmObjectId& solidId);

  /** \details
    Removes specified GenSweep element identifier from geometry combination as solid form.

    \param id [in] The identifier of the solid GenSweep element.
    \returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult removeSolidGeomFromCombination(const OdBmObjectId& id);

  /** \details
    Removes specified GenSweep element identifier from geometry combination as void form.

    \param id [in] The identifier of the void GenSweep element.
    \param solidId [in] The identifier of existed solid GenSweep element in combination.
    \returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult removeVoidGeomFromCombination(const OdBmObjectId& id, const OdBmObjectId& solidId);
};


#endif // _BM_FAMILYGEOMCOMBINATION_H_

