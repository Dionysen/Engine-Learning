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

#ifndef _BM_DIRECTSHAPEOPTIONS_H_
#define _BM_DIRECTSHAPEOPTIONS_H_
#include "Database/Enums/BmDirectShapeReferencingOption.h"
#include "Database/Enums/BmDirectShapeRoomBoundingOption.h"


//----------------------------------------------------------
//
// OdBmDirectShapeOptions
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmDirectShapeOptions {
public:
  OdBmDirectShapeOptions();
  OdBmDirectShapeOptions(const OdBmDirectShapeOptions& originalObject);
  OdBmDirectShapeOptions& operator=(const OdBmDirectShapeOptions& originalObject);
  bool operator==(const OdBmDirectShapeOptions& other) const;
  bool operator!=(const OdBmDirectShapeOptions& other) const;
  OdBm::DirectShapeReferencingOption::Enum getReferencingOption() const;
  OdResult setReferencingOption(OdBm::DirectShapeReferencingOption::Enum);
  OdBm::DirectShapeRoomBoundingOption::Enum getRoomBoundingOption() const;
  OdResult setRoomBoundingOption(OdBm::DirectShapeRoomBoundingOption::Enum);
  OdInt32 getPresentationType() const;
  OdResult setPresentationType(OdInt32);
  bool getAllowsChangeTypeId() const;
  OdResult setAllowsChangeTypeId(bool);
  bool getAllowsCopy() const;
  OdResult setAllowsCopy(bool);
  bool getAllowsLock() const;
  OdResult setAllowsLock(bool);
  bool getAllowsMove() const;
  OdResult setAllowsMove(bool);
  bool getAllowsTagAlongCurve() const;
  OdResult setAllowsTagAlongCurve(bool);
private:
  OdBm::DirectShapeReferencingOption::Enum m_referencingOption;
  OdBm::DirectShapeRoomBoundingOption::Enum m_roomBoundingOption;
  OdInt32 m_presentationType;
  bool m_allowsChangeTypeId;
  bool m_allowsCopy;
  bool m_allowsLock;
  bool m_allowsMove;
  bool m_allowsTagAlongCurve;

  //
  // Main functionality
  //
};
#endif // _BM_DIRECTSHAPEOPTIONS_H_

