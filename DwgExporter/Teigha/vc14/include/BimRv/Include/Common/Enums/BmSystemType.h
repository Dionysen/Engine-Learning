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

#ifndef _BM_SYSTEMTYPE_H_
#define _BM_SYSTEMTYPE_H_

#define ODBM_SYSTEMTYPE(PARAM_DEF, ...)                              \
  PARAM_DEF(Undefined, 0, L"Undefined")                              \
  PARAM_DEF(SupplyAir, 1, L"Supply Air")                             \
  PARAM_DEF(ReturnAir, 2, L"Return Air")                             \
  PARAM_DEF(ExhaustAir, 3, L"Exhaust Air")                           \
  PARAM_DEF(OtherAir, 4, L"Other Air")                               \
  PARAM_DEF(DataCircuit, 5, L"Data")                                 \
  PARAM_DEF(PowerCircuit, 6, L"Power")                               \
  PARAM_DEF(SupplyHydronic, 7, L"Hydronic Supply")                   \
  PARAM_DEF(ReturnHydronic, 8, L"Hydronic Return")                   \
  PARAM_DEF(Telephone, 9, L"Telephone")                              \
  PARAM_DEF(Security, 10, L"Security")                               \
  PARAM_DEF(FireAlarm, 11, L"Fire Alarm")                            \
  PARAM_DEF(NurseCall, 12, L"Nurse Call")                            \
  PARAM_DEF(Controls, 13, L"Controls")                               \
  PARAM_DEF(Communication, 14, L"Communication")                     \
  PARAM_DEF(CondensateDrain, 15, L"Condensate Drain")                \
  PARAM_DEF(Sanitary, 16, L"Sanitary")                               \
  PARAM_DEF(Vent, 17, L"Vent")                                       \
  PARAM_DEF(Storm, 18, L"Storm")                                     \
  PARAM_DEF(DomesticHotWater, 19, L"Domestic Hot Water")             \
  PARAM_DEF(DomesticColdWater, 20, L"Domestic Cold Water")           \
  PARAM_DEF(Recirculation, 21, L"Recirculation")                     \
  PARAM_DEF(OtherPipe, 22, L"Other")                                 \
  PARAM_DEF(FireProtectWet, 23, L"Fire Protection Wet")              \
  PARAM_DEF(FireProtectDry, 24, L"Fire Protection Dry")              \
  PARAM_DEF(FireProtectPreaction, 25, L"Fire Protection Pre-Action") \
  PARAM_DEF(FireProtectOther, 26, L"Fire Protection Other")          \
  PARAM_DEF(SwitchTopology, 27, L"Switch Topology")                  \
  PARAM_DEF(Fitting, 28, L"Fitting")                                 \
  PARAM_DEF(Global, 29, L"Global")                                   \
  PARAM_DEF(PowerBalanced, 30, L"Power - Balanced")                  \
  PARAM_DEF(PowerUnBalanced, 31, L"Power - Unbalanced")              \
  PARAM_DEF(CableTrayConduit, 32, L"Cable Tray Conduit")

ODBM_EXTENDED_ENUMERATION(SystemType, ODBM_SYSTEMTYPE)

#endif // _BM_SYSTEMTYPE_H_
