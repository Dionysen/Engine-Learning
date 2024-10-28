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

#ifndef _BM_SLAVETRACKERCELL_H_
#define _BM_SLAVETRACKERCELL_H_
#include "Database/Entities/BmCell.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmSlaveTrackerCell;
class OdBmSlaveTrackerCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSlaveTrackerCell object.
 */
typedef OdSmartPtr<OdBmSlaveTrackerCell> OdBmSlaveTrackerCellPtr;

/** \details
 A data type that represents an array of OdBmSlaveTrackerCell objects.
 */
typedef OdArray<OdBmSlaveTrackerCellPtr> OdBmSlaveTrackerCellPtrArray;

//----------------------------------------------------------
//
// OdBmSlaveTrackerCell
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmSlaveTrackerCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSlaveTrackerCell);
public:
  void getDeferredDeletedSlaves(OdBmObjectIdArray &) const;
  void getInstanceToSlaveMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getNewInstances(OdBmObjectIdArray &) const;
  void getNewSlaves(OdBmObjectIdArray &) const;
  void getSlaveToInstancesMap(OdBmMap<OdBmObjectId, OdBmSet<OdBmObjectId> > &) const;
  //
  // Main functionality
  //
};
#endif // _BM_SLAVETRACKERCELL_H_

