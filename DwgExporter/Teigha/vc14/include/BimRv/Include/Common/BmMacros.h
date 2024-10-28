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
#ifndef __BM_PUBLIC_MACROS_H__
#define __BM_PUBLIC_MACROS_H__

//
// Common macroses
//

#define ODBM_VIRTUAL virtual
#define ODBM_SEMICOLON(ARG) ;
#define ODBM_OVERRIDE_ENDING(ARG) ODRX_OVERRIDE;
#define ODBM_PURE_FUNCTION_ENDING(ARG) = 0;
#define ODBM_COMMA_SEPARATED(A, B) A,B
#define ODBM_FORWARD_MACRO(...) __VA_ARGS__
#define ODBM_EXPAND(x) x
#define ODBM_PASS(...) /* pass */
#define ODBM_ONE_PLUS(...) 1 +
#define ODBM_TO_STRING2(ARG) L##ARG
#define ODBM_TO_STRING(ARG) ODBM_TO_STRING2(#ARG)
#define __ODBM_MACRO_AS_STRING_IMPL(ARG) #ARG
#define ODBM_MACRO_AS_STRING(ARG) __ODBM_MACRO_AS_STRING_IMPL(ARG)
#define ODBM_SEQUENCE_2(ITEM1, ITEM2) ITEM1 ITEM2
#define ODBM_APPLY(DEF, ...) ODBM_EXPAND(DEF(__VA_ARGS__))
#define ODBM_APPLY_WITHOUT_ARG1(DEF, V1, ...) ODBM_EXPAND(DEF(__VA_ARGS__))
#define ODBM_APPLY_WITHOUT_ARG2(DEF, V1, V2, ...) ODBM_EXPAND(DEF(V1, __VA_ARGS__))
#define ODBM_APPLY_WITHOUT_ARG3(DEF, V1, V2, V3, ...) ODBM_EXPAND(DEF(V1,V2, __VA_ARGS__))
#define ODBM_FIRST(F, ...) F
#define __ODBM_JOIN_IMPL(A, B) A ## B
#define ODBM_JOIN(A, B) __ODBM_JOIN_IMPL(A, B)

// NB!:
//  We've agreement here: All ODBM-list macroses starts with iterating macro &
//  ends with variadic argument.
//  Current max arguments count - 16

#define ODBM_LIST_SIZE(LIST_MACRO)                                       \
  LIST_MACRO(ODBM_ONE_PLUS, ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO,      \
             ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, \
             ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, \
             ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, \
             ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, ODBM_FORWARD_MACRO, \
             ODBM_FORWARD_MACRO) +                                       \
      0


//
// Bm - classes hierarcy macroses
//

#define ODBM_DECLARE_BASE_MEMBERS(ClassName)                          \
public:                                                               \
  ODTF_DECLARE_MEMBERS(ClassName);                                    \
  typedef ClassName##Impl Impl;                                       \
                                                                      \
private:                                                              \
  inline Impl* getImpl() { return reinterpret_cast<Impl*>(m_pImpl); } \
  inline const Impl* getImpl() const {                                \
    return reinterpret_cast<const Impl*>(m_pImpl);                    \
  }                                                                   \
  friend class ClassName##Impl;

#define ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(CLASS_NAME) \
public:                                               \
  ODBM_DECLARE_BASE_MEMBERS(CLASS_NAME);              \
                                                      \
