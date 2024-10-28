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




#ifndef _SmProjectPointLocation_h_Included_
#define _SmProjectPointLocation_h_Included_

#include "Sm/SmPersist.h"
#include "OdString.h"

/** \details
  
    <group TD_Namespaces>
*/
namespace dst
{
  /** \details

       
  */
  struct SMDLL_EXPORT OdSmProjectPointLocation : OdSmPersist
  {
    ODRX_DECLARE_MEMBERS(OdSmProjectPointLocation);
    virtual OdString getName() const = 0;
    virtual void setName(const OdString& name ) = 0;
    virtual OdString getURL() const = 0;
    virtual void setURL(const OdString& url ) = 0;
    virtual OdString getFolder() const = 0;
    virtual void setFolder(const OdString& folder ) = 0;
    virtual OdString getUsername() const = 0;
    virtual void setUsername(const OdString& username ) = 0;
    virtual OdString getPassword() const = 0;
    virtual void setPassword(const OdString& password ) = 0;
    virtual long getResourceType() const = 0;
    virtual void setResourceType(long value) = 0;

  };
  typedef OdSmartPtr<OdSmProjectPointLocation> OdSmProjectPointLocationPtr;
}

#endif //_SmProjectPointLocation_h_Included_
