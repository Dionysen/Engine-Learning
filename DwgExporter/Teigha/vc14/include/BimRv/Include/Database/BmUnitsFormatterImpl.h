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

#ifndef _ODBMUNITSFORMATTER_H_IMPL_
#define _ODBMUNITSFORMATTER_H_IMPL_

#include "TD_PackPush.h"

#include "BmUnitsFormatter.h"
#include "Database/BmDatabase.h"

/** Description:
This class provides default implementation for OdDbUnitsFormatter.
{group:OdDb_Classes}

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmUnitsFormatterImpl : public OdBmUnitsFormatter
{
public:
  ODRX_DECLARE_MEMBERS(OdBmUnitsFormatterImpl);

  /** Description:
  Returns the specified distance *value* as a *string*.
  Arguments:
  value (I) Value to format.
  Remarks:
  The returned *value* depends on the DIMZIN, LUNITS, LUPREC, and UNITMODE system variables.
  */
  virtual OdString formatLinear(double value) const;

  /** Description:
  Returns the specified *string* as a distance *value*.
  Arguments:
  string (I) String to unformat.
  Remarks:
  The returned *value* depends on the UNITMODE system variable.
  */
  virtual double unformatLinear(const OdString& string) const;

  /** Description:
  Returns the specified angle *value* as a *string*.
  Arguments:
  value (I) Value to format.
  Remarks:
  The returned *value* depends on the ANGBASE, AUNITS, AUPREC, DIMZIN, and UNITMODE system variables.
  Note:
  All angles are expressed in radians.
  */
  virtual OdString formatAngle(double value) const;

  /** Description:
  Returns the specified *string* as an angle *value*.
  Arguments:
  string (I) String to unformat.
  Remarks:
  The returned *value* depends on the ANGBASE system variable.
  Note:
  All angles are expressed in radians.
  */
  virtual double unformatAngle(const OdString& string) const;

  /** Description:
  Returns the specified 3D point *value* as a *string*.
  Arguments:
  value (I) Value to format.
  Remarks:
  The returned *value* depends on the DIMZIN, LUNITS, LUPREC, and UNITMODE system variables.
  */
  virtual OdString formatPoint(const OdGePoint3d& value) const;

  /** Description:
  Returns the specified *string* as a point *value*.
  Arguments:
  string (I) String to unformat.
  */
  virtual OdGePoint3d unformatPoint(const OdString& string) const;

  void setDatabase(OdBmDatabase* db);

  virtual OdString formatCmColor(const OdCmColorBase& value) const;

  virtual OdSharedPtr<OdCmColorBase> unformatCmColor(const OdString& string) const;
protected:
  OdBmDatabase* m_pDb;
};

#include "TD_PackPop.h"

#endif // _ODBMUNITSFORMATTER_H_IMPL_
