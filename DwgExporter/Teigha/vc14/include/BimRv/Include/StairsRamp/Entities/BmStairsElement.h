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

#ifndef _BM_STAIRSELEMENT_H_
#define _BM_STAIRSELEMENT_H_
#include "Database/BmElement.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStairsElement;
class OdBmStairsElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsElement object.
 */
typedef OdSmartPtr<OdBmStairsElement> OdBmStairsElementPtr;

/** \details
 A data type that represents an array of OdBmStairsElement objects.
 */
typedef OdArray<OdBmStairsElementPtr> OdBmStairsElementPtrArray;

//----------------------------------------------------------
//
// OdBmStairsElement
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsElement : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsElement);
public:
  void getRunsAndLandings(OdBmObjectIdArray &) const;
  void getSupports(OdBmObjectIdArray &) const;
  double getBaseLevelOffset() const;
  double getTopLevelOffset() const;
  double getStairsHeight() const;
  double getActualRiserHeight() const;
  double getActualTreadDepth() const;
  OdInt32 getActualNumberOfRisers() const;
  OdInt32 getTriserNumberBaseIndex() const;
  OdBmObjectId getBaseLevelId() const;
  OdBmObjectId getTopLevelId() const;
  OdBmObjectId getMultistoryUpToLevelId() const;
  OdBmObjectId getTypeId() const;
  bool getIsRailingsCreated() const;
  bool getIsUserChangedRiserHeight() const;
  void getStairsRailingPaths(OdArray<OdBmObjectPtr> &) const;
  void getStairsBndryCurves2d(OdArray<OdBmObjectPtr> &) const;
  void getRegisteredRailings(OdBmObjectIdArray &) const;
  bool getIsEdited() const;
  bool getIsPinned() const;
  //
  // Main functionality
  //

  //The method is used for STAIRS_STAIRS_HEIGHT
  double getStairsHeightParam() const;

  double getStairsBottomElevation() const;
  double getStairsTopElevation() const;

  /** \details
    Retrieves the elevation value read from a file.
    
    \returns Eleveation value read from a file.
  */
  double getBaseElevation() const;
};
#endif // _BM_STAIRSELEMENT_H_

