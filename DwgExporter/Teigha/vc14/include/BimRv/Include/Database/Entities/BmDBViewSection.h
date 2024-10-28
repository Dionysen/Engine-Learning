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

#ifndef _BM_DBVIEWSECTION_H_
#define _BM_DBVIEWSECTION_H_
#include "Database/Entities/BmDBView.h"
#include "Database/Enums/BmViewNameFormat.h"



class OdBmDBViewSection;
class OdBmDBViewSectionImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBViewSection object.
 */
typedef OdSmartPtr<OdBmDBViewSection> OdBmDBViewSectionPtr;

/** \details
 A data type that represents an array of OdBmDBViewSection objects.
 */
typedef OdArray<OdBmDBViewSectionPtr> OdBmDBViewSectionPtrArray;

//----------------------------------------------------------
//
// OdBmDBViewSection
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBViewSection : public OdBmDBView {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBViewSection);
public:
  OdBmObjectPtr getCutter() const;
  OdInt32 getSectionViewType() const;
  //
  // Main functionality
  //

public:

  virtual OdBm::ViewNameFormat::Enum getViewNameFormat() const
  {
    if (getSectionViewType() == 0)
      return (OdBm::ViewNameFormat::Enum)OdBm::ViewType::Section;
    else
      return OdBm::ViewNameFormat::Elevation;
  }
};


#endif // _BM_DBVIEWSECTION_H_

