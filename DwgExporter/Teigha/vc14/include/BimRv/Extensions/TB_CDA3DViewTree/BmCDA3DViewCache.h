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

#ifndef _BM_CDA3DVIEWCACHE_H_
#define _BM_CDA3DVIEWCACHE_H_

#include "BimCommon.h"
#include "Base/BmDynamicObject.h"
#include "Database/BmDatabase.h"

/** \details
  Cache class - singleton object, provides hierarchy tree necessary dynamic nodes creation and caching.
  Also provides module options: active view filter and clear node names options.
*/
class OdBmCDA3DViewCache
{
public:
  /** \details
    Returns a singleton instance of a cache object.
  */
  static OdBmCDA3DViewCache& cache();
 
  /** \details
    Clears internal cache arrays.
  */
  void clearCache();

  /** \details
    Returns a reference to a ViewsNode OdRxClass pointer.
  */
  OdTfClass*& getViewsClass();

  /** \details
    Returns a reference to an array of DynamicNode OdRxClass pointers.
  */
  OdArray<OdTfClass*>& getDynamicClasses();

  /** \details
    Returns a reference to a Views node pointer.
  */
  OdBmDynamicObjectPtr& getViewsNode();

  /** \details
    Returns a reference to a Categories nodes array.
  */
  OdArray<OdBmDynamicObjectPtr>& getCategoriesNodes();

  /** \details
    Returns a reference to a Heirarchy nodes array.
  */
  OdArray<OdBmDynamicObjectPtr>& getHierarchyNodes();

  /** \details
    Returns a pointer to a cached database.
  */
  OdBmDatabase* getCachedDb();

  /** \details
    Saves a cached database pointer.
    \param pDb [in] A pointer to a database to cache.
  */
  void setCachedDb(OdBmDatabase *pDb);

  /** \details
    Returns a reference to a cached 3DView id.
  */
  OdBmObjectId& getCachedViewId();
  
  /** \details
    Returns a reference to an active 3DView id.
  */
  OdBmObjectId& getActiveViewId();
  
  /** \details
    Returns a ClearNames option value.
  */
  bool getClearNames();
  
  /** \details
    Sets a ClearNames option value.
    \param bClearNames [in] True - clear names, false - names with informational additions.
  */
  void setClearNames(bool &bClearNames);
  
  /** \details
    Creates a hierarchy tree database cache.
    \param pDb [in] A pointer to a database.
    \returns eOk if the value is set successfully, or an appropriate error code otherwise.
  */
  OdResult makeCache(OdBmDatabase *pDb);

private:

  OdBmCDA3DViewCache() {}
  ~OdBmCDA3DViewCache();
  OdBmCDA3DViewCache(const OdBmCDA3DViewCache&);
  OdBmCDA3DViewCache& operator=(OdBmCDA3DViewCache&);

  /** \details
    Dynamic database views node pointer. Node contains array of pointers to database 3D views.
  */
  OdBmDynamicObjectPtr pViewsNode;

  /** \details
    Array of dynamic database categories nodes pointers. Array contains array of database childs - categories. 
    Each category contains an array of child nodes pointers - families, types or elements.
  */
  OdArray<OdBmDynamicObjectPtr> pCategoriesNodes;

  /** \details
    Array of dynamic intermediate nodes pointers. Array contains array of intermediate nodes - families or types.
    Each node contains an array of child nodes pointers - families, types or elements.
  */
  OdArray<OdBmDynamicObjectPtr> pHierarchyNodes;

  /** \details
    Saved cached database pointer. Used to monitor cached and properties requests database compliance.  
  */
  OdBmDatabase* cachedDb;

  /** \details
    Saved cached 3D View ID. Used to avoid recache call to the same view.
  */
  OdBmObjectId cachedViewId;

  /** \details
    Active 3D View ID to filter elements list, choosed by user or set by default.
  */
  OdBmObjectId activeViewId;

  /** \details
    Naming option, choosed by user or set false by default.
    Enables/disables node names addition by quantity of child elements, or elements DB handles
  */
  bool bClearNames = false;
  
  /** \details
    ViewsNode OdRxClass pointer.
  */
  OdTfClass* pViewsClass = NULL;

  /** \details
    Array of DynamicNode OdRxClass pointers.
  */
  OdArray<OdTfClass*> aDynamicClasses;

  /** \details
    Singleton OdBmCDA3DViewCache instance.
  */
  static OdBmCDA3DViewCache m_gCDA3dViewCache;
};

#endif // _BM_CDA3DVIEWCACHE_H_
