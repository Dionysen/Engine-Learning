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

#ifndef _BM_FILTERRULE_H_
#define _BM_FILTERRULE_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/BmElement.h"
#include "Database/Entities/BmElemRec.h"
// END: Includes



class OdBmFilterRule;
class OdBmFilterRuleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFilterRule object.
 */
typedef OdSmartPtr<OdBmFilterRule> OdBmFilterRulePtr;

/** \details
 A data type that represents an array of OdBmFilterRule objects.
 */
typedef OdArray<OdBmFilterRulePtr> OdBmFilterRulePtrArray;

//----------------------------------------------------------
//
// OdBmFilterRule
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFilterRule : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFilterRule);
public:
  //
  // Main functionality
  //

  /** \details
        Returns true if particular element passes the filtering rule.

      \param pElement [in] Input pointer to the element.
  */
  bool elementPasses(const OdBmElementPtr& pElement) const;

  /** \details
        Returns true if particular element's record passes the filtering rule.

      \param pElement [in] Input pointer to the element's record.
  */
  bool elementPasses(const OdBmElemRecPtr& pElem) const;

  /** \details
        Returns true if particular element's id passes the filtering rule.

      \param pElement [in] Element's id.
  */
  bool elementPasses(const OdBmObjectId& id) const;
};


#endif // _BM_FILTERRULE_H_

