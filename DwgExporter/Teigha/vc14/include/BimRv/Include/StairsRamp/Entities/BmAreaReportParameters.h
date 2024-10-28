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

#ifndef _BM_AREAREPORTPARAMETERS_H_
#define _BM_AREAREPORTPARAMETERS_H_
#include "Base/BmObject.h"

class OdBmFormatOptions;
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmAreaReportParameters;
class OdBmAreaReportParametersImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAreaReportParameters object.
 */
typedef OdSmartPtr<OdBmAreaReportParameters> OdBmAreaReportParametersPtr;

/** \details
 A data type that represents an array of OdBmAreaReportParameters objects.
 */
typedef OdArray<OdBmAreaReportParametersPtr> OdBmAreaReportParametersPtrArray;

//----------------------------------------------------------
//
// OdBmAreaReportParameters
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmAreaReportParameters : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAreaReportParameters);
public:
  double getFontSizeItem(OdUInt32 idx) const;
  OdInt32 getFontColorItem(OdUInt32 idx) const;
  OdBmObjectId getIdFontItem(OdUInt32 idx) const;
  OdBmObjectId getIdCategoryItem(OdUInt32 idx) const;
  OdInt32 getSizeTriangle() const;
  OdInt32 getSizeBorder() const;
  OdInt32 getSizeColumn() const;
  bool getFontBoldItem(OdUInt32 idx) const;
  bool getFontItalicItem(OdUInt32 idx) const;
  bool getFontUnderlineItem(OdUInt32 idx) const;
  bool getWithExclusions() const;
  bool getWindowsAsPercents() const;
  OdString getFontAnotName() const;
  OdString getFontTagName() const;
  OdString getName() const;
  OdString getPrefixTriangle() const;
  OdString getPrefixArcSector() const;
  OdBmFormatOptionsPtr getAngleFormat() const;
  OdBmFormatOptionsPtr getAreaFormat() const;
  OdBmFormatOptionsPtr getLengthFormat() const;
  //
  // Main functionality
  //


};


#endif // _BM_AREAREPORTPARAMETERS_H_

