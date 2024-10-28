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

#ifndef _BM_FILLPATTERNDATA_H_
#define _BM_FILLPATTERNDATA_H_
#include "Base/BmObject.h"

class OdBmFillGrid;
typedef OdSmartPtr<OdBmFillGrid> OdBmFillGridPtr;

class OdBmFillPatternData;
class OdBmFillPatternDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFillPatternData object.
 */
typedef OdSmartPtr<OdBmFillPatternData> OdBmFillPatternDataPtr;

/** \details
 A data type that represents an array of OdBmFillPatternData objects.
 */
typedef OdArray<OdBmFillPatternDataPtr> OdBmFillPatternDataPtrArray;

//----------------------------------------------------------
//
// OdBmFillPatternData
//
//----------------------------------------------------------

/** \details
    This class stores fill pattern data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFillPatternData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFillPatternData);
public:
  /** \details
    Returns the window size.
  */
  double getWindowSize() const;
  /** \details
    Returns the length of the lines placed on a unit area.
  */
  double getLengthPerArea() const;
  /** \details
    Returns the number of strokes placed on a unit area.
  */
  double getStrokesPerArea() const;
  /** \details
    Returns the number of lines placed on a unit length.
  */
  double getLinesPerLength() const;
  /** \details
    Returns the fill grids of this pattern as an array of fill grids.

    \param OdArray<OdBmFillGridPtr> [out] Output fill grids.
  */
  void getFillGrids(OdArray<OdBmFillGridPtr> &) const;
  //
  // Main functionality
  //


};

#endif // _BM_FILLPATTERNDATA_H_

