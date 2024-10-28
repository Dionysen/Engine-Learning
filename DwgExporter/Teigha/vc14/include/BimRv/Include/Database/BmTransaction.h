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

#ifndef _BM_TRANSACTION_H_
#define _BM_TRANSACTION_H_

#include "Database/BmDatabase.h"
#include "Database/Enums/BmTransactionStatus.h"
#include "Database/Enums/BmElementPart.h"
#include "Database/PE/BmTransactionsPE.h"

#define ODBM_TRANSACTION_BEGIN(NAME, DB)                                       \
  {                                                                            \
    OdBmTransaction __transaction(DB);                                         \
    try {                                                                      \
      OdBmTransaction& NAME = __transaction;

#define ODBM_TRANSACTION_END()                                                 \
    } catch (...) {                                                            \
      throw;                                                                   \
    }                                                                          \
  }

typedef OdInt64 OdBmTransactionId;

class TB_DB_EXPORT OdBmTransaction {
public:

  /** \details
    Constructor for OdBmTransaction.
    
    \param pDb [in] Database the transaction will be assigned to.
    \param rollback [in] Flag that states where a transaction can be rolled back.
  */
  OdBmTransaction(OdBmDatabase* pDb, const bool rollback = true);
  
  /** \details
    Destructor for OdBmTransaction.
  */
  ~OdBmTransaction();
  
  /** \details
    Returns the id of a transaction.
  */
  OdBmTransactionId id() const;

  /** \details
    Adds a new element to a transaction.

    \param id [in] Element identifier.
    \param isNewObject [in] Flag that states wheter an element is new.
  */
  void extend(const OdBmObjectId& id, const bool isNewObject = false);

  /** \details
    Adds a new element to a transaction.

    \param id [in] Element identifier.
    \param isNewObject [in] Flag that states wheter an element is new.
  */
  void extend(const OdBmObjectId::handle_type& value,
              const bool isNewObject = false);

  /** \details
    Checks if the element is already in a database.

    \param id [in] Element identifier.
    
    \returns True if an element with given id is in a database, false - otherwise.
  */
  bool contains(const OdBmObjectId& id) const;

  /** \details
    Checks if the element is already in a database.

    \param id [in] Element identifier.
    
    \returns True if an element with given id is in a database, false - otherwise.
  */
  bool contains(const OdBmObjectId::handle_type& id) const;

  /** \details
    Checks if an update is required for an element with given id.

    \param elemPart [in] Enum value.
    \param id [in] Element identifier.

    \remarks Possible values for elemPart:
              Header   - 1
              Body     - 2
              Geometry - 4
              
    \returns True if an update is required for an element with given id, false - otherwise.          
  */
  bool updateRequired(const OdBm::ElementPart::Enum elemPart,
                      const OdBmObjectId::handle_type& id) const;

  /** \details
    Checks if an update is required for an element with a given id.

    \param elemPart [in] Enum value.
    \param id [in] Element identifier.

    \remarks Possible values for elemPart:
              Header   - 1
              Body     - 2
              Geometry - 4
              
    \returns True if an update is required for an element with given id, false - otherwise. 
  */
  bool updateRequired(const OdBm::ElementPart::Enum elemPart,
                      const OdBmObjectId& id) const;

  /** \details
    Marks the element with given id as updated in the transation.

    \param elemPart [in] Enum value.
    \param id [in] Element identifier.

    \remarks Possible values for elemPart:
              Header   - 1
              Body     - 2
              Geometry - 4
  */
  void setUpdated(const OdBm::ElementPart::Enum elemPart,
                  const OdBmObjectId::handle_type& id);

  /** \details
    Marks the element with given id as updated in the transation.

    \param elemPart [in] Enum value.
    \param id [in] Element identifier.

    \remarks Possible values for elemPart:
              Header   - 1
              Body     - 2
              Geometry - 4
  */
  void setUpdated(const OdBm::ElementPart::Enum elemPart, const OdBmObjectId& id);
  
  /** \details
    Starts a transaction.
  */
  void start();

  /** \details
    Commits the current transaction.
  */
  void commit();
  
  /** \details
    Rolls back a transaction. (Transaction has to be meaningful)
  */
  void rollback();
  
  /** \details
    Returns the database.
  */
  const OdBmDatabase* database() const;
  
  /** \details
    Returns the database.
  */
  OdBmDatabase* database();
  
  /** \details
    Returns the current status of a transaction.
  */
  OdBm::TransactionStatus::Enum status() const;

  /** \details
    Notify transaction, that element with id is going to be added.
    
    \param id [in] Id of the element that will be added.
  */
  void pending(const OdBmObjectId& id);
private:
  OdBmTransaction(const OdBmTransaction& other);

  bool meaningful() const;
  OdBmSnapshotId snapshotId() const;

  std::set<OdBmObjectId> m_pending;
  OdBmTransaction* m_pParent;
  const bool m_meaningful;
  bool m_rollback;
  OdBmDatabase* m_pDb;
  OdBmTransactionId m_id;
  OdBmSnapshotId m_snapshotId;
  OdBm::TransactionStatus::Enum m_status;
  std::map<OdBmObjectId::handle_type, short> m_updates;
  std::set<OdBmObjectId> m_newObjects;
  std::set<OdBmObjectId> m_modifiedObjects;
};

#endif //#ifndef _BM_TRANSACTION_H_
