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

#ifndef _BM_INTERIORELEVARROW_H_
#define _BM_INTERIORELEVARROW_H_
#include "Database/Entities/BmSectionGraphics.h"

class OdBmObjectId;

class OdBmInteriorElevArrow;
class OdBmInteriorElevArrowImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmInteriorElevArrow object.
 */
typedef OdSmartPtr<OdBmInteriorElevArrow> OdBmInteriorElevArrowPtr;

/** \details
 A data type that represents an array of OdBmInteriorElevArrow objects.
 */
typedef OdArray<OdBmInteriorElevArrowPtr> OdBmInteriorElevArrowPtrArray;

//----------------------------------------------------------
//
// OdBmInteriorElevArrow
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmInteriorElevArrow : public OdBmSectionGraphics {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmInteriorElevArrow);
public:
  OdGePoint3d getPos() const;
  OdBmObjectId getParentId() const;
  OdBmObjectId getAssocDatumId() const;
  OdBmObjectPtr getEndAttach0() const;
  OdBmObjectPtr getEndAttach1() const;
  OdBmObjectPtr getBottomAttach() const;
  OdBmObjectPtr getTopAttach() const;
  //
  // Main functionality
  //


};


#endif // _BM_INTERIORELEVARROW_H_