protected:                                            \
  CLASS_NAME();                                       \
  CLASS_NAME(CLASS_NAME##Impl* pImpl);

#define ODBM_DECLARE_ABSTRACT_CLASS_MEMBERS(CLASS_NAME) \
public:                                               \
  ODBM_DECLARE_BASE_MEMBERS(CLASS_NAME);              \
                                                      \
protected:                                            \
  CLASS_NAME(CLASS_NAME##Impl* pImpl);

#define ODBM_DECLARE_ROOT_MEMBERS(CLASS_NAME) \
  ODBM_DECLARE_BASE_MEMBERS(CLASS_NAME);      \
                                              \
protected:                                    \
  CLASS_NAME(CLASS_NAME##Impl* pImpl);        \
                                              \
protected:                                    \
  CLASS_NAME##Impl* m_pImpl;

//
// Enumeration extensions
//

#define ODBM_MAP_PARAM_DEF(ENUM_VALUE_NAME, ENUM_VALUE, BM_CLASS_NAME, ...) \
  template <> struct MappedBy<BM_CLASS_NAME> {                              \
    static const Enum value = ENUM_VALUE_NAME;                              \
  };                                                                        \
  template <> struct MappedTo<ENUM_VALUE_NAME> { typedef BM_CLASS_NAME type; };

#define ODBM_ENUMERATION_OBJECTS_MAP_EXTENSION(SMART_LIST) \
  template <class> struct MappedBy;                        \
  template <Enum> struct MappedTo;                         \
  SMART_LIST(ODBM_PASS, ODBM_MAP_PARAM_DEF)

#define ODBM_MAP_CLASS_PARAM_DEF(ENUM_VALUE_NAME, ENUM_VALUE, BM_CLASS_NAME, \
                                 ...)                                        \
  case ENUM_VALUE_NAME: {                                                    \
    return static_cast<OdTfClass*>(                                          \
        ::odrxClassDictionary()->getAt(#BM_CLASS_NAME).get());               \
  } break;

#define ODBM_MAP_PARAM_CLASS_DEF(ENUM_VALUE_NAME, ENUM_VALUE, BM_CLASS_NAME,   \
                                 ...)                                          \
  values[ODBM_TO_STRING(BM_CLASS_NAME)] = ENUM_VALUE_NAME;

#define ODBM_ENUM_DESC_EXTENSION(NAMESPACE_NAME, SMART_LIST)                   \
  namespace OdBm {                                                             \
  namespace NAMESPACE_NAME {                                                   \
  static OdTfClass* desc(const Enum value) {                                   \
    switch (value) {                                                           \
      SMART_LIST(ODBM_PASS, ODBM_MAP_CLASS_PARAM_DEF)                          \
      default: {                                                               \
        return NULL;                                                           \
      } break;                                                                 \
    }                                                                          \
  }                                                                            \
  static not_std::optional<Enum> value(const OdTfClass* pClass) {              \
    static std::unordered_map<std::wstring, Enum> values;                      \
    /* NB! unable to switch across runtime values */                           \
    if (values.empty()) {                                                      \
      SMART_LIST(ODBM_PASS, ODBM_MAP_PARAM_CLASS_DEF)                          \
    }                                                                          \
    auto it = values.find(pClass->name().c_str());                             \
    if (it == values.end()) {                                                  \
      return not_std::nullopt;                                                 \
    } else {                                                                   \
      return it->second;                                                       \
    }                                                                          \
  }                                                                            \
  }                                                                            \
  }

#define ODBM_ENUMERATION_RANGE_EXTENSION(RANGE_BEGIN, RANGE_END) \
  const OdInt32 kRangeBegin = RANGE_BEGIN;                       \
  const OdInt32 kRangeEnd = RANGE_END;                           \
  static bool inRange(OdInt32 val) {                             \
    return (kRangeBegin <= val) && (val <= kRangeEnd);           \
  }

//
// Enumeration utils macroses
//

#define ODBM_CLASS_FORWARD_DECLARATION(ENUM_VALUE_NAME, ENUM_VALUE, \
                                       BM_CLASS_NAME, ...)          \
  class BM_CLASS_NAME;

#define ODBM_ENUM_ENTRY(NAME, VALUE, ...) NAME = VALUE,
#define ODBM_ENUM_VALUES_ENTRY(NAME, VALUE, ...) result.push_back(NAME);

//
// Enumeration macroses
//

#define ODBM_ENUMERATION_BASE(NAMESPACE_NAME, LIST, EXTENSION_CODE) \
  namespace NAMESPACE_NAME {                                        \
  enum Enum { LIST(ODBM_ENUM_ENTRY) };                              \
  static const OdUInt32 size_value = ODBM_LIST_SIZE(LIST);          \
  static const OdUInt32 size() { return size_value; }               \
  EXTENSION_CODE                                                    \
  } /* namespace NAMESPACE_NAME */                                  \
  typedef OdArray<NAMESPACE_NAME::Enum,                             \
                  OdMemoryAllocator<NAMESPACE_NAME::Enum> >         \
      NAMESPACE_NAME##Array;

#define ODBM_ENUMERATION(NAMESPACE_NAME, LIST)  \
  namespace OdBm {                              \
  ODBM_ENUMERATION_BASE(NAMESPACE_NAME, LIST, ) \
  template <>                                   \
  struct IsEnum<NAMESPACE_NAME::Enum> {         \
    static const bool value = true;             \
  };                                            \
  } /* namespace OdBm*/


//
// Enumerations shortcuts
//

#define ODBM_RANGED_ENUMERATION(NAMESPACE_NAME, LIST, RANGE_BEGIN, RANGE_END)  \
  namespace OdBm {                                                             \
  ODBM_ENUMERATION_BASE(NAMESPACE_NAME, LIST,                                  \
                        ODBM_ENUMERATION_RANGE_EXTENSION(RANGE_BEGIN,          \
                                                         RANGE_END))           \
  template <>                                                                  \
  struct IsEnum<NAMESPACE_NAME::Enum> {                                        \
    static const bool value = true;                                            \
  };                                                                           \
  template <>                                                                  \
  struct EnumBegin<NAMESPACE_NAME::Enum> {                                     \
    static const OdInt32 value = OdBm::NAMESPACE_NAME::kRangeBegin;            \
  };                                                                           \
  template <>                                                                  \
  struct EnumEnd<NAMESPACE_NAME::Enum> {                                       \
    static const OdInt32 value = OdBm::NAMESPACE_NAME::kRangeEnd + 1;          \
  };                                                                           \
  } /* namespace OdBm*/

#define ODBM_MAPPED_ENUMERATION(NAMESPACE_NAME, LIST, SMART_LIST)           \
  SMART_LIST(ODBM_PASS, ODBM_CLASS_FORWARD_DECLARATION)                     \
  namespace OdBm {                                                          \
  ODBM_ENUMERATION_BASE(NAMESPACE_NAME, LIST,                               \
                        ODBM_ENUMERATION_OBJECTS_MAP_EXTENSION(SMART_LIST)) \
  template <>                                                               \
  struct IsEnum<NAMESPACE_NAME::Enum> {                                     \
    static const bool value = true;                                         \
  };                                                                        \
  } /* namespace OdBm*/

#define ODBM_ENUM_TO_STR(ENUM_NAME, VALUE) \
  OdBm::ENUM_NAME(OdBm::ENUM_NAME::VALUE).toString()

//
//
//

#define ODBM_VARIANT_TYPES_S_INTS(MACRO)                                       \
  MACRO(Int8)                                                                  \
  MACRO(Int16)                                                                 \
  MACRO(Int32)                                                                 \
  MACRO(Int64)

#define ODBM_VARIANT_TYPES_U_INTS(MACRO)                                       \
  MACRO(UInt8)                                                                 \
  MACRO(UInt16)                                                                \
  MACRO(UInt32)                                                                \
  MACRO(UInt64)

#define ODBM_VARIANT_TYPES_ALL_INTS(MACRO)                                     \
  ODBM_VARIANT_TYPES_S_INTS(MACRO)                                             \
  ODBM_VARIANT_TYPES_U_INTS(MACRO)

#define ODBM_VARIANT_TYPES_ALL(MACRO)                                          \
  MACRO(RxObjectPtr)                                                           \
  MACRO(RxObjectWeakPtr)                                                       \
  MACRO(DbStubPtr)                                                             \
  MACRO(Double)                                                                \
  MACRO(Bool)                                                                  \
  MACRO(String)                                                                \
  MACRO(AnsiString)                                                            \
  MACRO(GUID)                                                                  \
  ODBM_VARIANT_TYPES_ALL_INTS(MACRO)


#define ODBM_TFVARIANT_TYPES(MACRO)                                            \
  MACRO(RxObjectWeakPtr)                                                       \
  MACRO(DbStubPtr)                                                             \
  MACRO(GUID)

#define ODBM_RXVARIANT_TYPES_S_INT(MACRO)                                      \
  MACRO(RxObjectPtr)                                                           \
  MACRO(Double)                                                                \
  MACRO(Bool)                                                                  \
  MACRO(String)                                                                \
  MACRO(AnsiString)                                                            \
  ODBM_VARIANT_TYPES_S_INTS(MACRO)

#define ODBM_RXVARIANT_TYPES_U_INT(MACRO)                                      \
  MACRO(RxObjectPtr)                                                           \
  MACRO(Double)                                                                \
  MACRO(Bool)                                                                  \
  MACRO(String)                                                                \
  MACRO(AnsiString)                                                            \
  ODBM_VARIANT_TYPES_U_INTS(MACRO)

#define ODBM_VARIANT_TYPES_S_INT(MACRO)                                        \
  ODBM_TFVARIANT_TYPES(MACRO)                                                  \
  ODBM_RXVARIANT_TYPES_S_INT(MACRO)

#define ODBM_VARIANT_TYPES_U_INT(MACRO)                                        \
  ODBM_TFVARIANT_TYPES(MACRO)                                                  \
  ODBM_RXVARIANT_TYPES_U_INT(MACRO)

//
// ODBM_IN(VALUE, V1, V2, ...) - determines if VALUE is equal to one of V1, V2 etc.
//                               V7 is maximum count for now.
//

#define _BM_IN_1(v, a) (v == a)
#define _BM_IN_2(v, a, b) ((v == a) || _BM_IN_1(v, b))
#define _BM_IN_3(v, a, b, c) ((v == a) || _BM_IN_2(v, b, c))
#define _BM_IN_4(v, a, b, c, d) ((v == a) || _BM_IN_3(v, b, c, d))
#define _BM_IN_5(v, a, b, c, d, e) ((v == a) || _BM_IN_4(v, b, c, d, e))
#define _BM_IN_6(v, a, b, c, d, e, f) ((v == a) || _BM_IN_5(v, b, c, d, e, f))
#define _BM_IN_7(v, a, b, c, d, e, f, g) ((v == a) || _BM_IN_6(v, b, c, d, e, f, g))

#define _BM_IN_OVERRIDE(_1, _2, _3,_4,_5,_6,_7, NAME, ...) NAME

#define ODBM_IN(V, ...) ODBM_EXPAND(_BM_IN_OVERRIDE(__VA_ARGS__,        \
                                                    _BM_IN_7,           \
                                                    _BM_IN_6,           \
                                                    _BM_IN_5,           \
                                                    _BM_IN_4,           \
                                                    _BM_IN_3,           \
                                                    _BM_IN_2,           \
                                                    _BM_IN_1)(V, __VA_ARGS__))
