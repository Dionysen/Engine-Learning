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

#ifndef _BM_REBARDESCRIPTIONFORNUMBERING_H_
#define _BM_REBARDESCRIPTIONFORNUMBERING_H_
#include "Rebar/Entities/BmIDescription.h"

class OdBmObjectId;

class OdBmRebarDescriptionForNumbering;
class OdBmRebarDescriptionForNumberingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarDescriptionForNumbering object.
 */
typedef OdSmartPtr<OdBmRebarDescriptionForNumbering> OdBmRebarDescriptionForNumberingPtr;

/** \details
 A data type that represents an array of OdBmRebarDescriptionForNumbering objects.
 */
typedef OdArray<OdBmRebarDescriptionForNumberingPtr> OdBmRebarDescriptionForNumberingPtrArray;

//----------------------------------------------------------
//
// OdBmRebarDescriptionForNumbering
//
//----------------------------------------------------------

/** \details
Description of Rebar for Numbering.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarDescriptionForNumbering : public OdBmIDescription {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarDescriptionForNumbering);
public:
  void getParamIdToRoundedDouble(OdBmMap<OdBmObjectId, double> &) const;
  /** \details
    Returns the id of a bar type.
  */
  OdBmObjectId getBarTypeId() const;
  /** \details 
   Returns the end treatment id0.
  */
  OdBmObjectId getEndTreatmentId0() const;
  /** \details 
   Returns the end treatment id1.
  */
  OdBmObjectId getEndTreatmentId1() const;
  /** \details
    Returns the hook id0.
  */
  OdBmObjectId getHookId0() const;
  /** \details
    Returns the hook id1.
  */
  OdBmObjectId getHookId1() const;
  /** \details
    Returns the shape id.
  */
  OdBmObjectId getShapeId() const;
  bool getSymmetrical() const;
  double getHookRotation0() const;
  double getHookRotation1() const;
  bool getIsSingleLine() const;
  bool getIsStraightFreeForm() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARDESCRIPTIONFORNUMBERING_H_

