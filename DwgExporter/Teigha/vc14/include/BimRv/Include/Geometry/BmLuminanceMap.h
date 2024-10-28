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

#ifndef _BM_LUMINANCE_MAP_H_
#define _BM_LUMINANCE_MAP_H_

#include "Geometry/Enums/BmLuminance.h"

/** \details
  A map of brightness of the light emitted by the material (candelas per square meter).
*/
namespace OdBm
{
  static const std::map<OdBm::Luminance::Enum, double> odBmLuminanceValuesMap {
    {OdBm::Luminance::DimGlow, 10.}, 
    {OdBm::Luminance::LEDPanel, 100.},
    {OdBm::Luminance::LEDScreen, 140.},
    {OdBm::Luminance::CellPhoneScreen, 200.},
    {OdBm::Luminance::CRTTelevision, 250.},
    {OdBm::Luminance::LampShadeExterior, 1300.},
    {OdBm::Luminance::LampShadeInterior, 2500.},
    {OdBm::Luminance::DeskLampLens, 10000.},
    {OdBm::Luminance::HalogenLampLens, 10000.},
    {OdBm::Luminance::FrostedBulb, 210000.}
  };
}

#endif // _BM_LUMINANCE_MAP_H_

