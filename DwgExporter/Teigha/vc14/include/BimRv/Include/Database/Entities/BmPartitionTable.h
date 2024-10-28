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

#ifndef _BM_PARTITIONTABLE_H_
#define _BM_PARTITIONTABLE_H_
#include "Base/BmObject.h"

class OdBmDatabase;
class OdBmPartition;
typedef OdSmartPtr<OdBmPartition> OdBmPartitionPtr;
class OdBmPartitionId;

class OdBmPartitionTable;
class OdBmPartitionTableImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPartitionTable object.
 */
typedef OdSmartPtr<OdBmPartitionTable> OdBmPartitionTablePtr;

/** \details
 A data type that represents an array of OdBmPartitionTable objects.
 */
typedef OdArray<OdBmPartitionTablePtr> OdBmPartitionTablePtrArray;

//----------------------------------------------------------
//
// OdBmPartitionTable
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPartitionTable : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPartitionTable);
public:
  OdBmDatabase* getDatabase() const;
  void getSet(OdArray<OdBmPartitionPtr> &) const;
  OdResult setSet(const OdArray<OdBmPartitionPtr>&);
  OdUInt32 getNextPartitionId() const;
  OdResult setNextPartitionId(OdUInt32);
  OdBmPartitionId getActivePartitionId() const;
  OdResult setActivePartitionId(const OdBmPartitionId&);
  OdUInt32 getKnownEpisodeSetImplementation() const;
  OdResult setKnownEpisodeSetImplementation(OdUInt32);
  //
  // Main functionality
  //

  /** \details
    Returns OdGUID for the partition

    \param partId [in] Partition id
  */
  OdGUID getPartitionGUID(const OdBmPartitionId& partId) const;

  /** \details
    Returns OdBmPartitionId by OdGUID for the partition

    \param guid   [in]  guid for the partition
    \param partId [out] Partition id
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getPartitionId(const OdGUID& guid, OdBmPartitionId& partId) const;

};


#endif // _BM_PARTITIONTABLE_H_

