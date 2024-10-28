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

#ifndef _ODBMUSERIO_H_INCLUDED_
#define _ODBMUSERIO_H_INCLUDED_

#include "OdPlatform.h"
#include "Ed/EdUserIO.h"
#include "Ed/EdBaseUserIO.h"
#include "BmSSet.h"
#include "Base/BmCmColor.h"

class OdCmColor;
class OdSelectionSet;


/** \details
    <group OdEd_Classes>
*/
class ODRX_ABSTRACT TB_DB_EXPORT OdBmSSetTracker : public OdEdInputTracker
{
public:
  ODRX_DECLARE_MEMBERS(OdBmSSetTracker);

  virtual bool append(const OdBmObjectId&  id, const OdDbSelectionMethod* pMethod) = 0;
  virtual bool remove(const OdBmObjectId&  id, const OdDbSelectionMethod* pMethod) = 0;
};

typedef OdSmartPtr<OdBmSSetTracker> OdBmSSetTrackerPtr;


/** \details
    This class implements geometric interactive user IO functionality for custom interactive command objects.
    Corresponding C++ library: TB_DB
*/
class ODRX_ABSTRACT TB_DB_EXPORT OdBmUserIO : public OdEdBaseUserIO
{
public:
  ODRX_DECLARE_MEMBERS(OdBmUserIO);

//  virtual void setPickfirst(OdBmSelectionSet* pSSet) = 0;

  /** \details
    Returns user input of a color.

    \param prompt [in]  Message displayed to prompt the user.
    \param options [in]  Combination of OdEd::GetPointOptions enum values.
    \param pDefaultValue [in]  Pointer to a default value to return if an empty string is received as input.
    \param keywords [in]  Keyword string.
    \param pTracker [in]  Pointer to a User IO tracker.

    \remarks
    This function uses the underlying OdEdBaseIO functions putString and getString for low
    level output and input.

    If prompt is an empty string, a default prompt string is used.
  */
  virtual OdBmCmColor getColor( const OdString& prompt,
                                int options = OdEd::kInpDefault,
                                const OdCmColorBase* pDefaultValue = 0,
                                const OdString& keywords = OdString::kEmpty,
                                OdEdColorTracker* pTracker = 0) = 0;

  /** \details
      Launches interactive object selection to fill selection set.

      \param prompt [in]  Message displayed to prompt the user.
      \param options [in]  Combination of OdEd::GetPointOptions enum values.
      \param pDefaultValue [in]  Pointer to a default value to return if an empty string is received as input.
      \param keywords [in]  Keyword string.
      \param pTracker [in]  Pointer to a User IO tracker.

      \remarks
      Each subsequent call to this function modifies current selection set.
      Returned value is guaranteed to be not null.
  */
  virtual OdBmSelectionSetPtr select(const OdString& prompt = OdString::kEmpty,
                                     int options = OdEd::kSelDefault,
                                     const OdBmSelectionSet* pDefaultValue = 0,
                                     const OdString& keywords = OdString::kEmpty,
                                     OdBmSSetTracker* pTracker = 0) = 0;

  /** \details
      Returns user input of a color as wrapped value.
  */
  virtual OdSharedPtr<OdCmColorBase> getCmColor(const OdString& prompt,
                                                int options = OdEd::kInpDefault,
                                                const OdCmColorBase* pDefaultValue = 0,
                                                const OdString& keywords = OdString::kEmpty,
                                                OdEdColorTracker* pTracker = 0);
};
/** \details
  This template class is a specialization of the OdSmartPtr class for OdDbUserIO object pointers.
*/
typedef OdSmartPtr<OdBmUserIO> OdBmUserIOPtr;

#endif //#ifndef _ODBMUSERIO_H_INCLUDED_
