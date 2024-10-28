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

#ifndef _BM_TRANSACTIONSPE_H_
#define _BM_TRANSACTIONSPE_H_

class OdBmDatabase;

typedef OdUInt64 OdBmSnapshotId;

class ODRX_ABSTRACT TB_DB_EXPORT OdBmTransactionsPE : public OdRxObject {
public:
  //DOM-IGNORE-BEGIN
  ODRX_DECLARE_MEMBERS(OdBmTransactionsPE);
  //DOM-IGNORE-END

  /** \details
    Creates a snapshot of a database.
    
    \param pDb [in] A database.
  */
  virtual OdBmSnapshotId initSnapshot(OdBmDatabase* pDb) const = 0;

  /** \details
    Extends a snapshot of a database.
    
    \param id [in] The id of snapshot to be extended.
    \param objectId [in] Object to be added to a snapshot.
  */
  virtual void extendSnapshot(const OdBmSnapshotId& id,
                              const OdBmObjectId& objectId) const = 0;

  /** \details
    Applies a snapshot to a database.
    
    \param pStream [in] Id of a database snapshot.
    \param pDb [in] Database, to apply a snapshot to.
  */
  virtual void applySnapshot(const OdBmSnapshotId& id,
                             OdBmDatabase* pDb) const = 0;
  /** \details
    Extends lhs snapshot with data of rhs snapshot.
    
    \param lhs [in] A database snapshot id.
    \param rhs [in] A database snapshot id.
  */
  virtual void mergeSnapshots(const OdBmSnapshotId& lhs, const OdBmSnapshotId& rhs) const = 0;


  /** \details
    Drop object id from snapshot.

    \param snapshotId [in] A database snapshot id.
    \param objectId [in] Object to be dropped from snapshot.
  */
  virtual void
  dropFromSnapshot(const OdBmSnapshotId& snapshotId,
                    const OdBmObjectId& objectId) const = 0;
};

typedef OdSmartPtr<OdBmTransactionsPE> OdBmTransactionsPEPtr;

#endif // _BM_TRANSACTIONSPE_H_
