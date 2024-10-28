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

#ifndef _BM_UTILS_NOT_STD_TYPE_TRAITS_H_
#define _BM_UTILS_NOT_STD_TYPE_TRAITS_H_

namespace not_std {

template< class T >
using remove_reference_t = typename std::remove_reference<T>::type;

template< class T >
using remove_cv_t = typename std::remove_cv<T>::type;

template< class T >
struct remove_cvref {
    typedef remove_cv_t<remove_reference_t<T> > type;
};

template< class T >
using remove_cvref_t = typename remove_cvref<T>::type;

template< bool B, class T = void >
using enable_if_t = typename std::enable_if<B,T>::type;
   
}

#endif //_BM_UTILS_NOT_STD_TYPE_TRAITS_H_
