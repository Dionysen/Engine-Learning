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

#ifndef _BM_EXTERNAL_RESOURCES_H_
#define _BM_EXTERNAL_RESOURCES_H_

#define ODBM_EXTERNAL_RESOURCES(DEF, ...)                                      \
  DEF(bd4f0f53 - 394a - 4468 - b37e - 1e7949013382,                            \
      cf823dbb - 21d2 - 42e0 - a39c - 1cb523a8cec2,                            \
      "C:\\ProgramData\\Autodesk\\RVT 2020\\Libraries\\US "                    \
      "Imperial\\UniformatClassifications.txt",                                \
      "3/22/2019 8:09:48 PM")                                                  \
  DEF(bd4f0f53 - 394a - 4468 - b37e - 1e7949013382,                            \
      b6305212 - 4915 - 4526 - b659 - be2d6f97174f,                            \
      "C:\\ProgramData\\Autodesk\\RVT 2020\\Libraries\\US "                    \
      "Imperial\\RevitKeynotes_Imperial_2004.txt",                             \
      "3/22/2019 8:09:48 PM")\

// NOTE: Default DB Server GUID
#define ODBM_SERVER_GUID OdGUID(L"bd4f0f53-394a-4468-b37e-1e7949013382")
#define ODBM_MODEL_IDENTITY_GUID OdGUID(L"face0000-1223-3344-4455-555666666333")
#define ODBM_UNK0_RESOURCE_GUID OdGUID(L"035a5512-e0ed-4c5b-95ee-f334a75dc085")
#define ODBM_DECALSOURCE_RESOURCE_GUID OdGUID(L"255ce4e1-9f0d-4892-8a9b-a038c5fc8e06")
#define ODBM_DECALCUTOUT_RESOURCE_GUID OdGUID(L"59f833c3-d6e1-4ede-857b-a5acae04d146")
#define ODBM_DECALBUMP_RESOURCE_GUID OdGUID(L"ce0fc894-e9e8-467d-90a7-5fdc61fa15c8")

#endif // _BM_EXTERNAL_RESOURCES_H_
