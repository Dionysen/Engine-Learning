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

/************************************************************************/
/* Main header file for the DLL                                         */
/*                                                                      */
/* Implementation of the Common Data Access for ODBmElement.            */
/************************************************************************/
#ifndef _BM_CDAPROPERTIESMODULE_H_
#define _BM_CDAPROPERTIESMODULE_H_

#include "RxModule.h"
#include "RxMember.h"
#include "RxDynamicModule.h"
#include "DynamicLinker.h"

#include "Base/BmDynamicObject.h"

/** \details
  Facet class, complements OdBmElement RxProperties list by the dynamically
  builded list depending on object's BmParams
*/
class OdBmElementPropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the OdBmElement object in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmElementPropertyFacet(){}
  /** \details
    Empty destructor.
  */
  virtual ~OdBmElementPropertyFacet() {}
};

/** \details
  Facet class, complements OdBmDatabase RxProperties list 
*/
class OdBmDatabasePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the OdBmDatabase object in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmDatabasePropertyFacet() {}
  
  /** \details
    Empty destructor.
  */
  virtual ~OdBmDatabasePropertyFacet() {}
};

/** \details
  Facet class, complements OdBmProjectInfo RxProperties list
*/
class OdBmProjectInfoPropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the OdBmProjectInfo object in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmProjectInfoPropertyFacet() {}
  
  /** \details
    Empty destructor.
  */
  virtual ~OdBmProjectInfoPropertyFacet() {}
};

/** \details
  Facet class, complements viewsNodeEntity RxProperties list
*/
class OdBmViewsNodePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the viewsNodeEntity object in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmViewsNodePropertyFacet() {}
  
  /** \details
    Empty destructor.
  */
  virtual ~OdBmViewsNodePropertyFacet() {}
};

/** \details
  Facet class, complements buildingNodeEntity RxProperties list
*/
class OdBmBuildingNodePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the buildingNodeEntity object in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmBuildingNodePropertyFacet() {}
  
  /** \details
    Empty destructor.
  */
  virtual ~OdBmBuildingNodePropertyFacet() {}
};

/** \details
  Facet class, complements Category RxProperties list
*/
class OdBmRfaProjectPropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the RFA Project Dynamic Object Node in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmRfaProjectPropertyFacet() {}
  
  /** \details
    Empty destructor.
  */
  virtual ~OdBmRfaProjectPropertyFacet() {}
};

/** \details
  Facet class, complements Category RxProperties list
*/
class OdBmCategoryNodePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, calls by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.

    Recieves a raw pointer to the Categoty Dynamic Object Node in void *pUserData.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Empty constructor.
  */
  OdBmCategoryNodePropertyFacet() {}
  
  /** \details
    Empty destructor.
  */
  virtual ~OdBmCategoryNodePropertyFacet() {}
};

/** \details
  Facet provider class for BimRv objects
*/
class OdBmCDAFacetProvider : public OdRxFacetProvider
{
  static OdRxFacetProviderPtr instance;
public: 
  
  /** \details
    Returns an instance of the OdBmCDAFacetProvider class.
  */
  static OdRxFacetProviderPtr createObject();
  
  /** \details
    Assigns a facet provider to an instance of the OdBmCDAFacetProvider class.
  */
  static void addProvider();
  
  /** \details
    Removes a facet provider from an instance of the OdBmCDAFacetProvider class.
  */
  static void removeProvider();

  /** \details
    Adds properties list (facets) depending on the object type.

    \param pO [in] Input object. Possible object types: BmElement, BmDatabase, BmDynamicObject.
    \param pContext [in] Context.
    \param facets [in/out] Array of facets.
  */
  virtual void getFacets(const OdRxObject* pO, const OdRxMemberQueryContext* pContext, OdArray<OdRxClassPtr>& facets) ODRX_OVERRIDE;
};

/** \details
  CDA for BimRV module class.
  To enable BuiltIn Properties display - add BUILTINPROPENABLE in preprocessor definitions
*/
struct OdBmCdaPropertiesModule : public OdRxModule
{
  /** \details
    Initializes an application by creating an instance of the OdRxFacetProvider class,
    loading additional modules,
    and assigning a facet provider to it.
  */
  void initApp()
  {
    OdRxFacetProviderPtr instance = OdBmCDAFacetProvider::createObject();
    ::odrxDynamicLinker()->loadModule(OdBmLabelUtils);
    ::odrxDynamicLinker()->loadModule(RxPropertiesModuleName);
    OdBmCDAFacetProvider::addProvider();
  }
  
  /** \details
    Uninitializes an application by removing a facet provider from an instance of the
    OdRxFacetProvider class, and unloading additional modules.
  */
  void uninitApp()
  {
    OdBmCDAFacetProvider::removeProvider();
    ::odrxDynamicLinker()->unloadModule(RxPropertiesModuleName);
    ::odrxDynamicLinker()->unloadModule(OdBmLabelUtils);
  }
};

#endif // _BM_CDAPROPERTIESMODULE_H_
