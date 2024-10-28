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
#ifndef _BM_UTILS_TYPE_TRAITS_H_
#define _BM_UTILS_TYPE_TRAITS_H_

#include "Tf/TfVariant.h"
#include "Ge/GePoint2dArray.h"
#include "Ge/GeMatrix2dArray.h"
#include "Ge/GeVector3dArray.h"
#include "Ge/GeMatrix3dArray.h"
#include "Ge/GeExtents2d.h"
#include "Ge/GeExtents3d.h"
#include "Common/BmMap.h"
#include "Common/BmSet.h"

//-----------------------------------------------------------------------------
// OdBm::isEnum // it's for OdBm enumerations
//-----------------------------------------------------------------------------

namespace OdBm {

template <class T> struct FuncArg1;
template <class T> struct FuncArg1<void (T)> {	typedef T type; };

//

template <class T>
struct IsEnum { static const bool value = false; };

template <class T>
struct EnumBegin { };

template <class T>
struct EnumEnd { };
} // namespace OdBm

//-----------------------------------------------------------------------------
// ResultType
//-----------------------------------------------------------------------------

template <class T>
struct ResultType : public ResultType<decltype(&T::operator())> {};

template <typename R, typename... Args>
struct ResultType<R(Args...)> {
  typedef R type;
};
template <typename R, typename... Args>
struct ResultType<R (*)(Args...)> : public ResultType<R(Args...)> {};

template <typename C, typename R, typename... Args>
struct ResultType<R (C::*)(Args...) const>
  : public ResultType<R(Args...)> {};

//-----------------------------------------------------------------------------
// ArgumentType
//-----------------------------------------------------------------------------

template <class T, size_t i = 0>
struct ArgumentType : public ArgumentType<decltype(&T::operator()), i> {};

template <typename R, typename... Args, size_t i>
struct ArgumentType<R(Args...), i> {
  enum { arity = sizeof...(Args) };
  typedef typename std::tuple_element<i, std::tuple<Args...>>::type type;
};
template <typename R, typename... Args, size_t i>
struct ArgumentType<R (*)(Args...), i> : public ArgumentType<R(Args...), i> {};

template <typename C, typename R, typename... Args, size_t i>
struct ArgumentType<R (C::*)(Args...) const, i>
  : public ArgumentType<R(Args...), i> {};

//-----------------------------------------------------------------------------
// isGeType
//-----------------------------------------------------------------------------

template <class T>
struct IsGeType {  static const bool value = false; };

template <> struct IsGeType<OdGePoint2d> { static const bool value = true; };
template <> struct IsGeType<OdGePoint3d> { static const bool value = true; };
template <> struct IsGeType<OdGeVector2d> { static const bool value = true; };
template <> struct IsGeType<OdGeVector3d> { static const bool value = true; };
template <> struct IsGeType<OdGeExtents2d> { static const bool value = true; };
template <> struct IsGeType<OdGeExtents3d> { static const bool value = true; };
template <> struct IsGeType<OdGeMatrix3d> { static const bool value = true; };

//-----------------------------------------------------------------------------
// base_type
//-----------------------------------------------------------------------------

template <class T>
struct base_type {
  typedef T type;
};
template <class T, class A>
struct base_type<OdArray<T, A> > {
  typedef typename base_type<T>::type type;
};
template <class T, class C, class A>
struct base_type<OdBmSet<T, C, A> > {
  typedef typename base_type<T>::type type;
};
//-----------------------------------------------------------------------------
// dimensions
//-----------------------------------------------------------------------------

template <class T>
struct dimensions {
  static const OdInt16 value = 0;
};
template <class T, class C, class A>
struct dimensions<OdBmSet<T, C, A> > {
  static const OdInt16 value = dimensions<T>::value + 1;
};
template <class T, class A>
struct dimensions<OdArray<T, A> > {
  static const OdInt16 value = dimensions<T>::value + 1;
};

