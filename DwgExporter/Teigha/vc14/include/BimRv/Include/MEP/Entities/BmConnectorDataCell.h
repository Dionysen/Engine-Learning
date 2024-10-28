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

#ifndef _BM_CONNECTORDATACELL_H_
#define _BM_CONNECTORDATACELL_H_
#include "Database/Entities/BmCell.h"

class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmObjectId;

class OdBmConnectorDataCell;
class OdBmConnectorDataCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmConnectorDataCell object.
 */
typedef OdSmartPtr<OdBmConnectorDataCell> OdBmConnectorDataCellPtr;

/** \details
 A data type that represents an array of OdBmConnectorDataCell objects.
 */
typedef OdArray<OdBmConnectorDataCellPtr> OdBmConnectorDataCellPtrArray;

//----------------------------------------------------------
//
// OdBmConnectorDataCell
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmConnectorDataCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmConnectorDataCell);
public:
  void getPropId2FamParamIdBindings(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  OdBmFamilyParamsPtr getRelevantParams() const;
  OdInt32 getConnectorType() const;
  OdInt32 getDomain() const;
  OdInt32 getIndex() const;
  OdInt32 getProfileType() const;
  //
  // Main functionality
  //
};
#endif // _BM_CONNECTORDATACELL_H_

