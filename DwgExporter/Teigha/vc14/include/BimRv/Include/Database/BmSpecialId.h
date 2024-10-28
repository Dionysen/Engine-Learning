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

#ifndef _BM_SPECIFIC_ID_H_
#define _BM_SPECIFIC_ID_H_

#include "Base/BmObjectId.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
#include "Common/BuiltIns/BmBuiltInParameter.h"
#include "Common/BuiltIns/BmBuiltInParameterGroup.h"

// Aliaces made by us
#define ODBM_MADE_ALIACES(MACRO, ...)                                          \
  MACRO(OdBmParameterId, BuiltInParameter, __VA_ARGS__)                        \
  MACRO(OdBmParameterGroupId, BuiltInParameterGroup, __VA_ARGS__)              \
  MACRO(OdBmCategoryId, BuiltInCategory, __VA_ARGS__)

// Aliaces got from format
#define ODBM_TRUE_ALIACES(MACRO, ...)                                          \
  MACRO(FontId, __VA_ARGS__)                                                   \
  MACRO(LineStyleId, __VA_ARGS__)                                              \
  MACRO(ObjectStyleId, __VA_ARGS__)                                            \
  MACRO(MaterialId, __VA_ARGS__)                                               \
  MACRO(ColorId, __VA_ARGS__)

// Int Aliaces got from format
#define ODBM_TRUE_INT_ALIACES(MACRO, ...)                                      \
  MACRO(PartitionId, __VA_ARGS__)                                              \
  MACRO(EpisodeId, __VA_ARGS__)                                                \
  MACRO(OriginalElementId, __VA_ARGS__)                                        \
  MACRO(CircuitId, __VA_ARGS__)                                                \
  MACRO(CommonEpisodeId, __VA_ARGS__)                                          \
  MACRO(CentralElementId, __VA_ARGS__)                                         \
  MACRO(CentralWorksetId, __VA_ARGS__)                                         \
  MACRO(CalculatedParamId, __VA_ARGS__)                                        \
  MACRO(NOBLE_DocumentId, __VA_ARGS__)                                         \
  MACRO(ScheduleFieldId, __VA_ARGS__)                                          \
  MACRO(WitnessRefId, __VA_ARGS__)


// GUID Aliaces got from format
#define ODBM_TRUE_GUID_ALIACES(MACRO, ...)                                     \
  MACRO(AddInId, __VA_ARGS__)                                                  \
  MACRO(ExternalServiceId, __VA_ARGS__)                                        \
  MACRO(ExternalResourceTypeId, __VA_ARGS__)                                   \
  MACRO(FailureDefinitionId, __VA_ARGS__)                                      \
  MACRO(PerformanceAdviserRuleId, __VA_ARGS__)

//NB! Following classes are implemented for 2 reasons
// 1. This implementation allows us to operate builtin ENUMs rather than ids
// 2. This allows us to understand, looking at class definition, type of ids
// it contains. While OdBmObjectId tell us, that property sotres id of Object,
// OdBmParameterId tell us, that object is Parameter etc.

#define PARTIALLY_BUILT_IN_OBJECT_ID(NAME, ENUM_NAME, ...)                \
  class TB_DB_EXPORT NAME : public OdBmObjectId {                         \
  public:                                                                 \
    NAME() : OdBmObjectId() {}                                            \
    NAME(OdDbStub* elementId) : OdBmObjectId(elementId) {}                \
    NAME(const OdBmObjectId& id) : OdBmObjectId(id) {}                    \
    inline OdBm::ENUM_NAME::Enum enumValue() const {                      \
      OdUInt64 value = getHandle();                                       \
      if (!OdBm::ENUM_NAME::contains(value)) throw OdError(eNotHandled);  \
      return static_cast<OdBm::ENUM_NAME::Enum>(value);                   \
    }                                                                     \
    inline operator OdBm::ENUM_NAME::Enum() const { return enumValue(); } \
  };                                                                      \
typedef OdArray<NAME> NAME##Array;

ODBM_MADE_ALIACES(PARTIALLY_BUILT_IN_OBJECT_ID)

#undef PARTIALLY_BUILT_IN_OBJECT_ID


#define SPECIFIC_OBJECT_ID(NAME, ...)                                          \
  class TB_DB_EXPORT OdBm##NAME : public OdBmObjectId {                        \
  public:                                                                      \
    OdBm##NAME() : OdBmObjectId() {                                            \
    }                                                                          \
    OdBm##NAME(OdDbStub* elementId) : OdBmObjectId(elementId) {                \
    }                                                                          \
    OdBm##NAME(const OdBmObjectId& id) : OdBmObjectId(id) {                    \
    }                                                                          \
  };                                                                           \
  typedef OdArray<OdBm##NAME, OdMemoryAllocator<OdBm##NAME> > OdBm##NAME##Array;

ODBM_TRUE_ALIACES(SPECIFIC_OBJECT_ID);

#undef SEPCIFIC_OBJECT_ID

// NB! PartitionId, OriginalElementId && OdBmEpisodeId are just int values
// wrapped in specific classes for now we've seen that, it point's to abstract
// structures, that've no representation in classes, just as loading units.
// So, in this case, it've diffirent meaning, than OdBmObjectId && at least
// for now it's implemented as standalone class

#define SPECIFIC_ID(NAME, ...)                                                 \
  class TB_DB_EXPORT OdBm##NAME {                                              \
  public:                                                                      \
    OdBm##NAME() : m_Id(0) {                                                   \
    }                                                                          \
    inline operator OdInt32() const {                                          \
      return m_Id;                                                             \
    }                                                                          \
    OdBm##NAME(OdInt32 elementId) : m_Id(elementId) {                          \
    }                                                                          \
                                                                               \
  private:                                                                     \
    OdInt32 m_Id;                                                              \
  };                                                                           \
typedef OdArray<OdBm##NAME, OdMemoryAllocator<OdBm##NAME> > OdBm##NAME##Array;

ODBM_TRUE_INT_ALIACES(SPECIFIC_ID);

#undef SPECIFIC_ID

#define SPECIFIC_GUID_ID(NAME, ...)                                            \
  class TB_DB_EXPORT OdBm##NAME {                                              \
  public:                                                                      \
    OdBm##NAME() : m_Id() {                                                    \
    }                                                                          \
    inline operator OdGUID() const {                                           \
      return m_Id;                                                             \
    }                                                                          \
    OdBm##NAME(const OdGUID& elementId) : m_Id(elementId) {                    \
    }                                                                          \
    bool operator!=(const OdBm##NAME& other) const {                           \
      return ::memcmp(m_Id.data(), other.m_Id.data(), 0x10) != 0;              \
    }                                                                          \
    bool operator<(const OdBm##NAME& other) const {                            \
      return ::memcmp(m_Id.data(), other.m_Id.data(), 0x10) < 0;               \
    }                                                                          \
                                                                               \
  private:                                                                     \
    OdGUID m_Id;                                                               \
  };                                                                           \
  typedef OdArray<OdBm##NAME, OdMemoryAllocator<OdBm##NAME> > OdBm##NAME##Array;

ODBM_TRUE_GUID_ALIACES(SPECIFIC_GUID_ID);

#undef SPECIFIC_GUID_ID




#endif // _BM_SPECIFIC_ID_H_