//-----------------------------------------------------------------------------
// DefaultArrayType
//-----------------------------------------------------------------------------


template <class T>
struct DefaultArrayType { typedef OdArray<T> type; };
template<> struct DefaultArrayType<bool> { typedef OdBoolArray type; };
template<> struct DefaultArrayType<double> { typedef OdDoubleArray type; };
template<> struct DefaultArrayType<OdInt64> { typedef OdInt64Array type; };
template<> struct DefaultArrayType<OdInt32> { typedef OdInt32Array type; };
template<> struct DefaultArrayType<OdInt16> { typedef OdInt16Array type; };
template<> struct DefaultArrayType<OdInt8> { typedef OdInt8Array type; };
template<> struct DefaultArrayType<OdUInt64> { typedef OdUInt64Array type; };
template<> struct DefaultArrayType<OdUInt32> { typedef OdUInt32Array type; };
template<> struct DefaultArrayType<OdUInt16> { typedef OdUInt16Array type; };
template<> struct DefaultArrayType<OdUInt8> { typedef OdUInt8Array type; };
template<> struct DefaultArrayType<OdGePoint3d> { typedef OdGePoint3dArray type; };
template<> struct DefaultArrayType<OdGePoint2d> { typedef OdGePoint2dArray type; };
template<> struct DefaultArrayType<OdGeVector3d> { typedef OdGeVector3dArray type; };
template<> struct DefaultArrayType<OdGeMatrix2d> { typedef OdGeMatrix2dArray type; };
template<> struct DefaultArrayType<OdGeMatrix3d> { typedef OdGeMatrix3dArray type; };
template<> struct DefaultArrayType<OdTfVariant> { typedef OdTfVariantArray type; };

//-----------------------------------------------------------------------------
// TfVariant_type
//-----------------------------------------------------------------------------

template <class T>
struct TfVariant_type;

#define VT_CASE(TYPE)                                                          \
  template <> struct TfVariant_type<Od##TYPE> {                                \
    static const OdTfVariant::Type value =                                     \
        static_cast<OdTfVariant::Type>(OdTfVariant::k##TYPE);                  \
  };

ODBM_VARIANT_TYPES_ALL(VT_CASE);

#undef VT_CASE

template <class T>
struct TfVariant_type<OdSmartPtr<T> > {
  static const OdTfVariant::Type value =
      static_cast<OdTfVariant::Type>(OdTfVariant::kRxObjectPtr);
};

template <>
struct TfVariant_type<float> {
  static const OdTfVariant::Type value =
    static_cast<OdTfVariant::Type>(OdTfVariant::kDouble);
};

template <class T1, class T2> struct TfVariant_type<OdBmMap<T1, T2> > {
  static const OdTfVariant::Type value = static_cast<OdTfVariant::Type>(
      (1 /* dimensions count */ << 8) | OdTfVariant::kTuple);
};

template <class T1, class T2> struct TfVariant_type<OdBmPair<T1, T2> > {
  static const OdTfVariant::Type value = OdTfVariant::kTuple;
};

template <class T>
struct TfVariant_type<T*> {
  static const OdTfVariant::Type value = OdTfVariant::kRxObjectWeakPtr;
};

template <class T, class A>
struct TfVariant_type<OdArray<T, A> > {
  typedef OdArray<T, A> ARRAY;
  typedef typename base_type<ARRAY>::type ITEM;
  static const OdTfVariant::Type value = static_cast<OdTfVariant::Type>(
      (dimensions<ARRAY>::value << 8) | TfVariant_type<ITEM>::value);
};

template <class T, class C, class A>
struct TfVariant_type<OdBmSet<T, C, A> > {
  typedef OdBmSet<T, C, A> SET;
  typedef typename base_type<SET>::type ITEM;
  static const OdTfVariant::Type value = static_cast<OdTfVariant::Type>(
      (dimensions<SET>::value << 8) | TfVariant_type<ITEM>::value);
};

#endif // _BM_UTILS_TYPE_TRAITS_H_
