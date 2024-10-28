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

#ifndef _BM_PRINTSETTINGS_H_
#define _BM_PRINTSETTINGS_H_
#include "Database/BmElement.h"

class OdBmPrintParameters;
typedef OdSmartPtr<OdBmPrintParameters> OdBmPrintParametersPtr;

class OdBmPrintSettings;
class OdBmPrintSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPrintSettings object.
 */
typedef OdSmartPtr<OdBmPrintSettings> OdBmPrintSettingsPtr;

/** \details
 A data type that represents an array of OdBmPrintSettings objects.
 */
typedef OdArray<OdBmPrintSettingsPtr> OdBmPrintSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmPrintSettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPrintSettings : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPrintSettings);
public:
  OdString getName() const;
  OdResult setName(const OdString&);
  OdBmPrintParametersPtr getPrintParameters() const;
  OdResult setPrintParameters(const OdBmPrintParametersPtr&);
  OdTimeStamp getTimeStampInSeconds() const;
  OdResult setTimeStampInSeconds(const OdTimeStamp&);
  //
  // Main functionality
  //
};
#endif // _BM_PRINTSETTINGS_H_

