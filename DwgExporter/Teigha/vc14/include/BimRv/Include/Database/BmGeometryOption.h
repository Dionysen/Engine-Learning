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

#ifndef _BM_GEOMETRY_OPTIONS_H_
#define _BM_GEOMETRY_OPTIONS_H_

#include "Geometry/Enums/BmViewLevelObjectDetail.h"

class OdBmDBView;
typedef OdSmartPtr<OdBmDBView> OdBmDBViewPtr;


/** \details
  User preferences for parsing of geometry.
  
  \remarks This class determines the output of the Element::getGeometry method.
  
    <group Geometry_Classes>
*/
class TB_DB_EXPORT OdBmGeometryOptions {
public:

  /** \details
    Creates a default GeometryOptions object.
    
    \remarks  Defaults to medium detail, no references and no view.
  */
  OdBmGeometryOptions();

  /** \details
    Copy constructor.
  */
  OdBmGeometryOptions(const OdBmGeometryOptions&);


  /** \details
    Checks whether or not references to geometric objects are computed.
  */
  bool computeReferences() const;
  
  /** \details
    Determines whether or not references to geometric objects are computed.
    
    \param val [in] Flag value.
  */
  void setComputeReferences(bool val);

  /** \details
    The detail level for the geometry extracted with these options.
    
  */
  OdBm::ViewLevelObjectDetail::Enum detailLevel() const;
  /** \details
    Sets the detail level for the geometry extracted with these options.
    
    \remarks
    Exceptions:
    eInvalidContext:
      Thrown when setting this property, if View is already set. When View is set
      the detail level of the view is used.
  */
  void setDetailLevel(OdBm::ViewLevelObjectDetail::Enum);

  /** \details
    Checks whether to extract element geometry objects not set as Visible. The default value is false.
  */
  bool includeNonVisibleObjects() const;
  
  /** \details
    Determines whether to extract element geometry objects not set as Visible.
    
    \param val [in] Input flag value.
  */
  void setIncludeNonVisibleObjects(bool val);
  
  /** \details
    Returns the view used for geometry extraction.
    
    \remarks
      If a view-specific geometry in the element geometry cache exists, it will be extracted in
      the retrieval of geometry. Also, the detail level of the geometry will be
      taken from the view's detail level.
  */
  OdBmDBViewPtr dbView() const;
  
  /** \details
    Sets the view used for geometry extraction.
    
    \param view [in] The input view to be set.
    
    \remarks
    Exceptions:
      eInvalidInput:
        Thrown when setting this property with a null.
      eInvalidContext:
        Thrown when setting this property, if DetailLevel is already set. When DetailLevel
        is set view-specific geometry can't be extracted.
  */
  void setDbView(const OdBmDBViewPtr& view);
protected:
  bool m_computeReferences;
  OdBm::ViewLevelObjectDetail::Enum m_detailLevel;
  bool m_includeNonVisibleObjects;
  OdBmDBViewPtr m_dbView;
};

#endif //_BM_GEOMETRY_OPTIONS_H_
