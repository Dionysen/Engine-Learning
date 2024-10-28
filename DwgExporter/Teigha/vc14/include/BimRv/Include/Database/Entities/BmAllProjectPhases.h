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

#ifndef _BM_ALLPROJECTPHASES_H_
#define _BM_ALLPROJECTPHASES_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Database/BmDatabase.h"
// END: Includes

class OdBmPhasingOverrides;
typedef OdSmartPtr<OdBmPhasingOverrides> OdBmPhasingOverridesPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmAllProjectPhases;
class OdBmAllProjectPhasesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAllProjectPhases object.
 */
typedef OdSmartPtr<OdBmAllProjectPhases> OdBmAllProjectPhasesPtr;

/** \details
 A data type that represents an array of OdBmAllProjectPhases objects.
 */
typedef OdArray<OdBmAllProjectPhasesPtr> OdBmAllProjectPhasesPtrArray;

//----------------------------------------------------------
//
// OdBmAllProjectPhases
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAllProjectPhases : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAllProjectPhases);
public:
  void getPhaseIds(OdBmObjectIdArray &) const;
  OdBmPhasingOverridesPtr getPhasingOverridesItem(OdUInt32 idx) const;
  //
  // Main functionality
  //

  OdBmObjectId getLastPhaseId() const;
  void setupPhasingOverrides(OdBmDatabase* pDb);
};


#endif // _BM_ALLPROJECTPHASES_H_

