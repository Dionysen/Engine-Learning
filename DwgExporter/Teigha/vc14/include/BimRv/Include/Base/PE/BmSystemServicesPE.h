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

#ifndef _BM_SYSTEM_SERVICES_PE_H_
#define _BM_SYSTEM_SERVICES_PE_H_

#include <functional>

/** \details
    This class is the base class for platform specific operations within ODA BimRv.

    Library: TB_Loader

    {group:OdBm_Classes}
    <group Loader_Classes>
*/
class ODRX_ABSTRACT TB_BASE_EXPORT OdBmSystemServicesPE : public OdRxObject {
public:
  ODRX_DECLARE_MEMBERS(OdBmSystemServicesPE);

  /** \details
    Checks if temporary data can be stored on a disk.
    
    \returns true if temporary data can be stored on a disk, false - otherwise.
  */
  virtual bool useDisk() const;

  /** \details
    Retrieves the unload file path.

    \returns Path to a file, where temporary data should be stored.
    \remarks
    If path is equal to OdString::kEmpty, combination of
    OdRxSystemServices::getTemporaryPath(),
    OdRxSystemServices::getTempFileName() will be used.
  */
  virtual OdString unloadFilePath() const;


  /** \details
    Checks if unload mechanism is enabled. If returns false, overall unloading will
    be disabled.

    \returns true if enabled.
  */
  virtual bool unloadEnabled() const;


  /** \details
    Creates a condition function.
    
    \returns Condition function, that will be taken into account, on evaluating
    requirements of unloading for specific object.
    \remarks
    If condition function returns true, then object will be unloaded.
    Condition function will be called only for objects, that support unloading.
  */
  virtual std::function<bool (const OdBmObject*)> unloadCondition() const;

  /** \details
    Checks if the unlocadCondition function can be cached.
    
    \returns true, if the unloadCondition function can be cached, false - otherwise.
  */
  virtual bool unloadCoditionCanBeCached() const;

  /** \details
    This method allows to customize memory amount used for unloading data indexing


    \returns Rate used to calculate indexing step.

    \remarks
    0 - unloaded data are maximally indexed, amout of RAM used & speed is greater.
    Bigger numbers get's less RAM to be used & slower processing.
  */
  virtual double indexingRate() const;
};

typedef OdSmartPtr<OdBmSystemServicesPE> OdBmSystemServicesPEPtr;

#endif // _BM_SYSTEM_SERVICES_PE_H_
