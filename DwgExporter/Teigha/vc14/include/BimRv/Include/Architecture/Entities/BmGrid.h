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

#ifndef _BM_GRID_H_
#define _BM_GRID_H_
#include "Database/Entities/BmDatumPlane.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGCurve.h"
// END: Includes

class OdBmGridChainMembershipCell;
typedef OdSmartPtr<OdBmGridChainMembershipCell> OdBmGridChainMembershipCellPtr;
class OdBmObjectId;

class OdBmGrid;
class OdBmGridImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGrid object.
 */
typedef OdSmartPtr<OdBmGrid> OdBmGridPtr;

/** \details
 A data type that represents an array of OdBmGrid objects.
 */
typedef OdArray<OdBmGridPtr> OdBmGridPtrArray;

//----------------------------------------------------------
//
// OdBmGrid
//
//----------------------------------------------------------

/** \details
    <group Architecture_Classes>
*/
class TB_ARCHITECTURE_EXPORT OdBmGrid : public OdBmDatumPlane {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGrid);
public:
  OdBmGridChainMembershipCellPtr getGridChainMembershipCell() const;
  OdBmObjectId getAttrId() const;
  bool getShowCenterMark() const;
  //
  // Main functionality
  //

  /** \details
   returns true if grid is curved, false otherwise
   */
  bool isCurved() const;

  /** \details
   returns curve defining the grid
   */
  OdBmGCurvePtr getCurve() const;
};
#endif // _BM_GRID_H_

