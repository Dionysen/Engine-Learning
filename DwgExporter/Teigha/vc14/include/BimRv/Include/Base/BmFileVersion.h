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

#ifndef _BM_FILE_VERSION_H_
#define _BM_FILE_VERSION_H_

// NB! Order matter! argument name: PARAM_DEF matters too.
//     Both are used in CMake
#define ODBM_LIST_VERSIONS(PARAM_DEF, ...) \
  PARAM_DEF(2011, __VA_ARGS__)             \
  PARAM_DEF(2012, __VA_ARGS__)             \
  PARAM_DEF(2013, __VA_ARGS__)             \
  PARAM_DEF(2014, __VA_ARGS__)             \
  PARAM_DEF(2015, __VA_ARGS__)             \
  PARAM_DEF(2016, __VA_ARGS__)             \
  PARAM_DEF(2017, __VA_ARGS__)             \
  PARAM_DEF(2018, __VA_ARGS__)             \
  PARAM_DEF(2019, __VA_ARGS__)             \
  PARAM_DEF(2020, __VA_ARGS__)             \
  PARAM_DEF(2021, __VA_ARGS__)

// TODO: generalize that, make it evaluated from ODBM_LIST_VERSIONS
#define ODBM_LATEST_FV 2021

#define ODBM_FV_ENTRY(VERSION, ...) \
  fileVersion##VERSION,

enum FileVersion {
  ODBM_LIST_VERSIONS(ODBM_FV_ENTRY)
};

#undef ODBM_FV_ENTRY

#endif // _BM_FILE_VERSION_H_
