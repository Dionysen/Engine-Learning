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
#ifndef _BM_CDA3DVIEWTREEMODULE_H_
#define _BM_CDA3DVIEWTREEMODULE_H_

#include "RxModule.h"
#include "RxMember.h"
#include "RxDynamicModule.h"
#include "DynamicLinker.h"
#include "BmCDA3DViewCache.h"

#include "Base/BmDynamicObject.h"

#define BM_CDA_NODE_CATEGORY 1
#define BM_CDA_NODE_FAMILY   2
#define BM_CDA_NODE_TYPE     3

/** \details
  Facet class, complements OdBmElement RxProperties list by the dynamically
  built list depending on object's BmParams.
*/
class OdBmElementPropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, gets called by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.
    \param collectionBuilder [in] A list builder.
    \param pUserData [in] A raw pointer to an OdBmElement object.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
 
  /** \details
    Constructor. 
  */
  OdBmElementPropertyFacet(){}
  
  /** \details
    Virtual destructor.
  */
  virtual ~OdBmElementPropertyFacet() {}
};

/** \details
  Facet class, complements OdBmDatabase RxProperties list .
*/
class OdBmDatabasePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, gets called by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.
    \param collectionBuilder [in] A list builder.
    \param pUserData [in] A raw pointer to an OdBmDatabase object.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Constructor. 
  */
  OdBmDatabasePropertyFacet() {}
  
  /** \details
    Virtual destructor,
  */
  virtual ~OdBmDatabasePropertyFacet() {}
};

/** \details
  Facet class, complements viewsNodeEntity RxProperties list.
*/
class OdBmViewsNodePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, gets called by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.
    \param collectionBuilder [in] A list builder.
    \param pUserData [in] A raw pointer to a viewsNodeEntity object.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Constructor.
  */
  OdBmViewsNodePropertyFacet() {}
  
  /** \details
    Virtual destructor.
  */
  virtual ~OdBmViewsNodePropertyFacet() {}
};

/** \details
  Facet class, complements Dynamic nodes RxProperties list
*/
class OdBmDynamicNodePropertyFacet : public OdRxClass
{
public:
  /** \details
    Facet RxProperties list builder, gets called by OdRxMemberCollectionImpl::collectMembers() when
    RxMemberQueryEngine creates a new iterator for object's RxProperties.
    \param collectionBuilder [in] A collection builder.
    \param pUserData [in] A raw pointer to a Categoty Dynamic Object Node.
  */
  static void makeMembers(OdRxMemberCollectionBuilder& collectionBuilder, void* pUserData);
  
  /** \details
    Constructor.
  */
  OdBmDynamicNodePropertyFacet() {}
  
  /** \details
    Virtual destructor.
  */
  virtual ~OdBmDynamicNodePropertyFacet() {}
};

/** \details
  Facet provider class for Bim objects
*/
class OdBmCDAFacetProvider : public OdRxFacetProvider
{
  static OdRxFacetProviderPtr instance;
public:
  
  /** \details
    Returns OdBmCDAFacetProvider object.
  */
  static OdRxFacetProviderPtr createObject();
  
  /** \details
    Adds a Facet provider.
  */
  static void addProvider();
  
  /** \details
    Removes a Facet provider.
  */
  static void removeProvider();

  /** \details
    Returns facets as an OdRxClassPtr array.
    \param pO [in] Object to get facets of.
    \param pContext [in] Context.
    \param facets [out] Array of facets.
  */
  virtual void getFacets(const OdRxObject* pO, const OdRxMemberQueryContext* pContext, OdArray<OdRxClassPtr>& facets) ODRX_OVERRIDE;
};

/** \details
  3dView dependend CDA for BimRV module class.
  To enable BuiltIn Properties display - add BUILTINPROPENABLE in preprocessor definitions
*/
struct OdBmCDA3DViewTreeModule : public OdRxModule
{
  
  /** \details
    Initializes an application.
  */
  void initApp()
  {
    OdRxFacetProviderPtr instance = OdBmCDAFacetProvider::createObject();
    ::odrxDynamicLinker()->loadModule(OdBmLabelUtils);
    ::odrxDynamicLinker()->loadModule(RxPropertiesModuleName);
    OdBmCDAFacetProvider::addProvider();
    OdBmCDA3DViewCache::cache().clearCache();
  }
  
  /** \details
    Uninitializes an application.
  */
  void uninitApp()
  {
    OdBmCDAFacetProvider::removeProvider();
    ::odrxDynamicLinker()->unloadModule(RxPropertiesModuleName);
    ::odrxDynamicLinker()->unloadModule(OdBmLabelUtils);
  }
};

#endif // _BM_CDA3DVIEWTREEMODULE_H_
