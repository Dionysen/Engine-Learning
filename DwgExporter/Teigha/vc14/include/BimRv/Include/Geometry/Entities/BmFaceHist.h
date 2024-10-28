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

#ifndef _BM_FACEHIST_H_
#define _BM_FACEHIST_H_
#include "Geometry/Enums/BmFaceHistType.h"


//----------------------------------------------------------
//
// OdBmFaceHist
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFaceHist {
public:
  OdBmFaceHist();
  OdBmFaceHist(const OdBmFaceHist& originalObject);
  OdBmFaceHist& operator=(const OdBmFaceHist& originalObject);
  bool operator==(const OdBmFaceHist& other) const;
  bool operator!=(const OdBmFaceHist& other) const;
  OdInt32 getKeysItem(OdUInt32 idx) const;
private:
  OdInt32 m_keys[3];

  //
  // Main functionality
  //

public:
  typedef OdBmFaceHist self;
  typedef OdInt32 KeyContainerType[3];
  static const int ItemsCount = 3;

  OdBmFaceHist(const OdBm::FaceHistType::Enum nType, const OdInt32 keysItem1,
               const OdInt32 keysItem2);
  OdResult setKeys(const OdBm::FaceHistType::Enum nType, const OdInt32 keysItem1,
                   const OdInt32 keysItem2);
  OdResult setKeysItem(const OdUInt32 idx, const OdInt32);
  bool operator<(const OdBmFaceHist& object) const;
};

#endif // _BM_FACEHIST_H_

