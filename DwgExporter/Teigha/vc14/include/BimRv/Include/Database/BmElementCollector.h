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

#ifndef _BM_ELEMENT_COLLECTOR_H_
#define _BM_ELEMENT_COLLECTOR_H_

#include "Database/Entities/BmElemTable.h"
#include "Database/Entities/BmFilterRule.h"

class OdBmDatabase;

class TB_DB_EXPORT OdBmElementCollector {
public:
  typedef OdBmIterator<OdBmElementPtr>::pointer_type iterator_type;

  OdBmElementCollector(const OdBmElementCollector& other);
  OdBmElementCollector(const OdBmDatabase* pDb);

  /** \details
    Applies an element filter to the collector.
  */
  OdBmElementCollector& wherePasses(const OdBmFilterRulePtr& pRule);

  /** \details
    Returns the set of elements that pass the filter.
  */
  OdBmElementPtrArray collect() const;

  /** \details
    Returns the first element to pass the filter.
  */
  OdBmElementPtr getFirstElement() const;

  /** \details
    Applies ExclusionFilter to the collector.

    \param elemIds [in] is array of elements ids to exclude from the result.
  */
  OdBmElementCollector& excluding(const OdBmObjectIdArray& elemIds);

  /** \details
    Returns an element iterator to the collected elements.
  */
  iterator_type getElementIterator() const;

  /** \details
    Applies an ElementCategoryFilter to the collector.

    \param category [in] is a desired category of elements
  */
  OdBmElementCollector& ofCategory(OdBm::BuiltInCategory::Enum category);

  /** \details
    Applies an ElementClassFilter to the collector.

    \param pClass [in] is a desired class of elements
  */
  OdBmElementCollector& ofClass(const OdTfClass* pClass);

protected:
  iterator_type m_pIterator;
  iterator_type iterator() const;
};

#endif // _BM_ELEMENT_COLLECTOR_H_
