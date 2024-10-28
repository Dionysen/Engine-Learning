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

#ifndef _BM_FREEFORMELEMENT_H_
#define _BM_FREEFORMELEMENT_H_
#include "Database/Entities/BmGenSweep.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGeometry.h"
// END: Includes

class OdBmGeometry;
typedef OdSmartPtr<OdBmGeometry> OdBmGeometryPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmFreeFormElement;
class OdBmFreeFormElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFreeFormElement object.
 */
typedef OdSmartPtr<OdBmFreeFormElement> OdBmFreeFormElementPtr;

/** \details
 A data type that represents an array of OdBmFreeFormElement objects.
 */
typedef OdArray<OdBmFreeFormElementPtr> OdBmFreeFormElementPtrArray;

//----------------------------------------------------------
//
// OdBmFreeFormElement
//
//----------------------------------------------------------

/** \details
    This class contains non-parametric geometry created from an solid geometry.
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFreeFormElement : public OdBmGenSweep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFreeFormElement);
public:
  /** \details
    Returns array of GStyle IDs.
  */
  void getGstyleIds(OdBmObjectIdArray &) const;
  /** \details
    Returns base geometry for FreeFormElement. It is using for generation GElement of FreeFormElement.
  */
  OdBmGeometryPtr getSkeletonGeometry() const;
  //
  // Main functionality
  //

  /** \details
  Updates geometry on the element.
  Returns eOk or an error
  \param pNewGeometry [in] Receives a new geometry.
*/
  OdResult updateSolidGeometry(const OdBmGeometryPtr &pNewGeometry);
};
#endif // _BM_FREEFORMELEMENT_H_

