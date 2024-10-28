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

#ifndef _BM_GRIDATTRIBUTES_H_
#define _BM_GRIDATTRIBUTES_H_
#include "Database/Entities/BmLineAndTextAttributeSymbol.h"

class OdBmObjectId;

class OdBmGridAttributes;
class OdBmGridAttributesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGridAttributes object.
 */
typedef OdSmartPtr<OdBmGridAttributes> OdBmGridAttributesPtr;

/** \details
 A data type that represents an array of OdBmGridAttributes objects.
 */
typedef OdArray<OdBmGridAttributesPtr> OdBmGridAttributesPtrArray;

//----------------------------------------------------------
//
// OdBmGridAttributes
//
//----------------------------------------------------------

/** \details
    <group Architecture_Classes>
*/
class TB_ARCHITECTURE_EXPORT OdBmGridAttributes : public OdBmLineAndTextAttributeSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGridAttributes);
public:
  double getEndSegmentsLength() const;
  OdBmObjectId getLeaderCategoryId() const;
  OdBmObjectId getFamilyTagId() const;
  OdBmObjectId getCategoryForCenterSegment() const;
  OdInt32 getCenterSegmentStyle() const;
  OdInt32 getBubbleLocInElev() const;
  bool getBubbleAtEnd1() const;
  bool getBubbleAtEnd2() const;
  //
  // Main functionality
  //
};
#endif // _BM_GRIDATTRIBUTES_H_

