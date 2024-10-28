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

#ifndef _BM_CDA_ARRAY_ITERATOR_H_
#define _BM_CDA_ARRAY_ITERATOR_H_

#include "RxObjectImpl.h"

namespace OdBm {
namespace Details {
  template <class T>
  auto unwrap(T&& value) -> decltype(OdRxObjectPtr(value)) {
    return OdRxObjectPtr(value);
  }
  template <class T>
  auto unwrap(T&& value) -> decltype(OdRxObjectPtr(value.safeOpenObject())) {
    return value.safeOpenObject();
  }

  template <class T>
  struct CopyStorage {
    void setArray(const T& value) {
      m_arr = value;
    }
    const T& getArray() const {
      return m_arr;
    }

  private:
    T m_arr;
  };

  template <class T>
  struct RefStorage {
    void setArray(const T& value) {
      m_pArr = &value;
    }

    const T& getArray() const {
      return *m_pArr;
    }

  private:
    const T* m_pArr = nullptr;
  };
}
}

template <class T, bool copy=true>
struct OdBmCDAArrayIterator : OdRxValueIterator {
  typedef T ArrayType;
  typedef typename ArrayType::const_iterator IterType;

  static auto createObject() -> OdSmartPtr<OdBmCDAArrayIterator<T, copy> > {
    return OdRxObjectImpl<OdBmCDAArrayIterator<T, copy>>::createObject();
  }

  virtual bool done() override {
    if (m_it == nullptr) {
      return true;
    }
    return m_it == m_storage.getArray().end();
  }

  virtual bool next() override {
    if (done()) {
      return false;
    }

    ++m_it;
    return true;
  }

  virtual OdRxValue current() const override {
    return OdBm::Details::unwrap(*m_it);
  }

  void init(const ArrayType& arr) {
    m_storage.setArray(arr);
    m_it = m_storage.getArray().begin();
  }

  OdBmCDAArrayIterator() {
  }
private:
  typename std::conditional<copy, OdBm::Details::CopyStorage<ArrayType>,
                            OdBm::Details::RefStorage<ArrayType> >::type m_storage;

  IterType m_it = nullptr;
};


#endif // _BM_CDA_ARRAY_ITERATOR_H_
