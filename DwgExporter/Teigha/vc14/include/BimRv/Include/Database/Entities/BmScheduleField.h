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

#ifndef _BM_SCHEDULEFIELD_H_
#define _BM_SCHEDULEFIELD_H_
#include "Base/BmObject.h"

class OdBmDatabase;
class OdBmTableCellStyle;
typedef OdSmartPtr<OdBmTableCellStyle> OdBmTableCellStylePtr;
class OdBmTableCellCombinedParameterData;
typedef OdSmartPtr<OdBmTableCellCombinedParameterData> OdBmTableCellCombinedParameterDataPtr;
class OdBmObjectId;

class OdBmScheduleField;
class OdBmScheduleFieldImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmScheduleField object.
 */
typedef OdSmartPtr<OdBmScheduleField> OdBmScheduleFieldPtr;

/** \details
 A data type that represents an array of OdBmScheduleField objects.
 */
typedef OdArray<OdBmScheduleFieldPtr> OdBmScheduleFieldPtrArray;

//----------------------------------------------------------
//
// OdBmScheduleField
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmScheduleField : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmScheduleField);
public:
  OdString getColumnHeading() const;
  void getHeaderIds(OdInt32Array &) const;
  OdBmTableCellStylePtr getHeaderStyle() const;
  OdBmTableCellStylePtr getStyle() const;
  double getGridColumnWidth() const;
  double getColumnWidth() const;
  OdBmObjectId getParamElemId() const;
  OdInt32 getSourceType() const;
  bool getIsHidden() const;
  bool getIsShowConditionalFormattingOnSheet() const;
  void getCondFormatArray(OdArray<OdBmObjectPtr> &) const;
  OdBmObjectPtr getExpression() const;
  OdBmObjectPtr getFormatOptions() const;
  OdBmObjectPtr getParamDef() const;
  bool getIsAssemblyTotalsByType() const;
  OdInt32 getPercentageById() const;
  OdInt32 getPercentageOfId() const;
  void getCombineParameters(OdArray<OdBmTableCellCombinedParameterDataPtr> &) const;
  OdInt32 getDisplayType() const;
  OdBmDatabase* getDatabase() const;
  //
  // Main functionality
  //


};


#endif // _BM_SCHEDULEFIELD_H_

