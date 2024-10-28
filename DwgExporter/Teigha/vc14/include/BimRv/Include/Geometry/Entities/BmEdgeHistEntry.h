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

#ifndef _BM_EDGEHISTENTRY_H_
#define _BM_EDGEHISTENTRY_H_
#include "Geometry/Entities/BmEdgeHist.h"


//----------------------------------------------------------
//
// OdBmEdgeHistEntry
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmEdgeHistEntry {
public:
  OdBmEdgeHistEntry();
  OdBmEdgeHistEntry(const OdBmEdgeHistEntry& originalObject);
  OdBmEdgeHistEntry& operator=(const OdBmEdgeHistEntry& originalObject);
  bool operator==(const OdBmEdgeHistEntry& other) const;
  bool operator!=(const OdBmEdgeHistEntry& other) const;
  OdInt32 getId() const;
  OdResult setId(OdInt32);
  OdBmEdgeHist getHist() const;
  OdResult setHist(const OdBmEdgeHist&);
private:
  OdInt32 m_id;
  OdBmEdgeHist m_hist;

  //
  // Main functionality
  //

public:
  OdBmEdgeHistEntry(const OdInt32 id, const OdBmEdgeHist& edgeHist);
  bool operator <(const OdBmEdgeHistEntry& object) const;
};

#endif // _BM_EDGEHISTENTRY_H_

