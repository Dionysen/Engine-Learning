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

#ifndef __BM_SYSTEM_UTILS_H__
#define __BM_SYSTEM_UTILS_H__

namespace OdBm {
namespace Utils {
namespace System {

OdString TB_COMMON_EXPORT getSelfPath();
OdString TB_COMMON_EXPORT getCurrentExecutableDirectory();
OdString TB_COMMON_EXPORT getCurrentWorkingDirectory();
OdString TB_COMMON_EXPORT joinPath(const OdString& _lhs, const OdString& _rhs);
OdString TB_COMMON_EXPORT filename(const OdString& path);
OdString TB_COMMON_EXPORT directory(const OdString& path);

} // namespace System

// TODO: move this.
template <class T, class V>
auto findByValue(T&& map, V&& value) -> decltype(map.begin()) {
  for (auto it = map.begin(), itEnd = map.end(); it != itEnd; ++it) {
    if (it->second == value) {
      return it;
    }
  }
  return map.end();
}


} // namespace Utils
} // namespace OdBm

#endif // __BM_SYSTEM_UTILS_H__
