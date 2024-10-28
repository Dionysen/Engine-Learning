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

#ifndef _OdResult_h_Included_
#define _OdResult_h_Included_

#define OD_ERROR_DEF(code, string)  code,
enum OdResult
{
#include "ErrorDefs.h"
  eDummyLastError
};
#undef OD_ERROR_DEF

#define OD_MESSAGE_DEF(code, string)  code,
enum OdMessage
{
  sidDummyFirstMessage = eDummyLastError -1,
#include "MessageDefs.h"
  sidDummyLastMessage
};
#undef OD_MESSAGE_DEF

typedef OdResult OdWarning;

#endif //_OdResult_h_Included_
