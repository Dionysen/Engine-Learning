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

#ifndef _BM_RECTANGULARGRID_H_
#define _BM_RECTANGULARGRID_H_
#include "Base/BmObject.h"

class OdBmGridSegment;
typedef OdSmartPtr<OdBmGridSegment> OdBmGridSegmentPtr;
class OdBmRectGridRegion;
typedef OdSmartPtr<OdBmRectGridRegion> OdBmRectGridRegionPtr;

class OdBmRectangularGrid;
class OdBmRectangularGridImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRectangularGrid object.
 */
typedef OdSmartPtr<OdBmRectangularGrid> OdBmRectangularGridPtr;

/** \details
 A data type that represents an array of OdBmRectangularGrid objects.
 */
typedef OdArray<OdBmRectangularGridPtr> OdBmRectangularGridPtrArray;

//----------------------------------------------------------
//
// OdBmRectangularGrid
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRectangularGrid : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRectangularGrid);
public:
  void getSegments(OdArray<OdBmGridSegmentPtr> &) const;
  void getRegions(OdArray<OdBmRectGridRegionPtr> &) const;
  double getTol() const;
  //
  // Main functionality
  //

  /** \details
    Calculates the total width of a grid.
    
    \returns Total width of a grid.
  */
  double getTotalWidth() const;
};


#endif // _BM_RECTANGULARGRID_H_

