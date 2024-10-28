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

#ifndef _BM_ELEMENT_H_
#define _BM_ELEMENT_H_
#include "Base/BmObject.h"
#include "Database/Entities/BmRejectedViewRules.h"
#include "Common/BuiltIns/BmBuiltInParameter.h"
// BEGIN: Includes
#include "Database/Entities/BmDesignPropertyManager.h"
#include "Base/BmOpenMode.h"
#include "BmSubentId.h"
#include "GsMarkerArray.h"
#include "Ge/GePoint3d.h"
#include "Database/BmParamSetCommon.h"
#include "Database/BmDatabase.h"

class OdBmDBView;
// END: Includes

class OdTfClass;
class OdBmDatabase;
class OdBmElementHeader;
typedef OdSmartPtr<OdBmElementHeader> OdBmElementHeaderPtr;
class OdBmElementHistory;
typedef OdSmartPtr<OdBmElementHistory> OdBmElementHistoryPtr;
class OdBmElementRegenHistory;
typedef OdSmartPtr<OdBmElementRegenHistory> OdBmElementRegenHistoryPtr;
class OdBmElementParents;
typedef OdSmartPtr<OdBmElementParents> OdBmElementParentsPtr;
class OdBmParamValueSetDouble;
typedef OdSmartPtr<OdBmParamValueSetDouble> OdBmParamValueSetDoublePtr;
class OdBmParamValueSetInt;
typedef OdSmartPtr<OdBmParamValueSetInt> OdBmParamValueSetIntPtr;
class OdBmParamValueSetAString;
typedef OdSmartPtr<OdBmParamValueSetAString> OdBmParamValueSetAStringPtr;
class OdBmParamValueSetElementId;
typedef OdSmartPtr<OdBmParamValueSetElementId> OdBmParamValueSetElementIdPtr;
class OdBmGeomStepList;
typedef OdSmartPtr<OdBmGeomStepList> OdBmGeomStepListPtr;
class OdBmGeomTable;
typedef OdSmartPtr<OdBmGeomTable> OdBmGeomTablePtr;
class OdBmConstraintInfo;
typedef OdSmartPtr<OdBmConstraintInfo> OdBmConstraintInfoPtr;
class OdBmCellList;
typedef OdSmartPtr<OdBmCellList> OdBmCellListPtr;
class OdBmElemRec;
typedef OdSmartPtr<OdBmElemRec> OdBmElemRecPtr;
class OdBmObjectId;
class OdBmPartitionId;

class OdBmElement;
class OdBmElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElement object.
 */
typedef OdSmartPtr<OdBmElement> OdBmElementPtr;

/** \details
 A data type that represents an array of OdBmElement objects.
 */
typedef OdArray<OdBmElementPtr> OdBmElementPtrArray;

class OdBmElemRec;
class OdBmDatabase;
class OdBmGeometryOptions;

//----------------------------------------------------------
//
// OdBmElement
//
//----------------------------------------------------------

