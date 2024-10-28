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

#ifndef _BM_DATABASE_H_
#define _BM_DATABASE_H_
#include "Base/BmObject.h"
#include "Base/BmFileVersion.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
#include "Database/BmManagerType.h"
#include "Database/Enums/BmUnitSystem.h"
// BEGIN: Includes
#include "Base/BmObjectId.h"
#include "Database/Entities/BmCategory.h"
// END: Includes

class OdBmDatabase;
typedef OdSmartPtr<OdBmDatabase> OdBmDatabasePtr;
class OdBmDocumentIncrementTable;
typedef OdSmartPtr<OdBmDocumentIncrementTable> OdBmDocumentIncrementTablePtr;
class OdBmDocumentStorageIndexImplem;
typedef OdSmartPtr<OdBmDocumentStorageIndexImplem> OdBmDocumentStorageIndexImplemPtr;
class OdBmContentTable;
typedef OdSmartPtr<OdBmContentTable> OdBmContentTablePtr;
class OdBmBasicFileInfo;
typedef OdSmartPtr<OdBmBasicFileInfo> OdBmBasicFileInfoPtr;
class OdBmElemTable;
typedef OdSmartPtr<OdBmElemTable> OdBmElemTablePtr;
class OdBmFrontElemTable;
typedef OdSmartPtr<OdBmFrontElemTable> OdBmFrontElemTablePtr;
class OdBmMidElemTable;
typedef OdSmartPtr<OdBmMidElemTable> OdBmMidElemTablePtr;
class OdBmBackElemTable;
typedef OdSmartPtr<OdBmBackElemTable> OdBmBackElemTablePtr;
class OdBmAppInfoManager;
typedef OdSmartPtr<OdBmAppInfoManager> OdBmAppInfoManagerPtr;
class OdBmDocumentHistory;
typedef OdSmartPtr<OdBmDocumentHistory> OdBmDocumentHistoryPtr;
class OdBmPartitionTable;
typedef OdSmartPtr<OdBmPartitionTable> OdBmPartitionTablePtr;
class OdBmDevBranchInfo;
typedef OdSmartPtr<OdBmDevBranchInfo> OdBmDevBranchInfoPtr;
class OdBmExServicesUsed;
typedef OdSmartPtr<OdBmExServicesUsed> OdBmExServicesUsedPtr;
class OdBmNOBLE_SecondaryDataStorage;
typedef OdSmartPtr<OdBmNOBLE_SecondaryDataStorage> OdBmNOBLE_SecondaryDataStoragePtr;
class OdBmObjectId;

class OdBmDatabase;
class OdBmDatabaseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDatabase object.
 */
typedef OdSmartPtr<OdBmDatabase> OdBmDatabasePtr;

/** \details
 A data type that represents an array of OdBmDatabase objects.
 */

typedef OdArray<OdBmDatabasePtr> OdBmDatabasePtrArray;

class OdBmHostAppServices;
class OdBmUnitsFormatter;
class OdBmAUnits;
typedef OdSmartPtr<OdBmAUnits> OdBmAUnitsPtr;
class OdBmElement;
typedef OdSmartPtr<OdBmElement> OdBmElementPtr;
class OdBmFamilyManager;
typedef OdSmartPtr<OdBmFamilyManager> OdBmFamilyManagerPtr;

//----------------------------------------------------------
//
// OdBmDatabase
//
//----------------------------------------------------------

