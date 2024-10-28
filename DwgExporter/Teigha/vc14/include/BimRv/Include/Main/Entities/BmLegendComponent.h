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

#ifndef _BM_LEGENDCOMPONENT_H_
#define _BM_LEGENDCOMPONENT_H_
#include "Database/BmElement.h"

class OdBmDatabase;
class OdBmARasterImage;
typedef OdSmartPtr<OdBmARasterImage> OdBmARasterImagePtr;
class OdBmObjectId;

class OdBmLegendComponent;
class OdBmLegendComponentImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLegendComponent object.
 */
typedef OdSmartPtr<OdBmLegendComponent> OdBmLegendComponentPtr;

/** \details
 A data type that represents an array of OdBmLegendComponent objects.
 */
typedef OdArray<OdBmLegendComponentPtr> OdBmLegendComponentPtrArray;

//----------------------------------------------------------
//
// OdBmLegendComponent
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmLegendComponent : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLegendComponent);
public:
  OdGePoint3d getOrigin() const;
  double getHostLength() const;
  double getScale() const;
  OdInt32 getDetailLevel() const;
  OdInt32 getGInstanceTag() const;
  OdBmObjectId getComponentType() const;
  OdBmObjectId getPreviewFamilySurrogateId() const;
  OdBmObjectId getLegendComponentInstId() const;
  OdInt32 getComponentViewType() const;
  bool getIsForTypePreview() const;
  OdBmARasterImagePtr getPreviewImage() const;
  OdBmDatabase* getDatabase1() const;
  //
  // Main functionality
  //


};


#endif // _BM_LEGENDCOMPONENT_H_

