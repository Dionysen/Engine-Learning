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

#ifndef _BM_GEOMSTEPLIST_H_
#define _BM_GEOMSTEPLIST_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Geometry/Enums/BmGStepType.h"
#include "Geometry/Entities/BmGeomStep.h"
// END: Includes



class OdBmGeomStepList;
class OdBmGeomStepListImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeomStepList object.
 */
typedef OdSmartPtr<OdBmGeomStepList> OdBmGeomStepListPtr;

/** \details
 A data type that represents an array of OdBmGeomStepList objects.
 */
typedef OdArray<OdBmGeomStepListPtr> OdBmGeomStepListPtrArray;

//----------------------------------------------------------
//
// OdBmGeomStepList
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGeomStepList : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeomStepList);
public:
  void getNonBRepGList(OdArray<OdBmObjectPtr> &) const;
  OdResult setNonBRepGList(const OdArray<OdBmObjectPtr>&);
  void getBRepFormGList(OdArray<OdBmObjectPtr> &) const;
  OdResult setBRepFormGList(const OdArray<OdBmObjectPtr>&);
  void getBRepAdjustGList(OdArray<OdBmObjectPtr> &) const;
  OdResult setBRepAdjustGList(const OdArray<OdBmObjectPtr>&);
  void getBRepCutOutGList(OdArray<OdBmObjectPtr> &) const;
  OdResult setBRepCutOutGList(const OdArray<OdBmObjectPtr>&);
  void getBRepPostCutOutGList(OdArray<OdBmObjectPtr> &) const;
  OdResult setBRepPostCutOutGList(const OdArray<OdBmObjectPtr>&);
  void getBRepTweakGList(OdArray<OdBmObjectPtr> &) const;
  OdResult setBRepTweakGList(const OdArray<OdBmObjectPtr>&);
  OdBmObjectPtr getBRepFormSnapshot() const;
  OdResult setBRepFormSnapshot(const OdBmObjectPtr&);
  OdBmObjectPtr getBRepAdjustSnapshot() const;
  OdResult setBRepAdjustSnapshot(const OdBmObjectPtr&);
  OdBmObjectPtr getBRepCutOutSnapshot() const;
  OdResult setBRepCutOutSnapshot(const OdBmObjectPtr&);
  OdBmObjectPtr getBRepPostCutOutSnapshot() const;
  OdResult setBRepPostCutOutSnapshot(const OdBmObjectPtr&);
  OdBmObject* getElem() const;
  OdResult setElem(OdBmObject*);
  OdInt32 getLatestGStepTypeInPrevRegenCycleItem(OdUInt32 idx) const;
  OdResult setLatestGStepTypeInPrevRegenCycleItem(OdUInt32 idx, OdInt32);
  OdInt32 getIdCounter() const;
  OdResult setIdCounter(OdInt32);
  OdInt8 getFlags() const;
  OdResult setFlags(OdInt8);
  //
  // Main functionality
  //

  /** \details
       Returns first GeomStep of the corresponding GStepType.

      \param pGStep [out] Output GeomStep.
      \param gStepType [in] Input GStepType.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult firstBRepGStep(OdBmGeomStepPtr& pGStep,
                          const OdBm::GStepType::Enum& gStepType) const;

  OdResult getSteps(const OdBm::GStepType::Enum gStepType,
                    OdArray<OdBmObjectPtr>& value) const;

  OdResult addGStep(const OdBmGeomStepPtr& pGStep,
                    const OdBm::GStepType::Enum gStepType);
};


#endif // _BM_GEOMSTEPLIST_H_

