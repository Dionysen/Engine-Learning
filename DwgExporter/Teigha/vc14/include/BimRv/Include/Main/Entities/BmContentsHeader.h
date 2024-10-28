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

#ifndef _BM_CONTENTSHEADER_H_
#define _BM_CONTENTSHEADER_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/BmDatabase.h"
// END: Includes



class OdBmContentsHeader;
class OdBmContentsHeaderImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmContentsHeader object.
 */
typedef OdSmartPtr<OdBmContentsHeader> OdBmContentsHeaderPtr;

/** \details
 A data type that represents an array of OdBmContentsHeader objects.
 */
typedef OdArray<OdBmContentsHeaderPtr> OdBmContentsHeaderPtrArray;

//----------------------------------------------------------
//
// OdBmContentsHeader
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmContentsHeader : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmContentsHeader);
public:
  OdUInt32 getSystemHeaderVersion() const;
  OdUInt32 getSystemHeaderSubversion() const;
  OdString getSystemHeaderString() const;
  OdUInt32 getOSMajorVersion() const;
  OdUInt32 getOSMinorVersion() const;
  OdUInt32 getPlatformId() const;
  OdUInt16 getProcessorArchitecture() const;
  OdUInt32 getProcessorType() const;
  OdUInt32 getPageSize() const;
  void getAppInfoBuffer(OdUInt8Array &) const;
  //
  // Main functionality
  //
};
#endif // _BM_CONTENTSHEADER_H_

