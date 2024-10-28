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

#ifndef _BM_REBARINSTBASE_H_
#define _BM_REBARINSTBASE_H_
#include "Database/Entities/BmCellInterface.h"

class OdBmParamVector;
typedef OdSmartPtr<OdBmParamVector> OdBmParamVectorPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRebarInstBase;
class OdBmRebarInstBaseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarInstBase object.
 */
typedef OdSmartPtr<OdBmRebarInstBase> OdBmRebarInstBasePtr;

/** \details
 A data type that represents an array of OdBmRebarInstBase objects.
 */
typedef OdArray<OdBmRebarInstBasePtr> OdBmRebarInstBasePtrArray;

//----------------------------------------------------------
//
// OdBmRebarInstBase
//
//----------------------------------------------------------

/** \details
Base class for implementation of CellInterface for Rebar instance.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarInstBase : public OdBmCellInterface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarInstBase);
public:
  /** \details
    Returns the numbering partition.
  */
  OdString getNumberingPartition() const;
  /** \details
    Returns the parameters.
  */
  OdBmParamVectorPtr getParams() const;
  /** \details
    Returns the bar length.
  */
  double getBarLength() const;
  /** \details
    Returns the ending parameter.
  */
  double getEndPar() const;
  /** \details
    Returns the maximum spacing.
  */
  double getMaxSpacing() const;
  /** \details
    Returns the bar type id.
  */
  OdBmObjectId getBarTypeId() const;
  OdBmObjectId getCouplerIdItem(OdUInt32 idx) const;
  /** \details
    Returns the distribution type.
  */
  OdInt32 getDistributionType() const;
  OdInt32 getHookOrient0() const;
  OdInt32 getHookOrient1() const;
  OdBmObjectId getHookTypeId0() const;
  OdBmObjectId getHookTypeId1() const;
  /** \details
    Returns the layout rule.
  */
  OdInt32 getLayoutRule() const;
  OdInt32 getNumberOfBarPositions() const;
  /** \details
    Returns the shape id.
  */
  OdBmObjectId getShapeId() const;
  bool getIncludeFirstBar() const;
  bool getIncludeLastBar() const;
  double getOrientationAngleAtEnd() const;
  double getOrientationAngleAtStart() const;
  OdBmObjectId getEndTreatmentTypeId0() const;
  OdBmObjectId getEndTreatmentTypeId1() const;
  //
  // Main functionality
  //

  /** \details
    Returns the quantity.
  */
  OdInt32 getQuantity() const;
};
#endif // _BM_REBARINSTBASE_H_

