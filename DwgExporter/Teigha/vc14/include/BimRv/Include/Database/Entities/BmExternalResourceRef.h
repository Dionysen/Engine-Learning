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

#ifndef _BM_EXTERNALRESOURCEREF_H_
#define _BM_EXTERNALRESOURCEREF_H_
#include "Base/BmObject.h"



class OdBmExternalResourceRef;
class OdBmExternalResourceRefImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmExternalResourceRef object.
 */
typedef OdSmartPtr<OdBmExternalResourceRef> OdBmExternalResourceRefPtr;

/** \details
 A data type that represents an array of OdBmExternalResourceRef objects.
 */
typedef OdArray<OdBmExternalResourceRefPtr> OdBmExternalResourceRefPtrArray;

//----------------------------------------------------------
//
// OdBmExternalResourceRef
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmExternalResourceRef : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmExternalResourceRef);
public:
  OdGUID getServerId() const;
  OdResult setServerId(const OdGUID&);
  OdString getDisplayPath() const;
  OdResult setDisplayPath(const OdString&);
  void getReferenceInformation(OdBmMap<OdString, OdString> &) const;
  OdString getVersion() const;
  OdResult setVersion(const OdString&);
  //
  // Main functionality
  //

  OdResult addReferenceInfo(const OdString& aKey, const OdString& aValue);
};


#endif // _BM_EXTERNALRESOURCEREF_H_

