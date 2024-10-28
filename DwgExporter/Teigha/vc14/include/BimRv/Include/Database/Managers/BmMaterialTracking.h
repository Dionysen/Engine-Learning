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

#ifndef _BM_MATERIALTRACKING_H_
#define _BM_MATERIALTRACKING_H_
#include "Database/Managers/BmElemSetTracking.h"
// BEGIN: Includes
#include "Database/Entities/BmMaterialElem.h"
// END: Includes



class OdBmMaterialTracking;
class OdBmMaterialTrackingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMaterialTracking object.
 */
typedef OdSmartPtr<OdBmMaterialTracking> OdBmMaterialTrackingPtr;

/** \details
 A data type that represents an array of OdBmMaterialTracking objects.
 */
typedef OdArray<OdBmMaterialTrackingPtr> OdBmMaterialTrackingPtrArray;

//----------------------------------------------------------
//
// OdBmMaterialTracking
//
//----------------------------------------------------------

/** \details
    This class implements material tracking manager.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmMaterialTracking : public OdBmElemSetTracking {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMaterialTracking);
public:
  //
  // Main functionality
  //

  /** \details
    Returns the material ID by name. If the material does not exist, then returns OdBmObjectId::kNull.

  \param name [in] Input material name.
  */
  OdBmObjectId getMaterialIdByName(const OdString& name) const;
};


#endif // _BM_MATERIALTRACKING_H_

