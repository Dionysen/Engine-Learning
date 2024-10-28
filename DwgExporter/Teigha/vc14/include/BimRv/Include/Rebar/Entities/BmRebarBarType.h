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

#ifndef _BM_REBARBARTYPE_H_
#define _BM_REBARBARTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmHookLengthSettings;
typedef OdSmartPtr<OdBmHookLengthSettings> OdBmHookLengthSettingsPtr;
class OdBmObjectId;

class OdBmRebarBarType;
class OdBmRebarBarTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarBarType object.
 */
typedef OdSmartPtr<OdBmRebarBarType> OdBmRebarBarTypePtr;

/** \details
 A data type that represents an array of OdBmRebarBarType objects.
 */
typedef OdArray<OdBmRebarBarTypePtr> OdBmRebarBarTypePtrArray;

//----------------------------------------------------------
//
// OdBmRebarBarType
//
//----------------------------------------------------------

/** \details
It represent type of RebarBar.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarBarType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarBarType);
public:
  /** \details
    Returns the deformation type as OdInt32.
  */
  OdInt32 getDeformationType() const;
  /** \details
    Returns the HLSetting map.
    \param map [out] A map.
  */
  void getHLSettingsMap(OdBmMap<OdBmObjectId, OdBmHookLengthSettingsPtr> &) const;
  /** \details
    Returns the bar diameter.
  */
  double getBarDiameter() const;
  /** \details
    Returns the standard bend diameter.
  */
  double getStandardBendDiam() const;
  /** \details
    Returns the standard hook bend diameter.
  */
  double getStandardHookBendDiam() const;
  /** \details
    Returns the stirrup tie bend diameter.
  */
  double getStirrupTieBendDiam() const;
  /** \details
    Returns the maximum bend radius.
  */
  double getMaximumBendRadius() const;
  /** \details
    Returns the id of the bar material.
  */
  OdBmObjectId getBarMaterial() const;
  /** \details
    Returns the id of the bar style category.
  */
  OdBmObjectId getBarStyleCategory() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARBARTYPE_H_

