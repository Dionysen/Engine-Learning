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

#ifndef _BM_PARAMETERTYPE_H_
#define _BM_PARAMETERTYPE_H_

#define ODBM_PARAMETERTYPE(PARAM_DEF, ...)                                                                           \
  PARAM_DEF(Invalid,                                     0x00000000, L"")                                            \
  PARAM_DEF(Text,                                        0x00000001, L"Text")                                        \
  PARAM_DEF(Integer,                                     0x00000002, L"Integer")                                     \
  PARAM_DEF(Number,                                      0x00000003, L"Number")                                      \
  PARAM_DEF(Length,                                      0x00000004, L"Length")                                      \
  PARAM_DEF(Area,                                        0x00000005, L"Area")                                        \
  PARAM_DEF(Volume,                                      0x00000006, L"Volume")                                      \
  PARAM_DEF(Angle,                                       0x00000007, L"Angle")                                       \
  PARAM_DEF(URL,                                         0x00000008, L"URL")                                         \
  PARAM_DEF(Material,                                    0x00000009, L"Material")                                    \
  PARAM_DEF(YesNo,                                       0x0000000A, L"Yes/No")                                      \
  PARAM_DEF(Force,                                       0x0000000B, L"Force")                                       \
  PARAM_DEF(LinearForce,                                 0x0000000C, L"Linear Force")                                \
  PARAM_DEF(AreaForce,                                   0x0000000D, L"Area Force")                                  \
  PARAM_DEF(Moment,                                      0x0000000E, L"Moment")                                      \
  PARAM_DEF(NumberOfPoles,                               0x0000000F, L"Number of Poles")                             \
  PARAM_DEF(FixtureUnit,                                 0x00000010, L"Fixture Units")                               \
  PARAM_DEF(FamilyType,                                  0x00000011, not_std::nullopt)                               \
  PARAM_DEF(LoadClassification,                          0x00000012, L"Load Classification")                         \
  PARAM_DEF(Image,                                       0x00000013, L"Image")                                       \
  PARAM_DEF(MultilineText,                               0x00000014, L"Multiline Text")                              \
  PARAM_DEF(HVACDensity,                                 0x0000006B, L"Density")                                     \
  PARAM_DEF(HVACEnergy,                                  0x0000006C, L"Energy")                                      \
  PARAM_DEF(HVACFriction,                                0x0000006D, L"Friction")                                    \
  PARAM_DEF(HVACPower,                                   0x0000006E, L"Power")                                       \
  PARAM_DEF(HVACPowerDensity,                            0x0000006F, L"Power Density")                               \
  PARAM_DEF(HVACPressure,                                0x00000070, L"Pressure")                                    \
  PARAM_DEF(HVACTemperature,                             0x00000071, L"Temperature")                                 \
  PARAM_DEF(HVACVelocity,                                0x00000072, L"Velocity")                                    \
  PARAM_DEF(HVACAirflow,                                 0x00000073, L"Air Flow")                                    \
  PARAM_DEF(HVACDuctSize,                                0x00000074, L"Duct Size")                                   \
  PARAM_DEF(HVACCrossSection,                            0x00000075, L"Cross Section")                               \
  PARAM_DEF(HVACHeatGain,                                0x00000076, L"Heat Gain")                                   \
  PARAM_DEF(ElectricalCurrent,                           0x00000077, L"Current")                                     \
  PARAM_DEF(ElectricalPotential,                         0x00000078, L"Electrical Potential")                        \
  PARAM_DEF(ElectricalFrequency,                         0x00000079, L"Frequency")                                   \
  PARAM_DEF(ElectricalIlluminance,                       0x0000007A, L"Illuminance")                                 \
  PARAM_DEF(ElectricalLuminousFlux,                      0x0000007B, L"Luminous Flux")                               \
  PARAM_DEF(ElectricalPower,                             0x0000007C, L"Power")                                       \
  PARAM_DEF(HVACRoughness,                               0x0000007D, L"Roughness")                                   \
  PARAM_DEF(ForceScaleFactor,                            0x00000082, L"Force scale factor")                          \
  PARAM_DEF(LinearForceScaleFactor,                      0x00000083, L"Linear force scale factor")                   \
  PARAM_DEF(AreaForceScaleFactor,                        0x00000084, L"Area force scale factor")                     \
  PARAM_DEF(MomentScaleFactor,                           0x00000085, L"Moment scale factors")                        \
  PARAM_DEF(ElectricalApparentPower,                     0x00000086, L"Apparent Power")                              \
  PARAM_DEF(ElectricalPowerDensity,                      0x00000087, L"Power Density")                               \
  PARAM_DEF(PipingDensity,                               0x00000088, L"Density")                                     \
  PARAM_DEF(PipingFlow,                                  0x00000089, L"Flow")                                        \
  PARAM_DEF(PipingFriction,                              0x0000008A, L"Friction")                                    \
  PARAM_DEF(PipingPressure,                              0x0000008B, L"Pressure")                                    \
  PARAM_DEF(PipingTemperature,                           0x0000008C, L"Temperature")                                 \
  PARAM_DEF(PipingVelocity,                              0x0000008D, L"Velocity")                                    \
  PARAM_DEF(PipingViscosity,                             0x0000008E, L"Dynamic Viscosity")                           \
  PARAM_DEF(PipeSize,                                    0x0000008F, L"Pipe Size")                                   \
  PARAM_DEF(PipingRoughness,                             0x00000090, L"Roughness")                                   \
  PARAM_DEF(Stress,                                      0x00000091, L"Stress")                                      \
  PARAM_DEF(UnitWeight,                                  0x00000092, L"Unit Weight")                                 \
  PARAM_DEF(ThermalExpansion,                            0x00000093, L"Thermal Expansion Coefficient")               \
  PARAM_DEF(LinearMoment,                                0x00000094, L"Linear Moment")                               \
  PARAM_DEF(ForcePerLength,                              0x00000096, L"Point Spring Coefficient")                    \
  PARAM_DEF(ForceLengthPerAngle,                         0x00000097, L"Rotational Point Spring Coefficient")         \
  PARAM_DEF(LinearForcePerLength,                        0x00000098, L"Line Spring Coefficient")                     \
  PARAM_DEF(LinearForceLengthPerAngle,                   0x00000099, L"Rotational Line Spring Coefficient")          \
  PARAM_DEF(AreaForcePerLength,                          0x0000009A, L"Area Spring Coefficient")                     \
  PARAM_DEF(PipingVolume,                                0x0000009B, L"Volume")                                      \
  PARAM_DEF(HVACViscosity,                               0x0000009C, L"Dynamic Viscosity")                           \
  PARAM_DEF(HVACCoefficientOfHeatTransfer,               0x0000009D, L"Coefficient of Heat Transfer")                \
  PARAM_DEF(HVACAirflowDensity,                          0x0000009E, L"Air Flow Density")                            \
  PARAM_DEF(Slope,                                       0x0000009F, L"Slope")                                       \
  PARAM_DEF(HVACCoolingLoad,                             0x000000A0, L"Cooling Load")                                \
  PARAM_DEF(HVACCoolingLoadDividedByArea,                0x000000A1, L"Cooling Load divided by Area")                \
  PARAM_DEF(HVACCoolingLoadDividedByVolume,              0x000000A2, L"Cooling Load divided by Volume")              \
  PARAM_DEF(HVACHeatingLoad,                             0x000000A3, L"Heating Load")                                \
  PARAM_DEF(HVACHeatingLoadDividedByArea,                0x000000A4, L"Heating Load divided by Area")                \
  PARAM_DEF(HVACHeatingLoadDividedByVolume,              0x000000A5, L"Heating Load divided by Volume")              \
  PARAM_DEF(HVACAirflowDividedByVolume,                  0x000000A6, L"Air Flow divided by Volume")                  \
  PARAM_DEF(HVACAirflowDividedByCoolingLoad,             0x000000A7, L"Air Flow divided by Cooling Load")            \
  PARAM_DEF(HVACAreaDividedByCoolingLoad,                0x000000A8, L"Area divided by Cooling Load")                \
  PARAM_DEF(WireSize,                                    0x000000A9, L"Wire Diameter")                               \
  PARAM_DEF(HVACSlope,                                   0x000000AA, L"Slope")                                       \
  PARAM_DEF(PipingSlope,                                 0x000000AB, L"Slope")                                       \
  PARAM_DEF(Currency,                                    0x000000AC, L"Currency")                                    \
  PARAM_DEF(ElectricalEfficacy,                          0x000000AD, L"Efficacy")                                    \
  PARAM_DEF(ElectricalWattage,                           0x000000AE, L"Wattage")                                     \
  PARAM_DEF(ColorTemperature,                            0x000000AF, L"Color Temperature")                           \
  PARAM_DEF(ElectricalLuminousIntensity,                 0x000000B1, L"Luminous Intensity")                          \
  PARAM_DEF(ElectricalLuminance,                         0x000000B2, L"Luminance")                                   \
  PARAM_DEF(HVACAreaDividedByHeatingLoad,                0x000000B3, L"Area divided by Heating Load")                \
  PARAM_DEF(HVACFactor,                                  0x000000B4, L"Factor")                                      \
  PARAM_DEF(ElectricalTemperature,                       0x000000B5, L"Temperature")                                 \
  PARAM_DEF(ElectricalCableTraySize,                     0x000000B6, L"Cable Tray Size")                             \
  PARAM_DEF(ElectricalConduitSize,                       0x000000B7, L"Conduit Size")                                \
  PARAM_DEF(ReinforcementVolume,                         0x000000B8, L"Reinforcement Volume")                        \
  PARAM_DEF(ReinforcementLength,                         0x000000B9, L"Reinforcement Length")                        \
  PARAM_DEF(ElectricalDemandFactor,                      0x000000BA, L"Demand Factor")                               \
  PARAM_DEF(HVACDuctInsulationThickness,                 0x000000BB, L"Duct Insulation Thickness")                   \
  PARAM_DEF(HVACDuctLiningThickness,                     0x000000BC, L"Duct Lining Thickness")                       \
  PARAM_DEF(PipeInsulationThickness,                     0x000000BD, L"Pipe Insulation Thickness")                   \
  PARAM_DEF(HVACThermalResistance,                       0x000000BE, L"Thermal Resistance")                          \
  PARAM_DEF(HVACThermalMass,                             0x000000BF, L"Thermal Mass")                                \
  PARAM_DEF(Acceleration,                                0x000000C0, L"Acceleration")                                \
  PARAM_DEF(BarDiameter,                                 0x000000C1, L"Bar Diameter")                                \
  PARAM_DEF(CrackWidth,                                  0x000000C2, L"Crack Width")                                 \
  PARAM_DEF(DisplacementDeflection,                      0x000000C3, L"Displacement/Deflection")                     \
  PARAM_DEF(Energy,                                      0x000000C4, L"Energy")                                      \
  PARAM_DEF(StructuralFrequency,                         0x000000C5, L"Frequency")                                   \
  PARAM_DEF(Mass,                                        0x000000C6, L"Mass")                                        \
  PARAM_DEF(MassPerUnitLength,                           0x000000C7, L"Mass per Unit Length")                        \
  PARAM_DEF(MomentOfInertia,                             0x000000C8, L"Moment of Inertia")                           \
  PARAM_DEF(SurfaceArea,                                 0x000000C9, L"Surface Area per Unit Length")                \
  PARAM_DEF(Period,                                      0x000000CA, L"Period")                                      \
  PARAM_DEF(Pulsation,                                   0x000000CB, L"Pulsation")                                   \
  PARAM_DEF(ReinforcementArea,                           0x000000CC, L"Reinforcement Area")                          \
  PARAM_DEF(ReinforcementAreaPerUnitLength,              0x000000CD, L"Reinforcement Area per Unit Length")          \
  PARAM_DEF(ReinforcementCover,                          0x000000CE, L"Reinforcement Cover")                         \
  PARAM_DEF(ReinforcementSpacing,                        0x000000CF, L"Reinforcement Spacing")                       \
  PARAM_DEF(Rotation,                                    0x000000D0, L"Rotation")                                    \
  PARAM_DEF(SectionArea,                                 0x000000D1, L"Section Area")                                \
  PARAM_DEF(SectionDimension,                            0x000000D2, L"Section Dimension")                           \
  PARAM_DEF(SectionModulus,                              0x000000D3, L"Section Modulus")                             \
  PARAM_DEF(SectionProperty,                             0x000000D4, L"Section Property")                            \
  PARAM_DEF(StructuralVelocity,                          0x000000D5, L"Velocity")                                    \
  PARAM_DEF(WarpingConstant,                             0x000000D6, L"Warping Constant")                            \
  PARAM_DEF(Weight,                                      0x000000D7, L"Weight")                                      \
  PARAM_DEF(WeightPerUnitLength,                         0x000000D8, L"Weight per Unit Length")                      \
  PARAM_DEF(HVACThermalConductivity,                     0x000000D9, L"Thermal Conductivity")                        \
  PARAM_DEF(HVACSpecificHeat,                            0x000000DA, L"Specific Heat")                               \
  PARAM_DEF(HVACSpecificHeatOfVaporization,              0x000000DB, L"Specific Heat of Vaporization")               \
  PARAM_DEF(HVACPermeability,                            0x000000DC, L"Permeability")                                \
  PARAM_DEF(ElectricalResistivity,                       0x000000DD, L"Electrical Resistivity")                      \
  PARAM_DEF(MassDensity,                                 0x000000DE, L"Mass Density")                                \
  PARAM_DEF(MassPerUnitArea,                             0x000000DF, L"Mass per Unit Area")                          \
  PARAM_DEF(PipeDimension,                               0x000000E0, L"Pipe Dimension")                              \
  PARAM_DEF(PipeMass,                                    0x000000E1, L"Mass")                                        \
  PARAM_DEF(PipeMassPerUnitLength,                       0x000000E2, L"Mass per Unit Length")                        \
  PARAM_DEF(HVACTemperatureDifference,                   0x000000E3, L"Temperature Difference")                      \
  PARAM_DEF(PipingTemperatureDifference,                 0x000000E4, L"Temperature Difference")                      \
  PARAM_DEF(ElectricalTemperatureDifference,             0x000000E5, L"Temperature Difference")                      \
  PARAM_DEF(TimeInterval,                                0x000000E6, L"Time")                                        \
  PARAM_DEF(Speed,                                       0x000000E7, L"Speed")                                       \
  PARAM_DEF(Stationing,                                  0x000000E8, L"Stationing")                                  \

ODBM_ENUMERATION(ParameterType, ODBM_PARAMETERTYPE)

#endif // _BM_PARAMETERTYPE_H_
