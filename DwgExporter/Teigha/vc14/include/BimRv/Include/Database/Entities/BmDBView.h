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

#ifndef _BM_DBVIEW_H_
#define _BM_DBVIEW_H_
#include "Database/BmElement.h"
#include "Database/Enums/BmPartsVisibility.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
#include "Database/Enums/BmViewDiscipline.h"
#include "Geometry/Enums/BmViewDisplayModelEnums.h"
#include "Geometry/Enums/BmViewLevelObjectDetail.h"
#include "Database/Enums/BmViewNameFormat.h"
#include "Base/Enums/BmViewType.h"
#include "Database/Enums/BmWorksetVisibility.h"
// BEGIN: Includes
#include "Gi/GiVisualStyle.h"
#include "Database/Enums/BmViewDiscipline.h"
#include "Database/Enums/BmViewShowHiddenLinesValues.h"
#include "Database/Enums/BmWorksetVisibility.h"
// END: Includes

class OdBmDatabase;
class OdBmDrawFilter;
typedef OdSmartPtr<OdBmDrawFilter> OdBmDrawFilterPtr;
class OdBmAdHocOverrides;
typedef OdSmartPtr<OdBmAdHocOverrides> OdBmAdHocOverridesPtr;
class OdBmDesignOptionViewSettings;
typedef OdSmartPtr<OdBmDesignOptionViewSettings> OdBmDesignOptionViewSettingsPtr;
class OdBmFilterOverrides;
typedef OdSmartPtr<OdBmFilterOverrides> OdBmFilterOverridesPtr;
class OdBmGraphicOverrides;
typedef OdSmartPtr<OdBmGraphicOverrides> OdBmGraphicOverridesPtr;
class OdBmHiddenElementsViewSettings;
typedef OdSmartPtr<OdBmHiddenElementsViewSettings> OdBmHiddenElementsViewSettingsPtr;
class OdBmColorFillSchemaSetting;
typedef OdSmartPtr<OdBmColorFillSchemaSetting> OdBmColorFillSchemaSettingPtr;
class OdBmDrawOrderMgr;
typedef OdSmartPtr<OdBmDrawOrderMgr> OdBmDrawOrderMgrPtr;
class OdBmHideElementsMgr;
typedef OdSmartPtr<OdBmHideElementsMgr> OdBmHideElementsMgrPtr;
class OdBmRetouchTable;
typedef OdSmartPtr<OdBmRetouchTable> OdBmRetouchTablePtr;
class OdBmRvtLinkOverrides;
typedef OdSmartPtr<OdBmRvtLinkOverrides> OdBmRvtLinkOverridesPtr;
class OdBmViewDisplayMgr;
typedef OdSmartPtr<OdBmViewDisplayMgr> OdBmViewDisplayMgrPtr;
class OdBmPointCloudOverrides;
typedef OdSmartPtr<OdBmPointCloudOverrides> OdBmPointCloudOverridesPtr;
class OdBmWorksetVisibilityViewSettings;
typedef OdSmartPtr<OdBmWorksetVisibilityViewSettings> OdBmWorksetVisibilityViewSettingsPtr;
class OdBmDirectContext3DHandleOverrides;
typedef OdSmartPtr<OdBmDirectContext3DHandleOverrides> OdBmDirectContext3DHandleOverridesPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmDBView;
class OdBmDBViewImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBView object.
 */
typedef OdSmartPtr<OdBmDBView> OdBmDBViewPtr;

/** \details
 A data type that represents an array of OdBmDBView objects.
 */
typedef OdArray<OdBmDBViewPtr> OdBmDBViewPtrArray;

class OdBmOverrideGraphicSettings;
typedef OdSmartPtr<OdBmOverrideGraphicSettings> OdBmOverrideGraphicSettingsPtr;

//----------------------------------------------------------
//
// OdBmDBView
//
//----------------------------------------------------------

