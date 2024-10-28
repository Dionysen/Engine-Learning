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
#ifndef __BM_GICONTEXT_H__
#define __BM_GICONTEXT_H__

#include "GiDefaultContext.h"
#include "OdPlatform.h"
#include "StaticRxObject.h"
#include "TD_PackPush.h"
#include "Base/BmObject.h"
#include "Enums/BmViewDisplayModelEnums.h"
#include "Enums/BmViewLevelObjectDetail.h"


class OdBmGiContext;
typedef OdSmartPtr<OdBmGiContext> OdBmGiContextPtr;

typedef OdBmMap<OdInt32, OdBmObjectId> OdBmGiContextSubEntities;

class TB_GEOMETRY_EXPORT OdBmGiContextSaver {
public:
  OdBmGiContextSaver(const OdBmGiContext*);
  ~OdBmGiContextSaver();
protected:
  OdUInt32              m_fflags;
  OdBmObjectPtr         m_OverrideGraphicSettings;
  OdBmObjectPtr         m_GMaterialOverrider;
  OdRxObjectPtr         m_SectionGeometry;
  ODCOLORREF            m_paletteBackground;
  OdBmObjectPtr         m_refObject;
  OdString              m_defaultStr;
  OdBmGiContextSubEntities m_subEntities;
  OdBm::ViewDisplayStyle::Enum      m_displayStyle;
  OdBm::ViewLevelObjectDetail::Enum m_nLod;
  OdBmObjectId          m_GStyleId;
private:
  OdBmGiContextPtr      m_Context;
};


/** \details
    <group Database_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGiContext : public OdGiDefaultContext
{
public:
  enum
  {
    kPlotGeneration                  = 1,
    kUseGsModel                      = 2,
    kOdGiZeroTextNormals             = 4,
    kDisableLayoutHelperLinkReactors = 8,
    kTTFPolyDraw                     = 16,
    kTrackDbDestroy                  = 32,
    kManageContextualColors          = 64,
    kKeepPSLayoutHelperView          = 128,
    kErasePSLayoutHelperView         = 256,
    kUseGsSection                    = 512,
    kLastFlag                        = kUseGsSection
  };

  struct ContextData
  {
    ContextData() :
      m_fflags(512), m_paletteBackground(ODRGB(0, 0, 0)){};
    OdUInt32              m_fflags;
    OdBmObjectPtr         m_OverrideGraphicSettings;
    OdBmObjectPtr         m_GMaterialOverrider;
    OdRxObjectPtr         m_SectionGeometry;
    OdRxObjectPtr         m_CuttedGeometry;
    ODCOLORREF            m_paletteBackground;
    OdBmObjectPtr         m_refObject;
    OdString              m_defaultStr;
    OdBmGiContextSubEntities  m_subEntities;
    OdBm::ViewDisplayStyle::Enum      m_displayStyle;
    OdBmObjectId          m_GStyleId;
  };
  typedef OdBmMap<unsigned, ContextData*> ContextDataMap;
  mutable ContextDataMap m_contextDataMap;
  ContextData* getContextData() const;

  OdBm::ViewLevelObjectDetail::Enum m_nLod;

  mutable OdMutex m_mutex;

public:
  ODRX_DECLARE_MEMBERS(OdBmGiContext);
  OdBmGiContext();
  ~OdBmGiContext();
  
  /** \details
    Returns the context flags.
  */
  virtual OdUInt32 getContextFlags() const;
  
  /** \details
    Sets the context flags.
    
    \param val [in] Input value.
  */
  virtual void setContextFlags(OdUInt32 val);

  virtual OdDbBaseDatabase* database() const;
  virtual OdGiDrawablePtr openDrawable(OdDbStub* drawableId);

  virtual bool isPlotGeneration() const;
  virtual void setPlotGeneration(bool);
  virtual void setPaletteBackground(ODCOLORREF);
  virtual ODCOLORREF paletteBackground() const;

  /** Description:
    Returns true if and only the GsModel flag of this Context Object is set..
  */
  bool useGsModel() const;

  /** Description:
    Controls the GsModel flag of this Context Object.
    Arguments:
    enable (I) Controls the Gs Model.
  */
  void enableGsModel(bool enable);

  /** Description:
  Returns true if and only the GsSection flag of this Context Object is set..
  */
  bool useGsSection() const;

  /** Description:
  Controls the GsSection flag of this Context Object.
  Arguments:
  enable (I) Controls the Gs Section.
  */
  void enableGsSection(bool enable);

  /** \details
    Returns true if and only the kDisableLayoutHelperLinkReactors flag of this Context Object is set.
  */
  bool isLayoutHelperLinkReactorsDisabled() const;

  /** \details
    Controls the kDisableLayoutHelperLinkReactors flag of this Context Object.
    \param bDisableLinkReactors [in]  Controls layout link reactors flag.
  */
  void disableLayoutHelperLinkReactors(bool bDisableLinkReactors);

  OdBmGiContext* getContext( OdGiDrawableTraits* pDrwTraits );

  OdBmObjectPtr getOverrideGraphicSettings() const;
  void setOverrideGraphicSettings(const OdBmObjectPtr&);

  OdBmObjectPtr getGMaterialOverrider() const;
  void setGMaterialOverrider(const OdBmObjectPtr&);

  OdDbStub* getStubByMaterialId(OdDbBaseDatabase *pDb, const OdUInt64& materialId) const;

  OdRxObjectPtr getSectionGeometry() const;
  void setSectionGeometry(const OdRxObjectPtr&);

  OdRxObjectPtr getCuttedGeometry() const;
  void setCuttedGeometry(const OdRxObjectPtr&);
  
  /** \details
    Returns a reference to an object withing the context.
  */
  OdBmObjectPtr getRefObject() const;
  
  /** \details
    Sets a reference to an object within the context.
    
    \param val [out] Output value.
  */
  void setRefObject(const OdBmObjectPtr& val);

  OdString  getDefaultString() const;
  void setDefaultString(const OdString&);

  const OdBmGiContextSubEntities& getSubEntities() const;
  void setSubEntities(const OdBmGiContextSubEntities&);

  /** \details
    Returns the display style of active view of current database.
  */
  OdBm::ViewDisplayStyle::Enum getViewDisplayStyle() const;
  void setViewDisplayStyle(OdBm::ViewDisplayStyle::Enum style);

  /** \details
    Returns the objects details level in active view of current database.
  */
  OdBm::ViewLevelObjectDetail::Enum getObjectDetailsLevel() const;
  void setObjectDetailsLevel(OdBm::ViewLevelObjectDetail::Enum nLod);

  /** \details
    Returns GStyle id passed through context
  */
  OdBmObjectId getGStyleId() const;
  void setGStyleId(const OdBmObjectId&);
};

#include "TD_PackPop.h"

#endif
