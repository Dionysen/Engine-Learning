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

#ifndef _BM_DIRECTSHAPE_H_
#define _BM_DIRECTSHAPE_H_
#include "Database/BmElement.h"
#include "Main/Entities/BmDirectShapeOptions.h"
#include "Database/Enums/BmDirectShapeTargetViewType.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGElement.h"
#include "Geometry/Entities/BmGeometry.h"
// END: Includes

class OdBmDirectShapeCell;
typedef OdSmartPtr<OdBmDirectShapeCell> OdBmDirectShapeCellPtr;
class OdBmDirectShapeDataCell;
typedef OdSmartPtr<OdBmDirectShapeDataCell> OdBmDirectShapeDataCellPtr;
class OdBmObjectId;

class OdBmDirectShape;
class OdBmDirectShapeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDirectShape object.
 */
typedef OdSmartPtr<OdBmDirectShape> OdBmDirectShapePtr;

/** \details
 A data type that represents an array of OdBmDirectShape objects.
 */
typedef OdArray<OdBmDirectShapePtr> OdBmDirectShapePtrArray;

//----------------------------------------------------------
//
// OdBmDirectShape
//
//----------------------------------------------------------

/** \details
This class implements functionality for managing a DirectShape element.
A DirectShape element allows storing geometry shape data created with external applications and represented with external formats (for example, STEP).
DirectShape elements should be used in cases when fully functional elements can not be created in BimRv or there is no sufficient information for their creation; 
or when full functionality is not needed.
An OdBmDirectShape element can be associated with a category.

    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmDirectShape : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDirectShape);
public:
  /** \details
    Retrieves the shape geometry data.
    \returns A smart pointer to an OdBmDirectShapeCell object containing the geometry that corresponds to OdBm::DirectShapeTargetViewType::Default.
  */
  OdBmDirectShapeCellPtr getGeometryData() const;
  /** \details
    Retrieves the plan view geometry data.
    \returns A smart pointer to an object that contains the geometry that corresponds to OdBm::DirectShapeTargetViewType::Plan.
  */
  OdBmObjectPtr getPlanViewGeometryData() const;
  /** \details
    Retrieves the data about DirectShape geometry.
    \returns A smart pointer to an OdBmDirectShapeDataCell object that stores the retrieved data.
  */
  OdBmDirectShapeDataCellPtr getShapeData() const;
  /** \details
    Retrieves the DirectShape options.
    \returns Currently applied DirectShape options represented by an OdBmDirectShapeOptions object.
  */
  OdBmDirectShapeOptions getOptions() const;
  /** \details
    Sets new DirectShape options.
    \param options [in] New options represented by an OdBmDirectShapeOptions object.
    \returns eOk if the new options were successfully set; otherwise the method returns an appropriate error code.
  */
  OdResult setOptions(const OdBmDirectShapeOptions&);
  /** \details
    Retrieves the DirectShape element type.
    \returns An identifier of an OdBmObject instance that contains information about element type.
  */
  OdBmObjectId getTypeId() const;
  /** \details
    Sets a new DirectShape type.
    \param typeId [in] An identifier of a BimRv object that represents the new type of DirectShape element to be set.
    \returns eOk if the new type was successfully set; otherwise the method returns an appropriate error code.
  */
  OdResult setTypeId(const OdBmObjectId&);
  /** \details 
    Retrieves the current DirectShape element position.
    \returns A matrix object that represents the element position.
  */
  OdGeMatrix3d getPosition() const;
  /** \details 
    Retrieves whether the DirectShape element can create a status of its parts.
    \returns A signed 32-bit integer value that represents the ability of the element to create parts status.
  */
  OdInt32 getCanCreatePartsStatus() const;
  //
  // Main functionality
  //

  /** \details
  Builds the shape from the supplied collection of GNode objects.
  \param arrGeom  [in] An array of smart pointers to GNode objects to be used for creating the shape.
  \param viewType [in] A view type.
  \returns eOk if the shape was successfully created; otherwise, the method returns an appropriate error code.
  */
  OdResult setShape(const OdBmGNodePtrArray& arrGeom, const OdBm::DirectShapeTargetViewType::Enum viewType = OdBm::DirectShapeTargetViewType::Default);

  /** \details
  Appends a specified collection of GNode objects to the DirectShape element.
  \param arrGeom  [in] An array of smart pointers to GNode objects to be used for creating the shape.
  \param viewType [in] A view type.
  \returns eOk if the nodes were successfully appended; otherwise, the method returns an appropriate error code.
  */
  OdResult appendShape(const OdBmGNodePtrArray& arrGeom, const OdBm::DirectShapeTargetViewType::Enum viewType = OdBm::DirectShapeTargetViewType::Default);

  /** \details
  Validates the geometry stored in the DirectShape element.
  \param pGeometry [in] A smart pointer to an OdBmGeometry object that contains the geometry to be validated.
  \returns eOk if the geometry is valid; otherwise the method returns an appropriate error code illustrating errors found in the geometry.
  */
  OdResult isValidGeometry(const OdBmGeometryPtr& pGeometry) const;

  /** \details
  Validates GNode objects stored in the DirectShape element.
  \param arrNodes [in] An array of smart pointers to  GNode objects to be validated.
  \returns eOk if the GNode objects are valid; otherwise the method returns an appropriate error code illustrating errors found in the nodes.
  */
  OdResult isValidShape(const OdArray<OdBmGNodePtr>& arrNodes) const;

  /** \details
  Validates GNode objects of a specified view type stored in the DirectShape element.
  \param arrNodes [in] An array of smart pointers to  GNode objects to be validated.
  \param viewType [in] A view type value.
  \returns eOk if the GNode objects are valid; otherwise the method returns an appropriate error code illustrating errors found in the nodes.
  */
  OdResult isValidShape(const OdArray<OdBmGNodePtr>& arrNodes, const OdBm::DirectShapeTargetViewType::Enum viewType) const;

  /** \details
  Creates an element instance based on a specified DirectShape type.
  \param typeId     [in] A type of DirectShape element to be created.
  \param categoryId [in] An identifier of the created element category. Must be a valid category identifier.
  \param trf        [in] A transformation matrix to be implemented to the created element.
  \returns eOk if the element instance was successfully created; otherwise the method returns an appropriate error code.
  */
  OdResult createElementInstance(const OdBmObjectId& typeId, const OdBmObjectId& categoryId, const OdGeMatrix3d& trf = OdGeMatrix3d::kIdentity);

  /** \details
  Retrieves data that identifies the creating application.
  \returns A string that contains creating application's identifying data.
  */
  OdString getApplicationDataId() const;

  /** \details
  Sets new data that identifies the creating application.
  \param sAppData [in] A text string that contains identifying data.
  */
  void setApplicationDataId(const OdString& sAppData);

  /** \details
  Retrieves the creating application identifier.
  \returns A text string that contains the creating application identifier.
  */
  OdString getApplicationId() const;

  /** \details
  Sets a new creating application identifier.
  \param sApp [in] A text string that contains the creating application identifier.
  */
  void setApplicationId(const OdString& sApp);

  /** \details
  Retrieves the current name of the DirectShape element.
  \returns A string that contains the name.
  */
  OdString getName() const;

  /** \details
  Sets a new name for the DirectShape element.
  \param sName [in] A string that contains the new name for the DirectShape element.
  */
  void setName(const OdString& sName);

  /** \details
  Retrieves the category of the DirectShape element.
  \returns An identifier of the category object.
  */
  OdBmObjectId getCategoryId() const;

  /** \details
  Sets a new category for the DirectShape element.
  \param id [in] An identifier of the new category object.
  \returns eOk if the new category was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setCategoryId(const OdBmObjectId& id);
};
#endif // _BM_DIRECTSHAPE_H_

