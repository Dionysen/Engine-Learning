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

#ifndef _BM_REBARCOUPLERASSEMBLYCOMPONENTDESCRIPTOR_H_
#define _BM_REBARCOUPLERASSEMBLYCOMPONENTDESCRIPTOR_H_
#include "Database/Entities/BmAssemblyComponentDescriptor.h"

class OdBmObjectId;

class OdBmRebarCouplerAssemblyComponentDescriptor;
class OdBmRebarCouplerAssemblyComponentDescriptorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarCouplerAssemblyComponentDescriptor object.
 */
typedef OdSmartPtr<OdBmRebarCouplerAssemblyComponentDescriptor> OdBmRebarCouplerAssemblyComponentDescriptorPtr;

/** \details
 A data type that represents an array of OdBmRebarCouplerAssemblyComponentDescriptor objects.
 */
typedef OdArray<OdBmRebarCouplerAssemblyComponentDescriptorPtr> OdBmRebarCouplerAssemblyComponentDescriptorPtrArray;

//----------------------------------------------------------
//
// OdBmRebarCouplerAssemblyComponentDescriptor
//
//----------------------------------------------------------

/** \details
Implements AssemblyComponentDescriptor interface for RebarCoupler.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarCouplerAssemblyComponentDescriptor : public OdBmAssemblyComponentDescriptor {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarCouplerAssemblyComponentDescriptor);
public:
  /** \details
    Returns the coupler placement points as an array.
    \param array [out] An array to store the points.
  */
  void getCouplerPlacementPoints(OdGePoint3dArray &) const;
  /** \details
    Returns the point of a coupler direction.
  */
  OdGePoint3d getCouplerDirection() const;
  /** \details
    Returns the point of a coupler origin.
  */
  OdGePoint3d getCouplerOrigin() const;
  /** \details
    Returns the coupler quantity.
  */
  OdInt32 getCouplerQuantity() const;
  /** \details
    Returns the id of a coupler type.
  */
  OdBmObjectId getCouplerType() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARCOUPLERASSEMBLYCOMPONENTDESCRIPTOR_H_

