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

#ifndef BMMODULE_NAMES_DEFINED
#define BMMODULE_NAMES_DEFINED

#include "OdModuleNames.h"

#define OdBmBaseModuleName                L"TB_Base"
#define OdBmLoaderBaseModuleName          L"TB_LoaderBase"
#define OdBmLoaderModuleName              L"TB_Loader"
#define OdBmModelerModuleName             L"TB_ModelerGeometry"
#define OdBmFormatCommonClassesModuleName L"TB_FormatCommonClasses"
#define OdBmFormatCommonReadersModuleName L"TB_FormatCommonReaders"
#define OdBmFormat2021ClassesModuleName   L"TB_Format2021Classes"
#define OdBmFormat2021ReadersModuleName   L"TB_Format2021Readers"
#define OdBmFormat2021WritersModuleName   L"TB_Format2021Writers"
#define OdBmFormat2020ClassesModuleName   L"TB_Format2020Classes"
#define OdBmFormat2020ReadersModuleName   L"TB_Format2020Readers"
#define OdBmFormat2019ClassesModuleName   L"TB_Format2019Classes"
#define OdBmFormat2019ReadersModuleName   L"TB_Format2019Readers"
#define OdBmFormat2018ClassesModuleName   L"TB_Format2018Classes"
#define OdBmFormat2018ReadersModuleName   L"TB_Format2018Readers"
#define OdBmFormat2017ClassesModuleName   L"TB_Format2017Classes"
#define OdBmFormat2017ReadersModuleName   L"TB_Format2017Readers"
#define OdBmFormat2016ClassesModuleName   L"TB_Format2016Classes"
#define OdBmFormat2016ReadersModuleName   L"TB_Format2016Readers"
#define OdBmFormat2011ClassesModuleName   L"TB_Format2011Classes"
#define OdBmFormat2011ReadersModuleName   L"TB_Format2011Readers"
#define OdBmFormat2012ClassesModuleName   L"TB_Format2012Classes"
#define OdBmFormat2012ReadersModuleName   L"TB_Format2012Readers"
#define OdBmFormat2013ClassesModuleName   L"TB_Format2013Classes"
#define OdBmFormat2013ReadersModuleName   L"TB_Format2013Readers"
#define OdBmFormat2015ClassesModuleName   L"TB_Format2015Classes"
#define OdBmFormat2015ReadersModuleName   L"TB_Format2015Readers"
#define OdBmFormat2014ClassesModuleName   L"TB_Format2014Classes"
#define OdBmFormat2014ReadersModuleName   L"TB_Format2014Readers"
#define OdBmCommonModuleName              L"TB_Common"
#define OdBmDatabaseModuleName            L"TB_Database"
#define OdBmEssentialModuleName           L"TB_Essential"
#define OdBmStructuralModuleName          L"TB_Structural"
#define OdBmFamilyModuleName              L"TB_Family"
#define OdBmHostObjModuleName             L"TB_HostObj"
#define OdBmMainModuleName                L"TB_Main"
#define OdBmMEPModuleName                 L"TB_MEP"
#define OdBmRebarModuleName               L"TB_Rebar"
#define OdBmAnalyticalModuleName          L"TB_Analytical"
#define OdBmArchitectureModuleName        L"TB_Architecture"
#define OdBmStairsRampModuleName          L"TB_StairsRamp"
#define OdBmGeometryModuleName            L"TB_Geometry"
#define OdBmGeometryUtilsModuleName       L"TB_GeometryUtils"

#define OdBmColladaImportModuleName       L"TB_ColladaImport"
#define OdBmJsonExportModuleName          L"TB_JsonExport"
#define OdBmIfcExportModuleName           L"TB_IfcExport"
#define OdBmLabelUtils                    L"TB_ExLabelUtils"
#define OdBmCdaProperties                 L"TB_CDAProperties"
#define OdBmDevGuideCommands              L"TB_DevGuideCommands"
#define OdBmCommands                      L"TB_Commands"
#define OdBmModelerCommands               L"TB_ModelerCommands"
#define OdBmCda3dViewTree                 L"TB_CDA3DViewTree"

#define ODBM_FORMAT_MODULE_APPLY(VERSION, MACRO, ...) \
    MACRO(OdBmFormat##VERSION##ClassesModuleName,     \
          OdBmFormat##VERSION##ClassesModule)         \
    MACRO(OdBmFormat##VERSION##ReadersModuleName,     \
          OdBmFormat##VERSION##ReadersModule)

#define ODBM_ALL_FORMAT_MODULES(MACRO)                \
  MACRO(OdBmFormat##VERSION##WritersModuleName,       \
        OdBmFormat##VERSION##WritersModule)           \
  ODBM_LIST_VERSIONS(ODBM_FORMAT_MODULE_APPLY, MACRO) \
  ODBM_FORMAT_MODULE_APPLY(Common, MACRO)

#endif
