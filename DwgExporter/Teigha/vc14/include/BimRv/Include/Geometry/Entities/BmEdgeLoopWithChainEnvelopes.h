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

#ifndef _BM_EDGELOOPWITHCHAINENVELOPES_H_
#define _BM_EDGELOOPWITHCHAINENVELOPES_H_
#include "Geometry/Entities/BmEdgeLoop.h"

class OdBmEdgeChainWithEnvelope;
typedef OdSmartPtr<OdBmEdgeChainWithEnvelope> OdBmEdgeChainWithEnvelopePtr;

class OdBmEdgeLoopWithChainEnvelopes;
class OdBmEdgeLoopWithChainEnvelopesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEdgeLoopWithChainEnvelopes object.
 */
typedef OdSmartPtr<OdBmEdgeLoopWithChainEnvelopes> OdBmEdgeLoopWithChainEnvelopesPtr;

/** \details
 A data type that represents an array of OdBmEdgeLoopWithChainEnvelopes objects.
 */
typedef OdArray<OdBmEdgeLoopWithChainEnvelopesPtr> OdBmEdgeLoopWithChainEnvelopesPtrArray;

//----------------------------------------------------------
//
// OdBmEdgeLoopWithChainEnvelopes
//
//----------------------------------------------------------

/** \details
    This class represents a loop of edge chains with envelopes.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmEdgeLoopWithChainEnvelopes : public OdBmEdgeLoop {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEdgeLoopWithChainEnvelopes);
public:
  /** \details
    Returns edge chains with envelopes as an array.

      \param OdArray<OdBmEdgeChainWithEnvelopePtr> [out] Output array of edge chains with envelopes.
  */
  void getChainsWithEnvelopes(OdArray<OdBmEdgeChainWithEnvelopePtr> &) const;
  //
  // Main functionality
  //


};

#endif // _BM_EDGELOOPWITHCHAINENVELOPES_H_

