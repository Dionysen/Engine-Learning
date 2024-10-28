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

#ifndef _BM_PICKTOADJACENTPICKMAP_H_
#define _BM_PICKTOADJACENTPICKMAP_H_
#include "Base/BmObject.h"

class OdBmPickToPickMap;
typedef OdSmartPtr<OdBmPickToPickMap> OdBmPickToPickMapPtr;

class OdBmPickToAdjacentPickMap;
class OdBmPickToAdjacentPickMapImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPickToAdjacentPickMap object.
 */
typedef OdSmartPtr<OdBmPickToAdjacentPickMap> OdBmPickToAdjacentPickMapPtr;

/** \details
 A data type that represents an array of OdBmPickToAdjacentPickMap objects.
 */
typedef OdArray<OdBmPickToAdjacentPickMapPtr> OdBmPickToAdjacentPickMapPtrArray;

//----------------------------------------------------------
//
// OdBmPickToAdjacentPickMap
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmPickToAdjacentPickMap : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPickToAdjacentPickMap);
public:
  OdBmPickToPickMapPtr getMap() const;
  //
  // Main functionality
  //
};
#endif // _BM_PICKTOADJACENTPICKMAP_H_

