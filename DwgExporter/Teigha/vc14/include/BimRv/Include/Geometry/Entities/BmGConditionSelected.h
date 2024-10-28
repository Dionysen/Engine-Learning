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

#ifndef _BM_GCONDITIONSELECTED_H_
#define _BM_GCONDITIONSELECTED_H_
#include "Geometry/Entities/BmGConditionBase.h"

class OdBmObjectId;

class OdBmGConditionSelected;
class OdBmGConditionSelectedImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGConditionSelected object.
 */
typedef OdSmartPtr<OdBmGConditionSelected> OdBmGConditionSelectedPtr;

/** \details
 A data type that represents an array of OdBmGConditionSelected objects.
 */
typedef OdArray<OdBmGConditionSelectedPtr> OdBmGConditionSelectedPtrArray;

//----------------------------------------------------------
//
// OdBmGConditionSelected
//
//----------------------------------------------------------

/** \details
    This class stores data of a condition of the selected objects in DBView.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGConditionSelected : public OdBmGConditionBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGConditionSelected);
public:
  /** \details
    Returns ID of the selected database view as an object of the OdBmObjectId class.
  */
  OdBmObjectId getDBViewId() const;
  //
  // Main functionality
  //


};


#endif // _BM_GCONDITIONSELECTED_H_

