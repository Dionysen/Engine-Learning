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

#ifndef _ODBMCOMMANDCONTEXT_H_INCLUDED_
#define _ODBMCOMMANDCONTEXT_H_INCLUDED_

#include "Database/BmDatabase.h"
#include "Ed/EdBaseUserIO.h"
#include "Ed/EdCommandContext.h"
#include "OdError.h"
#include "Database/BmUserIO.h"

class OdBmDatabase;
class OdBmCommandContext;

/** Description:
    This template class is a specialization of the OdSmartPtr class for OdBmCommandContext object pointers.
*/

#include "TD_PackPush.h"

/** Description:
    This class defines the interface for I/O and *database* access
    for custom commands during their execution.

    Remarks:
    Client applications that invoke custom commands, should use an instance of this
    class (or a subclass) to pass to the OdEdCommandStack::executeCommand function.
    Using this class instead of a true instance of OdEdCommandContext provides
    custom commands with *database* access.

    {group:OdDb_Classes}

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCommandContext : public OdEdCommandContext
{
public:
  ODRX_DECLARE_MEMBERS(OdBmCommandContext);

  /** Description:
      Returns a *database*, for use in a custom command.
  */
  virtual OdBmDatabase* database();

  OdBmUserIO* dbUserIO();
};

inline OdBmUserIO*
OdBmCommandContext::dbUserIO()
{
  ODA_ASSERT(userIO() && userIO()->isKindOf(OdBmUserIO::desc()));
  return static_cast<OdBmUserIO*>(userIO());
}

inline OdBmDatabase*
OdBmCommandContext::database()
{
  OdBmDatabase* pDb = OdBmDatabase::cast(baseDatabase()).get();
  if (!pDb)
    throw OdError(eNoDatabase);
  return pDb;
}
typedef OdSmartPtr<OdBmCommandContext> OdBmCommandContextPtr;

#include "TD_PackPop.h"

#endif //#ifndef _ODBMCOMMANDCONTEXT_H_INCLUDED_
