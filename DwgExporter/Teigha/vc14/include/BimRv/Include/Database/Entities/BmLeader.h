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

#ifndef _BM_LEADER_H_
#define _BM_LEADER_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/Enums/BmLeaderAttachment.h"
#include "Database/Enums/BmLeaderCondition.h"
#include "Database/Enums/BmLeaderShape.h"
// END: Includes



class OdBmLeader;
class OdBmLeaderImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLeader object.
 */
typedef OdSmartPtr<OdBmLeader> OdBmLeaderPtr;

/** \details
 A data type that represents an array of OdBmLeader objects.
 */
typedef OdArray<OdBmLeaderPtr> OdBmLeaderPtrArray;

//----------------------------------------------------------
//
// OdBmLeader
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmLeader : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLeader);
public:
  OdGePoint3d getEnd() const;
  OdResult setEnd(const OdGePoint3d&);
  OdGePoint3d getElbow() const;
  OdResult setElbow(const OdGePoint3d&);
  OdGePoint3d getAnchor() const;
  OdResult setAnchor(const OdGePoint3d&);
  double getSheetLength() const;
  OdResult setSheetLength(double);
  double getSheetElbowOffset() const;
  OdResult setSheetElbowOffset(double);
  double getElbowRatio() const;
  OdResult setElbowRatio(double);
  OdInt32 getType() const;
  OdResult setType(OdInt32);
  OdInt32 getExtraData() const;
  OdResult setExtraData(OdInt32);
  bool getStraight() const;
  OdResult setStraight(bool);
  //
  // Main functionality
  //


};


#endif // _BM_LEADER_H_

