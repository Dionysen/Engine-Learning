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

#ifndef _BM_FORMVERTEXCONNECTION_H_
#define _BM_FORMVERTEXCONNECTION_H_
#include "Base/BmObject.h"

class OdBmFormVertexPair;
typedef OdSmartPtr<OdBmFormVertexPair> OdBmFormVertexPairPtr;
class OdBmObjectId;

class OdBmFormVertexConnection;
class OdBmFormVertexConnectionImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFormVertexConnection object.
 */
typedef OdSmartPtr<OdBmFormVertexConnection> OdBmFormVertexConnectionPtr;

/** \details
 A data type that represents an array of OdBmFormVertexConnection objects.
 */
typedef OdArray<OdBmFormVertexConnectionPtr> OdBmFormVertexConnectionPtrArray;

//----------------------------------------------------------
//
// OdBmFormVertexConnection
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmFormVertexConnection : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFormVertexConnection);
public:
  OdBmObjectId getFromNpsId() const;
  OdBmObjectId getToNpsId() const;
  bool getProfileUsesDegenRepOfOpenLoopItem(OdUInt32 idx) const;
  void getVertexPairs(OdArray<OdBmFormVertexPairPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_FORMVERTEXCONNECTION_H_