//
//
//

#define _BM_ANY_1(v, a) v(a)
#define _BM_ANY_2(v, a, b) (v(a) || _BM_ANY_1(v, b))
#define _BM_ANY_3(v, a, b, c) (v(a) || _BM_ANY_2(v, b, c))
#define _BM_ANY_4(v, a, b, c, d) (v(a) || _BM_ANY_3(v, b, c, d))
#define _BM_ANY_5(v, a, b, c, d, e) (v(a) || _BM_ANY_4(v, b, c, d, e))
#define _BM_ANY_6(v, a, b, c, d, e, f) (v(a) || _BM_ANY_5(v, b, c, d, e, f))
#define _BM_ANY_7(v, a, b, c, d, e, f, g) (v(a) || _BM_ANY_6(v, b, c, d, e, f, g))

#define _BM_ANY_OVERRIDE(_1, _2, _3,_4,_5,_6,_7, NAME, ...) NAME

#define ODBM_ANY(UNARY_FUNCTION, ...)           \
  ODBM_EXPAND(_BM_ANY_OVERRIDE(__VA_ARGS__,     \
                               _BM_ANY_7,       \
                               _BM_ANY_6,       \
                               _BM_ANY_5,       \
                               _BM_ANY_4,       \
                               _BM_ANY_3,       \
                               _BM_ANY_2,       \
                               _BM_ANY_1)(UNARY_FUNCTION, __VA_ARGS__))

