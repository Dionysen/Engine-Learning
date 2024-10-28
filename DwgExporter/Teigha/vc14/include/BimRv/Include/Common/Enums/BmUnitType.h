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

#ifndef _BM_UNITTYPE_H_
#define _BM_UNITTYPE_H_

#define ODBM_UNITTYPE(PARAM_DEF, ...)                                                                                                                                                        \
  PARAM_DEF(UT_Undefined,                                0xFFFFFFFE, not_std::nullopt,                               not_std::nullopt)                                                       \
  PARAM_DEF(UT_Custom,                                   0xFFFFFFFF, not_std::nullopt,                               L"autodesk.spec:custom-1.0.0")                                          \
  PARAM_DEF(UT_Length,                                   0x00000000, L"Length",                                      L"autodesk.spec.aec:length-1.0.0")                                      \
  PARAM_DEF(UT_Area,                                     0x00000001, L"Area",                                        L"autodesk.spec.aec:area-1.0.0")                                        \
  PARAM_DEF(UT_Volume,                                   0x00000002, L"Volume",                                      L"autodesk.spec.aec:volume-1.0.0")                                      \
  PARAM_DEF(UT_Angle,                                    0x00000003, L"Angle",                                       L"autodesk.spec.aec:angle-1.0.0")                                       \
  PARAM_DEF(UT_Number,                                   0x00000004, L"Number",                                      L"autodesk.spec.aec:number-1.0.0")                                      \
  PARAM_DEF(UT_SheetLength,                              0x00000005, L"Sheet Length",                                L"autodesk.spec.aec:sheetLength-1.0.0")                                 \
  PARAM_DEF(UT_SiteAngle,                                0x00000006, L"Site Angle",                                  L"autodesk.spec.aec:siteAngle-1.0.0")                                   \
  PARAM_DEF(UT_HVAC_Density,                             0x00000007, L"Density",                                     L"autodesk.spec.aec.hvac:density-1.0.0")                                \
  PARAM_DEF(UT_HVAC_Energy,                              0x00000008, L"Energy",                                      L"autodesk.spec.aec.energy:energy-1.0.0")                               \
  PARAM_DEF(UT_HVAC_Friction,                            0x00000009, L"Friction",                                    L"autodesk.spec.aec.hvac:friction-1.0.0")                               \
  PARAM_DEF(UT_HVAC_Power,                               0x0000000A, L"Power",                                       L"autodesk.spec.aec.hvac:power-1.0.0")                                  \
  PARAM_DEF(UT_HVAC_Power_Density,                       0x0000000B, L"Power Density",                               L"autodesk.spec.aec.hvac:powerDensity-1.0.0")                           \
  PARAM_DEF(UT_HVAC_Pressure,                            0x0000000C, L"Pressure",                                    L"autodesk.spec.aec.hvac:pressure-1.0.0")                               \
  PARAM_DEF(UT_HVAC_Temperature,                         0x0000000D, L"Temperature",                                 L"autodesk.spec.aec.hvac:temperature-1.0.0")                            \
  PARAM_DEF(UT_HVAC_Velocity,                            0x0000000E, L"Velocity",                                    L"autodesk.spec.aec.hvac:velocity-1.0.0")                               \
  PARAM_DEF(UT_HVAC_Airflow,                             0x0000000F, L"Air Flow",                                    L"autodesk.spec.aec.hvac:airFlow-1.0.0")                                \
  PARAM_DEF(UT_HVAC_DuctSize,                            0x00000010, L"Duct Size",                                   L"autodesk.spec.aec.hvac:ductSize-1.0.0")                               \
  PARAM_DEF(UT_HVAC_CrossSection,                        0x00000011, L"Cross Section",                               L"autodesk.spec.aec.hvac:crossSection-1.0.0")                           \
  PARAM_DEF(UT_HVAC_HeatGain,                            0x00000012, L"Heat Gain",                                   L"autodesk.spec.aec.hvac:heatGain-1.0.0")                               \
  PARAM_DEF(UT_Electrical_Current,                       0x00000013, L"Current",                                     L"autodesk.spec.aec.electrical:current-1.0.0")                          \
  PARAM_DEF(UT_Electrical_Potential,                     0x00000014, L"Electrical Potential",                        L"autodesk.spec.aec.electrical:potential-1.0.0")                        \
  PARAM_DEF(UT_Electrical_Frequency,                     0x00000015, L"Frequency",                                   L"autodesk.spec.aec.electrical:frequency-1.0.0")                        \
  PARAM_DEF(UT_Electrical_Illuminance,                   0x00000016, L"Illuminance",                                 L"autodesk.spec.aec.electrical:illuminance-1.0.0")                      \
  PARAM_DEF(UT_Electrical_Luminous_Flux,                 0x00000017, L"Luminous Flux",                               L"autodesk.spec.aec.electrical:luminousFlux-1.0.0")                     \
  PARAM_DEF(UT_Electrical_Power,                         0x00000018, L"Power",                                       L"autodesk.spec.aec.electrical:power-1.0.0")                            \
  PARAM_DEF(UT_HVAC_Roughness,                           0x00000019, L"Roughness",                                   L"autodesk.spec.aec.hvac:roughness-1.0.0")                              \
  PARAM_DEF(UT_Force,                                    0x0000001A, L"Force",                                       L"autodesk.spec.aec.structural:force-1.0.0")                            \
  PARAM_DEF(UT_LinearForce,                              0x0000001B, L"Linear Force",                                L"autodesk.spec.aec.structural:linearForce-1.0.0")                      \
  PARAM_DEF(UT_AreaForce,                                0x0000001C, L"Area Force",                                  L"autodesk.spec.aec.structural:areaForce-1.0.0")                        \
  PARAM_DEF(UT_Moment,                                   0x0000001D, L"Moment",                                      L"autodesk.spec.aec.structural:moment-1.0.0")                           \
  PARAM_DEF(UT_ForceScale,                               0x0000001E, L"Force Scale",                                 L"autodesk.spec.aec.structural:forceScale-1.0.0")                       \
  PARAM_DEF(UT_LinearForceScale,                         0x0000001F, L"Linear Force Scale",                          L"autodesk.spec.aec.structural:linearForceScale-1.0.0")                 \
  PARAM_DEF(UT_AreaForceScale,                           0x00000020, L"Area Force Scale",                            L"autodesk.spec.aec.structural:areaForceScale-1.0.0")                   \
  PARAM_DEF(UT_MomentScale,                              0x00000021, L"Moment Scale",                                L"autodesk.spec.aec.structural:momentScale-1.0.0")                      \
  PARAM_DEF(UT_Electrical_Apparent_Power,                0x00000022, L"Apparent Power",                              L"autodesk.spec.aec.electrical:apparentPower-1.0.0")                    \
  PARAM_DEF(UT_Electrical_Power_Density,                 0x00000023, L"Power Density",                               L"autodesk.spec.aec.electrical:powerDensity-1.0.0")                     \
  PARAM_DEF(UT_Piping_Density,                           0x00000024, L"Density",                                     L"autodesk.spec.aec.piping:density-1.0.0")                              \
  PARAM_DEF(UT_Piping_Flow,                              0x00000025, L"Flow",                                        L"autodesk.spec.aec.piping:flow-1.0.0")                                 \
  PARAM_DEF(UT_Piping_Friction,                          0x00000026, L"Friction",                                    L"autodesk.spec.aec.piping:friction-1.0.0")                             \
  PARAM_DEF(UT_Piping_Pressure,                          0x00000027, L"Pressure",                                    L"autodesk.spec.aec.piping:pressure-1.0.0")                             \
  PARAM_DEF(UT_Piping_Temperature,                       0x00000028, L"Temperature",                                 L"autodesk.spec.aec.piping:temperature-1.0.0")                          \
  PARAM_DEF(UT_Piping_Velocity,                          0x00000029, L"Velocity",                                    L"autodesk.spec.aec.piping:velocity-1.0.0")                             \
  PARAM_DEF(UT_Piping_Viscosity,                         0x0000002A, L"Dynamic Viscosity",                           L"autodesk.spec.aec.piping:viscosity-1.0.0")                            \
  PARAM_DEF(UT_PipeSize,                                 0x0000002B, L"Pipe Size",                                   L"autodesk.spec.aec.piping:pipeSize-1.0.0")                             \
  PARAM_DEF(UT_Piping_Roughness,                         0x0000002C, L"Roughness",                                   L"autodesk.spec.aec.piping:roughness-1.0.0")                            \
  PARAM_DEF(UT_Stress,                                   0x0000002D, L"Stress",                                      L"autodesk.spec.aec.structural:stress-1.0.0")                           \
  PARAM_DEF(UT_UnitWeight,                               0x0000002E, L"Unit Weight",                                 L"autodesk.spec.aec.structural:unitWeight-1.0.0")                       \
  PARAM_DEF(UT_ThermalExpansion,                         0x0000002F, L"Thermal Expansion Coefficient",               L"autodesk.spec.aec.structural:thermalExpansionCoefficient-1.0.0")      \
  PARAM_DEF(UT_LinearMoment,                             0x00000030, L"Linear Moment",                               L"autodesk.spec.aec.structural:linearMoment-1.0.0")                     \
  PARAM_DEF(UT_LinearMomentScale,                        0x00000031, L"Linear Moment Scale",                         L"autodesk.spec.aec.structural:linearMomentScale-1.0.0")                \
  PARAM_DEF(UT_ForcePerLength,                           0x00000032, L"Point Spring Coefficient",                    L"autodesk.spec.aec.structural:pointSpringCoefficient-1.0.0")           \
  PARAM_DEF(UT_ForceLengthPerAngle,                      0x00000033, L"Rotational Point Spring Coefficient",         L"autodesk.spec.aec.structural:rotationalPointSpringCoefficient-1.0.0") \
  PARAM_DEF(UT_LinearForcePerLength,                     0x00000034, L"Line Spring Coefficient",                     L"autodesk.spec.aec.structural:lineSpringCoefficient-1.0.0")            \
  PARAM_DEF(UT_LinearForceLengthPerAngle,                0x00000035, L"Rotational Line Spring Coefficient",          L"autodesk.spec.aec.structural:rotationalLineSpringCoefficient-1.0.0")  \
  PARAM_DEF(UT_AreaForcePerLength,                       0x00000036, L"Area Spring Coefficient",                     L"autodesk.spec.aec.structural:areaSpringCoefficient-1.0.0")            \
  PARAM_DEF(UT_Piping_Volume,                            0x00000037, L"Volume",                                      L"autodesk.spec.aec.piping:volume-1.0.0")                               \
  PARAM_DEF(UT_HVAC_Viscosity,                           0x00000038, L"Dynamic Viscosity",                           L"autodesk.spec.aec.hvac:viscosity-1.0.0")                              \
  PARAM_DEF(UT_HVAC_CoefficientOfHeatTransfer,           0x00000039, L"Coefficient of Heat Transfer",                L"autodesk.spec.aec.energy:heatTransferCoefficient-1.0.0")              \
  PARAM_DEF(UT_HVAC_Airflow_Density,                     0x0000003A, L"Air Flow Density",                            L"autodesk.spec.aec.hvac:airFlowDensity-1.0.0")                         \
  PARAM_DEF(UT_Slope,                                    0x0000003B, L"Slope",                                       L"autodesk.spec.aec:slope-1.0.0")                                       \
  PARAM_DEF(UT_HVAC_Cooling_Load,                        0x0000003C, L"Cooling Load",                                L"autodesk.spec.aec.hvac:coolingLoad-1.0.0")                            \
  PARAM_DEF(UT_HVAC_Cooling_Load_Divided_By_Area,        0x0000003D, L"Cooling Load divided by Area",                L"autodesk.spec.aec.hvac:coolingLoadDividedByArea-1.0.0")               \
  PARAM_DEF(UT_HVAC_Cooling_Load_Divided_By_Volume,      0x0000003E, L"Cooling Load divided by Volume",              L"autodesk.spec.aec.hvac:coolingLoadDividedByVolume-1.0.0")             \
  PARAM_DEF(UT_HVAC_Heating_Load,                        0x0000003F, L"Heating Load",                                L"autodesk.spec.aec.hvac:heatingLoad-1.0.0")                            \
  PARAM_DEF(UT_HVAC_Heating_Load_Divided_By_Area,        0x00000040, L"Heating Load divided by Area",                L"autodesk.spec.aec.hvac:heatingLoadDividedByArea-1.0.0")               \
  PARAM_DEF(UT_HVAC_Heating_Load_Divided_By_Volume,      0x00000041, L"Heating Load divided by Volume",              L"autodesk.spec.aec.hvac:heatingLoadDividedByVolume-1.0.0")             \
  PARAM_DEF(UT_HVAC_Airflow_Divided_By_Volume,           0x00000042, L"Air Flow divided by Volume",                  L"autodesk.spec.aec.hvac:airFlowDividedByVolume-1.0.0")                 \
  PARAM_DEF(UT_HVAC_Airflow_Divided_By_Cooling_Load,     0x00000043, L"Air Flow divided by Cooling Load",            L"autodesk.spec.aec.hvac:airFlowDividedByCoolingLoad-1.0.0")            \
  PARAM_DEF(UT_HVAC_Area_Divided_By_Cooling_Load,        0x00000044, L"Area divided by Cooling Load",                L"autodesk.spec.aec.hvac:areaDividedByCoolingLoad-1.0.0")               \
  PARAM_DEF(UT_WireSize,                                 0x00000045, L"Wire Diameter",                               L"autodesk.spec.aec.electrical:wireDiameter-1.0.0")                     \
  PARAM_DEF(UT_HVAC_Slope,                               0x00000046, L"Slope",                                       L"autodesk.spec.aec.hvac:slope-1.0.0")                                  \
  PARAM_DEF(UT_Piping_Slope,                             0x00000047, L"Slope",                                       L"autodesk.spec.aec.piping:slope-1.0.0")                                \
  PARAM_DEF(UT_Currency,                                 0x00000048, L"Currency",                                    L"autodesk.spec.measurable:currency-1.0.0")                             \
  PARAM_DEF(UT_Electrical_Efficacy,                      0x00000049, L"Efficacy",                                    L"autodesk.spec.aec.electrical:efficacy-1.0.0")                         \
  PARAM_DEF(UT_Electrical_Wattage,                       0x0000004A, L"Wattage",                                     L"autodesk.spec.aec.electrical:wattage-1.0.0")                          \
  PARAM_DEF(UT_Color_Temperature,                        0x0000004B, L"Color Temperature",                           L"autodesk.spec.aec.electrical:colorTemperature-1.0.0")                 \
  PARAM_DEF(UT_DecSheetLength,                           0x0000004C, L"Decimal Sheet Length",                        L"autodesk.spec.aec:decimalSheetLength-1.0.0")                          \
  PARAM_DEF(UT_Electrical_Luminous_Intensity,            0x0000004D, L"Luminous Intensity",                          L"autodesk.spec.aec.electrical:luminousIntensity-1.0.0")                \
  PARAM_DEF(UT_Electrical_Luminance,                     0x0000004E, L"Luminance",                                   L"autodesk.spec.aec.electrical:luminance-1.0.0")                        \
  PARAM_DEF(UT_HVAC_Area_Divided_By_Heating_Load,        0x0000004F, L"Area divided by Heating Load",                L"autodesk.spec.aec.hvac:areaDividedByHeatingLoad-1.0.0")               \
  PARAM_DEF(UT_HVAC_Factor,                              0x00000050, L"Factor",                                      L"autodesk.spec.aec.hvac:factor-1.0.0")                                 \
  PARAM_DEF(UT_Electrical_Temperature,                   0x00000051, L"Temperature",                                 L"autodesk.spec.aec.electrical:temperature-1.0.0")                      \
  PARAM_DEF(UT_Electrical_CableTraySize,                 0x00000052, L"Cable Tray Size",                             L"autodesk.spec.aec.electrical:cableTraySize-1.0.0")                    \
  PARAM_DEF(UT_Electrical_ConduitSize,                   0x00000053, L"Conduit Size",                                L"autodesk.spec.aec.electrical:conduitSize-1.0.0")                      \
  PARAM_DEF(UT_Reinforcement_Volume,                     0x00000054, L"Reinforcement Volume",                        L"autodesk.spec.aec.structural:reinforcementVolume-1.0.0")              \
  PARAM_DEF(UT_Reinforcement_Length,                     0x00000055, L"Reinforcement Length",                        L"autodesk.spec.aec.structural:reinforcementLength-1.0.0")              \
  PARAM_DEF(UT_Electrical_Demand_Factor,                 0x00000056, L"Demand Factor",                               L"autodesk.spec.aec.electrical:demandFactor-1.0.0")                     \
  PARAM_DEF(UT_HVAC_DuctInsulationThickness,             0x00000057, L"Duct Insulation Thickness",                   L"autodesk.spec.aec.hvac:ductInsulationThickness-1.0.0")                \
  PARAM_DEF(UT_HVAC_DuctLiningThickness,                 0x00000058, L"Duct Lining Thickness",                       L"autodesk.spec.aec.hvac:ductLiningThickness-1.0.0")                    \
  PARAM_DEF(UT_PipeInsulationThickness,                  0x00000059, L"Pipe Insulation Thickness",                   L"autodesk.spec.aec.piping:pipeInsulationThickness-1.0.0")              \
  PARAM_DEF(UT_HVAC_ThermalResistance,                   0x0000005A, L"Thermal Resistance",                          L"autodesk.spec.aec.energy:thermalResistance-1.0.0")                    \
  PARAM_DEF(UT_HVAC_ThermalMass,                         0x0000005B, L"Thermal Mass",                                L"autodesk.spec.aec.energy:thermalMass-1.0.0")                          \
  PARAM_DEF(UT_Acceleration,                             0x0000005C, L"Acceleration",                                L"autodesk.spec.aec.structural:acceleration-1.0.0")                     \
  PARAM_DEF(UT_Bar_Diameter,                             0x0000005D, L"Bar Diameter",                                L"autodesk.spec.aec.structural:barDiameter-1.0.0")                      \
  PARAM_DEF(UT_Crack_Width,                              0x0000005E, L"Crack Width",                                 L"autodesk.spec.aec.structural:crackWidth-1.0.0")                       \
  PARAM_DEF(UT_Displacement_Deflection,                  0x0000005F, L"Displacement/Deflection",                     L"autodesk.spec.aec.structural:displacement-1.0.0")                     \
  PARAM_DEF(UT_Energy,                                   0x00000060, L"Energy",                                      L"autodesk.spec.aec.structural:energy-1.0.0")                           \
  PARAM_DEF(UT_Structural_Frequency,                     0x00000061, L"Frequency",                                   L"autodesk.spec.aec.structural:frequency-1.0.0")                        \
  PARAM_DEF(UT_Mass,                                     0x00000062, L"Mass",                                        L"autodesk.spec.aec.structural:mass-1.0.0")                             \
  PARAM_DEF(UT_Mass_per_Unit_Length,                     0x00000063, L"Mass per Unit Length",                        L"autodesk.spec.aec.structural:massPerUnitLength-1.0.0")                \
  PARAM_DEF(UT_Moment_of_Inertia,                        0x00000064, L"Moment of Inertia",                           L"autodesk.spec.aec.structural:momentOfInertia-1.0.0")                  \
  PARAM_DEF(UT_Surface_Area,                             0x00000065, L"Surface Area per Unit Length",                L"autodesk.spec.aec.structural:surfaceAreaPerUnitLength-1.0.0")         \
  PARAM_DEF(UT_Period,                                   0x00000066, L"Period",                                      L"autodesk.spec.aec.structural:period-1.0.0")                           \
  PARAM_DEF(UT_Pulsation,                                0x00000067, L"Pulsation",                                   L"autodesk.spec.aec.structural:pulsation-1.0.0")                        \
  PARAM_DEF(UT_Reinforcement_Area,                       0x00000068, L"Reinforcement Area",                          L"autodesk.spec.aec.structural:reinforcementArea-1.0.0")                \
  PARAM_DEF(UT_Reinforcement_Area_per_Unit_Length,       0x00000069, L"Reinforcement Area per Unit Length",          L"autodesk.spec.aec.structural:reinforcementAreaPerUnitLength-1.0.0")   \
  PARAM_DEF(UT_Reinforcement_Cover,                      0x0000006A, L"Reinforcement Cover",                         L"autodesk.spec.aec.structural:reinforcementCover-1.0.0")               \
  PARAM_DEF(UT_Reinforcement_Spacing,                    0x0000006B, L"Reinforcement Spacing",                       L"autodesk.spec.aec.structural:reinforcementSpacing-1.0.0")             \
  PARAM_DEF(UT_Rotation,                                 0x0000006C, L"Rotation",                                    L"autodesk.spec.aec.structural:rotation-1.0.0")                         \
  PARAM_DEF(UT_Section_Area,                             0x0000006D, L"Section Area",                                L"autodesk.spec.aec.structural:sectionArea-1.0.0")                      \
  PARAM_DEF(UT_Section_Dimension,                        0x0000006E, L"Section Dimension",                           L"autodesk.spec.aec.structural:sectionDimension-1.0.0")                 \
  PARAM_DEF(UT_Section_Modulus,                          0x0000006F, L"Section Modulus",                             L"autodesk.spec.aec.structural:sectionModulus-1.0.0")                   \
  PARAM_DEF(UT_Section_Property,                         0x00000070, L"Section Property",                            L"autodesk.spec.aec.structural:sectionProperty-1.0.0")                  \
  PARAM_DEF(UT_Structural_Velocity,                      0x00000071, L"Velocity",                                    L"autodesk.spec.aec.structural:velocity-1.0.0")                         \
  PARAM_DEF(UT_Warping_Constant,                         0x00000072, L"Warping Constant",                            L"autodesk.spec.aec.structural:warpingConstant-1.0.0")                  \
  PARAM_DEF(UT_Weight,                                   0x00000073, L"Weight",                                      L"autodesk.spec.aec.structural:weight-1.0.0")                           \
  PARAM_DEF(UT_Weight_per_Unit_Length,                   0x00000074, L"Weight per Unit Length",                      L"autodesk.spec.aec.structural:weightPerUnitLength-1.0.0")              \
  PARAM_DEF(UT_HVAC_ThermalConductivity,                 0x00000075, L"Thermal Conductivity",                        L"autodesk.spec.aec.energy:thermalConductivity-1.0.0")                  \
  PARAM_DEF(UT_HVAC_SpecificHeat,                        0x00000076, L"Specific Heat",                               L"autodesk.spec.aec.energy:specificHeat-1.0.0")                         \
  PARAM_DEF(UT_HVAC_SpecificHeatOfVaporization,          0x00000077, L"Specific Heat of Vaporization",               L"autodesk.spec.aec.energy:specificHeatOfVaporization-1.0.0")           \
  PARAM_DEF(UT_HVAC_Permeability,                        0x00000078, L"Permeability",                                L"autodesk.spec.aec.energy:permeability-1.0.0")                         \
  PARAM_DEF(UT_Electrical_Resistivity,                   0x00000079, L"Electrical Resistivity",                      L"autodesk.spec.aec.electrical:resistivity-1.0.0")                      \
  PARAM_DEF(UT_MassDensity,                              0x0000007A, L"Mass Density",                                L"autodesk.spec.aec:massDensity-1.0.0")                                 \
  PARAM_DEF(UT_MassPerUnitArea,                          0x0000007B, L"Mass per Unit Area",                          L"autodesk.spec.aec.structural:massPerUnitArea-1.0.0")                  \
  PARAM_DEF(UT_Pipe_Dimension,                           0x0000007C, L"Pipe Dimension",                              L"autodesk.spec.aec.piping:pipeDimension-1.0.0")                        \
  PARAM_DEF(UT_PipeMass,                                 0x0000007D, L"Mass",                                        L"autodesk.spec.aec.piping:mass-1.0.0")                                 \
  PARAM_DEF(UT_PipeMassPerUnitLength,                    0x0000007E, L"Mass per Unit Length",                        L"autodesk.spec.aec.piping:pipeMassPerUnitLength-1.0.0")                \
  PARAM_DEF(UT_HVAC_TemperatureDifference,               0x0000007F, L"Temperature Difference",                      L"autodesk.spec.aec.hvac:temperatureDifference-1.0.0")                  \
  PARAM_DEF(UT_Piping_TemperatureDifference,             0x00000080, L"Temperature Difference",                      L"autodesk.spec.aec.piping:temperatureDifference-1.0.0")                \
  PARAM_DEF(UT_Electrical_TemperatureDifference,         0x00000081, L"Temperature Difference",                      L"autodesk.spec.aec.electrical:temperatureDifference-1.0.0")            \
  PARAM_DEF(UT_TimeInterval,                             0x00000082, L"Time",                                        L"autodesk.spec.aec:time-1.0.0")                                        \
  PARAM_DEF(UT_Speed,                                    0x00000083, L"Speed",                                       L"autodesk.spec.aec:speed-1.0.0")                                       \
  PARAM_DEF(UT_Stationing,                               0x00000084, L"Stationing",                                  L"autodesk.spec.aec.infrastructure:stationing-1.0.0")                   \

ODBM_ENUMERATION(UnitType, ODBM_UNITTYPE)

#endif // _BM_UNITTYPE_H_
