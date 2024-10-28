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

#ifndef _BM_FAMELEMVISIBILITYUTILS_H_
#define _BM_FAMELEMVISIBILITYUTILS_H_

#include "Geometry/Entities/BmGFilter.h"
#include "Geometry/Entities/BmGConditionCut.h"
#include "Geometry/Entities/BmGConditionInt.h"
#include "Geometry/Entities/BmGConditionDir.h"
#include "Geometry/Enums/BmViewLevelObjectDetail.h"

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFamElemVisibilityUtils {
private:
  OdInt32 m_Visibility;
public:
  /** \details
    Creates a default FamElemVisibilityUtils object.

    \param iVisibility [in] Input FamElemVisibilityUtils data.
  */
  OdBmFamElemVisibilityUtils(const OdInt32 iVisibility);

  /** \details
    Creates a default FamElemVisibilityUtils object.

    \param bIsUsedDiplayedFlags [in] Input flag for creation visibility with displayed flags.
  */
  OdBmFamElemVisibilityUtils(const bool bIsUsedDiplayedFlags);

  /** \details
    Returns integer value of Visibility.

  */
  OdInt32 getVisibility() const;

  /** \details
    Checks whether or not FamElemVisibility is undefined.
  */
  bool isUndefined() const;

  /** \details
    Checks whether or not FamElemVisibility is Model.
  */
  bool isModel() const;

  /** \details
    Checks whether an Element is displayed when cut in Plan/RCP.
  */
  bool isPlanRCPCut() const;

  /** \details
    Checks whether an Element is displayed in Plan/RCP view.
  */
  bool isTopBottom() const;

  /** \details
    Checks whether an Element is displayed in Front/Back view.
  */
  bool isFrontBack() const;

  /** \details
    Checks whether an Element is displayed in Left/Right view.
  */
  bool isLeftRight() const;

  /** \details
    Checks whether an Element is displayed only if it has been cut.
  */
  bool isOnlyWhenCut() const;

  /** \details
    Checks whether an Element is displayed with Coarse detail level in the view.
  */
  bool isCoarse() const;

  /** \details
    Checks whether an Element is displayed with Medium detail level in the view.
  */
  bool isMedium() const;

  /** \details
    Checks whether an Element is displayed with Fine detail level in the view.
  */
  bool isFine() const;

  /** \details
    Checks whether or not FamElemVisibility has old geometry.
  */
  bool isOldGeom() const;

  /** \details
    Checks whether or not FamElemVisibility has old geometry plan.
  */
  bool isOldGeomPlan() const;

  /** \details
    Checks whether or not FamElemVisibility has old geometry RCP.
  */
  bool isOldGeomRCP() const;

  /** \details
    Checks whether or not FamElemVisibility has old geometry elevation.
  */
  bool isOldGeomElev() const;

  /** \details
    Checks whether or not FamElemVisibility has old 3d-geometry.
  */
  bool isOldGeom3d() const;

  /** \details
    Checks whether or not FamElemVisibility has old 3d curve.
  */
  bool isOldCurve3d() const;

  /** \details
    Checks whether or not FamElemVisibility has old parallel curve.
  */
  bool isOldCurveParallel() const;

  /** \details
    Checks whether or not FamElemVisibility has old curve in front.
  */
  bool isOldCurveInFront() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed with Coarse detail level in the view.
  */
  bool isDefCoarse() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed with Medium detail level in the view.
  */
  bool isDefMedium() const;

  /** \details
   Checks whether or not FamElemVisibility is defined and Element is displayed with Fine detail level in the view.
 */
  bool isDefFine() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed in Front/Back view.
  */
  bool isDefFrontBack() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed in Left/Right view.
  */
  bool isDefLeftRight() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is Model.
  */
  bool isDefModel() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old 3d curve.
  */
  bool isDefOldCurve3d() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old curve in front.
  */
  bool isDefOldCurveInFront() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old parallel curve.
  */
  bool isDefOldCurveParallel() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old 3d geometry.
  */
  bool isDefOldGeom3d() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old geometry.
  */
  bool isDefOldGeom() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old geometry elevation.
  */
  bool isDefOldGeomElev() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old plan geometry.
  */
  bool isDefOldGeomPlan() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and has old RCP geometry.
  */
  bool isDefOldGeomRCP() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed only if it has been cut.
  */
  bool isDefOnlyWhenCut() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed when cut in Plan/RCP.
  */
  bool isDefPlanRCPCut() const;

  /** \details
    Checks whether or not Element is symbolic.
  */
  bool isDefSymbolic() const;

  /** \details
    Checks whether or not FamElemVisibility is defined and Element is displayed in Plan/RCP view.
  */
  bool isDefTopBottom() const;

  /** \details
    Sets that the FamElemVisibility is undefined.
  */
  bool setUndefined();

  /** \details
    Sets that the FamElemVisibility is model.
  */
  bool setModel();

  /** \details
    Sets that the Element is displayed when cut in Plan/RCP.
  */
  bool setPlanRCPCut();

  /** \details
    Sets that the Element is displayed in Plan/RCP view.
  */
  bool setTopBottom();

  /** \details
    Sets that the Element is displayed in Front/Back view.
  */
  bool setFrontBack();

  /** \details
    Sets that the Element is displayed in Left/Right view.
  */
  bool setLeftRight();

  /** \details
    Sets that the Element is displayed only if it has been cut.
  */
  bool setOnlyWhenCut();

  /** \details
    Sets that the Element is displayed with Coarse detail level in the view.
  */
  bool setCoarse();

  /** \details
    Sets that the Element is displayed with Medium detail level in the view.
  */
  bool setMedium();

  /** \details
    Sets that the Element is displayed with Fine detail level in the view.
  */
  bool setFine();

  /** \details
    Sets that the Element has old geometry.
  */
  bool setOldGeom();

  /** \details
    Sets that the Element has old geometry plan.
  */
  bool setOldGeomPlan();

  /** \details
    Sets that the Element has old RCP geometry.
  */
  bool setOldGeomRCP();

  /** \details
    Sets that the Element has old geometry elevation.
  */
  bool setOldGeomElev();

  /** \details
    Sets that the Element has old 3d geometry.
  */
  bool setOldGeom3d();

  /** \details
    Sets that the Element has old 3d curve.
  */
  bool setOldCurve3d();

  /** \details
    Sets that the Element has old parallel curve.
  */
  bool setOldCurveParallel();

  /** \details
    Sets that the Element has old curve in front.
  */
  bool setOldCurveInFront();

  /** \details
    Creates a GFilter based on FamElemVisibility.

    \param pGFilter [out] Output GFilter. 
  */
  void createGConditionInt(OdBmGFilterPtr& pGFilter) const;

  /** \details
    Creates a cut GFilter based on FamElemVisibility.

    \param bParallel [in] Input flag indicating to compare mode.
    \param dRangeLo [in] Input lower range.
    \param dRangeHi [in] Input high range.
    \param pGFilter [out] Output GFilter.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createCutGFilter(const bool bParallel, const double dRangeLo, const double dRangeHi, OdBmGFilterPtr& pGFilter) const;

  /** \details
    Creates a detail level GFilter based on FamElemVisibility.

    \param pGFilter [out] Output GFilter.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createDetailLevelOnlyGFilter(OdBmGFilterPtr& pGFilter) const;

  /** \details
    Creates a project GFilter based on FamElemVisibility.

    \param bIsNotCreateDirConditions [in] Input flag indicating to direction.
    \param pGFilter [out] Output GFilter.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createProjGFilter(const bool bIsNotCreateDirConditions, OdBmGFilterPtr& pGFilter) const;

  /** \details
    Creates a view-specific GFilter based on FamElemVisibility.

    \param vDirection [in] Input direction.
    \param pGFilter [out] Output GFilter.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createViewDirSpecificGFilter(const OdGeVector3d& vDirection, OdBmGFilterPtr& pGFilter) const;

  /** \details
    Creates a view-specific GFilter based on FamElemVisibility.

    \param vDirection [in] Input direction.
    \param compMode [in] Input compare mode.
    \param pGFilter [out] Output GFilter.
    \param dRangeLo [in] Input lower range.
    \param dRangeHi [in] Input high range.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createViewDirSpecificGFilterInSym(const OdGeVector3d& vDirection,
    const OdBm::CompareMode::Enum compMode, OdBmGFilterPtr& pGFilter, const double dRangeLo = 0.0, const double dRangeHi = 0.0) const;

  /** \details
    Checks if the visibility option satisfy to the specified detail level.
    
    \param nVisibility [in] Visibility option.
    \param detailLevel [in] Detail level.
    \returns true if the visibility option satisfy to the specified detail level or false otherwise.
  */ 
  static bool isDetailLevel(OdInt32 nVisibility, OdBm::ViewLevelObjectDetail::Enum detailLevel);
};

#endif // _BM_FAMELEMVISIBILITYUTILS_H_
