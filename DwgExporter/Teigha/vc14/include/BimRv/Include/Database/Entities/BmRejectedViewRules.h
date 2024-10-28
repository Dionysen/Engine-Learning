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

#ifndef _BM_REJECTEDVIEWRULES_H_
#define _BM_REJECTEDVIEWRULES_H_
#include "Base/Enums/BmViewRule.h"
#include "Base/Enums/BmViewType.h"


//----------------------------------------------------------
//
// OdBmRejectedViewRules
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRejectedViewRules {
public:
  OdBmRejectedViewRules();
  OdBmRejectedViewRules(const OdBmRejectedViewRules& originalObject);
  OdBmRejectedViewRules& operator=(const OdBmRejectedViewRules& originalObject);
  bool operator==(const OdBmRejectedViewRules& other) const;
  bool operator!=(const OdBmRejectedViewRules& other) const;
  OdInt32 getVisibleViewFlags() const;
  OdResult setVisibleViewFlags(OdInt32);
private:
  OdInt32 m_visibleViewFlags;

  //
  // Main functionality
  //

public:
  /** \details
    Class constructor.

	\param visibleViewFlags [in] Input visible view flags.
  */
  OdBmRejectedViewRules(const OdInt32 visibleViewFlags);

  /** \details
    Rejects all view types from the rules.
  */
  void rejectAllViewTypes();

  /** \details
    Allows all view types in the rules.
  */
  void allowAllViewTypes();

  /** \details
    Returns true if input view type is allowed within rules.

	\param aViewType [in] Input view type.
  */
  bool isViewTypeAllowed(OdBm::ViewType::Enum aViewType) const;

  /** \details
    Returns true if any view type is allowed within rules.
  */
  bool isAnyViewTypeAllowed() const;

  /** \details
    Sets or unsets the allowing flag for input view type within rules.

	\param aViewType [in] Input view type.
	\param aAllow [in] Input allowing flag.
  */
  void allowViewType(OdBm::ViewType::Enum aViewType, bool aAllow);

  /** \details
    Returns true if input rule is allowed within rules.

	\param aRule [in] Input rule.
  */
  bool isRuleAllowed(OdBm::ViewRule::Enum aRule) const;

  /** \details
    Sets or unsets the rule.

	\param aRule [in] Input rule.
	\param aAllow [in] Input allowing flag.
  */
  void allowRule(OdBm::ViewRule::Enum aRule, bool aAllow);

 /* bool isDetailLevelCoarse() const
  {
    return getImpl()->getVisibleViewFlags() & 0x2000;
  }

  bool isDetailLevelMedium() const
  {
    return getImpl()->getVisibleViewFlags() & 0x4000;
  }

  bool isDetailLevelFine() const
  {
    return getImpl()->getVisibleViewFlags() & 0x8000;
  }
  */
};


#endif // _BM_REJECTEDVIEWRULES_H_

