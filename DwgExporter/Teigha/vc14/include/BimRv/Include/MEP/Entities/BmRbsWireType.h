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

#ifndef _BM_RBSWIRETYPE_H_
#define _BM_RBSWIRETYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmObjectId;

class OdBmRbsWireType;
class OdBmRbsWireTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsWireType object.
 */
typedef OdSmartPtr<OdBmRbsWireType> OdBmRbsWireTypePtr;

/** \details
 A data type that represents an array of OdBmRbsWireType objects.
 */
typedef OdArray<OdBmRbsWireTypePtr> OdBmRbsWireTypePtrArray;

//----------------------------------------------------------
//
// OdBmRbsWireType
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsWireType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsWireType);
public:
  OdString getStrMaxConductorSize() const;
  OdString getStrConduitType() const;
  double getNeutralMultiplier() const;
  OdBmObjectId getIdMaterial() const;
  OdBmObjectId getIdTempratureRating() const;
  OdBmObjectId getIdInsulation() const;
  OdInt32 getNeutralMode() const;
  bool getNeutralIncludedInBalancedLoad() const;
  bool getShareNeutral() const;
  bool getShareGround() const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSWIRETYPE_H_

