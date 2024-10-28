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

#ifndef _BM_SERVICETYPE_H_
#define _BM_SERVICETYPE_H_

#define SERVICETYPE(PARAM_DEF, ...)                                    \
  PARAM_DEF(NoServiceType, -1)                                    \
  PARAM_DEF(CentralHeatingRadiators, 0)                           \
  PARAM_DEF(CentralHeatingConvectors, 1)                          \
  PARAM_DEF(CentralHeatingRadiantFloor, 2)                        \
  PARAM_DEF(CentralHeatingHotAir, 3)                              \
  PARAM_DEF(OtherRoomHeater, 4)                                   \
  PARAM_DEF(RadiantHeaterFlue, 5)                                 \
  PARAM_DEF(RadiantHeaterNoFlue, 6)                               \
  PARAM_DEF(RadiantHeaterMultiburner, 7)                          \
  PARAM_DEF(ForcedConvectionHeaterFlue, 8)                        \
  PARAM_DEF(ForcedConvectionHeaterNoFlue, 9)                      \
  PARAM_DEF(VAVSingleDuct, 10)                                    \
  PARAM_DEF(VAVDualDuct, 11)                                      \
  PARAM_DEF(VAVIndoorPackagedCabinet, 12)                         \
  PARAM_DEF(VAVTerminalReheat, 13)                                \
  PARAM_DEF(FanCoilSystem, 14)                                   \
  PARAM_DEF(InductionSystem, 15)                                 \
  PARAM_DEF(ConstantVolumeFixedOA, 16)                           \
  PARAM_DEF(ConstantVolumeVariableOA, 17)                        \
  PARAM_DEF(ConstantVolumeTerminalReheat, 18)                    \
  PARAM_DEF(MultizoneHotDeckColdDeck, 19)                        \
  PARAM_DEF(ConstantVolumeDualDuct, 20)                          \
  PARAM_DEF(RadiantCooledCeilings, 21)                           \
  PARAM_DEF(ActiveChilledBeams, 22)                              \
  PARAM_DEF(WaterLoopHeatPump, 23)                               \
  PARAM_DEF(VariableRefrigerantFlow, 24)                         \
  PARAM_DEF(SplitSystemsWithNaturalVentilation, 25)              \
  PARAM_DEF(SplitSystemsWithMechanicalVentilation, 26)           \
  PARAM_DEF(SplitSystemsWithMechanicalVentilationWithCooling, 27)

ODBM_ENUMERATION(ServiceType, SERVICETYPE)

#undef SERVICETYPE

#endif // _BM_SERVICETYPE_H_
