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

#ifndef _ODBMUNITSFORMATTER_H_INCLUDED_
#define _ODBMUNITSFORMATTER_H_INCLUDED_

#include "OdUnitsFormatter.h"
#include "Base/BmCmColor.h"

class OdGePoint3d;

/** Description:
    This class defines the interface for a Units Formatter.
    {group:OdBm_Classes}

    <group Database_Classes>
*/
class ODRX_ABSTRACT TB_DB_EXPORT OdBmUnitsFormatter : public OdUnitsFormatter
{
public:
  ODRX_DECLARE_MEMBERS(OdBmUnitsFormatter);

  virtual OdString formatPoint(const OdGePoint3d& value) const = 0;

  /** Description:
    Returns the specified *string* as a point *value*.
    Arguments:
    string (I) String to unformat.
  */
  virtual OdGePoint3d unformatPoint(const OdString& string) const = 0;

  /** Description:
  Returns the specified color *value* or OdBmCmColor object as a *string*.
  Arguments:
  value (I) Value to format.
  */
  static OdString formatColor(const OdBmCmColor& value);

  /** Description:
  Returns the specified *string* as an OdBmCmColor object.
  Arguments:
  string (I) String to unformat.
  */
  static OdBmCmColor unformatColor(const OdString& string);
};

/** Description:
  This template class is a specialization of the OdSmartPtr class for OdBmUnitsFormatter object pointers.
*/
typedef OdSmartPtr<OdBmUnitsFormatter> OdBmUnitsFormatterPtr;


#endif //#ifndef _ODBMUNITSFORMATTER_H_INCLUDED_