//
//
//

#define _BM_ALL_1(v, a) v(a)
#define _BM_ALL_2(v, a, b) (v(a) && _BM_ALL_1(v, b))
#define _BM_ALL_3(v, a, b, c) (v(a) && _BM_ALL_2(v, b, c))
#define _BM_ALL_4(v, a, b, c, d) (v(a) && _BM_ALL_3(v, b, c, d))
#define _BM_ALL_5(v, a, b, c, d, e) (v(a) && _BM_ALL_4(v, b, c, d, e))
#define _BM_ALL_6(v, a, b, c, d, e, f) (v(a) && _BM_ALL_5(v, b, c, d, e, f))
#define _BM_ALL_7(v, a, b, c, d, e, f, g) (v(a) && _BM_ALL_6(v, b, c, d, e, f, g))

#define _BM_ALL_OVERRIDE(_1, _2, _3,_4,_5,_6,_7, NAME, ...) NAME

#define ODBM_ALL(UNARY_FUNCTION, ...)           \
  ODBM_EXPAND(_BM_ALL_OVERRIDE(__VA_ARGS__,     \
                               _BM_ALL_7,       \
                               _BM_ALL_6,       \
                               _BM_ALL_5,       \
                               _BM_ALL_4,       \
                               _BM_ALL_3,       \
                               _BM_ALL_2,       \
                               _BM_ALL_1)(UNARY_FUNCTION, __VA_ARGS__))

