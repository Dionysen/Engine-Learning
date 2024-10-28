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

#ifndef _BM_STRING_H_
#define _BM_STRING_H_

#include "OdList.h"

namespace OdBm {
namespace Utils {
namespace String {

OdList<OdString> TB_COMMON_EXPORT split(const OdString& msg, OdChar sep = L'\n');
OdAnsiString TB_COMMON_EXPORT toUtf8(const OdString& value);

} // namespace String
} // namespace Utils
} // namespace OdBm

// FIXME: Temporary here. Move with other readers
struct TB_COMMON_EXPORT READER_NAME(ANSIString) {
  READER_NAME(ANSIString)(const OdChar splitter, const OdCodePageId id);
  OdAnsiString read(OdStreamBuf* pStream) const;

private:
  const OdChar m_splitter;
  const OdCodePageId m_id;
};

struct TB_COMMON_EXPORT READER_NAME(ANSILine) {
  READER_NAME(ANSILine)(const OdCodePageId id);

  OdAnsiString read(OdStreamBuf* pStream) const;

private:
  const OdCodePageId m_id;
};

#endif // _BM_STRING_H_
