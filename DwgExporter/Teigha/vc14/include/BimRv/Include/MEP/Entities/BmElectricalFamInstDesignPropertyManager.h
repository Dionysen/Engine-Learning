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

#ifndef _BM_ELECTRICALFAMINSTDESIGNPROPERTYMANAGER_H_
#define _BM_ELECTRICALFAMINSTDESIGNPROPERTYMANAGER_H_
#include "MEP/Entities/BmFamInstDesignPropertyManager.h"

class OdBmObjectId;

class OdBmElectricalFamInstDesignPropertyManager;
class OdBmElectricalFamInstDesignPropertyManagerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElectricalFamInstDesignPropertyManager object.
 */
typedef OdSmartPtr<OdBmElectricalFamInstDesignPropertyManager> OdBmElectricalFamInstDesignPropertyManagerPtr;

/** \details
 A data type that represents an array of OdBmElectricalFamInstDesignPropertyManager objects.
 */
typedef OdArray<OdBmElectricalFamInstDesignPropertyManagerPtr> OdBmElectricalFamInstDesignPropertyManagerPtrArray;

//----------------------------------------------------------
//
// OdBmElectricalFamInstDesignPropertyManager
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmElectricalFamInstDesignPropertyManager : public OdBmFamInstDesignPropertyManager {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElectricalFamInstDesignPropertyManager);
public:
  void getLCLoadMap(OdBmMap<OdBmObjectId, OdBmPair<double, double> > &) const;
  OdBmPair<OdBmObjectId, OdBmPair<OdBmObjectId, double> > getLargestMotorMap() const;
  void getLCApparentLoadParamMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getLCDemandLoadParamMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getLCDemandFactorParamMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getLCApparentCurrentParamMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getLCDemandCurrentParamMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  double getDemandLoad() const;
  double getApparentLoad() const;
  double getDemandCurrent() const;
  double getApparentCurrent() const;
  OdInt32 getCircuitNumberingOption() const;
  //
  // Main functionality
  //
};
#endif // _BM_ELECTRICALFAMINSTDESIGNPROPERTYMANAGER_H_

