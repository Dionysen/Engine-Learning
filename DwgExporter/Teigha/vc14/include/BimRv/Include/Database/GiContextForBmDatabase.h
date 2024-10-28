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
#ifndef __BM_GICONTEXTFORBMDATABASE_H__
#define __BM_GICONTEXTFORBMDATABASE_H__

#include "Geometry/BmGiContext.h"
#include "OdPlatform.h"
#include "TD_PackPush.h"
#include "StaticRxObject.h"
#include "Database/BmDatabaseReactor.h"

class OdBmDatabase;
class OdGiContextForBmDatabase;
typedef OdSmartPtr<OdGiContextForBmDatabase> OdGiContextForBmDatabasePtr;

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdGiContextForBmDatabase : public OdBmGiContext
{
  class TB_DB_EXPORT DatabaseHolder : public OdStaticRxObject<OdBmDatabaseReactor>
  {
  public:
    DatabaseHolder();
    ~DatabaseHolder();

    void setDatabase(OdBmDatabase * pDb);
    void goodbye(const OdBmDatabase* pDb);

    OdBmDatabase* m_pDb;
  } m_DbHolder;

public:
  ODRX_DECLARE_MEMBERS(OdGiContextForBmDatabase);
  OdGiContextForBmDatabase() {};

  virtual OdDbBaseDatabase* database() const;
  virtual OdGiDrawablePtr openDrawable(OdDbStub* drawableId);

  /** Description:
    Returns the *database* that is currently being vectorized.
  */
  OdBmDatabase* getDatabase() const;
  void setDatabase( OdBmDatabase* pBmDatabase );

  /** Description:
    Returns the OdGsClientViewInfo for the specified viewport.
    Arguments:
    vpId (I) Object ID of the viewport.
    viewInfo (O) Receives the client view info.
  */
  virtual void fillGsClientViewInfo(const OdBmObjectId& vpId, OdGsClientViewInfo& viewInfo);

  virtual OdIntPtr drawableFilterFunctionId(OdDbStub* viewportId) const;
  virtual OdUInt32 drawableFilterFunction(OdIntPtr functionId, const OdGiDrawable *pDrawable, OdUInt32 nFlags);
  virtual OdUInt32 numberOfIsolines() const;

  OdGiContextForBmDatabase* getContext( OdGiDrawableTraits* pDrwTraits );

  virtual void setHatchAsPolygon(SolidHatchAsPolygonMode mode) {};
};


#include "TD_PackPop.h"

#endif
