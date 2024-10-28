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

#ifndef _BM_RBSPIPECONNECTIONS_H_
#define _BM_RBSPIPECONNECTIONS_H_
#include "Base/BmObject.h"

class OdBmRbsPipeSchedules;
typedef OdSmartPtr<OdBmRbsPipeSchedules> OdBmRbsPipeSchedulesPtr;
class OdBmObjectId;

class OdBmRbsPipeConnections;
class OdBmRbsPipeConnectionsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsPipeConnections object.
 */
typedef OdSmartPtr<OdBmRbsPipeConnections> OdBmRbsPipeConnectionsPtr;

/** \details
 A data type that represents an array of OdBmRbsPipeConnections objects.
 */
typedef OdArray<OdBmRbsPipeConnectionsPtr> OdBmRbsPipeConnectionsPtrArray;

//----------------------------------------------------------
//
// OdBmRbsPipeConnections
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsPipeConnections : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsPipeConnections);
public:
  void getConnectionMapSchedules(OdBmMap<OdBmObjectId, OdBmRbsPipeSchedulesPtr> &) const;
  OdResult setConnectionMapSchedules(const OdBmMap<OdBmObjectId, OdBmRbsPipeSchedulesPtr>&);
  //
  // Main functionality
  //
};
#endif // _BM_RBSPIPECONNECTIONS_H_

