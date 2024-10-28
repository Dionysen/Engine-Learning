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

#ifndef _BM_PARTTYPE_H_
#define _BM_PARTTYPE_H_

#define ODBM_PARTTYPE(PARAM_DEF, ...)              \
  PARAM_DEF(Undefined, 0)                          \
  PARAM_DEF(Normal, 1)                             \
  PARAM_DEF(DuctMounted, 2)                        \
  PARAM_DEF(JunctionBox, 3)                        \
  PARAM_DEF(AttachesTo, 4)                         \
  PARAM_DEF(BreaksInto, 5)                         \
  PARAM_DEF(Elbow, 6)                              \
  PARAM_DEF(Tee, 7)                                \
  PARAM_DEF(Transition, 8)                         \
  PARAM_DEF(Cross, 9)                              \
  PARAM_DEF(Cap, 10)                               \
  PARAM_DEF(TapPerpendicular, 11)                  \
  PARAM_DEF(TapAdjustable, 12)                     \
  PARAM_DEF(Offset, 13)                            \
  PARAM_DEF(Union, 14)                             \
  PARAM_DEF(PanelBoard, 15)                        \
  PARAM_DEF(Transformer, 16)                       \
  PARAM_DEF(SwitchBoard, 17)                       \
  PARAM_DEF(OtherPanel, 18)                        \
  PARAM_DEF(EquipmentSwitch, 19)                   \
  PARAM_DEF(Switch, 20)                            \
  PARAM_DEF(ValveBreaksInto, 21)                   \
  PARAM_DEF(SpudPerpendicular, 22)                 \
  PARAM_DEF(SpudAdjustable, 23)                    \
  PARAM_DEF(Damper, 24)                            \
  PARAM_DEF(Wye, 25)                               \
  PARAM_DEF(LateralTee, 26)                        \
  PARAM_DEF(LateralCross, 27)                      \
  PARAM_DEF(Pants, 28)                             \
  PARAM_DEF(MultiPort, 29)                         \
  PARAM_DEF(ValveNormal, 30)                       \
  PARAM_DEF(JunctionBoxTee, 31)                    \
  PARAM_DEF(JunctionBoxCross, 32)                  \
  PARAM_DEF(PipeFlange, 33)                        \
  PARAM_DEF(JunctionBoxElbow, 35)                  \
  PARAM_DEF(ChannelCableTrayElbow, 36)             \
  PARAM_DEF(ChannelCableTrayVerticalElbow, 37)     \
  PARAM_DEF(ChannelCableTrayCross, 38)             \
  PARAM_DEF(ChannelCableTrayTee, 39)               \
  PARAM_DEF(ChannelCableTrayTransition, 40)        \
  PARAM_DEF(ChannelCableTrayUnion, 41)             \
  PARAM_DEF(ChannelCableTrayOffset, 42)            \
  PARAM_DEF(ChannelCableTrayMultiPort, 43)         \
  PARAM_DEF(LadderCableTrayElbow, 44)              \
  PARAM_DEF(LadderCableTrayVerticalElbow, 45)      \
  PARAM_DEF(LadderCableTrayCross, 46)              \
  PARAM_DEF(LadderCableTrayTee, 47)                \
  PARAM_DEF(LadderCableTrayTransition, 48)         \
  PARAM_DEF(LadderCableTrayUnion, 49)              \
  PARAM_DEF(LadderCableTrayOffset, 50)             \
  PARAM_DEF(LadderCableTrayMultiPort, 51)          \
  PARAM_DEF(InlineSensor, 52)                      \
  PARAM_DEF(Sensor, 53)                            \
  PARAM_DEF(EndCap, 54)                            \
  PARAM_DEF(HandrailBracketHardware, 55)           \
  PARAM_DEF(PanelBracketHardware, 56)              \
  PARAM_DEF(TerminationHardware, 57)               \
  PARAM_DEF(Rails, 58)                             \
  PARAM_DEF(Handrails, 59)                         \
  PARAM_DEF(TopRails, 60)                          \
  PARAM_DEF(PipeMechanicalCoupling, 61)

ODBM_ENUMERATION(PartType, ODBM_PARTTYPE)

#undef ODBM_PARTTYPE

#endif //_BM_PARTTYPE_H_
