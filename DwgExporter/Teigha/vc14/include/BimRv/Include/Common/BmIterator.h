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

#ifndef _BM_COMMON_ITERATOR_H_
#define _BM_COMMON_ITERATOR_H_

#include "Common/BmTypeTraits.h"
#include "Common/not_std/optional.h"
#include "Common/not_std/type_traits.h"
#include <memory>
#include <functional>

//------------------------------------------------------------------------------
//
// OdBmIterator
//
//------------------------------------------------------------------------------


template <class T>
class OdBmIterator;

template <class T>
using OdBmIteratorPtr = std::unique_ptr<OdBmIterator<T>>;

template <class T> class OdBmIterator {
public:
  typedef OdBmIterator self;
  typedef T value_type;
  // NB!: deprecated, use OdBmIteratorPtr<T> instead.
  typedef OdBmIteratorPtr<T> pointer_type;

  OdBmIterator() {}
  virtual ~OdBmIterator() {}
  virtual value_type object() const = 0;
  virtual bool done() const = 0;
  virtual bool next() = 0;

  OdBmIteratorPtr<T> clone() const {
    return OdBmIteratorPtr<T>(this->internalClone());
  }

  typename DefaultArrayType<T>::type collect() {
    typename DefaultArrayType<T>::type result;
    //MB we've to iterate once, to calculate size of array;
    for (; !this->done(); this->next()) {
      result.push_back(this->object());
    }
    return result;
  }

  template <class P>
  OdBmIteratorPtr<T> filter(P&& predicate) const;

  template <class Func>
  OdBmIteratorPtr<typename ResultType<Func>::type> transform(Func&& transform) const;

protected:
  virtual OdBmIterator* internalClone() const = 0;
};

//------------------------------------------------------------------------------
//
// OdBmFilterIterator
//
//------------------------------------------------------------------------------


/** \details
    <group Common_Classes>
*/
template <class T>
class OdBmFilterIterator : public OdBmIterator<T> {
public:
  typedef OdBmIterator<T> super;
  typedef typename super::value_type value_type;

  template <class P>
  OdBmFilterIterator(OdBmIteratorPtr<T>&& pIt, P predicate)
    : m_pIt(std::move(pIt)), m_predicate(predicate) {
    while (!(m_pIt->done() || m_predicate(m_pIt->object()))) {
      m_pIt->next();
    }
  }

  virtual ~OdBmFilterIterator() {
  }

  virtual bool done() const {
    return m_pIt->done();
  }

  virtual bool next() {
    do {
      m_pIt->next();
    } while (!(m_pIt->done() || m_predicate(m_pIt->object())));
    return !this->done();
  }

  virtual value_type object() const {
    return m_pIt->object();
  }

protected:
  virtual OdBmFilterIterator* internalClone() const {
    return new OdBmFilterIterator(this->m_pIt->clone(), this->m_predicate);
  }

  OdBmIteratorPtr<T> m_pIt;

private:
  std::function<bool(const value_type&)> m_predicate;
};

//------------------------------------------------------------------------------
//
// OdBmEmptyIterator
//
//------------------------------------------------------------------------------

template <class T>
class OdBmEmptyIterator : public OdBmIterator<T> {
public:
  typedef OdBmIterator<T> super;
  typedef typename super::value_type value_type;

  OdBmEmptyIterator() {}
  virtual ~OdBmEmptyIterator() {}
  virtual bool done() const { return true; }
  virtual bool next() { return false; }
  virtual value_type object() const { throw OdError(eNotHandled); }

protected:
  virtual OdBmEmptyIterator* internalClone() const {
    return new OdBmEmptyIterator;
  }
};

//------------------------------------------------------------------------------
//
// OdBmArrayIterator
//
//------------------------------------------------------------------------------

template <class T>
class OdBmArrayIterator : public OdBmIterator<typename T::value_type> {
public:
  typedef OdBmIterator<typename T::value_type> super;
  typedef T array_type;
  typedef typename super::value_type value_type;

