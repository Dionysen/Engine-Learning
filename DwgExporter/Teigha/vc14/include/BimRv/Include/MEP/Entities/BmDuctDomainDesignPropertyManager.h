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

#ifndef _BM_DUCTDOMAINDESIGNPROPERTYMANAGER_H_
#define _BM_DUCTDOMAINDESIGNPROPERTYMANAGER_H_
#include "Database/Entities/BmDesignPropertyManager.h"

class OdBmObjectId;

class OdBmDuctDomainDesignPropertyManager;
class OdBmDuctDomainDesignPropertyManagerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDuctDomainDesignPropertyManager object.
 */
typedef OdSmartPtr<OdBmDuctDomainDesignPropertyManager> OdBmDuctDomainDesignPropertyManagerPtr;

/** \details
 A data type that represents an array of OdBmDuctDomainDesignPropertyManager objects.
 */
typedef OdArray<OdBmDuctDomainDesignPropertyManagerPtr> OdBmDuctDomainDesignPropertyManagerPtrArray;

//----------------------------------------------------------
//
// OdBmDuctDomainDesignPropertyManager
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmDuctDomainDesignPropertyManager : public OdBmDesignPropertyManager {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDuctDomainDesignPropertyManager);
public:
  double getFreeWidth() const;
  double getFreeHeight() const;
  double getFreeRoughness() const;
  double getFlow() const;
  double getAdditionalFlow() const;
  double getInsulationThickness() const;
  double getLiningThickness() const;
  double getVelocity() const;
  double getFriction() const;
  double getPressureDrop() const;
  double getVelocityPressure() const;
  double getLossCoefficient() const;
  double getHydraulicDiameter() const;
  double getEqDiameter() const;
  double getReynoldsNumber() const;
  OdBmObjectId getIdSystemType() const;
  bool getSizeLock() const;
  OdString getOverallSize() const;
  OdString getFreeSize() const;
  OdString getCalculatedSize() const;
  void getTappedDuctDatas(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_DUCTDOMAINDESIGNPROPERTYMANAGER_H_

