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


#ifndef ODBM_DBSUBENT_H
#define ODBM_DBSUBENT_H /*!DOM*/

#include "DbBaseSubentId.h"
#include "Base/BmObjectId.h"
#include "Base/BmObjectIdArray.h"

/** \details
    This class uniquely defines subentities within in an OdBmDatabase instance.

    \remarks
    Each OdBmFullSubentPath object consists of a OdDbSubentId object and
    an ordered array of Object IDs. The SubentId consists the index and subentType
    of the object. The array of Object IDs defines the path to the
    subentity from the outermost entity (in PaperSpace or ModelSpace)
    to the entity containing the subentity.

    Corresponding C++ library: TD_Db

    <group OdBm_Classes>
*/
class TB_DB_EXPORT OdBmFullSubentPath : public OdDbBaseFullSubentPath
{
public:
  OdBmFullSubentPath()
  {
  }
  OdBmFullSubentPath(OdGsMarker index)
    : OdDbBaseFullSubentPath(OdDb::kNullSubentType, index)
  {
  }
  OdBmFullSubentPath(OdBmObjectId entId, OdDbSubentId subId)
    : OdDbBaseFullSubentPath(entId, subId)
  {
  }
  OdBmFullSubentPath(OdBmObjectId entId, OdGsMarker index)
    : OdDbBaseFullSubentPath(entId, OdDb::kNullSubentType, index)
  {
  }
  OdBmFullSubentPath(OdBmObjectIdArray objectIds, OdDbSubentId subId)
    : OdDbBaseFullSubentPath(*reinterpret_cast<OdDbStubPtrArray*>(&objectIds), subId)
  {
  }
  OdBmFullSubentPath(OdDbStubPtrArray objectIds, OdDbSubentId subId)
    : OdDbBaseFullSubentPath(objectIds, subId)
  {
  }

  void objectIds(OdBmObjectIdArray& objectIdsArg) const
  {
    objectIdsArg = *reinterpret_cast<const OdBmObjectIdArray*>(&m_ObjectIds);
  }

  OdBmFullSubentPath& operator =(const OdBmFullSubentPath& fullSubentPath)
  {
    OdDbBaseFullSubentPath::operator=(fullSubentPath);
    return *this;
  }

  bool operator==(const OdBmFullSubentPath& fullSubentPath) const
  {
    return OdDbBaseFullSubentPath::operator==(fullSubentPath);
  }

  /** \details
    Returns a reference to the embedded OdBmObjectIdArray object in this FullSubentPath object.
  */
  const OdBmObjectIdArray& objectIds() const
  {
    return *reinterpret_cast<const OdBmObjectIdArray*>(&m_ObjectIds);
  }
  OdBmObjectIdArray& objectIds()
  {
    return *reinterpret_cast<OdBmObjectIdArray*>(&m_ObjectIds);
  }

  /** \details
    Returns a reference to, or a copy of, the embedded OdDbSubentId object in this FullSubentPath object.
  */
  /*const OdDbSubentId subentId() const
  {
    return m_SubentId;
  }

  OdDbSubentId& subentId()
  {
    return m_SubentId;
  }*/
};

/** \details
    This template class is a specialization of the OdArray class for OdBmFullSubentPath object pointers.
*/
typedef OdArray<OdBmFullSubentPath> OdBmFullSubentPathArray;

#endif


