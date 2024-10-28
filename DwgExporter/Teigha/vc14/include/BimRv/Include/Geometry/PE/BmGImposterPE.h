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

#ifndef _BM_GIMPOSTER_PE_H_
#define _BM_GIMPOSTER_PE_H_

class OdBmGImposter;
typedef OdSmartPtr<OdBmGImposter> OdBmGImposterPtr;

/** \details

*/
class ODRX_ABSTRACT TB_GEOMETRY_EXPORT OdBmGImposterPE : public OdRxObject {
public:
  //DOM-IGNORE-BEGIN
  ODRX_DECLARE_MEMBERS(OdBmGImposterPE);
  //DOM-IGNORE-END
  
  /** \details
    Implements viewport-dependent rendering.
    
    \param val [out] A geometry imposter object.
    \param pVd [in] A raw pointer to an OdGiViewportDraw object that contains information about the specific viewport's geometry and traits. 
  */
  virtual void subViewportDraw(const OdBmGImposterPtr&, OdGiViewportDraw* pVd) const = 0;
};

typedef OdSmartPtr<OdBmGImposterPE> OdBmGImposterPEPtr;

#endif // _BM_GIMPOSTER_PE_H_
