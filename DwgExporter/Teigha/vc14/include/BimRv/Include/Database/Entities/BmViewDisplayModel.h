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

#ifndef _BM_VIEWDISPLAYMODEL_H_
#define _BM_VIEWDISPLAYMODEL_H_
#include "Base/BmObject.h"
#include "Geometry/Enums/BmViewDisplayModelEnums.h"
// BEGIN: Includes
#include "ViewportDefs.h"
// END: Includes

class OdBmObjectId;

class OdBmViewDisplayModel;
class OdBmViewDisplayModelImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmViewDisplayModel object.
 */
typedef OdSmartPtr<OdBmViewDisplayModel> OdBmViewDisplayModelPtr;

/** \details
 A data type that represents an array of OdBmViewDisplayModel objects.
 */
typedef OdArray<OdBmViewDisplayModelPtr> OdBmViewDisplayModelPtrArray;

//----------------------------------------------------------
//
// OdBmViewDisplayModel
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmViewDisplayModel : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmViewDisplayModel);
public:
  OdInt32 getEdges() const;
  OdResult setEdges(OdInt32);
  OdBmObjectId getSilhouetteEdgesGStyleId() const;
  OdResult setSilhouetteEdgesGStyleId(const OdBmObjectId&);
  OdBm::ViewDisplayStyle::Enum getDisplayStyle() const;
  OdResult setDisplayStyle(OdBm::ViewDisplayStyle::Enum);
  OdInt32 getTransparency() const;
  OdResult setTransparency(OdInt32);
  bool getShowSurfacePatterns() const;
  OdResult setShowSurfacePatterns(bool);
  bool getEnableSilhouettes() const;
  OdResult setEnableSilhouettes(bool);
  OdInt32 getShowHiddenLinesVal() const;
  OdResult setShowHiddenLinesVal(OdInt32);
  bool getSmoothEdges() const;
  OdResult setSmoothEdges(bool);
  //
  // Main functionality
  //

public:
  static const OdDb::RenderMode getDbRenderModeFromBmDisplayStyle(
    const OdBm::ViewDisplayStyle::Enum style);
};


#endif // _BM_VIEWDISPLAYMODEL_H_

