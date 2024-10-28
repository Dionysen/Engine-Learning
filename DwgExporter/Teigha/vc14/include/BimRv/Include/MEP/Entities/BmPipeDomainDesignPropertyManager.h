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

#ifndef _BM_PIPEDOMAINDESIGNPROPERTYMANAGER_H_
#define _BM_PIPEDOMAINDESIGNPROPERTYMANAGER_H_
#include "Database/Entities/BmDesignPropertyManager.h"

class OdBmObjectId;

class OdBmPipeDomainDesignPropertyManager;
class OdBmPipeDomainDesignPropertyManagerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPipeDomainDesignPropertyManager object.
 */
typedef OdSmartPtr<OdBmPipeDomainDesignPropertyManager> OdBmPipeDomainDesignPropertyManagerPtr;

/** \details
 A data type that represents an array of OdBmPipeDomainDesignPropertyManager objects.
 */
typedef OdArray<OdBmPipeDomainDesignPropertyManagerPtr> OdBmPipeDomainDesignPropertyManagerPtrArray;

//----------------------------------------------------------
//
// OdBmPipeDomainDesignPropertyManager
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmPipeDomainDesignPropertyManager : public OdBmDesignPropertyManager {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPipeDomainDesignPropertyManager);
public:
  void getTappedPipeDatas(OdArray<OdBmObjectPtr> &) const;
  double getFlow() const;
  double getAdditionalFlow() const;
  double getInsulationThickness() const;
  double getInnerDiameter() const;
  double getOuterDiameter() const;
  double getFriction() const;
  double getFrictionFactor() const;
  double getPressureDrop() const;
  double getRelativeRoughness() const;
  double getReynoldsNumber() const;
  double getVelocity() const;
  double getVelocityPressure() const;
  double getCoefficient() const;
  OdInt32 getFlowState() const;
  OdBmObjectId getIdSystemType() const;
  OdBmObjectId getIdRoutingPreference() const;
  OdString getOverallSize() const;
  OdString getCalculatedSize() const;
  //
  // Main functionality
  //
};
#endif // _BM_PIPEDOMAINDESIGNPROPERTYMANAGER_H_

