/////////////////////////////////////////////////////////////////////////////// 
// Copyright (C) 2002-2019, Open Design Alliance (the "Alliance"). 
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
//   Open Design Alliance Copyright (C) 2002-2019 by Open Design Alliance. 
//   All rights reserved.
//
// By use of this software, its documentation or related materials, you 
// acknowledge and accept the above terms.
///////////////////////////////////////////////////////////////////////////////
// Extension data provider object interfaces

#ifndef ODTRVISEXTENSIONOBJECT
#define ODTRVISEXTENSIONOBJECT

#include "TD_PackPush.h"

#include "Ge/GeMatrix3d.h"
//#include "OdBlob.h"
#include "TrVisRenditionPu.h"

// Forward declarations
class OdTrRndLocalRenditionHost;
struct OdTrVisPropertyDef;
class OdTrVisCamera;
class OdApcQueue;
class OdTrVisMetafileWritersPool;
class OdTrVisRendition;

/** \details
    <group ExRender_Windows_Classes> 
*/
class OdTrVisExtensionModule : public OdRxObject // @@@TODO: RxModule inheritance
{
  public:
    virtual OdString moduleName() const = 0;
    virtual OdUInt32 extensionVersion() const = 0;

    // @@@TODO: module objects constructor and deserializer
};

typedef OdSmartPtr<OdTrVisExtensionModule> OdTrVisExtensionModulePtr;

/** \details
    <group ExRender_Windows_Classes> 
*/
class OdTrVisExtensionObject : public OdRxObject
{
  public:
    virtual const OdTrVisExtensionModule *extensionModule() const = 0;
    virtual OdUInt32 moduleObjectType() const = 0;

    // Setup specific object data
    virtual void setupSpecificData(OdUInt32 /*nDataId*/, const OdTrVisPropertyDef & /*propDef*/) {}

    /* @@@TODO: Serialization:
       1) Which extension module contains object to load;
         - So we will be able to load extension data provider in case if it is available;
       2) Which version of object;
         - So we will be able to check that serialized data is correct;
       3) Object data size;
         - So we will be able to skip this data in case if extension module is unavailable or version isn't fit;
       4) Custom object data;
         - So object will be able to restore their state, using stored data.
    */
};

typedef OdSmartPtr<OdTrVisExtensionObject> OdTrVisExtensionObjectPtr;

/** \details
    <group ExRender_Windows_Classes> 
*/
class OdTrVisExtensionObjectMtContext : public OdRxObject
{
  public:
    virtual OdApcQueue &apcQueue() = 0;
    virtual OdTrVisMetafileWritersPool &mfWritersPool() = 0;
};

typedef OdSmartPtr<OdTrVisExtensionObjectMtContext> OdTrVisExtensionObjectMtContextPtr;

/** \details
    <group ExRender_Windows_Classes> 
*/
class OdTrVisExtensionObjectInvocation : public OdTrVisDirectRenderPartialUpdateInvocation
{
  protected:
    OdTrRndLocalRenditionHost *m_pRenditionHost;
    const OdTrVisCamera *m_pCamera;
    OdGeMatrix3d m_modelXform;
  public:
    static OdSmartPtr<OdTrVisExtensionObjectInvocation> createObject(OdTrVisViewportId viewportId = kTrVisNullId,
                                                                     OdTrVisOverlayId overlayId = kTrVisNullId)
    { OdSmartPtr<OdTrVisExtensionObjectInvocation> pObj = OdRxObjectImpl<OdTrVisExtensionObjectInvocation>::createObject();
      pObj->setup(viewportId, overlayId);
      return pObj; }
    static OdSmartPtr<OdTrVisExtensionObjectInvocation> createObject(OdTrVisViewportId viewportId, OdTrVisOverlayId overlayId,
                                                                     OdTrRndLocalRenditionHost *pRenditionHost, const OdTrVisCamera &camera, const OdGeMatrix3d &modelXform)
    { OdSmartPtr<OdTrVisExtensionObjectInvocation> pObj = OdRxObjectImpl<OdTrVisExtensionObjectInvocation>::createObject();
      pObj->setup(viewportId, overlayId, pRenditionHost, camera, modelXform);
      return pObj; }

