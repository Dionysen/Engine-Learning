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

#ifndef _BM_DIRECTSHAPETYPE_H_
#define _BM_DIRECTSHAPETYPE_H_
#include "Database/Entities/BmSymbol.h"
#include "Database/Enums/BmDirectShapeTargetViewType.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGElement.h"
// END: Includes

class OdBmDirectShapeTypeOptions;
typedef OdSmartPtr<OdBmDirectShapeTypeOptions> OdBmDirectShapeTypeOptionsPtr;
class OdBmObjectId;

class OdBmDirectShapeType;
class OdBmDirectShapeTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDirectShapeType object.
 */
typedef OdSmartPtr<OdBmDirectShapeType> OdBmDirectShapeTypePtr;

/** \details
 A data type that represents an array of OdBmDirectShapeType objects.
 */
typedef OdArray<OdBmDirectShapeTypePtr> OdBmDirectShapeTypePtrArray;

//----------------------------------------------------------
//
// OdBmDirectShapeType
//
//----------------------------------------------------------

/** \details
    This class associated with a DirectShape element.
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmDirectShapeType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDirectShapeType);
public:
  /** \details
    Returns a geometry that corresponds to OdBm::DirectShapeTargetViewType::Default.
  */
  OdBmObjectPtr getGeometryData() const;
  /** \details
    Sets a geometry that corresponds to OdBm::DirectShapeTargetViewType::Default.

    \param OdBmObjectPtr [in] Input geometry.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setGeometryData(const OdBmObjectPtr&);
  /** \details
    Returns a geometry that corresponds to OdBm::DirectShapeTargetViewType::Plan.
  */
  OdBmObjectPtr getPlanViewGeometryData() const;
  /** \details
    Sets a geometry that corresponds to OdBm::DirectShapeTargetViewType::Plan.

    \param OdBmObjectPtr [in] Input geometry.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setPlanViewGeometryData(const OdBmObjectPtr&);
  /** \details
    Returns a id of category that represents the category or sub category in which the element resides.
  */
  OdBmObjectId getCategoryId() const;
  /** \details
    Sets a id of category that represents the category or sub category in which the element resides.

    \param OdBmObjectId [in] Input if of category.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setCategoryId(const OdBmObjectId&);
  OdInt32 getCanCreatePartsStatus() const;
  OdBmDirectShapeTypeOptionsPtr getOptionsDirectShapeTypeOptions() const;
  //
  // Main functionality
  //

  /** \details
        Builds the shape from the supplied collection of GNodes.

      \param arrGeom [in] Input geometry objects.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setShape(const OdBmGNodePtrArray& arrGeom);

  /** \details
        Builds the shape from the supplied collection of GNodes.

      \param arrGeom [in] Input geometry objects.
      \param viewType [in] Input view type.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setShape(const OdBmGNodePtrArray& arrGeom, const OdBm::DirectShapeTargetViewType::Enum viewType);

  /** \details
        Appends the collection of GNodes to DirectShape.

      \param arrGeom [in] Input geometry objects.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult appendShape(const OdBmGNodePtrArray& arrGeom);

  /** \details
        Appends the collection of GNodes to DirectShape.

      \param arrGeom [in] Input geometry objects.
      \param viewType [in] Input view type.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult appendShape(const OdBmGNodePtrArray& arrGeom, const OdBm::DirectShapeTargetViewType::Enum viewType);

  /** \details
        Validates GNodes to be stored in a DirectShape.

      \param arrNodes [in] Input GNodes to be validated.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult isValidShape(const OdArray<OdBmGNodePtr>& arrNodes) const;

  /** \details
        Validates GNodes to be stored in a DirectShape depending on the view type.

      \param arrNodes [in] Input GNodes to be validated.
      \param viewType [in] Input view type.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult isValidShape(const OdArray<OdBmGNodePtr>& arrNodes, const OdBm::DirectShapeTargetViewType::Enum viewType) const;
};
#endif // _BM_DIRECTSHAPETYPE_H_

