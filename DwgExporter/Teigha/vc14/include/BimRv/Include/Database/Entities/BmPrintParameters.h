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

#ifndef _BM_PRINTPARAMETERS_H_
#define _BM_PRINTPARAMETERS_H_
#include "Base/BmObject.h"

class OdBmPrintFilters;
typedef OdSmartPtr<OdBmPrintFilters> OdBmPrintFiltersPtr;

class OdBmPrintParameters;
class OdBmPrintParametersImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPrintParameters object.
 */
typedef OdSmartPtr<OdBmPrintParameters> OdBmPrintParametersPtr;

/** \details
 A data type that represents an array of OdBmPrintParameters objects.
 */
typedef OdArray<OdBmPrintParametersPtr> OdBmPrintParametersPtrArray;

//----------------------------------------------------------
//
// OdBmPrintParameters
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPrintParameters : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPrintParameters);
public:
  OdString getLastPrinterName() const;
  OdResult setLastPrinterName(const OdString&);
  OdString getPaperSize() const;
  OdResult setPaperSize(const OdString&);
  OdString getPaperSource() const;
  OdResult setPaperSource(const OdString&);
  double getUserDefinedMarginX() const;
  OdResult setUserDefinedMarginX(double);
  double getUserDefinedMarginY() const;
  OdResult setUserDefinedMarginY(double);
  OdInt32 getNPaperSizeX() const;
  OdResult setNPaperSizeX(OdInt32);
  OdInt32 getNPaperSizeY() const;
  OdResult setNPaperSizeY(OdInt32);
  OdInt32 getNPaperSource() const;
  OdResult setNPaperSource(OdInt32);
  OdInt32 getNLastPrinterDPI() const;
  OdResult setNLastPrinterDPI(OdInt32);
  OdInt32 getNLastLogPixelsX() const;
  OdResult setNLastLogPixelsX(OdInt32);
  OdInt32 getNLastLogPixelsY() const;
  OdResult setNLastLogPixelsY(OdInt32);
  OdInt32 getNLastPhysicalOffsetX() const;
  OdResult setNLastPhysicalOffsetX(OdInt32);
  OdInt32 getNLastPhysicalOffsetY() const;
  OdResult setNLastPhysicalOffsetY(OdInt32);
  OdInt32 getNLastSheetWidth() const;
  OdResult setNLastSheetWidth(OdInt32);
  OdInt32 getNLastSheetHeight() const;
  OdResult setNLastSheetHeight(OdInt32);
  OdInt32 getNPaperIndex() const;
  OdResult setNPaperIndex(OdInt32);
  OdInt32 getOrientationType() const;
  OdResult setOrientationType(OdInt32);
  OdInt32 getPaperPlacementType() const;
  OdResult setPaperPlacementType(OdInt32);
  OdInt32 getMarginType() const;
  OdResult setMarginType(OdInt32);
  OdInt32 getZoomType() const;
  OdResult setZoomType(OdInt32);
  OdInt32 getNZoom() const;
  OdResult setNZoom(OdInt32);
  OdInt32 getColorDepthType() const;
  OdResult setColorDepthType(OdInt32);
  OdInt32 getNUserDPI() const;
  OdResult setNUserDPI(OdInt32);
  OdInt32 getHLRType() const;
  OdResult setHLRType(OdInt32);
  OdBmPrintFiltersPtr getPrintFilters() const;
  OdResult setPrintFilters(const OdBmPrintFiltersPtr&);
  //
  // Main functionality
  //
};
#endif // _BM_PRINTPARAMETERS_H_

