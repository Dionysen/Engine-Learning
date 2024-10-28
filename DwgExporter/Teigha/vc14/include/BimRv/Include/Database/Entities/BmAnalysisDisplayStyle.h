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

#ifndef _BM_ANALYSISDISPLAYSTYLE_H_
#define _BM_ANALYSISDISPLAYSTYLE_H_
#include "Database/BmElement.h"

class OdBmDatabase;
class OdBmAnalysisDisplayDeformedShapeSettings;
typedef OdSmartPtr<OdBmAnalysisDisplayDeformedShapeSettings> OdBmAnalysisDisplayDeformedShapeSettingsPtr;
class OdBmAnalysisDisplayDiagramSettings;
typedef OdSmartPtr<OdBmAnalysisDisplayDiagramSettings> OdBmAnalysisDisplayDiagramSettingsPtr;
class OdBmAnalysisDisplayVectorSettings;
typedef OdSmartPtr<OdBmAnalysisDisplayVectorSettings> OdBmAnalysisDisplayVectorSettingsPtr;
class OdBmObjectId;

class OdBmAnalysisDisplayStyle;
class OdBmAnalysisDisplayStyleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAnalysisDisplayStyle object.
 */
typedef OdSmartPtr<OdBmAnalysisDisplayStyle> OdBmAnalysisDisplayStylePtr;

/** \details
 A data type that represents an array of OdBmAnalysisDisplayStyle objects.
 */
typedef OdArray<OdBmAnalysisDisplayStylePtr> OdBmAnalysisDisplayStylePtrArray;

//----------------------------------------------------------
//
// OdBmAnalysisDisplayStyle
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAnalysisDisplayStyle : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAnalysisDisplayStyle);
public:
  OdBmDatabase* getDatabase1() const;
  OdBmObjectPtr getColorSettings() const;
  OdBmObjectPtr getColoredSurfaceSettings() const;
  OdBmAnalysisDisplayDeformedShapeSettingsPtr getDeformedShapeSettings() const;
  OdBmAnalysisDisplayDiagramSettingsPtr getDiagramSettings() const;
  OdBmObjectPtr getLegendSettings() const;
  OdBmObjectPtr getMarkersAndTextSettings() const;
  OdString getName() const;
  OdBmAnalysisDisplayVectorSettingsPtr getVectorSettings() const;
  OdBmObjectId getLineCategoryId() const;
  //
  // Main functionality
  //
};
#endif // _BM_ANALYSISDISPLAYSTYLE_H_