/** \details
This class implement functionality for BimRv database management.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDatabase : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDatabase);
public:
  /** \details 
    Retrieves the set of simplified databases of imported families.
    \param map [out] An instance of OdBmMap class that contains a collection of imported databases.
    \remarks
     Collection of imported databases represented with pairs GUID - smart pointer to a database.
     Imported families represented by their simplified databases can be used for creating family symbols or family instances, but 
     they can stay in the database unused as well.
  */
  void getImportedDatabases(OdBmMap<OdGUID, OdBmDatabasePtr> &) const;
  /** \details 
  Retrieves the version of the original file related to the database.
  \returns The current version of the database's original file.
  */
  FileVersion getOriginalFileVersion() const;
  /** \details 
    Retrieves the name of the file related to the database. 
    \returns A string that contains the database's file name.
  */
  OdString getFilename() const;
  OdBmDocumentIncrementTablePtr getDocIncrementalTable() const;
  /** \details
    Retrieves the database contents.
    \returns A smart pointer to an OdBmDocumentStorageIndexImplem object that represents the database contents.
  */
  OdBmDocumentStorageIndexImplemPtr getContents() const;
  /** \details 
    Retrieves the document content table from the database.
    \returns A smart pointer to an OdBmContentTable object that contains the document content table.
  */
  OdBmContentTablePtr getContentDocTable() const;
  /** \details 
    Retrieves the basic information about the database's file.
    \returns A smart pointer to an OdBmBasicFileInfo object that contains the basic information about the database's file.
    \remarks 
    Basic database's file information contains a path to the file, BimRv version, work-sharing flag value, username, etc.
  */
  OdBmBasicFileInfoPtr getBasicFileInfo() const;
  /** \details 
    Retrieves the table of database elements.
    \returns A smart pointer to an OdBmElemTable object that represents the element table.
  */
  OdBmElemTablePtr getElementTable() const;
  /** \details 
    This method is used for getting database front elements for rendering purposes. 
    For internal use only. It is strictly recommended DO NOT use it in your custom applications.
    \returns A smart pointer to an OdBmFrontElemTable object that contains the front element table.
  */  
  OdBmFrontElemTablePtr getFrontElementTable() const;
  /** \details 
    This method is used for getting database middle elements for rendering purposes.
    For internal use only. It is strictly recommended DO NOT use it in your custom applications.
    \returns A smart pointer to an OdBmFrontElemTable object that contains the middle element table.
  */  
  OdBmMidElemTablePtr getMidElementTable() const;
  /** \details 
    This method is used for getting database back elements for rendering purposes. 
    For internal use only. It is strictly recommended DO NOT use it in your custom applications.
    \returns A smart pointer to an OdBmBackElemTable object that contains the back element table.
  */  
  OdBmBackElemTablePtr getBackElementTable() const;
  /** \details 
    Retrieves the array of the database trackers.
    \param appInfoArr [out] A placeholder for the array of database trackers.
    \remarks 
    The method fills the passed array of smart pointers to OdBmObject instances and returns it to a calling subroutine.
  */
  void getAppInfoArr(OdArray<OdBmObjectPtr> &) const;
  /** \details 
    Retrieves the content table from the database.
    \returns A smart pointer to an OdBmContentTable object that contains the content table.
  */
  OdBmObjectPtr getContentTable() const;
  /** \details 
    Retrieves the root database. 
    \returns A raw pointer to an OdBmDatabase object that represents the root database for this database object.
  */
  OdBmDatabase* getRootDatabase() const;
  /** \details 
    Retrieves application information manager for the database.
    \returns A smart pointer to an OdBmAppInfoManager object that represents the application information manager.
  */
  OdBmAppInfoManagerPtr getAppInfoManager() const;
  /** \details 
    Retrieves the current style settings applied to the database.
    \returns A smart pointer to an OdBmObject instance that contains the current style settings.
  */
  OdBmObjectPtr getStyleSettings() const;
  /** \details 
    Retrieves the document history from the database.
    \returns A smart pointer to an OdBmDocumentHistory object that contains the document history.
  */
  OdBmDocumentHistoryPtr getHistory() const;
  /** \details 
    Retrieves the partition table from the database.
    \returns A smart pointer to an OdBmPartitionTable object that contains the partition table.
  */
  OdBmPartitionTablePtr getPartitionTable() const;
  /** \details 
    Retrieves the identifier of the owner family for the family database (i.e. for .rfa files).
    \returns A an OdBmObjectId object that contains the identifier of the owner family.
    \remarks 
    If the database is not a family database (a .rvt file), the method returns a null identifier (OdBmObjectId::kNull).
  */
  OdBmObjectId getOwnerFamilyId() const;
  /** \details 
    Retrieves the identifier of the owner family for the database with group identifier.
    \returns A an OdBmObjectId object that contains the identifier of the owner family.
  */
  OdBmObjectId getOwnerFamilyContainingGroupId() const;
  /** \details 
    Retrieves the development branch information for the database.
    \returns A a smart pointer to an OdBmDevBranchInfo object that contains the development branch information.
  */
  OdBmDevBranchInfoPtr getDevBranchInfo() const;
  /** \details 
    Retrieves whether the database is associated with a group file.
    \returns true if the database is associated with a group file; otherwise, the method returns false.
  */
  bool getIsGroupFile() const;
  /** \details 
    Retrieves whether the database contains a corrupted document.
    \returns true if the database contains a corrupted document; otherwise, the method returns false.
  */
  bool getCorruptDocument() const;
  /** \details 
    Retrieves upgrades that were executed for the database.
    \param upgrades [out] An array of GUID values, which represent executed upgrades.
    \remarks 
    The method fills the passed array of OdGUID objects with GUID values and returns it to a calling subroutine.
  */
  void getExecutedUpgrades(OdArray<OdGUID> &) const;
  /** \details 
    Retrieves the list software applications that were used for saving the database content in a file.
    \param builds [out] An array of strings, which contains information about software applications.
    \remarks 
    The method fills the passed array of OdString objects and returns it to a calling subroutine.
  */
  void getSoftwareBuild(OdArray<OdString> &) const;
  /** \details 
    Retrieves external services that were used within the database.
    \returns A smart pointer to an OdBmExServicesUsed object that represents the external services that were used within the database.
  */
  OdBmExServicesUsedPtr getExServicesUsed() const;
  /** \details 
    Retrieves whether the database contains the core document.
    \returns true if the database contains the core document; otherwise, the method returns false.
  */
  bool getIsCoreDocument() const;
  /** \details 
    Retrieves the noble secondary data from the database.
    \returns A smart pointer to an OdBmNOBLE_SecondaryDataStorage object that represents the noble secondary data.
  */
  OdBmNOBLE_SecondaryDataStoragePtr getNobleSecondaryData() const;
  /** \details 
    Retrieves the information about the steel model from the database.
    \returns A smart pointer to an OdBmObject instance that represents the information about the steel model.
  */
  OdBmObjectPtr getSteelModelInfo() const;
  //
  // Main functionality
  //

  /** \details
    Initializes the database.
    \param isDef [in] A flag value, that determines whether to initialize the database properties (if it is equal to true) or not (if it is equal to false).
  */
  void initialize(bool isDef);

  /** \details
    Adds a new element and registers it in the database.
    \param pObj [in] A smart pointer to the created object that should be added to the database.
    \returns If the element was successfully added to the database, the method returns the identifier of the created element; otherwise it returns a null identifier.
    \remarks 
    Please note that a null identifier has a value, which is not equal to zero (OdBmObjectId::kNull). 
  */
  OdBmObjectId addElement(const OdBmElementPtr& pObj);

  /** \details
    Retrieves the identifier of the database-resident element by its handle.
    \param handle           [in] An object's handle.
    \param createIfNotFound [in] A flag value that determines whether to create an object if it wasn't found.
    \returns An identifier of the element. If it was found or successfully created in the case when the second parameter is equal to true.
    \remarks 
    If the element was not found by its handle and if the second parameter is equal to true, 
    the method tries to create a new element and if it was successfully created, the method returns its identifier.
    If the element was not found by its handle and if the second parameter is equal to false, or if the creation of a new element fails, 
    the method returns a null identifier (OdBmObjectId::kNull).
    Please note that a null identifier has a value, which is not equal to zero. 
  */
  OdBmObjectId getObjectId(const OdBmObjectId::handle_type& handle,
                           bool createIfNotFound = false);

  /** \details
    Retrieves the identifier of the database-resident element by its handle.
    \param handle           [in] An object's handle.
    \returns An identifier of the element if it was found; otherwise, the method returns a null identifier.
    \remarks 
    Please note that a null identifier has a value, which is not equal to zero (OdBmObjectId::kNull). 
  */
  OdBmObjectId getObjectId(const OdBmObjectId::handle_type& handle) const;

  /** \details
    Retrieves the host application service associated with the database.
    \returns A raw pointer to an OdBmHostAppServices object associated with the database.
  */
  OdBmHostAppServices* appServices() const;
  
  /** \details
    Retrieves the unit formatter for the database as a constant object.
    returns A smart pointer to an OdBmUnitsFormatter object that represents the currently used unit formatter.
  */
  const OdBmUnitsFormatter& formatter() const;

  /** \details
    Retrieves the unit formatter for the database.
    returns A smart pointer to an OdBmUnitsFormatter object that represents the currently used unit formatter.
  */
  OdBmUnitsFormatter& formatter();

  /** \details
    Retrieves the database manager of a specified type.
    \param type [in] A manager type value.
    \returns A smart pointer to an OdBmObject instance that represents the database manager.
  */
  OdBmObjectPtr getAppInfo(const OdBm::ManagerType::Enum type) const;

  /** \details
    Retrieves the database manager of a specified type.
    \param type            [in] A manager type value.
    \param bInitIfNoExists [in] A flag value that determines whether application properties should be initialized if the database manager was not found.
    \returns A smart pointer to an OdBmObject instance that represents the database manager.
    \remarks 
    If the database manager was not found by its type and if the second parameter is equal to true, 
    the method tries to initialize the appropriate application properties and if they were successfully initialized, 
    the method returns a smart pointer to the created database manager object.
    If the database manager was not found by its type and if the second parameter is equal to false, 
    or if the initialization of application properties fails, the method returns a null smart pointer.
  */
  OdBmObjectPtr getAppInfo(const OdBm::ManagerType::Enum type, bool bInitIfNoExists = false);

  /** \details
    Retrieves the display unit system.
    \returns A value of the UnitSystem enumeration that represents the current display unit system.
    \remarks
    The method returns one of the next values:
    <table>
      <b>Metric</b>    0x00000000
      <b>Imperial</b>  0x00000001
    </table>
  */
  OdBm::UnitSystem::Enum getDisplayUnitSystem() const;

  /** \details
    Creates a new element table iterator.
    Iterator provides the sequential access to element ids from database's element table.
    \returns A smart pointer to an OdBmElementIterator object that represents newly created element table iterator.
  */
  OdBmIteratorPtr<OdBmObjectId>
  newElemTableIteratorById(const bool random = false) const;


  /** \details
    Creates a new element table iterator.
    Iterator provides the sequential access to elements from database's element table.
    \returns A smart pointer to an OdBmElementIterator object that represents newly created element table iterator.
  */
  OdBmIteratorPtr<OdBmElementPtr>
  newElemTableIterator(const bool random = false) const;

  /** \details
    Creates a new element table iterator.
    Iterator provides the sequential access to element ids from the database.
    \returns A smart pointer to an OdBmElementIterator object that represents newly created element iterator.
  */
  OdBmIteratorPtr<OdBmObjectId> newIteratorById() const;

  /** \details
    Creates a new element table iterator.
    Iterator provides the sequential access to elements from the database.
    \returns A smart pointer to an OdBmElementIterator object that represents newly created element iterator.
  */
  OdBmIteratorPtr<OdBmElementPtr> newIterator() const;

  /** \details
    Retrieves whether the database is allocated in a .rvt file
    \returns true if the database is allocated in a .rvt file; otherwise, the method returns false.
  */
  bool isModel() const;

  /** \details
    Retrieves the family manager from the family database (contained in a .rfa file).
    \returns A smart pointer to an OdBmFamilyManager object that represents the family manager.
  */
  OdBmFamilyManagerPtr getFamilyManager();

  /** \details
    Retrieves the latest version of the file where the database is allocated.
    \returns A FileVersion object that contains the latest file version.
  */
  static const FileVersion latestFileVersion();

  /** \details
    Retrieves whether the Worksharing mode is enabled for the database. 
    \returns true if Worksharing mode is enabled for the database; otherwise, the method returns false.
  */
  bool isWorkshared() const;

  /** \details
    Retrieves the active OdBmDBDrawing object from the database.
    \returns An identifier of the active OdBmDBDrawing object.
  */
  OdBmObjectId getActiveDBDrawingId() const;

  /** \details
    Retrieves the OdBmObjectId of active SketchPlane element from the active DBView.
    \returns An identifier of the active OdBmSketchPlane element. Returns OdBmObjectId::kNull for views which don't have a sketch.
  */
  OdBmObjectId getActiveSketchPlaneId() const;

  /** \details
    Retrieves categories contained in the database.
    \returns A map object to categories data. 
    \remarks 
    Each record in the map consists of a type of built-in category and a smart pointer to the appropriate category object.
  */
  const OdBmMap<OdBm::BuiltInCategory::Enum, const OdBmCategoryPtr> getCategoriesData() const;

  /** \details
   Retrieves whether the Edit mode is enabled for the database.
   \returns true if Edit mode is enabled for the database; otherwise, the method returns false.
 */
  bool isEditMode() const;

  virtual OdBmDatabase* database() const override;
};


#endif // _BM_DATABASE_H_