//
//
//

#define _BM_CHAIN_IMPL_1(a) OdBmSystemInternals::safeGetImpl(a)
#define _BM_CHAIN_IMPL_2(a, b)                                                 \
  (OdBmSystemInternals::safeGetImpl(_BM_CHAIN_IMPL_1(a)->b))
#define _BM_CHAIN_IMPL_3(a, b, c)                                              \
  (OdBmSystemInternals::safeGetImpl(_BM_CHAIN_IMPL_2(a, b)->c))
#define _BM_CHAIN_IMPL_4(a, b, c, d)                                           \
  (OdBmSystemInternals::safeGetImpl(_BM_CHAIN_IMPL_3(a, b, c)->d))
#define _BM_CHAIN_IMPL_5(a, b, c, d, e)                                        \
  (OdBmSystemInternals::safeGetImpl(_BM_CHAIN_IMPL_4(a, b, c, d)->e))
#define _BM_CHAIN_IMPL_6(a, b, c, d, e, f)                                     \
  (OdBmSystemInternals::safeGetImpl(_BM_CHAIN_IMPL_5(a, b, c, d, e)->f))
#define _BM_CHAIN_IMPL_7(a, b, c, d, e, f, g)                                  \
  (OdBmSystemInternals::safeGetImpl(_BM_CHAIN_IMPL_6(a, b, c, d, e, f)->g))

#define _BM_CHAIN_IMPL_OVERRIDE(_1, _2, _3,_4,_5,_6,_7, NAME, ...) NAME

#define ODBM_CHAIN_IMPL(...)           \
  ODBM_EXPAND(_BM_CHAIN_IMPL_OVERRIDE(__VA_ARGS__,     \
                               _BM_CHAIN_IMPL_7,       \
                               _BM_CHAIN_IMPL_6,       \
                               _BM_CHAIN_IMPL_5,       \
                               _BM_CHAIN_IMPL_4,       \
                               _BM_CHAIN_IMPL_3,       \
                               _BM_CHAIN_IMPL_2,       \
                               _BM_CHAIN_IMPL_1)(__VA_ARGS__))

#define ODBM_SAFE_CHAIN_IMPL(...) \
  ODBM_EXPAND(ODBM_FIRST(__VA_ARGS__))->assertWriteEnabled();     \
  ODBM_EXPAND(ODBM_CHAIN_IMPL(__VA_ARGS__))

#define ODBM_DEF_LESS(NAME, ARG1, ARG2)                                        \
  namespace OdBm {                                                             \
  struct less_##NAME {                                                         \
    bool operator()(ARG1, ARG2) const;                                         \
  };                                                                           \
  }                                                                            \
  bool OdBm::less_##NAME::operator()(ARG1, ARG2) const

#define ODBM_DEF_LESS_T(NAME, ARG1, ARG2)                                      \
  namespace OdBm {                                                             \
  template <>                                                                  \
  struct less_##NAME {                                                         \
    bool operator()(ARG1, ARG2) const;                                         \
  };                                                                           \
  }                                                                            \
  bool OdBm::less_##NAME::operator()(ARG1, ARG2) const

