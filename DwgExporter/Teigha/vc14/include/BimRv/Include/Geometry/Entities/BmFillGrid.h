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

#ifndef _BM_FILLGRID_H_
#define _BM_FILLGRID_H_
#include "Base/BmObject.h"



class OdBmFillGrid;
class OdBmFillGridImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFillGrid object.
 */
typedef OdSmartPtr<OdBmFillGrid> OdBmFillGridPtr;

/** \details
 A data type that represents an array of OdBmFillGrid objects.
 */
typedef OdArray<OdBmFillGridPtr> OdBmFillGridPtrArray;

//----------------------------------------------------------
//
// OdBmFillGrid
//
//----------------------------------------------------------

/** \details
    This class represents a grid line in a fill pattern.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFillGrid : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFillGrid);
public:
  /** \details
    Returns the angle of the fill grid.
  */
  double getAngle() const;
  /** \details
    Returns the origin 2D point of the fill grid.
  */
  OdGePoint2d getOrigin() const;
  /** \details
    Returns the offset and shift of the fill grid as tatic array doubles.

    \param idx [in] Input index of deltas.
  */
  double getDeltasItem(OdUInt32 idx) const;
  /** details
    Returns the segments of the fill grid as an array of doubles.

    \param OdDoubleArray [out] Output segments of the fill grid.
  */
  void getSegments(OdDoubleArray &) const;
  //
  // Main functionality
  //

  /** \details
    Returns length of the pattern per unit area.
  */
  double calculateLengthPerArea() const;

  /** \details
    Returns number of the segments of the pattern per unit area.
  */
  double calculateStrokesPerArea() const;

  /** \details
    Returns number of solid lines of the pattern per unit length.
  */
  double calculateLinesPerLength() const;

  /** \details
    Returns the shift of the fill grid.
  */
  double getShift() const;

  /** \details
    Returns the offset of the fill grid.
  */
  double getOffset() const;
};

#endif // _BM_FILLGRID_H_

