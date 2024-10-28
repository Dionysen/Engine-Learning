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

#ifndef _BM_SPOTELEVATIONSTYLE_H_
#define _BM_SPOTELEVATIONSTYLE_H_
#include "Database/Entities/BmDimensionStyle.h"

class OdBmFormatOptions;
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;

class OdBmSpotElevationStyle;
class OdBmSpotElevationStyleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSpotElevationStyle object.
 */
typedef OdSmartPtr<OdBmSpotElevationStyle> OdBmSpotElevationStylePtr;

/** \details
 A data type that represents an array of OdBmSpotElevationStyle objects.
 */
typedef OdArray<OdBmSpotElevationStylePtr> OdBmSpotElevationStylePtrArray;

//----------------------------------------------------------
//
// OdBmSpotElevationStyle
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmSpotElevationStyle : public OdBmDimensionStyle {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSpotElevationStyle);
public:
  OdString getSEIndNS() const;
  OdString getSEIndEW() const;
  OdString getSEIndElevation() const;
  OdString getSEIndTop() const;
  OdString getSEIndBottom() const;
  double getSEHorizOffset() const;
  double getSELeaderLength() const;
  OdInt32 getSeBase() const;
  OdInt32 getScBase() const;
  OdInt32 getSETextOrientation() const;
  OdInt32 getSEReadConvention() const;
  OdInt32 getSETopValue() const;
  OdInt32 getSEBotValue() const;
  OdInt32 getSEIndType() const;
  OdInt32 getSEIndTypeTop() const;
  OdInt32 getSEIndTypeBottom() const;
  OdInt32 getSETextLocation() const;
  OdInt32 getSESlopeDir() const;
  bool getIsSELeader() const;
  bool getIsSEVerticalFlip() const;
  bool getIsSERotateWithComponent() const;
  bool getIsSEIncludeElevation() const;
  OdBmFormatOptionsPtr getSlopeFormatOptions() const;
  OdBmFormatOptionsPtr getSlopeFormatOptionsAlternate() const;
  OdString getAslIndStation() const;
  bool getAslIncludeStation() const;
  //
  // Main functionality
  //


};


#endif // _BM_SPOTELEVATIONSTYLE_H_