  OdBmArrayIterator(const array_type& value)
      : m_begin(value.begin()), m_end(value.end()) {}
  OdBmArrayIterator(const typename array_type::const_iterator begin,
                    const typename array_type::const_iterator end)
      : m_begin(begin), m_end(end) {}
  virtual ~OdBmArrayIterator() {}
  virtual bool done() const { return m_begin == m_end; }
  virtual bool next() {
    if (!done()) ++m_begin;
    return m_begin != m_end;
  }
  virtual value_type object() const {
    if (done()) throw OdError(eNotHandled);
    return *m_begin;
  }

protected:
  virtual OdBmArrayIterator* internalClone() const {
    return new OdBmArrayIterator(this->m_begin, this->m_end);
  }

private:
  typename array_type::const_iterator m_begin;
  typename array_type::const_iterator m_end;
};

//------------------------------------------------------------------------------
//
// OdBmTranfsormIterator
//
//------------------------------------------------------------------------------

template <class S, class T>
class OdBmTranfsormIterator : public OdBmIterator<T> {
public:
  typedef S source_type;
  typedef T value_type;

  template <class Func>
  OdBmTranfsormIterator(OdBmIteratorPtr<S>&& pIt, Func transform)
    : m_pIt(std::move(pIt)), m_transform(transform) {
  }

  virtual ~OdBmTranfsormIterator() {}

  virtual bool done() const { return m_pIt->done(); }
  virtual bool next() { return m_pIt->next(); }
  virtual value_type object() const { return m_transform(m_pIt->object()); }

protected:
  virtual OdBmTranfsormIterator* internalClone() const {
    return new OdBmTranfsormIterator(this->m_pIt->clone(), this->m_transform);
  }

private:
  OdBmIteratorPtr<S> m_pIt;
  std::function<T(const S&)> m_transform;
};

//
//
//

namespace OdBm {
namespace Details {

template <class T> struct IsSmartPtr : std::false_type {};
template <class T> struct IsSmartPtr<OdSmartPtr<T>> : std::true_type {};

template <class T, class P,
          typename = typename std::enable_if<
              IsSmartPtr<not_std::remove_cvref_t<P>>::value>::type>
std::function<bool(const T& value)> wrapPredicate(P&& predicate) {
  return
      [predicate](const T& value) { return predicate->elementPasses(value); };
}

template <class T, class P,
          typename = typename std::enable_if<
              !IsSmartPtr<not_std::remove_cvref_t<P>>::value>::type>
P wrapPredicate(P&& predicate) {
  return std::forward<P>(predicate);
}


} // namespace Details
} // namespace OdBm

template <class T>
template <class P>
OdBmIteratorPtr<T> OdBmIterator<T>::filter(P&& predicate) const {
  return OdBmIteratorPtr<T>(new OdBmFilterIterator<T>(
      this->clone(),
      OdBm::Details::wrapPredicate<T>(std::forward<P>(predicate))));
}

template <class T>
template <class A>
OdBmIteratorPtr<typename ResultType<A>::type>
OdBmIterator<T>::transform(A&& transform) const {
  return OdBmIteratorPtr<typename ResultType<A>::type>(
      new OdBmTranfsormIterator<self::value_type, typename ResultType<A>::type>(
          this->clone(), std::forward<A>(transform)));
}

//
//
//

namespace OdBm {
namespace Utils {

template <class T>
OdBmIteratorPtr<T> createIterator() {
  return OdBmIteratorPtr<T>(new OdBmEmptyIterator<T>);
}

template <class T>
auto createIterator(T&& value)
    -> OdBmIteratorPtr<typename not_std::remove_cvref_t<T>::value_type> {
  return OdBmIteratorPtr<typename not_std::remove_cvref_t<T>::value_type>(
      new OdBmArrayIterator<not_std::remove_cvref_t<T>>(
          std::forward<T>(value)));
}

template <class T, class P>
OdBmIteratorPtr<T> filter(OdBmIteratorPtr<T>&& it, P&& predicate) {
  return OdBmIteratorPtr<T>(new OdBmFilterIterator<T>(std::move(it), predicate));
}

template <class T, class A>
OdBmIteratorPtr<typename ResultType<A>::type>
transform(OdBmIteratorPtr<T>&& it, A&& transform) {
  return OdBmIteratorPtr<typename ResultType<A>::type>(
      new OdBmTranfsormIterator<T, typename ResultType<A>::type>(
          std::move(it), std::forward<A>(transform)));
}

} // namespace Utils
} // namespace OdBm