/** \details
    This is the base class for all types of OdBmDBViews.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBView : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBView);
public:
  /** \details
    Returns pointer to view database.
  */
  OdBmDatabase* getViewDatabase() const;
  /** \details
    Returns the direction towards the top of the screen.
  */
  OdGeVector3d getUpDirection() const;
  /** \details
    Returns view origin as a 3D point.
  */
  OdGePoint3d getOrigin() const;
  /** \details
    Returns the direction towards the right side of the screen.
  */
  OdGeVector3d getRightDirection() const;
  /** \details
    Returns the direction towards the OdBmViewer.
  */
  OdGeVector3d getViewDirection() const;
  /** \details
    Returns the view name.
  */
  OdString getViewName() const;
  /** \details
    Sets the view name.

    \param OdString [in] Input view name.
  */
  OdResult setViewName(const OdString&);
  /** \details
    Returns the ID of the template that contains view parameters.
  */
  OdBmObjectId getViewTemplateId() const;
  /** \details
    Returns the array of IDs of the views that are dependent on this view.
  */
  void getDependentViewIds(OdBmObjectIdArray &) const;
  /** \details
    Returns the ID of the analysis display style associated with this view.
  */
  OdBmObjectId getAnalysisDisplayStyleId() const;
  /** \details
    Returns 'true' if this view is a template view.
  */
  bool getIsTemplate() const;
  /** \details
    Returns the settings of displaying the parts in this view.

    \remarks
    Returning value can be one of the next values:
    <table>
      <b>ShowPartsAndOriginal</b>    2
      <b>ShowOriginalOnly</b>        1
      <b>ShowPartsOnly</b>           0
      <b>Unset</b>                   -1
    </table>
  */
  OdBm::PartsVisibility::Enum getPartsVisibility() const;
  /** \details
    Returns the ID of the parent view if this view is dependent.
  */
  OdBmObjectId getPrimaryViewId() const;
  /** \details
    Returns the scale of the view.
  */
  double getScale() const;
  /** \details
    Returns the name of the custom scale.
  */
  OdString getCustomScaleName() const;
  /** \details
    Returns the view description.
  */
  OdString getViewDescription() const;
  /** \details
    Returns the back clipping value that was read from the file.
  */
  OdUInt32 getBaseBackClipping() const;
  /** \details
    Returns the model display mode value.
  */
  OdUInt32 getModelDisplayMode() const;
  /** \details
    Returns 'true' if the view has a custom view scale.
  */
  bool getForceCustomViewScale() const;
  /** \details
    Returns 'true' if the view has a name of a custom scale.
  */
  bool getHasCustomScaleName() const;
  /** \details
    Returns 'true' if the view has a name.
  */
  bool getNamed() const;
  /** \details
    Returns the ID of the OdBmDBDrawing.
  */
  OdBmObjectId getDbDrawingId() const;
  /** \details
    Returns the ID of the view type.
  */
  OdBmObjectId getDBViewTypeId() const;
  /** \details
    Returns the ID of the view's default template.
  */
  OdBmObjectId getDefaultTemplateId() const;
  /** \details
    Returns the ID of the element extent.
  */
  OdBmObjectId getExtentElemId() const;
  /** \details
    Returns the ID of the fixed sketch plane.
  */
  OdBmObjectId getFixedSketchPlaneId() const;
  /** \details
    Returns the ID of the view level.
  */
  OdBmObjectId getGenElemId() const;
  /** \details
    Returns the ID of the light scheme.
  */
  OdBmObjectId getLightSchemeId() const;
  /** \details
    Returns the ID of the assembly instance to which the element belongs.
  */
  OdBmObjectId getShopDrawingAssemblyInstanceId() const;
  /** \details
    Returns the ID of the OdBmViewer.
  */
  OdBmObjectId getViewerId() const;
  /** \details
    Returns the array of IDs of the elements that are explicitly hidden.

    \param OdBmObjectIdArray [out] Output array of IDs of the explicitly hidden elements.
  */
  void getExplicitlyHiddenElements(OdBmObjectIdArray &) const;
  /** \details
    Returns the array of IDs of the viewport elements that are linked with this view and placed on the sheets.

    \param OdBmObjectIdArray [out] Output array of IDs of the viewport elements.
  */
  void getSheetViewportElemIds(OdBmObjectIdArray &) const;
  /** \details
    Returns the array of IDs of the parameters that will not be controlled by the view template.

    \param OdBmObjectIdArray [out] Output array of the parameter IDs.
  */
  void getNonPropagatedTemplateParamIds(OdBmObjectIdArray &) const;
  /** \details
    Returns the array of applied filters.

    \param OdArray<OdBmDrawFilterPtr> [out] Output array of applied filters.
  */
  void getDrawFilters(OdArray<OdBmDrawFilterPtr> &) const;
  /** \details
    Returns the AdHoc overrides object.
  */
  OdBmAdHocOverridesPtr getAdHocOverrides() const;
  /** \details
    Returns the view's design settings base value.
  */
  OdBmDesignOptionViewSettingsPtr getBaseDesignOptionViewSettings() const;
  /** \details
    Returns the overrides that a filter applies to a view.
  */
  OdBmFilterOverridesPtr getFilterOverrides() const;
  /** \details
    Returns the graphics overrides of the view.
  */
  OdBmGraphicOverridesPtr getGraphicOverrides() const;
  /** \details
    Returns the settings of the hidden elements of the view.
  */
  OdBmHiddenElementsViewSettingsPtr getHiddenElementsViewSettings() const;
  /** \details
    Returns the settings of the color filling scheme.
  */
  OdBmColorFillSchemaSettingPtr getColorFillSchemaSetting() const;
  /** \details
    Returns the draw order manager.
  */
  OdBmDrawOrderMgrPtr getDetailDrawOrderMgr() const;
  /** \details
    Returns the manager of hidden elements.
  */
  OdBmHideElementsMgrPtr getHideElementsMgr() const;
  /** \details
    Returns the retouch table.
  */
  OdBmRetouchTablePtr getRetouchTable() const;
  /** \details
    Returns the link overrides.
  */
  OdBmRvtLinkOverridesPtr getRvtLinkOverrides() const;
  /** \details
    Returns the view's display manager.
  */
  OdBmViewDisplayMgrPtr getViewDisplayMgr() const;
  /** \details
    Returns the point cloud overrides.
  */
  OdBmPointCloudOverridesPtr getPointCloudOverrides() const;
  /** \details
    Returns visibility sittings of the view's workset.
  */
  OdBmWorksetVisibilityViewSettingsPtr getWorksetVisibilityViewSettings() const;
  OdBmDirectContext3DHandleOverridesPtr getDirectContext3DHandleOverrides() const;
  //
  // Main functionality
  //

