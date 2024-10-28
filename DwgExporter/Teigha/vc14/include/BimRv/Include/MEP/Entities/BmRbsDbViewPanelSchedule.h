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

#ifndef _BM_RBSDBVIEWPANELSCHEDULE_H_
#define _BM_RBSDBVIEWPANELSCHEDULE_H_
#include "Database/Entities/BmDBView.h"

class OdBmObjectId;

class OdBmRbsDbViewPanelSchedule;
class OdBmRbsDbViewPanelScheduleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsDbViewPanelSchedule object.
 */
typedef OdSmartPtr<OdBmRbsDbViewPanelSchedule> OdBmRbsDbViewPanelSchedulePtr;

/** \details
 A data type that represents an array of OdBmRbsDbViewPanelSchedule objects.
 */
typedef OdArray<OdBmRbsDbViewPanelSchedulePtr> OdBmRbsDbViewPanelSchedulePtrArray;

//----------------------------------------------------------
//
// OdBmRbsDbViewPanelSchedule
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsDbViewPanelSchedule : public OdBmDBView {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsDbViewPanelSchedule);
public:
  OdBmObjectId getPanel() const;
  OdBmObjectId getGridLineStyleId() const;
  OdBmObjectId getOutLineStyleId() const;
  OdBmObjectId getHeaderUnderlineStyleId() const;
  OdBmObjectId getBodyUnderlineStyleId() const;
  OdBmObjectId getHeaderFontId() const;
  OdBmObjectId getBodyFontId() const;
  bool getShowGridlines() const;
  bool getShowOutline() const;
  bool getShowHeaderUnderline() const;
  bool getShowBodyUnderline() const;
  bool getHeaderBold() const;
  bool getHeaderItalic() const;
  bool getBodyBold() const;
  bool getBodyItalic() const;
  OdString getHtml() const;
  void getTableDataArray(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSDBVIEWPANELSCHEDULE_H_

