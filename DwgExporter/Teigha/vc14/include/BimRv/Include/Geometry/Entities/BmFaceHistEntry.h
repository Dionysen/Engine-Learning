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

#ifndef _BM_FACEHISTENTRY_H_
#define _BM_FACEHISTENTRY_H_
#include "Geometry/Entities/BmFaceHist.h"


//----------------------------------------------------------
//
// OdBmFaceHistEntry
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFaceHistEntry {
public:
  OdBmFaceHistEntry();
  OdBmFaceHistEntry(const OdBmFaceHistEntry& originalObject);
  OdBmFaceHistEntry& operator=(const OdBmFaceHistEntry& originalObject);
  bool operator==(const OdBmFaceHistEntry& other) const;
  bool operator!=(const OdBmFaceHistEntry& other) const;
  OdInt32 getId() const;
  OdResult setId(OdInt32);
  OdBmFaceHist getHist() const;
  OdResult setHist(const OdBmFaceHist&);
private:
  OdInt32 m_id;
  OdBmFaceHist m_hist;

  //
  // Main functionality
  //

public:
  OdBmFaceHistEntry(const OdInt32 id, const OdBmFaceHist& faceHist);
  bool operator <(const OdBmFaceHistEntry& object) const;
};

#endif // _BM_FACEHISTENTRY_H_