#define ODBM_DEF_EQUAL_1(NAME, FREE_LIKE_VARIABLE_TYPE, ARG)                   \
  namespace OdBm {                                                             \
  struct equal_##NAME {                                                        \
  protected:                                                                   \
    FREE_LIKE_VARIABLE_TYPE ODBM_VALUE;                                        \
                                                                               \
  public:                                                                      \
    equal_##NAME(const FREE_LIKE_VARIABLE_TYPE& value) : ODBM_VALUE(value) {   \
    }                                                                          \
    equal_##NAME(const equal_##NAME& other) : ODBM_VALUE(other.ODBM_VALUE) {   \
    }                                                                          \
    bool operator()(ARG) const;                                                \
  };                                                                           \
  }                                                                            \
  bool OdBm::equal_##NAME::operator()(ARG) const

#define ODBM_VALUE oda_bimrv_variable_reserved_name__
#define ODBM_EQUAL(NAME) OdBm::equal_##NAME
#define ODBM_LESS(NAME) OdBm::less_##NAME

#define ODBM_RANGE(COL) std::begin(COL), std::end(COL)

//
//
//

#define ODBM_FORWARD_CLASS(CLS)                                                \
  class CLS;                                                                   \
  typedef OdSmartPtr<CLS> CLS##Ptr;


//
// FIXME: move to another IO stuff
//

#define READER_NAME(TYPE_NAME) TYPE_NAME##Reader
#define WRITER_NAME(TYPE_NAME) TYPE_NAME##Writer

//
//
//

#if defined(TARGET_OS_MAC) && !defined(__MACH__)
#define ODBM_MAIN_ARGC_IMPL(ARGC, ARGV) ARGC = ccommand(&ARGV);
#else  // defined(TARGET_OS_MAC) && !defined(__MACH__)
#define ODBM_MAIN_ARGC_IMPL(ARGC, ARGV)
#endif  // defined(TARGET_OS_MAC) && !defined(__MACH__)

//
//
//

#if defined(OD_USE_WMAIN)
#define ODBM_MAIN_IMPL(ARGC, ARGV) int wmain(int ARGC, wchar_t* ARGV[])
#else // defined(OD_USE_WMAIN)
#define ODBM_MAIN_IMPL(ARGC, ARGV) int main(int ARGC, char* ARGV[])
#endif // defined(OD_USE_WMAIN)

//
//
//

#define ODBM_MAIN_BEGIN(ARGC, ARGV)                                            \
  ODBM_MAIN_IMPL(ARGC, ARGV) {                                                 \
    ODBM_MAIN_ARGC_IMPL(ARGC, ARGV)

#define ODBM_MAIN_END }

//
//
//

#define ODBM_HAS_MEMBER(NAME)                                                \
  template <typename Type, typename Enable = void> class has_member_##NAME   \
      : public std::false_type {};                                       \
                                                                             \
  template <typename Type>                                                   \
  class has_member_##NAME<Type, typename std::enable_if<                 \
                                    std::is_class<Type>::value>::type> { \
    class yes { char m; };                                                   \
    class no { yes m[2]; };                                                  \
    struct BaseMixin { void NAME() {} };                                     \
    struct Base : public Type, BaseMixin {};                                 \
    template <typename U, U u> class Helper {};                              \
    template <typename U>                                                    \
    static no deduce(U*, Helper<void (BaseMixin::*)(), &U::NAME>* = NULL);   \
    static yes deduce(...);                                                  \
                                                                             \
  public:                                                                    \
    static const bool value = sizeof(deduce((Base*)(NULL))) == sizeof(yes);  \
  };

#define ODBM_HAS_TYPE(NAME)                                                 \
  template <typename Type, typename Enable = void> class has_type_##NAME    \
      : public std::false_type {};                                      \
                                                                            \
  template <typename Type>                                                  \
  class has_type_##NAME<Type, typename std::enable_if<                  \
                                  std::is_class<Type>::value>::type> {  \
    class yes { char m; };                                                  \
    class no { yes m[2]; };                                                 \
    template <typename U> static yes deduce(U*, typename U::NAME* = NULL);  \
    static no deduce(...);                                                  \
                                                                            \
  public:                                                                   \
    static const bool value = sizeof(deduce((Type*)(NULL))) == sizeof(yes); \
  };

#endif //__BM_PUBLIC_MACROS_H__
