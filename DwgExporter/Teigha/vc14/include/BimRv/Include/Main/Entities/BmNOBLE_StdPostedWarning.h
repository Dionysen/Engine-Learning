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

#ifndef _BM_NOBLE_STDPOSTEDWARNING_H_
#define _BM_NOBLE_STDPOSTEDWARNING_H_
#include "Main/Entities/BmNOBLE_PostedWarning.h"

class OdBmProxyFailureResolution;
typedef OdSmartPtr<OdBmProxyFailureResolution> OdBmProxyFailureResolutionPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;
class OdBmFailureDefinitionId;

class OdBmNOBLE_StdPostedWarning;
class OdBmNOBLE_StdPostedWarningImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNOBLE_StdPostedWarning object.
 */
typedef OdSmartPtr<OdBmNOBLE_StdPostedWarning> OdBmNOBLE_StdPostedWarningPtr;

/** \details
 A data type that represents an array of OdBmNOBLE_StdPostedWarning objects.
 */
typedef OdArray<OdBmNOBLE_StdPostedWarningPtr> OdBmNOBLE_StdPostedWarningPtrArray;

//----------------------------------------------------------
//
// OdBmNOBLE_StdPostedWarning
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmNOBLE_StdPostedWarning : public OdBmNOBLE_PostedWarning {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNOBLE_StdPostedWarning);
public:
  void getAdditionalElements(OdBmObjectIdArray &) const;
  OdBmFailureDefinitionId getFailureDefinitionId() const;
  void getFailureElements(OdBmObjectIdArray &) const;
  void getResolutions(OdBmMap<OdInt32, OdBmProxyFailureResolutionPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_NOBLE_STDPOSTEDWARNING_H_

