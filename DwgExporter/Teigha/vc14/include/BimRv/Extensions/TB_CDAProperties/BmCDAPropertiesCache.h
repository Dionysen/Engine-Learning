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

#ifndef _BM_CDAPROPERTIESCACHE_H_
#define _BM_CDAPROPERTIESCACHE_H_

#include "BimCommon.h"
#include "Base/BmDynamicObject.h"
#include "Database/BmDatabase.h"
#include "Database/BmElement.h"

/** \details
  Cache class - singleton object, provides hierarchy tree necessary dynamic nodes creation and caching.
*/
class OdBmCDAPropertiesCache
{
public:

  /** \details
    Returns a singleton instance of a cache object.
  */
  static OdBmCDAPropertiesCache& cache();
  
  /** \details
    Returns a reference to a RfaProjectNode OdRxClass pointer.
  */
  OdTfClass*& getRfaProjClass();
  
  /** \details
     Returns a reference to a ViewsNode OdRxClass pointer.
  */
  OdTfClass*& getViewsClass();
  
  /** \details
     Returns a reference to a BuildingNode OdRxClass pointer.
  */
  OdTfClass*& getBuildingClass();
  
  /** \details
    Clearing internal cache arrays.
  */
  void clearCache();

  /** \details
    Returns reference to Views node pointer.
  */
  OdBmDynamicObjectPtr& getViewsNode();

  /** \details
    Returns reference to Building node pointer.
  */
  OdBmDynamicObjectPtr& getBuildingNode();

  /** \details
    Returns reference to RFA Project node pointer.
  */
  OdBmDynamicObjectPtr& getRFAProjNode();

  /** \details
    Returns reference to Categories nodes array.
  */
  OdArray<OdBmDynamicObjectPtr>& getCategoriesNodes();

  /** \details
    Returns reference to Levels and Categories map.
  */
  OdBmMap<OdBmObjectId, OdArray<OdBmDynamicObjectPtr> >& getLevelsCache();

  /** \details
    Creates hierarchy tree database cache.
    \param pO [in] pointer to building node object, contains Database pointer in attributes
    \param aLevels [in] array of database levels, getted in getLevels() function.
    \returns eOk if the value is set successfully, or an appropriate error code otherwise.
  */
  OdResult makeCache(const OdRxObject* pO, OdBmElementPtrArray& aLevels); //const;

  /** \details
    Creates database levels map, using OdBmLevelPlanViewTracking manager.
    \param pO [in] pointer to building node object, contains Database pointer in attributes
    \param mapLevelIds[out] map to store result of OdBmLevelPlanViewTracking manager call
    \returns eOk if the value is set successfully, or an appropriate error code otherwise.
  */
  OdResult getLevels(const OdRxObject* pO, OdBmMap<OdBmObjectId, OdBmSet<OdBmObjectId> >& mapLevelIds) const;

  /** \details
    Creates categories dynamic nodes for RFA files.
    \param pO [in] pointer to RFA project node object, contains Database pointer in attributes
    \param nCount[in/out] uses as flag, valid pointer - tryGetCount() returns only count of categories
                                        NULL pointer - newValueIterator() makes categories cache
    \returns eOk if the value is set successfully, or an appropriate error code otherwise.
  */
  OdResult getRFACategories(const OdRxObject* pO, int* nCount);

  
private:
  OdBmCDAPropertiesCache() {}
  ~OdBmCDAPropertiesCache();

  OdBmCDAPropertiesCache(const OdBmCDAPropertiesCache&);
  OdBmCDAPropertiesCache& operator=(OdBmCDAPropertiesCache&);

  /** \details
    Dynamic database views node pointer. Node contains array of pointers to database 3D views.
  */
  OdBmDynamicObjectPtr pViewsNode;

  /** \details
    Dynamic Building node pointer.
  */
  OdBmDynamicObjectPtr pBuildingNode;

  /** \details
    Dynamic Project node pointer for RFA databases.
  */
  OdBmDynamicObjectPtr pRFAProjNode;

  /** \details
    Array of dynamic categories nodes pointers. Array contains array of Level childs - categories.
    Each category contains an array of child nodes pointers - elements.
  */
  OdArray<OdBmDynamicObjectPtr> pCategoriesNodes;

  /** \details
    Map of Levels with associated array of categories nodes.
  */
  OdBmMap<OdBmObjectId, OdArray<OdBmDynamicObjectPtr> > mLevelsCache;
  
  /** \details
    RfaProjectNode OdRxClass pointer.
  */
  OdTfClass* pRfaProjClass;

  /** \details
    ViewsNode OdRxClass pointer.
  */
  OdTfClass* pViewsClass;

  /** \details
    BuildingNode OdRxClass pointer.
  */
  OdTfClass* pBuildingClass;

  /** \details
    Array of RFACategoriesNode OdRxClass pointers.
  */
  OdArray<OdTfClass*> aRFACategoryClasses;

  /** \details
    Array of CategoriesNode OdRxClass pointers.
  */
  OdArray<OdTfClass*> aCategoryClasses;

  /** \details
    Singleton OdBmCDAPropertiesCache instance.
  */
  static OdBmCDAPropertiesCache m_gCDAPropertiesCache;
};

#endif // _BM_CDAPROPERTIESCACHE_H_
