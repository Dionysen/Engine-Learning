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

#ifndef _BM_SCHEDULESCHEMA_H_
#define _BM_SCHEDULESCHEMA_H_
#include "Base/BmObject.h"

class OdBmScheduleField;
typedef OdSmartPtr<OdBmScheduleField> OdBmScheduleFieldPtr;
class OdBmScheduleHeader;
typedef OdSmartPtr<OdBmScheduleHeader> OdBmScheduleHeaderPtr;
class OdBmScheduleFieldId;
typedef OdArray<OdBmScheduleFieldId, OdMemoryAllocator<OdBmScheduleFieldId> > OdBmScheduleFieldIdArray;
class OdBmObjectId;

class OdBmScheduleSchema;
class OdBmScheduleSchemaImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmScheduleSchema object.
 */
typedef OdSmartPtr<OdBmScheduleSchema> OdBmScheduleSchemaPtr;

/** \details
 A data type that represents an array of OdBmScheduleSchema objects.
 */
typedef OdArray<OdBmScheduleSchemaPtr> OdBmScheduleSchemaPtrArray;

//----------------------------------------------------------
//
// OdBmScheduleSchema
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmScheduleSchema : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmScheduleSchema);
public:
  void getSortFieldArray(OdArray<OdBmObjectPtr> &) const;
  void getFields(OdArray<OdBmScheduleFieldPtr> &) const;
  void getFieldIds(OdBmScheduleFieldIdArray &) const;
  void getFilterArray(OdArray<OdBmObjectPtr> &) const;
  OdBmObjectPtr getEmbeddedSchema() const;
  void getHeaderSet(OdArray<OdBmScheduleHeaderPtr> &) const;
  OdBmObjectId getCategoryId() const;
  OdBmObjectId getFamilyId() const;
  OdBmObjectId getAreaSchemeId() const;
  OdBmObjectId getTitleBlockInstId() const;
  OdBmObjectId getKeynotingSystemId() const;
  OdBmObjectId getScheduleInstanceId() const;
  OdBmObjectId getBodyGridCategoryId() const;
  OdBmObjectId getOutlineGridCategoryId() const;
  OdBmObjectId getTitleUnderlineCategoryId() const;
  OdBmObjectId getColumnHeaderUnderlineCategoryId() const;
  OdBmObjectId getZoneSchemeId() const;
  OdInt32 getNextFieldId() const;
  OdInt32 getNextHeaderId() const;
  OdInt32 getRoomScheduleFilter() const;
  bool getIsInstanceSchedule() const;
  bool getIsRefTable() const;
  bool getIsMaterialSchedule() const;
  bool getIsFilterBySheet() const;
  bool getIsIncludeLinkedFiles() const;
  bool getIsShowGrandTotal() const;
  bool getIsShowGrandTotalTitle() const;
  bool getIsShowGrandTotalCount() const;
  bool getIsShowGridLines() const;
  bool getIsShowOutline() const;
  bool getIsUnderlineTitle() const;
  bool getIsUnderlineHeaders() const;
  bool getIsShowTitle() const;
  bool getIsShowHeaders() const;
  bool getIsShowInitialSpacer() const;
  bool getIsShowNonBodyGridLines() const;
  bool getIsEmbedded() const;
  bool getIsBuildScheduleTopDown() const;
  bool getIsFixedHeight() const;
  OdString getAltScheduleTitle() const;
  OdString getGrandTotalTitle() const;
  OdUInt32 getStripedRowsColorsItem(OdUInt32 idx) const;
  bool getStripedRows() const;
  bool getStripedRowsOnSheets() const;
  //
  // Main functionality
  //

  OdInt32 getHiddenPropertyPages() const;
  bool getCanFilter() const;
};


#endif // _BM_SCHEDULESCHEMA_H_

