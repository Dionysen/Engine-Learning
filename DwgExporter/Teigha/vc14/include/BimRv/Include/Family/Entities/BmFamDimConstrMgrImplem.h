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

#ifndef _BM_FAMDIMCONSTRMGRIMPLEM_H_
#define _BM_FAMDIMCONSTRMGRIMPLEM_H_
#include "Family/Entities/BmFamDimConstrMgr.h"

class OdBmElementIdIntPair;
typedef OdSmartPtr<OdBmElementIdIntPair> OdBmElementIdIntPairPtr;
class OdBmParamExpr;
typedef OdSmartPtr<OdBmParamExpr> OdBmParamExprPtr;
class OdBmDimValueExprOwner;
typedef OdSmartPtr<OdBmDimValueExprOwner> OdBmDimValueExprOwnerPtr;
class OdBmGrefAndDir;
typedef OdSmartPtr<OdBmGrefAndDir> OdBmGrefAndDirPtr;
class OdBmDimSegData;
typedef OdSmartPtr<OdBmDimSegData> OdBmDimSegDataPtr;

class OdBmFamDimConstrMgrImplem;
class OdBmFamDimConstrMgrImplemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamDimConstrMgrImplem object.
 */
typedef OdSmartPtr<OdBmFamDimConstrMgrImplem> OdBmFamDimConstrMgrImplemPtr;

/** \details
 A data type that represents an array of OdBmFamDimConstrMgrImplem objects.
 */
typedef OdArray<OdBmFamDimConstrMgrImplemPtr> OdBmFamDimConstrMgrImplemPtrArray;

//----------------------------------------------------------
//
// OdBmFamDimConstrMgrImplem
//
//----------------------------------------------------------

/** \details
    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmFamDimConstrMgrImplem : public OdBmFamDimConstrMgr {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamDimConstrMgrImplem);
public:
  void getParamExprs(OdBmMap<OdBmElementIdIntPairPtr, OdBmParamExprPtr> &) const;
  OdResult setParamExprs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmParamExprPtr>&);
  void getDrivenDimSegs(OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr> &) const;
  OdResult setDrivenDimSegs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr>&);
  void getIgnoredDimValueExprs(OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr> &) const;
  OdResult setIgnoredDimValueExprs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr>&);
  void getOverconstrDimSegs(OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr> &) const;
  OdResult setOverconstrDimSegs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr>&);
  void getFixedRefs(OdBmMap<OdBmElementIdIntPairPtr, OdBmGrefAndDirPtr> &) const;
  OdResult setFixedRefs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmGrefAndDirPtr>&);
  void getRedundantConstrs(OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr> &) const;
  OdResult setRedundantConstrs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmDimValueExprOwnerPtr>&);
  void getPropagatedDrivers(OdArray<OdBmElementIdIntPairPtr> &) const;
  OdResult setPropagatedDrivers(const OdArray<OdBmElementIdIntPairPtr>&);
  void getDimSegDataMap(OdBmMap<OdBmElementIdIntPairPtr, OdBmDimSegDataPtr> &) const;
  OdResult setDimSegDataMap(const OdBmMap<OdBmElementIdIntPairPtr, OdBmDimSegDataPtr>&);
  void getAdditionalParamExprs(OdBmMap<OdBmElementIdIntPairPtr, OdBmParamExprPtr> &) const;
  OdResult setAdditionalParamExprs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmParamExprPtr>&);
  void getAdditionalFixedRefs(OdBmMap<OdBmElementIdIntPairPtr, OdBmGrefAndDirPtr> &) const;
  OdResult setAdditionalFixedRefs(const OdBmMap<OdBmElementIdIntPairPtr, OdBmGrefAndDirPtr>&);
  //
  // Main functionality
  //


};


#endif // _BM_FAMDIMCONSTRMGRIMPLEM_H_

