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

#ifndef _BM_REBARCOUPLER_H_
#define _BM_REBARCOUPLER_H_
#include "Database/BmElement.h"

class OdBmNumberingPartitionDataCell;
typedef OdSmartPtr<OdBmNumberingPartitionDataCell> OdBmNumberingPartitionDataCellPtr;
class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmObjectId;

class OdBmRebarCoupler;
class OdBmRebarCouplerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarCoupler object.
 */
typedef OdSmartPtr<OdBmRebarCoupler> OdBmRebarCouplerPtr;

/** \details
 A data type that represents an array of OdBmRebarCoupler objects.
 */
typedef OdArray<OdBmRebarCouplerPtr> OdBmRebarCouplerPtrArray;

//----------------------------------------------------------
//
// OdBmRebarCoupler
//
//----------------------------------------------------------

/** \details
Coupler for rebars.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarCoupler : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarCoupler);
public:
  /** \details
    Returns the coupler mark.
  */
  OdString getCouplerMark() const;
  /** \details
    Returns the first coupler target.
  */
  OdBmObjectPtr getFirstCouplerTarget() const;
  /** \details
    Returns the numbering partition cell.
  */
  OdBmNumberingPartitionDataCellPtr getNumberingPartitionCell() const;
  /** \details
    Returns the second coupler target.
  */
  OdBmObjectPtr getSecondCouplerTarget() const;
  /** \details
    Returns the coupler type.
  */
  OdBmObjectId getCouplerType() const;
  /** \details
    Returns the coupler origin array.
    \param array [out] Array to store elements of the origin array.
  */
  void getCouplerOriginArr(OdGePoint3dArray &) const;
  OdBmFamilyParamsPtr getInstParams() const;
  OdBmFamilyParamsPtr getInstParamsByFormula() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARCOUPLER_H_

