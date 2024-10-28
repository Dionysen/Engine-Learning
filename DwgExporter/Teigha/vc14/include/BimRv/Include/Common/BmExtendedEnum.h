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

#ifndef __BM_EXTENDED_ENUM_H__
#define __BM_EXTENDED_ENUM_H__

namespace OdBm {

template <class EnumDef>
struct ExtendedEnum : public EnumDef {
  typedef EnumDef super;
  typedef typename super::Enum Enum;
  typedef typename super::EnumValues EnumValues;
  typedef typename super::BaseType BaseType;

  static typename EnumValues::const_iterator begin() {
    if (!m_initialized) {
      initialize();
    }
    return m_values.begin();
  }

  static typename EnumValues::const_iterator end() {
    if (!m_initialized) {
      initialize();
    }
    return m_values.end();
  }

  static bool contains(BaseType value) {
    return std::binary_search(begin(), end(), static_cast<Enum>(value));
  }

  static const EnumValues& deprecatedValues() {
    static EnumValues result;
    static bool calculated = false;
    if (!calculated) {
      result = super::createValues();
      result.erase(
          std::remove_if(result.begin(), result.end(), c_notDeprecatedHandle()),
          result.end());
      calculated = true;
    }
    return result;
  }

  static bool deprecated(const Enum& value) {
    const EnumValues& values = deprecatedValues();
    return std::find(values.begin(), values.end(), value) != values.end();
  }

  ExtendedEnum(Enum value) : m_value(value) {
  }

  bool operator==(const ExtendedEnum& other) {
    return this->m_value == other.m_value;
  }

  bool operator!=(const ExtendedEnum& other) {
    return this->m_value != other.m_value;
  }

  bool operator<(const ExtendedEnum& other) {
    return this->m_value < other.m_value;
  }

  bool operator<=(const ExtendedEnum& other) {
    return this->m_value <= other.m_value;
  }

  bool operator>(const ExtendedEnum& other) {
    return this->m_value > other.m_value;
  }

  bool operator>=(const ExtendedEnum& other) {
    return this->m_value >= other.m_value;
  }

  OdString toString() const {
    return super::toString(this->m_value);
  }

  BaseType toBase() const {
    return super::toBase(this->m_value);
  }

private:
  struct c_notDeprecatedHandle {
    bool operator()(const Enum& value) {
      return super::toString(value).find(L"_Deprecated") == -1;
    }
  };

  static void initialize() {
    // MT support: it should be done while exclusive access
    static OdMutex s_mutex;
    TD_AUTOLOCK(s_mutex);
    if (m_initialized) {
      return;
    }
    // end of MT support
    m_values = super::createValues();
    std::sort(m_values.begin(), m_values.end());
    m_initialized = true;
  }

  static bool m_initialized;
  static EnumValues m_values;

  Enum m_value;
};

template <class EnumDef>
typename ExtendedEnum<EnumDef>::EnumValues ExtendedEnum<EnumDef>::m_values;

template <class EnumDef>
bool ExtendedEnum<EnumDef>::m_initialized = false;

} /* namespace OdBm */

#define ODBM_SWITCH_ENTRY(NAME, VALUE, ...)                                    \
  case VALUE: {                                                                \
    return ODBM_TO_STRING(NAME);                                               \
  } break;

