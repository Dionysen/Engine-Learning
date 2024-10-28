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

#ifndef _BM_ICKYEXCLUDEDCATEGORIESSETPTRWRAPPER_H_
#define _BM_ICKYEXCLUDEDCATEGORIESSETPTRWRAPPER_H_
#include "Database/Entities/BmDrawFilter.h"

class OdBmDatabase;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmIckyExcludedCategoriesSetPtrWrapper;
class OdBmIckyExcludedCategoriesSetPtrWrapperImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmIckyExcludedCategoriesSetPtrWrapper object.
 */
typedef OdSmartPtr<OdBmIckyExcludedCategoriesSetPtrWrapper> OdBmIckyExcludedCategoriesSetPtrWrapperPtr;

/** \details
 A data type that represents an array of OdBmIckyExcludedCategoriesSetPtrWrapper objects.
 */
typedef OdArray<OdBmIckyExcludedCategoriesSetPtrWrapperPtr> OdBmIckyExcludedCategoriesSetPtrWrapperPtrArray;

//----------------------------------------------------------
//
// OdBmIckyExcludedCategoriesSetPtrWrapper
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmIckyExcludedCategoriesSetPtrWrapper : public OdBmDrawFilter {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmIckyExcludedCategoriesSetPtrWrapper);
public:
  bool getMassShellExcluded() const;
  OdResult setMassShellExcluded(bool);
  bool getAnnotationsExcluded() const;
  OdResult setAnnotationsExcluded(bool);
  bool getModelsExcluded() const;
  OdResult setModelsExcluded(bool);
  bool getAnalyticalModelsExcluded() const;
  OdResult setAnalyticalModelsExcluded(bool);
  bool getImportsExcluded() const;
  OdResult setImportsExcluded(bool);
  void getCategoryIds(OdBmObjectIdArray &) const;
  OdResult setCategoryIds(const OdBmObjectIdArray&);
  OdBmDatabase* getDatabase() const;
  //
  // Main functionality
  //


};


#endif // _BM_ICKYEXCLUDEDCATEGORIESSETPTRWRAPPER_H_

