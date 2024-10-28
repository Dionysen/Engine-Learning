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
#ifndef _BM_UTILS_NOT_STD_OPTIONAL_H_
#define _BM_UTILS_NOT_STD_OPTIONAL_H_

#include <stdexcept>

namespace not_std {

//------------------------------------------------------------------------------
//
// optional
//
//------------------------------------------------------------------------------

template <class T>
class optional;

namespace optional_detail {

template <class T>
struct storage_t {
private:
  friend class optional<T>;

  typedef T value_type;

  storage_t() {}

  storage_t(value_type const& v) { construct_value(v); }

  void construct_value(value_type const& v) {
    ::new (value_ptr()) value_type(v);
  }

  void destruct_value() { value_ptr()->~T(); }

  const value_type* value_ptr() const {
    return reinterpret_cast<const value_type*>(buffer);
  }

  value_type* value_ptr() { return reinterpret_cast<value_type*>(buffer); }

  const value_type& value() const { return *value_ptr(); }

  value_type& value() { return *value_ptr(); }

  char buffer[sizeof(value_type)];
};

}  // namespace optional_details

//------------------------------------------------------------------------------
// bad_optional_access
//------------------------------------------------------------------------------

class bad_optional_access : public std::logic_error {
public:
  explicit bad_optional_access(const std::string& what_arg)
      : logic_error(what_arg) {}
  explicit bad_optional_access(char const* const what_arg)
      : logic_error(what_arg) {}
};

//------------------------------------------------------------------------------
// nullopt_t
//------------------------------------------------------------------------------

struct nullopt_t {
  struct init {};
  nullopt_t(init) {}
};

const nullopt_t nullopt((nullopt_t::init()));

//------------------------------------------------------------------------------
// optional
//------------------------------------------------------------------------------

template <class T>
class optional {
public:
  typedef T value_type;

  optional() : m_initialized(false), m_storage() {}
  optional(nullopt_t) : m_initialized(false), m_storage() {}
  optional(const optional& other) : m_initialized(other.initialized()) {
    if (!other.initialized()) return;
    m_storage.construct_value(other.value());
  }
  optional(const value_type& value) : m_initialized(true), m_storage(value) {}

  ~optional() {
    if (!initialized()) return;
    m_storage.destruct_value();
  }

  optional& operator=(nullopt_t) {
    clear();
    return *this;
  }
  optional& operator=(const optional& rhs) {
    if (bool(rhs)) {
      (*this) = *rhs;
    } else {
      clear();
    }
    return *this;
  }
  optional& operator=(const value_type& value) {
    if (bool(*this)) {
      m_storage.value() = value;
    } else {
      initialize(value);
    }
    return *this;
  }

  void swap(optional& rhs) {
    using std::swap;
    if (bool(*this) && bool(rhs)) {
      swap(**this, *rhs);
    } else if (bool(rhs)) {
      initialize(*rhs);
      rhs.clear();
    } else {
      rhs.initialize(**this);
      clear();
    }
  }

  const value_type* operator->() const { return &value(); }
  const value_type& operator*() const { return value(); }
  value_type* operator->() { return &value(); }
  value_type& operator*() { return value(); }

  operator bool() const { return initialized(); }

  const value_type& value() const {
    if (initialized()) return m_storage.value();
    throw bad_optional_access("accessing value of disengaged optional (const)");
  }

  value_type& value() {
    if (initialized()) return m_storage.value();
    throw bad_optional_access(
        "accessing value of disengaged optional (non-const)");
  }

  value_type value_or(const value_type& val) const {
    if (initialized()) return value();
    return val;
  }

private:
  bool initialized() const { return m_initialized; }
  void initialize(const value_type& value) {
    m_storage.construct_value(value);
    m_initialized = true;
  }
  void clear() {
    if (!initialized()) return;
    m_storage.destruct_value();
    m_initialized = false;
  }

  bool m_initialized;
  optional_detail::storage_t<value_type> m_storage;
};

//
// Rational operators
//

template <class T>
bool operator==(const optional<T>& lhs, const optional<T>& rhs) {
  return (bool(lhs) && bool(rhs)) ? (*lhs == *rhs) : !(bool(lhs) || bool(rhs));
}

template <class T>
bool operator!=(const optional<T>& lhs, const optional<T>& rhs) {
  return !(lhs == rhs);
}

template <class T>
bool operator<(const optional<T>& lhs, const optional<T>& rhs) {
  return (bool(lhs) && bool(rhs)) ? (*lhs < *rhs) : (!bool(lhs) && bool(rhs));
}

template <class T>
bool operator>(const optional<T>& lhs, const optional<T>& rhs) {
  return rhs < lhs;
}

//
// Operators with nullopt_t
//

template <class T>
bool operator==(const optional<T>& opt, nullopt_t) {
  return !bool(opt);
}

template <class T>
bool operator==(nullopt_t, const optional<T>& opt) {
  return !bool(opt);
}

template <class T>
bool operator!=(const optional<T>& opt, nullopt_t) {
  return bool(opt);
}

template <class T>
bool operator!=(nullopt_t, const optional<T>& opt) {
  return bool(opt);
}

template <class T>
bool operator<(const optional<T>& opt, nullopt_t) {
  return false;
}

template <class T>
bool operator<(nullopt_t, const optional<T>& opt) {
  return bool(opt);
}

template <class T>
bool operator>(const optional<T>& opt, nullopt_t) {
  return bool(opt);
}

template <class T>
bool operator>(nullopt_t, const optional<T>& opt) {
  return false;
}

//
// Operators with T
//

template <class T>
bool operator==(const optional<T>& opt, const T& v) {
  return bool(opt) ? *opt == v : false;
}

template <class T>
bool operator==(const T& v, const optional<T>& opt) {
  return bool(opt) ? v == *opt : false;
}

template <class T>
bool operator!=(const optional<T>& opt, const T& v) {
  return bool(opt) ? *opt != v : false;
}

template <class T>
bool operator!=(const T& v, const optional<T>& opt) {
  return bool(opt) ? v != *opt : false;
}

template <class T>
bool operator<(const optional<T>& opt, const T& v) {
  return bool(opt) ? *opt < v : true;
}

template <class T>
bool operator<(const T& v, const optional<T>& opt) {
  return bool(opt) ? v < *opt : false;
}

template <class T>
bool operator>(const optional<T>& opt, const T& v) {
  return bool(opt) ? *opt > v : false;
}

template <class T>
bool operator>(const T& v, const optional<T>& opt) {
  return bool(opt) ? v > *opt : true;
}

//
// Algorithms
//

template <class T>
optional<T> make_optional(T const& v) {
  return optional<T>(v);
}

}  // namespace not_std

#endif // _BM_UTILS_NOT_STD_OPTIONAL_H_