#define ODBM_EXTENDED_ENUMERATION(NAMESPACE_NAME, BUILTIN_LIST)                \
  namespace OdBm {                                                             \
  struct NAMESPACE_NAME##Definition {                                          \
    enum Enum { BUILTIN_LIST(ODBM_ENUM_ENTRY) };                               \
    typedef OdArray<Enum> EnumValues;                                          \
    typedef OdUInt64 BaseType;                                                 \
    static OdString toString(const Enum& value) {                              \
      switch (value) {                                                         \
        BUILTIN_LIST(ODBM_SWITCH_ENTRY);                                       \
        default: { throw OdError(eNotHandled); } break;                        \
      }                                                                        \
    }                                                                          \
    static const EnumValues& createValues() {                                  \
      static EnumValues result;                                                \
      if (result.empty()) {                                                    \
        BUILTIN_LIST(ODBM_ENUM_VALUES_ENTRY);                                  \
      }                                                                        \
      return result;                                                           \
    };                                                                         \
    static BaseType toBase(const Enum& value) {                                \
      return static_cast<BaseType>(value);                                     \
    }                                                                          \
  }; /* struct NAMESPACE_NAME##Definition */                                   \
  typedef ExtendedEnum<NAMESPACE_NAME##Definition> NAMESPACE_NAME;             \
  template <>                                                                  \
  struct IsEnum<NAMESPACE_NAME::Enum> {                                        \
    static const bool value = true;                                            \
  };                                                                           \
  } /* namespace OdBm*/

#define ODBM_EXTENDED_ENUMERATION_DECLARATION(EXPORT, NAMESPACE_NAME,          \
                                              BUILTIN_LIST)                    \
  namespace OdBm {                                                             \
  struct EXPORT NAMESPACE_NAME##Definition {                                   \
    enum Enum { BUILTIN_LIST(ODBM_ENUM_ENTRY) };                               \
    typedef OdArray<Enum> EnumValues;                                          \
    typedef OdUInt64 BaseType;                                                 \
    static OdString toString(const Enum& value);                               \
    static const EnumValues& createValues();                                   \
    static BaseType toBase(const Enum& value);                                 \
  }; /* struct NAMESPACE_NAME##Definition */                                   \
  typedef ExtendedEnum<NAMESPACE_NAME##Definition> NAMESPACE_NAME;             \
  } /* namespace OdBm*/

#define ODBM_EXTENDED_ENUMERATION_DEFINITION(NAMESPACE_NAME, BUILTIN_LIST)     \
  namespace OdBm {                                                             \
  OdString NAMESPACE_NAME##Definition::toString(const Enum& value) {           \
    switch (value) {                                                           \
      BUILTIN_LIST(ODBM_SWITCH_ENTRY);                                         \
      default: { throw OdError(eNotHandled); } break;                          \
    }                                                                          \
  }                                                                            \
  const NAMESPACE_NAME##Definition::EnumValues&                                \
      NAMESPACE_NAME##Definition::createValues() {                             \
    static EnumValues result;                                                  \
    if (result.empty()) {                                                      \
      BUILTIN_LIST(ODBM_ENUM_VALUES_ENTRY);                                    \
    }                                                                          \
    return result;                                                             \
  };                                                                           \
  NAMESPACE_NAME##Definition::BaseType                                         \
      NAMESPACE_NAME##Definition::toBase(const Enum& value) {                  \
    return static_cast<BaseType>(value);                                       \
  }                                                                            \
  } /* namespace OdBm*/

#define ODBM_BUILTIN_ENUMERATION(EXPORT, NAMESPACE_NAME, BUILTIN_LIST)         \
  ODBM_EXTENDED_ENUMERATION_DECLARATION(EXPORT, NAMESPACE_NAME, BUILTIN_LIST)  \
  inline bool operator==(const OdBmObjectId& lhs,                              \
                         const OdBm::NAMESPACE_NAME::Enum rhs) {               \
    return lhs.getHandle() == static_cast<OdBmObjectId::handle_type>(rhs);     \
  }                                                                            \
  inline bool operator==(const OdBm::NAMESPACE_NAME::Enum lhs,                 \
                         const OdBmObjectId& rhs) {                            \
    return (rhs == lhs);                                                       \
  }                                                                            \
  inline bool operator!=(const OdBmObjectId& lhs,                              \
                         const OdBm::NAMESPACE_NAME::Enum rhs) {               \
    return !(lhs == rhs);                                                      \
  }                                                                            \
  inline bool operator!=(const OdBm::NAMESPACE_NAME::Enum lhs,                 \
                         const OdBmObjectId& rhs) {                            \
    return !(lhs == rhs);                                                      \
  }

#endif //__BM_EXTENDED_ENUM_H__
