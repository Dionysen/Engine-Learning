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

#ifndef _BM_ABSCURVETYPE_H_
#define _BM_ABSCURVETYPE_H_
#include "Database/Entities/BmHostObjAttr.h"
#include "MEP/Enums/BmConnectorProfileType.h"

class OdBmAbsSysSweepProfile;
typedef OdSmartPtr<OdBmAbsSysSweepProfile> OdBmAbsSysSweepProfilePtr;
class OdBmObjectId;

class OdBmAbsCurveType;
class OdBmAbsCurveTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAbsCurveType object.
 */
typedef OdSmartPtr<OdBmAbsCurveType> OdBmAbsCurveTypePtr;

/** \details
 A data type that represents an array of OdBmAbsCurveType objects.
 */
typedef OdArray<OdBmAbsCurveTypePtr> OdBmAbsCurveTypePtrArray;

//----------------------------------------------------------
//
// OdBmAbsCurveType
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmAbsCurveType : public OdBmHostObjAttr {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAbsCurveType);
public:
  double getRoughness() const;
  double getMaxHeight() const;
  double getMaxWidth() const;
  OdBmObjectId getIdDefaultElbow() const;
  OdBmObjectId getIdDefaultTee() const;
  OdBmObjectId getIdDefaultCross() const;
  OdBmObjectId getIdDefaultTransition() const;
  OdBmObjectId getIdDefaultMultiShape() const;
  OdBmObjectId getIdDefaultUnion() const;
  OdBmObjectId getIdDefaultTakeoff() const;
  OdBmObjectId getIdDefaultElbowUp() const;
  OdBmObjectId getIdDefaultElbowDown() const;
  OdBmObjectId getIdDefaultTeeUp() const;
  OdBmObjectId getIdDefaultTeeDown() const;
  OdBmObjectId getIdDefaultMultiShapeRectToOval() const;
  OdBmObjectId getIdDefaultMultiShapeOvalToRound() const;
  OdBmObjectId getIdMechJoint() const;
  OdInt32 getRiseDropType() const;
  bool getBranchTypeTee() const;
  OdBmAbsSysSweepProfilePtr getProfile() const;
  //
  // Main functionality
  //

  virtual OdBm::ConnectorProfileType::Enum getProfileType() const;
};
#endif // _BM_ABSCURVETYPE_H_