/** \details
This is a base class for BimRv elements.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElement : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElement);
public:
  OdBmObjectPtr getDynamicObject() const;
  OdBmElementHeaderPtr getHeader() const;
  OdBmObjectPtr getGeometry() const;
  OdBmObjectId getOwningElementId() const;
  OdResult setOwningElementId(const OdBmObjectId&);
  OdBmPartitionId getPartitionId() const;
  OdResult setPartitionId(const OdBmPartitionId&);
  OdBmElementHistoryPtr getHistory() const;
  OdResult setHistory(const OdBmElementHistoryPtr&);
  OdBmElementRegenHistoryPtr getRegenHistory() const;
  OdResult setRegenHistory(const OdBmElementRegenHistoryPtr&);
  /** \details
    Returns the Id of Category taken from Header.
  */
  OdBmObjectId getHeaderCategoryId() const;
  OdBmObjectId getMiscId() const;
  OdResult setMiscId(const OdBmObjectId&);
  OdBmRejectedViewRules getViewRules() const;
  OdResult setViewRules(const OdBmRejectedViewRules&);
  OdInt32 getAbFlags4Bytes() const;
  OdResult setAbFlags4Bytes(OdInt32);
  OdTfClass* getClassDef() const;
  OdResult setClassDef(OdTfClass*);
  OdGeExtents3d getBBox() const;
  OdResult setBBox(const OdGeExtents3d&);
  OdBmElementParentsPtr getParents() const;
  OdResult setParents(const OdBmElementParentsPtr&);
  OdBmParamValueSetDoublePtr getDoubleParams() const;
  OdResult setDoubleParams(const OdBmParamValueSetDoublePtr&);
  OdBmParamValueSetIntPtr getIntParams() const;
  OdResult setIntParams(const OdBmParamValueSetIntPtr&);
  OdBmParamValueSetAStringPtr getStringParams() const;
  OdResult setStringParams(const OdBmParamValueSetAStringPtr&);
  OdBmParamValueSetElementIdPtr getObjectIdParams() const;
  OdResult setObjectIdParams(const OdBmParamValueSetElementIdPtr&);
  OdBmGeomStepListPtr getGeomSteps() const;
  OdResult setGeomSteps(const OdBmGeomStepListPtr&);
  OdBmGeomTablePtr getGeomTable() const;
  OdResult setGeomTable(const OdBmGeomTablePtr&);
  void getConstrInfo(OdArray<OdBmConstraintInfoPtr> &) const;
  OdResult setConstrInfo(const OdArray<OdBmConstraintInfoPtr>&);
  OdBmCellListPtr getCellList() const;
  OdResult setCellList(const OdBmCellListPtr&);
  OdBmDatabase* getDatabase() const;
  OdResult setDatabase(OdBmDatabase*);
  OdBmObjectId getAssocLevelId() const;
  OdResult setAssocLevelId(const OdBmObjectId&);
  OdBmObjectId getFamId() const;
  OdResult setFamId(const OdBmObjectId&);
  OdBmObjectId getUnplacedOwnerId() const;
  OdResult setUnplacedOwnerId(const OdBmObjectId&);
  OdBmObjectId getOwnerDBViewId() const;
  OdResult setOwnerDBViewId(const OdBmObjectId&);
  OdBmObjectId getCreatedPhaseId() const;
  OdResult setCreatedPhaseId(const OdBmObjectId&);
  OdBmObjectId getDemolishedPhaseId() const;
  OdResult setDemolishedPhaseId(const OdBmObjectId&);
  /** \details
    Returns the Id of Design Option which was read from a file.
    
    \remarks -1, -3 and -4 mean no Design Option
  */
  OdBmObjectId getBaseDesignOptionId() const;
  /** \details
    Sets the Id of Base Design Option.
    
    \param OdBmObjectId [in] The input id.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setBaseDesignOptionId(const OdBmObjectId&);
  bool getLocked() const;
  OdResult setLocked(bool);
  bool getMoribund() const;
  OdResult setMoribund(bool);
  bool getDummy() const;
  OdResult setDummy(bool);
  OdBmElemRecPtr getElemRec() const;
  //
  // Main functionality
  //

  // OdBmObjectId as a key

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Parameter value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBmObjectId& parameterId, OdTfVariant& value);

  /** \details
    Retrieves a parameter value from an element using given parameter id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Output value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdTfVariant& value) const;

  /** \details
    Sets a value to a parameter by it's id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Input value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdTfVariant& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] Output parameter id as OdBmObjectId.
    \param value [out] Input parameter value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBmObjectId& parameterId, const OdTfVariant& value);

  /** \details
   Pops a parameter with given id from an element.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Parameter value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBmObjectId& parameterId, double& value);

  /** \deteails
    Retrieves a parameter value from an element using given parameter id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Output value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBmObjectId& parameterId, double& value) const;

  /** \details
    Sets a value to a parameter by it's id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Input value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const double& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] Output parameter id as OdBmObjectId.
    \param value [out] Input parameter value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBmObjectId& parameterId, const double& value);

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Parameter value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBmObjectId& parameterId, OdInt32& value);

  /** \deteails
    Retrieves a parameter value from an element using given parameter id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Output value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdInt32& value) const;

  /** \details
    Sets a value to a parameter by it's id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Input value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdInt32& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] Output parameter id as OdBmObjectId.
    \param value [out] Input parameter value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBmObjectId& parameterId, const OdInt32& value);
  
  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Parameter value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBmObjectId& parameterId, OdString& value);

  /** \deteails
    Retrieves a parameter value from an element using given parameter id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Output value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdString& value) const;

  /** \details
    Sets a value to a parameter by it's id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [in] Input value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdString& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] Output parameter id as OdBmObjectId.
    \param value [out] Input parameter value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBmObjectId& parameterId, const OdString& value);

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Parameter value as OdBmObject.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBmObjectId& parameterId, OdBmObjectId& value);

  /** \deteails
    Retrieves a parameter value from an element using given parameter id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [out] Output value as OdBmObjectId.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdBmObjectId& value) const;

  /** \details
    Sets a value to a parameter by it's id.

    \param parameterId [in] Parameter id as OdBmObjectId.
    \param value [in] Input value as OdBmObjectId.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdBmObjectId& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] Output parameter id as OdBmObjectId.
    \param value [out] Input parameter value as OdBmObjectId.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBmObjectId& parameterId, const OdBmObjectId& value);

  // OdBm::BuiltInParameter::Enum as a key
  
  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Parameter value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBm::BuiltInParameter::Enum& parameterId, OdTfVariant& value);

  /** \deteails
    Retrieves a parameter value from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Output value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBm::BuiltInParameter::Enum& parameterId, OdTfVariant& value) const;

  /** \details
    Sets a value to a parameter.

    \param parameterId [in] A built-in parameter.
    \param value [in] Input value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdTfVariant& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Input parameter value as OdTfVariant.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdTfVariant& value);

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Parameter value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBm::BuiltInParameter::Enum& parameterId, double& value);

  /** \deteails
    Retrieves a parameter value from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Output value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBm::BuiltInParameter::Enum& parameterId, double& value) const;

  /** \details
    Sets a value to a parameter.

    \param parameterId [in] A built-in parameter.
    \param value [in] Input value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setParam(const OdBm::BuiltInParameter::Enum& parameterId, const double& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Input parameter value as double.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBm::BuiltInParameter::Enum& parameterId, const double& value);

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Parameter value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBm::BuiltInParameter::Enum& parameterId, OdInt32& value);

  /** \deteails
    Retrieves a parameter value from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Output value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBm::BuiltInParameter::Enum& parameterId, OdInt32& value) const;
  
  /** \details
   Sets a value to a parameter.

   \param parameterId [in] A built-in parameter.
   \param value [in] Input value as OdInt32.
   \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
 */
  OdResult setParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdInt32& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Input parameter value as OdInt32.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdInt32& value);

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Parameter value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBm::BuiltInParameter::Enum& parameterId, OdString& value);

  /** \deteails
    Retrieves a parameter value from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Output value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBm::BuiltInParameter::Enum& parameterId, OdString& value) const;

  /** \details
   Sets a value to a parameter.

   \param parameterId [in] A built-in parameter.
   \param value [in] Input value as OdString.
   \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
 */
  OdResult setParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdString& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Input parameter value as OdString.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdString& value);

  /** \details
    Pops a parameter with given id from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Parameter value as OdBmObjectId.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult popParam(const OdBm::BuiltInParameter::Enum& parameterId, OdBmObjectId& value);

  /** \deteails
    Retrieves a parameter value from an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Output value as OdBmObjectId.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getParam(const OdBm::BuiltInParameter::Enum& parameterId, OdBmObjectId& value) const;

  /** \details
   Sets a value to a parameter.

   \param parameterId [in] A built-in parameter.
   \param value [in] Input value as OdBmObjectId.
   \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
 */
  OdResult setParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdBmObjectId& value);

  /** \details
    Adds a parameter to an element.

    \param parameterId [in] A built-in parameter.
    \param value [out] Input parameter value as OdBmObjectId.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addParam(const OdBm::BuiltInParameter::Enum& parameterId, const OdBmObjectId& value);

  OdBmElementPtr getFilterElement(const OdBm::BuiltInParameter::Enum& parameterId) const;
  OdBmElementPtr getFilterElement(const OdBmObjectId& parameterId) const;

  /** \details
    Returns database associated with this element as a pointer to the OdBmDatabase object.
  */
  virtual OdBmDatabase* database() const override;

  /** \details
    Returns database objects's id
  */
  const OdBmObjectId& objectId() const;

  /** \details
    Returns the ID of the element's owner as an OdBmObjectId object.
  */
  OdBmObjectId ownerId() const;
  /** \details
    Returns the ID of the element's owning element as an OdBmObjectId object.
  */
  OdBmObjectId owningElemId() const;

  /** \details
    Returns true if and only this object is a *database* -resident object.
  */
  bool isDBRO() const;

  /** \details
    Returns true if and only if this object has not been *closed* since it was
    created.
  */
  bool isNewObject() const;

  /** \details
    Returns true if and only if this element is a part of a family.
  */
  bool isInAFamily() const;

  virtual void subSetDatabaseDefaults(
    OdDbBaseDatabase* pDb,
    bool doSubents);

  /** \details
    Adds a cell to the element.

  \param aCell [in] Input cell.
  */
  void addCell(OdBmObjectPtr aCell);

  /** \details
    Returns geometry extents of this element as an object of OdGeExtents3d class.

    \param extents [out] Output geometry extents.
    \param viewportId [in] Id of a viewport. Set to NULL by default.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult
  getGeomExtents(OdGeExtents3d& extents,
                 const OdBmObjectId* viewportId = NULL) const;

  /** \details
  Returns true if this element could be clipped

  \param is3d [in] Clippable criteria is different for planar and 3d-views, so view type should be supplied via this param
  */
  bool isClippable(bool is3d) const;

  /** \details
    Returns true if this element could be sectioned
  */
  bool isSectionable() const;

  /** \details
    Returns true if this element has a 'Annotation' category type.
  */
  bool isAnnotation() const;

    /** \details
      Returns all subentity paths by graphic system marker for complex entities, that has
      the ability to associate an integer identifier (GS marker) with each graphic primitive or
      with groups of primitives during draw themself.

      \param type [in]  The subentity type being queried.
      \param gsMark [in]  The GS marker of the subentity being queried.
      \param pickPoint [in]  The WCS point being queried.
      \param xfm [in]  The WCS->DCS transformation matrix.
      \param subentPaths [out] The array of OdDbFullSubentPath objects.
      \param pEntAndInsertStack [in] The array of objectIds of the objects that are the nested containers of the subentity.

      \remarks
      Subentity type must be one of the following:

      <table>
        Name                      Value   Description
        OdDb::kFaceSubentType     1      Face subentity
        OdDb::kEdgeSubentType     2      Edge subentity
        OdDb::kVertexSubentType   3      Vertex subentity
        OdDb::kMlineSubentCache   4      Not used yet
        OdDb::kClassSubentType    5      MultiType subentity
      </table>
  */

  OdResult getSubentPathsAtGsMarker(OdDb::SubentType type, OdGsMarker gsMark,
                    const OdGePoint3d& pickPoint, const OdGeMatrix3d& xfm,
                    OdBmFullSubentPathArray& subentPaths,
                    const OdBmObjectIdArray* pEntAndInsertStack = 0) const;

  /** \details
      Returns all graphic system marker by subentity paths for complex entities, that has
      the ability to associate an integer identifier (GS marker) with each graphic primitive or
      with groups of primitives during draw themself.

      \param subPath [in]  The OdDbFullSubentPath to the subentity.
      \param gsMarkers [in/out] The array of integer identifiers (GS markers).
  */
  OdResult getGsMarkersAtSubentPath( const OdBmFullSubentPath& subPath, OdGsMarkerArray& gsMarkers) const;

  /** \details
    Throws an exception if this object is not open OdDb::kForRead.

    \remarks
    This function should be used only inside member functions that do not modify
    this object.
    It should be the first function called by these functions.

    Throws:
    <table>
      Exception             Cause
      eNotOpenForRead       !isReadEnabled()
  </table>
  */
  void assertReadEnabled() const;

  /** \details
    Throws an exception if this object is not open OdDb::kForWrite,
    and controls automatic *undo* and notification of modifications.

    \remarks
    This function should be used only inside member functions that modify this
    object.
    It should be the first function called by these functions.

    Throws:
    <table>
      Exception             Cause
      eNotOpenForWrite     !isWriteEnabled()
  </table>
  */
  void assertWriteEnabled();

  /** \details
    Throws an exception if this object is not open OdDb::kForNotify.

    \remarks
    This function should be used only inside member functions that are used only
    when this object
    is open OdDb::kForNotify. It should be the first function called by these
    functions.

    Throws:
    <table>
      Exception            Cause
      eInvalidOpenState    !isNotifyEnabled()
  </table>
  */
  void assertNotifyEnabled() const;

  /** \details
    Returns the part of geometry which passes the element settings.

    \param options [in] Input GeometryOptions which are used for selection of GNodes from GElement.
    \param pObj [out] Returns geometry which was collected from OdBmGElement (gometry cache) in accordance with GeometryOptions.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getGeometry(const OdBmGeometryOptions& options, OdBmObjectPtr& pObj) const;

  void highlight(const bool bDoIt = true, const OdBmFullSubentPath* pSubId = 0,
                 const bool highlightAll = false) const;

  /** \details
    Returns the family name as OdString value.
  */
  OdString getFamilyName() const;
  /** \details
    Returns the element's type name as OdString value.
  */
  OdString getTypeName() const;
  /** \details
    Returns the element name as OdString value.
  */
  OdString getElementName() const;
  /** \details
    Returns the descriptive element name as OdString value.
  */
  OdString getShortDescriptiveName() const;

  /** \details
    Returns the element type id if available.
  */
  OdBmObjectId getTypeID() const;

  /** \details
    The method is used to highlight an element.
  */
  void subHighlight(const bool bDoIt = true, const OdBmFullSubentPath* pSubId = 0,
                    const bool highlightAll = false) const;

  /** \details
    Stores the entity in the element. If an Entity described by the same Schema already exists, it is overwritten.

    \param val [in] Input entity.
  */
  void setESEntity(const OdBmObjectPtr& val);

  /** \details
    Returns the entity in the element by specified GUID.

    \param entityGuid [out] Output entity.
  */
  OdBmObjectPtr getESEntity(const OdGUID& entityGuid) const;

  /** \details
    Returns all entities in the element.
  */
  OdBmMap<OdGUID, OdBmObjectPtr> getESEntities() const;

  /** \details
    Returns the Id of Design Option.

    \remarks -1, -3 and -4 mean no Design Option.
  */
  OdBmObjectId getDesignOptionId() const;


  /** \details
    Returns the unique identifier for the element from the database.

    \remarks
    getUniqueId is GUID of episode of the element creation and handle of the element in hex.
  */
  OdString getUniqueId() const;

  /** \details
    Checks if the element has DesignPropertyManager.
    \param OdBmDesignPropertyManagerPtr [out] Returns the pointer to the DesignPropertyManager.
    \returns true if the element has DesignPropertyManager.
  */
  bool hasDesignPropManager(OdBmDesignPropertyManagerPtr& pDPM) const;

  /** \details
    Checks if this element is visible on the specified view.

    \param pView [out] Pointer to view.
    \returns true if this element is visible on the specified view, false - otherwise.
  */
  bool isVisibleInView(const OdBmDBView* pView) const;

  /** \details
   Change EdimMode state for the element.

   \param bEdit [in] State of the variable which will be set.
   \returns eOk if the element support edit mode and the state was changed, or an appropriate error code otherwise.
  */
  OdResult setEditMode(bool bEdit);

  /** \details
   Retrieves whether the Edit mode is enabled for the database.
   \returns true if Edit mode is enabled for the database; otherwise, the method returns false.
  */
  bool isEditMode() const;

  /** \details
    Returns the Id of the assembly to which the element belongs.
  */
  OdBmObjectId getAssemblyInstanceId() const;

  /** \details
    Returns the Id of the Workset which owns the element.
  */
  OdBmPartitionId getWorksetId() const;

  //----------------------------------------------------------------------------
  // TfObject methods
  //----------------------------------------------------------------------------

  virtual OdResult getProperty(
      const OdTfProperty* pPI, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const OdTfProperty* pPI, const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) ODRX_OVERRIDE;

  virtual OdResult getProperty(
      const OdString& name, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1,
      const OdTfClass* pClass = NULL) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const OdString& name, const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1,
      const OdTfClass* pClass = NULL) ODRX_OVERRIDE;

  virtual OdResult getProperty(
      const PropertyIndexType propertyIndex, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const PropertyIndexType propertyIndex,
      const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) ODRX_OVERRIDE;
};
#endif // _BM_ELEMENT_H_

