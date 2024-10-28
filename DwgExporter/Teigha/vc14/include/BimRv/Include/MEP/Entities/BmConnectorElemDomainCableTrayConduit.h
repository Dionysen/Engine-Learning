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

#ifndef _BM_CONNECTORELEMDOMAINCABLETRAYCONDUIT_H_
#define _BM_CONNECTORELEMDOMAINCABLETRAYCONDUIT_H_
#include "MEP/Entities/BmConnectorElemDomain.h"
#include "Common/Enums/BmSystemType.h"



class OdBmConnectorElemDomainCableTrayConduit;
class OdBmConnectorElemDomainCableTrayConduitImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmConnectorElemDomainCableTrayConduit object.
 */
typedef OdSmartPtr<OdBmConnectorElemDomainCableTrayConduit> OdBmConnectorElemDomainCableTrayConduitPtr;

/** \details
 A data type that represents an array of OdBmConnectorElemDomainCableTrayConduit objects.
 */
typedef OdArray<OdBmConnectorElemDomainCableTrayConduitPtr> OdBmConnectorElemDomainCableTrayConduitPtrArray;

//----------------------------------------------------------
//
// OdBmConnectorElemDomainCableTrayConduit
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmConnectorElemDomainCableTrayConduit : public OdBmConnectorElemDomain {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmConnectorElemDomainCableTrayConduit);
public:
  double getConnectorWidth() const;
  double getConnectorHeight() const;
  double getConnectorDiameter() const;
  double getConnectorAngle() const;
  OdBm::SystemType::Enum getSystemType() const;
  OdInt32 getPlacementType() const;
  OdInt32 getProfileType() const;
  OdInt32 getConnectorReferenceIndex() const;
  bool getIsPrimaryConnector() const;
  bool getConnectorUtilityParam() const;
  OdString getStrConnectorDescription() const;
  //
  // Main functionality
  //

};


#endif // _BM_CONNECTORELEMDOMAINCABLETRAYCONDUIT_H_

