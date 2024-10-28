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

#ifndef _BM_REPEATERPOINTORIENTATIONRULE_DELTATRF_H_
#define _BM_REPEATERPOINTORIENTATIONRULE_DELTATRF_H_
#include "Main/Entities/BmRepeaterPointOrientationRule.h"



class OdBmRepeaterPointOrientationRule_DeltaTrf;
class OdBmRepeaterPointOrientationRule_DeltaTrfImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRepeaterPointOrientationRule_DeltaTrf object.
 */
typedef OdSmartPtr<OdBmRepeaterPointOrientationRule_DeltaTrf> OdBmRepeaterPointOrientationRule_DeltaTrfPtr;

/** \details
 A data type that represents an array of OdBmRepeaterPointOrientationRule_DeltaTrf objects.
 */
typedef OdArray<OdBmRepeaterPointOrientationRule_DeltaTrfPtr> OdBmRepeaterPointOrientationRule_DeltaTrfPtrArray;

//----------------------------------------------------------
//
// OdBmRepeaterPointOrientationRule_DeltaTrf
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmRepeaterPointOrientationRule_DeltaTrf : public OdBmRepeaterPointOrientationRule {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRepeaterPointOrientationRule_DeltaTrf);
public:
  OdGeMatrix3d getTrf() const;
  //
  // Main functionality
  //
};
#endif // _BM_REPEATERPOINTORIENTATIONRULE_DELTATRF_H_

