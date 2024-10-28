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

#ifndef _BM_DEPOSIT_ID_H_
#define _BM_DEPOSIT_ID_H_

#include <unordered_map>


struct TB_BASE_EXPORT OdBmDepositId {
public:
  typedef OdUInt64 Handle;
  /** \details
    Default constructor for OdBmDepositId.
  */
  OdBmDepositId();
  
  /** \details
    Copy constructor for OdBmDepositId.
    
    \param OdBmDepositId& [in] Element to copy.
  */
  OdBmDepositId(const OdBmDepositId&);
  
  /** \details
    Alternative constructor for OdBmDepositId. Creates an element with a given handle.
    
    \param Handle& [in] Element's handle.
  */
  OdBmDepositId(const Handle&);
  
  /** \details. 
    Assigns the value from the rhs operand to the lhs operand.
    
    \param OdBmDepositId& [in] rhs parameter.
    \returns Original element after assignment.
  */
  OdBmDepositId& operator=(const OdBmDepositId&);
  
  /** \details
    Checks if two OdBmDepositId values are equal.
    
    \param OdBmDepositId& [in] rhs parameter.
    \returns true if the parameters compared are equal.
  */
  bool operator==(const OdBmDepositId& other);
  
  /** \details
    Destructor.
  */
  ~OdBmDepositId();
  
  /** \details
    Retrieves the handle of an element.
    
    \returns Element's handle.
  */
  Handle value() const;
  
  /** \details
    Checks if the element's id is null.
    
    \returns true if the element's id is null, false - otherwise.
  */
  bool isNull() const;
  
  //DOM-IGNORE-BEGIN
  TB_BASE_EXPORT_STATIC static const OdBmDepositId kNull;
  //DOM-IGNORE-END
private:
  void dec();
  void inc();

  static std::map<Handle, OdUInt32> s_counts;
  static OdMutex s_mutex;
  static const Handle kNullHandle;

  decltype(&(*(s_counts.begin()))) m_data;
};

#endif // _BM_DEPOSIT_ID_H_
