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

#ifndef _BM_TABLECELLDATA_H_
#define _BM_TABLECELLDATA_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/Enums/BmTableCellType.h"
// END: Includes

class OdBmTableCellStyle;
typedef OdSmartPtr<OdBmTableCellStyle> OdBmTableCellStylePtr;
class OdBmTableCellCombinedParameterData;
typedef OdSmartPtr<OdBmTableCellCombinedParameterData> OdBmTableCellCombinedParameterDataPtr;
class OdBmFormatOptions;
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;
class OdBmObjectId;

class OdBmTableCellData;
class OdBmTableCellDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTableCellData object.
 */
typedef OdSmartPtr<OdBmTableCellData> OdBmTableCellDataPtr;

/** \details
 A data type that represents an array of OdBmTableCellData objects.
 */
typedef OdArray<OdBmTableCellDataPtr> OdBmTableCellDataPtrArray;

//----------------------------------------------------------
//
// OdBmTableCellData
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmTableCellData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTableCellData);
public:
  OdBmObjectPtr getCalculatedValue() const;
  OdBmTableCellStylePtr getTableCellStyle() const;
  void getCombinedParams(OdArray<OdBmTableCellCombinedParameterDataPtr> &) const;
  OdBmFormatOptionsPtr getFormatOptions() const;
  OdString getText() const;
  OdBmObjectId getCategoryId() const;
  OdInt32 getCellType() const;
  OdInt32 getColumn() const;
  OdInt32 getCoverBottom() const;
  OdInt32 getCoverLeft() const;
  OdInt32 getCoverRight() const;
  OdInt32 getCoverTop() const;
  OdBmObjectId getParamId() const;
  OdInt32 getRow() const;
  //
  // Main functionality
  //


};


#endif // _BM_TABLECELLDATA_H_