public:
  /** \details
    Returns a view type.
  */
  virtual OdBm::ViewType::Enum getViewType() const;
  /** \details
    Returns a view format.
  */
  virtual OdBm::ViewNameFormat::Enum getViewNameFormat() const;

  /** \details
    Returns the visual style of the view.
  */
  OdGiVisualStyle& getVisualStyle() const;

  /** \details
    Cleans arrays with prepared objects to draw.
    May be used to update a view after adding new elements to the database.
  */
  void cleanElemCache();

  /** \details
    Returns the list of the annotated elements of the view.
    
    \param  arr [out] Output list of drawable elements.
  */
  void getFrontDrawableElements(OdBmObjectIdArray& arr);

  /** \details
    Returns the list of the background elements of the view.

    \param  arr [out] Output list of drawable elements.
  */
  void getBackDrawableElements(OdBmObjectIdArray& arr);

  /** \details
    Returns the list of the non-annotated elements of the view.
    
    \param  arr [out] Output list of drawable elements.
  */
  void getDrawableElements(OdBmObjectIdArray& arr);

  /** \details
    Returns Visual style of the current view.
    
    \returns Returning value could be one of the next values:
        <table>
          <b>Undefined</b>             0
          <b>Wireframe</b>             1
          <b>HiddenLine</b>            2
          <b>Shaded</b>                3
          <b>ShadedWithEdges</b>       4
          <b>Rendering</b>             5
          <b>Realistic</b>             6
          <b>ConsistentColors</b>      7
          <b>RealisticWithEdges</b>    8
          <b>Raytrace</b>              9
        </table>
  */
  OdBm::ViewDisplayStyle::Enum getDisplayStyle() const;
  /** \details
    Sets Visual style of the current view.
    
    \param OdBm::ViewDisplayStyle::Enum [in] Input view visual style.
    
    \remarks 
    Input parameter can take one of the next values:
        <table>
          <b>Undefined</b>             0
          <b>Wireframe</b>             1
          <b>HiddenLine</b>            2
          <b>Shaded</b>                3
          <b>ShadedWithEdges</b>       4
          <b>Rendering</b>             5
          <b>Realistic</b>             6
          <b>ConsistentColors</b>      7
          <b>RealisticWithEdges</b>    8
          <b>Raytrace</b>              9
        </table>
  */
  void setDisplayStyle(OdBm::ViewDisplayStyle::Enum);
  /** \details
    Returns transparency value of elements in current view.
  */
  OdInt32 getTransparency() const;
  /** \details
    Sets transparency value of elements in current view. 
    
    \param OdInt32 [in] Input transparency value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setTransparency(OdInt32);
  /** \details
    Returns visibility of edges in current view.
  */
  bool getShowEdges() const;
  /** \details
    Sets visibility of edges in current view.
    
    \param bool [in] Input edges visibility flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setShowEdges(bool);
  /** \details
    Returns flag of sketchy lines (jitter effect) of edges in current view.
  */
  bool getEnableSketchyLines() const;
  /** \details
    Sets flag of sketchy lines (jitter effect) of edges in current view.
    
    \param bool [in] Input enabling sketchy lines flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setEnableSketchyLines(bool);
  /** \details
    Returns value between 0 and 10 of the degree of variability in the sketched lines.
    A value of 0 results in straight lines without the sketched graphic style. A value of 10 results in multiple sketch lines.
  */
  OdInt8 getJitter() const;
  /** \details
    Sets the degree of variability in the sketched lines.
    A value of 0 results in straight lines without the sketched graphic style. A value of 10 results in multiple sketch lines.
    
    \param OdInt8 [in] Input variability degree.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setJitter(OdInt8);
  /** \details
    Returns value between 0 and 10 indicates how far a model line's endpoints extend beyond intersections.
    A value of 0 results in lines that meet at intersections. A value of 10 results in lines that extend well beyond intersections.
  */
  OdInt8 getExtension() const;
  /** \details
    Sets value between 0 and 10 to indicate how far a model line's endpoints extend beyond intersections.
    A value of 0 results in lines that meet at intersections. A value of 10 results in lines that extend well beyond intersections.

    \param OdInt8 [in] Input extension indicator value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setExtension(OdInt8);
  /** \details
    Returns shadows visibility.
  */
  bool getCastShadows() const;
  /** \details
    Sets shadows visibility.

    \param bool [in] Input shadow visibility flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setCastShadows(bool);
  /** \details
    Returns visibility of ambient shadows on a view.
  */
  bool getAmbientShadows() const;
  /** \details
    Sets visibility of ambient shadows on a view.

    \param bool [in] Input ambient shadow visibility flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setAmbientShadows(bool);
  /** \details
    Returns a line styles that create a silhouette.
  */
  OdBmObjectId getSilhouetteEdgesGStyleId() const;
  /** \details
    Sets a line styles that create a silhouette.

    \param OdBmObjectId [in] Input ID of the line styles object.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setSilhouetteEdgesGStyleId(const OdBmObjectId&);

  /** \details
    Gets graphic overrides for a category in view.
    
    \param OdBm::BuiltInCategory::Enum [in] Input category ID.
  */
  OdBmOverrideGraphicSettingsPtr getCategoryOverrides(const OdBm::BuiltInCategory::Enum&) const;

  /** \details
    Sets graphic overrides for a category in view.

    \param OdBm::BuiltInCategory::Enum [in] Input category enum. 
    \param OdBmOverrideGraphicSettingsPtr [in] Input pointer to graphic overrides.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setCategoryOverrides(const OdBm::BuiltInCategory::Enum&, const OdBmOverrideGraphicSettingsPtr&);

  /** \details
    Gets graphic overrides for an element in the view.

    \param OdBmObjectId [in] Input ID of the element.
  */
  OdBmOverrideGraphicSettingsPtr getElementOverrides(const OdBmObjectId&) const;

  /** \details
    Gets graphic overrides for a filter in the view.

    \param OdBmObjectId [in] Input ID of the filter element.
  */
  OdBmOverrideGraphicSettingsPtr getFilterOverrides(const OdBmObjectId&) const;

  /** \details
    Gets unqiue draw filter by class.

    \param const OdTfClass* [in] Input class.
  */
  OdBmDrawFilterPtr getUniqueDrawFilter(const OdTfClass*) const;

  /** \details
    Sets unqiue draw filter by class.

    \param const OdTfClass* [in] Input class.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setUniqueDrawFilter(const OdBmDrawFilterPtr&);

  /** \details
    Returns detail level value of elements in current view.
  */
  OdBm::ViewLevelObjectDetail::Enum getDetailLevel() const;

  /** \details
    Sets detail level value of elements in current view.

    \param OdBm::ViewLevelObjectDetail::Enum [in] Input detail level value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setDetailLevel(OdBm::ViewLevelObjectDetail::Enum);

  /** \details
    Checks if an element is visible in the current view.
    
    \param elem [in] Input element for visibility check.
    
    \returns True if an element is visible, false - otherwise.
  */
  bool isElementVisible(const OdBmElementPtr& elem) const;

  /** \details
    Checks if an element is out of the current view's clip region.
    
    \param elem [in] Input element.
    \param included [in] Flag that affects the output value.
    
    \returns True if an element is out of the curren't view's clip region, false - otherwise.
    
    \remarks The 'included' param has the following meaning:
    When you compare two boxes positioned against each other, then there're 3 cases: 
    when one is completely inside another, when they have intersections and when one is completely outside. 
    Method always returns 'false' for the first case and 'true' for the last case. 
    The value returned in case of intersection depends on 'included' param value. It will be true when 'included' is false and vice versa.
  */
  bool isElementClipped(const OdBmElementPtr& elem, bool included) const;

  /** \details
    Returns the list of visible non-annotated elements of the view.

    \param  arr [out] Output list of drawable elements.
  */
  void getVisibleDrawableElements(OdBmObjectIdArray& arr);

  /** \details
    Returns the list of visible annotated elements of the view.

    \param  arr [out] Output list of drawable elements.
  */
  void getVisibleFrontDrawableElements(OdBmObjectIdArray& arr);

  /** \details
    Returns the list of visible background elements of the view.

    \param  arr [out] Output list of drawable elements.
  */
  void getVisibleBackDrawableElements(OdBmObjectIdArray& arr);

  /** \details
    Returns true if the view is perspective.
  */
  bool isPerspective() const;

  /** \details
    Returns the back clipping value.
  */
  OdUInt32 getBackClipping() const;

  /** \details
    Returns the view's design settings.
  */
  OdBmDesignOptionViewSettingsPtr getDesignOptionViewSettings() const;

  /** \details
    Sets the ID of the template that contains view parameters.
  */
  OdResult setViewTemplateId(const OdBmObjectId&);

  /** \details
    Returns the view's disciplines.
  */
  OdBm::ViewDiscipline::Enum getViewDiscipline() const;

  /** \details
    Sets the view's discipline.
    
    \param val [in] ViewDiscipline enum value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    
    \remarks Possible ViewDiscipline values:
      <table>
      <b>Architectural</b>  1     Architectural discipline
      <b>Structural</b>     2     Structural discipline
      <b>Mechanical</b>     4     Mechanical discipline
      <b>Electrical</b>     8     Electrical discipline
      <b>Plumbing</b>       16    Plumbing discipline
      <b>Coordination</b>   4095  Coordination discipline     
      </table>
  */
  OdResult setViewDiscipline(const OdBm::ViewDiscipline::Enum& val);

  /** \details
    Returns id of SketchPlane assigned to the view.
    \remarks Returns OdBmObjectId::kNull for views which don't have a sketch.
  */
  OdBmObjectId getSketchPlaneId() const;

  /** \details
    Sets preview visibility mode for a view.

    \param isOn         [in]  Visibility flag value.
  */
  void setPreviewVisibility(bool isOn);

  /** \details
    Returns preview visibility mode for a view.

    \returns true if preview visibility mode is on, or false otherwise.
  */
  bool getPreviewVisibility() const;

  /** \details
    Returns is the workset visible in this view.

    \param worksetId         [in]  Id of the workset.
  */
  bool IsWorksetVisible(const OdBmPartitionId& worksetId) const;


  /** \details
    Gets visibility mode for a workset in this view.

    \param worksetId         [in]   Id of the workset.
  */
  OdBm::WorksetVisibility::Enum getWorksetVisibility(const OdBmPartitionId& worksetId) const;

  /** \details
    Sets visibility mode for a workset in this view.

    \param worksetId         [in]   Id of the workset.
    \param vis               [in]   Visibility of the workset.
  */
  void setWorksetVisibility(const OdBmPartitionId& worksetId, OdBm::WorksetVisibility::Enum vis);

};


#endif // _BM_DBVIEW_H_

