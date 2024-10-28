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

#ifndef _BM_RBSPIPINGSYSTEMTYPE_H_
#define _BM_RBSPIPINGSYSTEMTYPE_H_
#include "Database/Entities/BmRbsSystemType.h"

class OdBmObjectId;

class OdBmRbsPipingSystemType;
class OdBmRbsPipingSystemTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsPipingSystemType object.
 */
typedef OdSmartPtr<OdBmRbsPipingSystemType> OdBmRbsPipingSystemTypePtr;

/** \details
 A data type that represents an array of OdBmRbsPipingSystemType objects.
 */
typedef OdArray<OdBmRbsPipingSystemTypePtr> OdBmRbsPipingSystemTypePtrArray;

//----------------------------------------------------------
//
// OdBmRbsPipingSystemType
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsPipingSystemType : public OdBmRbsSystemType {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsPipingSystemType);
public:
  double getFluidTemperature() const;
  OdInt32 getSingleLineBendDropType() const;
  OdInt32 getSingleLineBendRiseType() const;
  OdInt32 getSingleLineJunctionDropType() const;
  OdInt32 getSingleLineJunctionRiseType() const;
  OdInt32 getTwoLineDropType() const;
  OdInt32 getTwoLineRiseType() const;
  OdInt32 getFlowConversionMethod() const;
  OdBmObjectId getFluidType() const;
  OdBmObjectId getSingleLineBendDropSymbolId() const;
  OdBmObjectId getSingleLineBendRiseSymbolId() const;
  OdBmObjectId getSingleLineJunctionDropSymbolId() const;
  OdBmObjectId getSingleLineJunctionRiseSymbolId() const;
  OdBmObjectId getTwoLineDropSymbolId() const;
  OdBmObjectId getTwoLineRiseSymbolId() const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSPIPINGSYSTEMTYPE_H_

