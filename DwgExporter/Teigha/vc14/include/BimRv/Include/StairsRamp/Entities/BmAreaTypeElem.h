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

#ifndef _BM_AREATYPEELEM_H_
#define _BM_AREATYPEELEM_H_
#include "Database/BmElement.h"
#include "Common/Enums/BmAreaSpaceType.h"

class OdBmObjectId;

class OdBmAreaTypeElem;
class OdBmAreaTypeElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAreaTypeElem object.
 */
typedef OdSmartPtr<OdBmAreaTypeElem> OdBmAreaTypeElemPtr;

/** \details
 A data type that represents an array of OdBmAreaTypeElem objects.
 */
typedef OdArray<OdBmAreaTypeElemPtr> OdBmAreaTypeElemPtrArray;

//----------------------------------------------------------
//
// OdBmAreaTypeElem
//
//----------------------------------------------------------

/** \details
This class represents a type of an area element.

    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmAreaTypeElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAreaTypeElem);
public:
  /** \details
    Returns the area scheme id.
  */
  OdBmObjectId getAreaSchemeId() const;
  /** \details
    Returns the area space type.
    
    \remarks The returned value can be one of the following:
    <table>
      <b>None</b>               -1
      <b>AreaGross</b>           0
      <b>AreaExterior</b>        1
      <b>AreaBCA</b>             2
      <b>AreaExterior_2</b>      3
      <b>AreaFloor</b>           4
      <b>AreaMVP</b>             5
      <b>AreaOffice</b>          6
      <b>AreaStore</b>           7
    </table>
  */
  OdBm::AreaSpaceType::Enum getAreaSpaceType() const;
  //
  // Main functionality
  //


};


#endif // _BM_AREATYPEELEM_H_