    TD_USING(OdTrVisDirectRenderPartialUpdateInvocation::setup);
    void setup(OdTrRndLocalRenditionHost *pRenditionHost, const OdTrVisCamera &camera, const OdGeMatrix3d &modelXform)
    { m_pRenditionHost = pRenditionHost; m_pCamera = &camera; m_modelXform = modelXform; }
    void setup(OdTrVisViewportId viewportId, OdTrVisOverlayId overlayId, OdTrRndLocalRenditionHost *pRenditionHost, const OdTrVisCamera &camera, const OdGeMatrix3d &modelXform)
    { OdTrVisDirectRenderPartialUpdateInvocation::setup(viewportId, overlayId);
      setup(pRenditionHost, camera, modelXform); }

    const OdTrVisCamera &camera() const { return *m_pCamera; }
    const OdGeMatrix3d &modelXform() const { return m_modelXform; }
    OdTrRndLocalRenditionHost *renditionHost() const { return m_pRenditionHost; }
    //OdTrRndLocalRendition *rendition() const { return m_pRenditionHost->rendition(); }
};

typedef OdSmartPtr<OdTrVisExtensionObjectInvocation> OdTrVisExtensionObjectInvocationPtr;

/** \details
    <group ExRender_Windows_Classes> 
*/
class OdTrVisExtensionObjectInternalInvocation : public OdTrVisDirectRenderPartialUpdateInvocation
{
  protected:
    OdTrVisExtensionObjectInvocationPtr m_pExternal;
  public:
    static OdSmartPtr<OdTrVisExtensionObjectInternalInvocation> createObject(const OdTrVisExtensionObjectInvocation *pExternal = NULL)
    { OdSmartPtr<OdTrVisExtensionObjectInternalInvocation> pObj = OdRxObjectImpl<OdTrVisExtensionObjectInternalInvocation>::createObject();
      pObj->setup(pExternal);
      return pObj; }
    static OdSmartPtr<OdTrVisExtensionObjectInternalInvocation> createObject(OdTrVisViewportId viewportId, OdTrVisOverlayId overlayId)
    { OdSmartPtr<OdTrVisExtensionObjectInternalInvocation> pObj = OdRxObjectImpl<OdTrVisExtensionObjectInternalInvocation>::createObject();
      pObj->setup(viewportId, overlayId);
      return pObj;
    }

    TD_USING(OdTrVisDirectRenderPartialUpdateInvocation::setup);
    void setup(const OdTrVisExtensionObjectInvocation *pExternal = NULL)
    { m_pExternal = pExternal; OdTrVisDirectRenderPartialUpdateInvocation::setup(pExternal); }

    const OdTrVisExtensionObjectInvocation *externalInvocation() const { return m_pExternal; }
};

typedef OdSmartPtr<OdTrVisExtensionObjectInternalInvocation> OdTrVisExtensionObjectInternalInvocationPtr;

/** \details
    <group ExRender_Windows_Classes> 
*/
class OdTrVisExtensionGraphicObject : public OdTrVisExtensionObject, public OdTrVisRenderDataDirectAccessor
{
  public:
    // Returns invocation object if requested data ready to receive.
    virtual const OdTrVisExtensionObjectInternalInvocation *requestData(const OdTrVisExtensionObjectInvocation *pInvocation,
                                                                        OdTrVisExtensionObjectMtContext *pMtCtx = NULL) = 0;
    virtual void releaseData(const OdTrVisExtensionObjectInvocation *pInvocation, const OdTrVisRendition *pRendition = NULL) = 0;

    // Invocation can be null here, but in this case nothing will be received. Must be used invocation returned by requestData, since it can be modified there.
    virtual bool receiveData(const OdTrVisExtensionObjectInternalInvocation *pInvocation, OdTrVisRenderDataInvoke *pReceiver) = 0;
  protected:
    ODRX_SEALED_VIRTUAL bool collectRenderData(const OdTrVisDirectRenderPartialUpdateInvocation *pInvocation, OdTrVisRenderDataInvokeHid *pInvoke) ODRX_SEALED
    { // Only to support OdTrVisRenderDataDirectAccessor. Doesn't require customizations.
      return receiveData(static_cast<const OdTrVisExtensionObjectInternalInvocation*>(pInvocation), pInvocation->wrapInvoke(pInvoke));
    }
};

typedef OdSmartPtr<OdTrVisExtensionGraphicObject> OdTrVisExtensionGraphicObjectPtr;

#include "TD_PackPop.h"

#endif // ODTRVISEXTENSIONOBJECT