//
//
//

namespace OdBm {
namespace Details {

ODBM_HAS_MEMBER(next);
ODBM_HAS_MEMBER(step);


template <typename T, typename Enable = void>
struct get_next_value;

template <typename T, class... C, template <typename, typename...> class PTR>
struct get_next_value<
  PTR<T, C...>, typename std::enable_if<has_member_next<T>::value>::type> {
  static void call(PTR<T,C...>& obj) {
    obj->next();
  }
};

template <typename T, template <typename> class PTR>
struct get_next_value<
  PTR<T>, typename std::enable_if<has_member_step<T>::value &&
  !has_member_next<T>::value>::type> {

  static void call(PTR<T>& obj) {
    obj->step();
  }
};


ODBM_HAS_MEMBER(objectId);
ODBM_HAS_MEMBER(id);
ODBM_HAS_MEMBER(element);
ODBM_HAS_MEMBER(object);
ODBM_HAS_MEMBER(item);

template <typename T, typename Enable = void>
struct get_iter_value_ptr;

template <typename T, template <typename> class PTR>
struct get_iter_value_ptr<
    PTR<T>, typename std::enable_if<has_member_objectId<T>::value>::type> {
  static constexpr decltype(&T::objectId) value = &T::objectId;
};

template <typename T, template <typename> class PTR>
struct get_iter_value_ptr<
    PTR<T>, typename std::enable_if<has_member_id<T>::value &&
                                    !has_member_objectId<T>::value>::type> {
  static constexpr decltype(&T::id) value = &T::id;
};

template <typename T, template <typename> class PTR>
struct get_iter_value_ptr<
    PTR<T>, typename std::enable_if<has_member_element<T>::value &&
                                    (!has_member_id<T>::value) &&
                                    (!has_member_objectId<T>::value)>::type> {
  static constexpr decltype(&T::element) value = &(T::element);
};

template <typename T, class... C, template <typename, typename...> class PTR>
struct get_iter_value_ptr<
    PTR<T, C...>, typename std::enable_if<has_member_object<T>::value &&
                                    (!has_member_element<T>::value) &&
                                    (!has_member_id<T>::value) &&
                                    (!has_member_objectId<T>::value)>::type> {
  static constexpr decltype(&T::object) value = &T::object;
};

template <typename T, template <typename> class PTR>
struct get_iter_value_ptr<
    PTR<T>, typename std::enable_if<has_member_item<T>::value &&
                                    (!has_member_object<T>::value) &&
                                    (!has_member_element<T>::value) &&
                                    (!has_member_id<T>::value) &&
                                    (!has_member_objectId<T>::value)>::type> {
  static constexpr decltype(&T::item) value = &T::item;
};

template <class T>
class iter {
public:
  typedef decltype(((*std::declval<T>()).*get_iter_value_ptr<T>::value)()) value_type;

  using difference_type = int;
  using pointer = value_type*;
  using reference = value_type&;
  using iterator_category = std::forward_iterator_tag;

  iter(T&& _ptr) : ptr(std::move(_ptr)) {
  }

  iter& operator++() {
    m_cache = not_std::nullopt;
    get_next_value<T>::call(ptr);
    return *this;
  }
  bool finished() const {
    return (ptr == nullptr) || ptr->done();
  }
  bool operator!=(const iter& other) const {
    return !((finished() && other.finished()) || (ptr == other.ptr));
  }

  const value_type& operator*() const {
    if (!bool(m_cache)) {
      m_cache = ((*ptr).*get_iter_value_ptr<T>::value)();
    }
    return m_cache.value();
  }

private:
  T ptr;
  mutable not_std::optional<value_type> m_cache;

};


} // namespace Details
} // namespace OdBm


template <class T>
OdBm::Details::iter<not_std::remove_cvref_t<T>> begin(T&& it) {
  return OdBm::Details::iter<not_std::remove_cvref_t<T>>(std::move(it));
}


template <class T>
OdBm::Details::iter<not_std::remove_cvref_t<T>> end(T&&) {
  return OdBm::Details::iter<not_std::remove_cvref_t<T>>(
      not_std::remove_cvref_t<T>());
}

#endif  // _BM_COMMON_ITERATOR_H_
