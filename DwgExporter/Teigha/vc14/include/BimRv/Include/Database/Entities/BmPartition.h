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

#ifndef _BM_PARTITION_H_
#define _BM_PARTITION_H_
#include "Database/Entities/BmExtendedPartitionInterface.h"

class OdBmDatabase;
class OdBmPartitionId;
class OdBmEpisodeId;

class OdBmPartition;
class OdBmPartitionImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPartition object.
 */
typedef OdSmartPtr<OdBmPartition> OdBmPartitionPtr;

/** \details
 A data type that represents an array of OdBmPartition objects.
 */
typedef OdArray<OdBmPartitionPtr> OdBmPartitionPtrArray;

//----------------------------------------------------------
//
// OdBmPartition
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPartition : public OdBmExtendedPartitionInterface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPartition);
public:
  OdGUID getGuidValue() const;
  OdResult setGuidValue(const OdGUID&);
  OdBmPartitionId getId() const;
  OdResult setId(const OdBmPartitionId&);
  OdBmEpisodeId getCreationDate() const;
  OdResult setCreationDate(const OdBmEpisodeId&);
  OdBmEpisodeId getLastModificationDate() const;
  OdResult setLastModificationDate(const OdBmEpisodeId&);
  OdBmPartitionId getDependentPartitionId() const;
  OdResult setDependentPartitionId(const OdBmPartitionId&);
  OdUInt32 getType() const;
  OdResult setType(OdUInt32);
  bool getDeleted() const;
  OdResult setDeleted(bool);
  OdString getName() const;
  OdResult setName(const OdString&);
  OdBmDatabase* getDatabase() const;
  OdResult setDatabase(OdBmDatabase*);
  //
  // Main functionality
  //


};


#endif // _BM_PARTITION_H_

