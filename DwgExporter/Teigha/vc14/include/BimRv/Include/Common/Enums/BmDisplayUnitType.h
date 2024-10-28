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

#ifndef _BM_DISPLAYUNITTYPE_H_
#define _BM_DISPLAYUNITTYPE_H_

#define ODBM_DISPLAYUNITTYPE(PARAM_DEF, ...)                                                                                                                                                           \
  PARAM_DEF(DUT_UNDEFINED,                               0xFFFFFFFE, not_std::nullopt,                               not_std::nullopt)                                                       \
  PARAM_DEF(DUT_CUSTOM,                                  0xFFFFFFFF, not_std::nullopt,                               L"autodesk.unit.unit:custom-1.0.0")                                     \
  PARAM_DEF(DUT_METERS,                                  0x00000000, L"Meters",                                      L"autodesk.unit.unit:meters-1.0.0")                                     \
  PARAM_DEF(DUT_CENTIMETERS,                             0x00000001, L"Centimeters",                                 L"autodesk.unit.unit:centimeters-1.0.1")                                \
  PARAM_DEF(DUT_MILLIMETERS,                             0x00000002, L"Millimeters",                                 L"autodesk.unit.unit:millimeters-1.0.1")                                \
  PARAM_DEF(DUT_DECIMAL_FEET,                            0x00000003, L"Feet",                                        L"autodesk.unit.unit:feet-1.0.1")                                       \
  PARAM_DEF(DUT_FEET_FRACTIONAL_INCHES,                  0x00000004, L"Feet and fractional inches",                  L"autodesk.unit.unit:feetFractionalInches-1.0.0")                       \
  PARAM_DEF(DUT_FRACTIONAL_INCHES,                       0x00000005, L"Fractional inches",                           L"autodesk.unit.unit:fractionalInches-1.0.0")                           \
  PARAM_DEF(DUT_DECIMAL_INCHES,                          0x00000006, L"Inches",                                      L"autodesk.unit.unit:inches-1.0.1")                                     \
  PARAM_DEF(DUT_ACRES,                                   0x00000007, L"Acres",                                       L"autodesk.unit.unit:acres-1.0.1")                                      \
  PARAM_DEF(DUT_HECTARES,                                0x00000008, L"Hectares",                                    L"autodesk.unit.unit:hectares-1.0.1")                                   \
  PARAM_DEF(DUT_METERS_CENTIMETERS,                      0x00000009, L"Meters and centimeters",                      L"autodesk.unit.unit:metersCentimeters-1.0.0")                          \
  PARAM_DEF(DUT_CUBIC_YARDS,                             0x0000000A, L"Cubic yards",                                 L"autodesk.unit.unit:cubicYards-1.0.1")                                 \
  PARAM_DEF(DUT_SQUARE_FEET,                             0x0000000B, L"Square feet",                                 L"autodesk.unit.unit:squareFeet-1.0.1")                                 \
  PARAM_DEF(DUT_SQUARE_METERS,                           0x0000000C, L"Square meters",                               L"autodesk.unit.unit:squareMeters-1.0.1")                               \
  PARAM_DEF(DUT_CUBIC_FEET,                              0x0000000D, L"Cubic feet",                                  L"autodesk.unit.unit:cubicFeet-1.0.1")                                  \
  PARAM_DEF(DUT_CUBIC_METERS,                            0x0000000E, L"Cubic meters",                                L"autodesk.unit.unit:cubicMeters-1.0.1")                                \
  PARAM_DEF(DUT_DECIMAL_DEGREES,                         0x0000000F, L"Degrees",                                     L"autodesk.unit.unit:degrees-1.0.1")                                    \
  PARAM_DEF(DUT_DEGREES_AND_MINUTES,                     0x00000010, L"Degrees minutes seconds",                     L"autodesk.unit.unit:degreesMinutes-1.0.0")                             \
  PARAM_DEF(DUT_GENERAL,                                 0x00000011, L"General",                                     L"autodesk.unit.unit:general-1.0.1")                                    \
  PARAM_DEF(DUT_FIXED,                                   0x00000012, L"Fixed",                                       L"autodesk.unit.unit:fixed-1.0.1")                                      \
  PARAM_DEF(DUT_PERCENTAGE,                              0x00000013, L"Percentage",                                  L"autodesk.unit.unit:percentage-1.0.1")                                 \
  PARAM_DEF(DUT_SQUARE_INCHES,                           0x00000014, L"Square inches",                               L"autodesk.unit.unit:squareInches-1.0.1")                               \
  PARAM_DEF(DUT_SQUARE_CENTIMETERS,                      0x00000015, L"Square centimeters",                          L"autodesk.unit.unit:squareCentimeters-1.0.1")                          \
  PARAM_DEF(DUT_SQUARE_MILLIMETERS,                      0x00000016, L"Square millimeters",                          L"autodesk.unit.unit:squareMillimeters-1.0.1")                          \
  PARAM_DEF(DUT_CUBIC_INCHES,                            0x00000017, L"Cubic inches",                                L"autodesk.unit.unit:cubicInches-1.0.1")                                \
  PARAM_DEF(DUT_CUBIC_CENTIMETERS,                       0x00000018, L"Cubic centimeters",                           L"autodesk.unit.unit:cubicCentimeters-1.0.1")                           \
  PARAM_DEF(DUT_CUBIC_MILLIMETERS,                       0x00000019, L"Cubic millimeters",                           L"autodesk.unit.unit:cubicMillimeters-1.0.1")                           \
  PARAM_DEF(DUT_LITERS,                                  0x0000001A, L"Liters",                                      L"autodesk.unit.unit:liters-1.0.1")                                     \
  PARAM_DEF(DUT_GALLONS_US,                              0x0000001B, L"US gallons",                                  L"autodesk.unit.unit:usGallons-1.0.1")                                  \
  PARAM_DEF(DUT_KILOGRAMS_PER_CUBIC_METER,               0x0000001C, L"Kilograms per cubic meter",                   L"autodesk.unit.unit:kilogramsPerCubicMeter-1.0.1")                     \
  PARAM_DEF(DUT_POUNDS_MASS_PER_CUBIC_FOOT,              0x0000001D, L"Pounds mass per cubic foot",                  L"autodesk.unit.unit:poundsMassPerCubicFoot-1.0.1")                     \
  PARAM_DEF(DUT_POUNDS_MASS_PER_CUBIC_INCH,              0x0000001E, L"Pounds mass per cubic inch",                  L"autodesk.unit.unit:poundsMassPerCubicInch-1.0.1")                     \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS,                   0x0000001F, L"British thermal units",                       L"autodesk.unit.unit:britishThermalUnits-1.0.1")                        \
  PARAM_DEF(DUT_CALORIES,                                0x00000020, L"Calories",                                    L"autodesk.unit.unit:calories-1.0.1")                                   \
  PARAM_DEF(DUT_KILOCALORIES,                            0x00000021, L"Kilocalories",                                L"autodesk.unit.unit:kilocalories-1.0.1")                               \
  PARAM_DEF(DUT_JOULES,                                  0x00000022, L"Joules",                                      L"autodesk.unit.unit:joules-1.0.1")                                     \
  PARAM_DEF(DUT_KILOWATT_HOURS,                          0x00000023, L"Kilowatt hours",                              L"autodesk.unit.unit:kilowattHours-1.0.1")                              \
  PARAM_DEF(DUT_THERMS,                                  0x00000024, L"Therms",                                      L"autodesk.unit.unit:therms-1.0.1")                                     \
  PARAM_DEF(DUT_INCHES_OF_WATER_PER_100FT,               0x00000025, L"Inches of water (60 \u00B0F) per 100 feet",   L"autodesk.unit.unit:inchesOfWater60DegreesFahrenheitPer100Feet-1.0.1") \
  PARAM_DEF(DUT_PASCALS_PER_METER,                       0x00000026, L"Pascals per meter",                           L"autodesk.unit.unit:pascalsPerMeter-1.0.1")                            \
  PARAM_DEF(DUT_WATTS,                                   0x00000027, L"Watts",                                       L"autodesk.unit.unit:watts-1.0.1")                                      \
  PARAM_DEF(DUT_KILOWATTS,                               0x00000028, L"Kilowatts",                                   L"autodesk.unit.unit:kilowatts-1.0.1")                                  \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_SECOND,        0x00000029, L"British thermal units per second",            L"autodesk.unit.unit:britishThermalUnitsPerSecond-1.0.1")               \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_HOUR,          0x0000002A, L"British thermal units per hour",              L"autodesk.unit.unit:britishThermalUnitsPerHour-1.0.1")                 \
  PARAM_DEF(DUT_CALORIES_PER_SECOND,                     0x0000002B, L"Calories per second",                         L"autodesk.unit.unit:caloriesPerSecond-1.0.1")                          \
  PARAM_DEF(DUT_KILOCALORIES_PER_SECOND,                 0x0000002C, L"Kilocalories per second",                     L"autodesk.unit.unit:kilocaloriesPerSecond-1.0.1")                      \
  PARAM_DEF(DUT_WATTS_PER_SQUARE_FOOT,                   0x0000002D, L"Watts per square foot",                       L"autodesk.unit.unit:wattsPerSquareFoot-1.0.1")                         \
  PARAM_DEF(DUT_WATTS_PER_SQUARE_METER,                  0x0000002E, L"Watts per square meter",                      L"autodesk.unit.unit:wattsPerSquareMeter-1.0.1")                        \
  PARAM_DEF(DUT_INCHES_OF_WATER,                         0x0000002F, L"Inches of water (60 \u00B0F)",                L"autodesk.unit.unit:inchesOfWater60DegreesFahrenheit-1.0.1")           \
  PARAM_DEF(DUT_PASCALS,                                 0x00000030, L"Pascals",                                     L"autodesk.unit.unit:pascals-1.0.1")                                    \
  PARAM_DEF(DUT_KILOPASCALS,                             0x00000031, L"Kilopascals",                                 L"autodesk.unit.unit:kilopascals-1.0.1")                                \
  PARAM_DEF(DUT_MEGAPASCALS,                             0x00000032, L"Megapascals",                                 L"autodesk.unit.unit:megapascals-1.0.1")                                \
  PARAM_DEF(DUT_POUNDS_FORCE_PER_SQUARE_INCH,            0x00000033, L"Pounds force per square inch",                L"autodesk.unit.unit:poundsForcePerSquareInch-1.0.1")                   \
  PARAM_DEF(DUT_INCHES_OF_MERCURY,                       0x00000034, L"Inches of mercury (32 \u00B0F)",              L"autodesk.unit.unit:inchesOfMercury32DegreesFahrenheit-1.0.1")         \
  PARAM_DEF(DUT_MILLIMETERS_OF_MERCURY,                  0x00000035, L"Millimeters of mercury",                      L"autodesk.unit.unit:millimetersOfMercury-1.0.1")                       \
  PARAM_DEF(DUT_ATMOSPHERES,                             0x00000036, L"Atmospheres",                                 L"autodesk.unit.unit:atmospheres-1.0.1")                                \
  PARAM_DEF(DUT_BARS,                                    0x00000037, L"Bars",                                        L"autodesk.unit.unit:bars-1.0.1")                                       \
  PARAM_DEF(DUT_FAHRENHEIT,                              0x00000038, L"Fahrenheit",                                  L"autodesk.unit.unit:fahrenheit-1.0.1")                                 \
  PARAM_DEF(DUT_CELSIUS,                                 0x00000039, L"Celsius",                                     L"autodesk.unit.unit:celsius-1.0.1")                                    \
  PARAM_DEF(DUT_KELVIN,                                  0x0000003A, L"Kelvin",                                      L"autodesk.unit.unit:kelvin-1.0.0")                                     \
  PARAM_DEF(DUT_RANKINE,                                 0x0000003B, L"Rankine",                                     L"autodesk.unit.unit:rankine-1.0.1")                                    \
  PARAM_DEF(DUT_FEET_PER_MINUTE,                         0x0000003C, L"Feet per minute",                             L"autodesk.unit.unit:feetPerMinute-1.0.1")                              \
  PARAM_DEF(DUT_METERS_PER_SECOND,                       0x0000003D, L"Meters per second",                           L"autodesk.unit.unit:metersPerSecond-1.0.1")                            \
  PARAM_DEF(DUT_CENTIMETERS_PER_MINUTE,                  0x0000003E, L"Centimeters per minute",                      L"autodesk.unit.unit:centimetersPerMinute-1.0.1")                       \
  PARAM_DEF(DUT_CUBIC_FEET_PER_MINUTE,                   0x0000003F, L"Cubic feet per minute",                       L"autodesk.unit.unit:cubicFeetPerMinute-1.0.1")                         \
  PARAM_DEF(DUT_LITERS_PER_SECOND,                       0x00000040, L"Liters per second",                           L"autodesk.unit.unit:litersPerSecond-1.0.1")                            \
  PARAM_DEF(DUT_CUBIC_METERS_PER_SECOND,                 0x00000041, L"Cubic meters per second",                     L"autodesk.unit.unit:cubicMetersPerSecond-1.0.1")                       \
  PARAM_DEF(DUT_CUBIC_METERS_PER_HOUR,                   0x00000042, L"Cubic meters per hour",                       L"autodesk.unit.unit:cubicMetersPerHour-1.0.1")                         \
  PARAM_DEF(DUT_GALLONS_US_PER_MINUTE,                   0x00000043, L"US gallons per minute",                       L"autodesk.unit.unit:usGallonsPerMinute-1.0.1")                         \
  PARAM_DEF(DUT_GALLONS_US_PER_HOUR,                     0x00000044, L"US gallons per hour",                         L"autodesk.unit.unit:usGallonsPerHour-1.0.1")                           \
  PARAM_DEF(DUT_AMPERES,                                 0x00000045, L"Amperes",                                     L"autodesk.unit.unit:amperes-1.0.0")                                    \
  PARAM_DEF(DUT_KILOAMPERES,                             0x00000046, L"Kiloamperes",                                 L"autodesk.unit.unit:kiloamperes-1.0.1")                                \
  PARAM_DEF(DUT_MILLIAMPERES,                            0x00000047, L"Milliamperes",                                L"autodesk.unit.unit:milliamperes-1.0.1")                               \
  PARAM_DEF(DUT_VOLTS,                                   0x00000048, L"Volts",                                       L"autodesk.unit.unit:volts-1.0.1")                                      \
  PARAM_DEF(DUT_KILOVOLTS,                               0x00000049, L"Kilovolts",                                   L"autodesk.unit.unit:kilovolts-1.0.1")                                  \
  PARAM_DEF(DUT_MILLIVOLTS,                              0x0000004A, L"Millivolts",                                  L"autodesk.unit.unit:millivolts-1.0.1")                                 \
  PARAM_DEF(DUT_HERTZ,                                   0x0000004B, L"Hertz",                                       L"autodesk.unit.unit:hertz-1.0.1")                                      \
  PARAM_DEF(DUT_CYCLES_PER_SECOND,                       0x0000004C, L"Cycles per second",                           L"autodesk.unit.unit:cyclesPerSecond-1.0.1")                            \
  PARAM_DEF(DUT_LUX,                                     0x0000004D, L"Lux",                                         L"autodesk.unit.unit:lux-1.0.1")                                        \
  PARAM_DEF(DUT_FOOTCANDLES,                             0x0000004E, L"Footcandles",                                 L"autodesk.unit.unit:footcandles-1.0.1")                                \
  PARAM_DEF(DUT_FOOTLAMBERTS,                            0x0000004F, L"Footlamberts",                                L"autodesk.unit.unit:footlamberts-1.0.1")                               \
  PARAM_DEF(DUT_CANDELAS_PER_SQUARE_METER,               0x00000050, L"Candelas per square meter",                   L"autodesk.unit.unit:candelasPerSquareMeter-1.0.1")                     \
  PARAM_DEF(DUT_CANDELAS,                                0x00000051, L"Candelas",                                    L"autodesk.unit.unit:candelas-1.0.0")                                   \
  PARAM_DEF(DUT_CANDLEPOWER,                             0x00000052, not_std::nullopt,                               not_std::nullopt)                                                       \
  PARAM_DEF(DUT_LUMENS,                                  0x00000053, L"Lumens",                                      L"autodesk.unit.unit:lumens-1.0.1")                                     \
  PARAM_DEF(DUT_VOLT_AMPERES,                            0x00000054, L"Volt amperes",                                L"autodesk.unit.unit:voltAmperes-1.0.1")                                \
  PARAM_DEF(DUT_KILOVOLT_AMPERES,                        0x00000055, L"Kilovolt amperes",                            L"autodesk.unit.unit:kilovoltAmperes-1.0.1")                            \
  PARAM_DEF(DUT_HORSEPOWER,                              0x00000056, L"Horsepower",                                  L"autodesk.unit.unit:horsepower-1.0.1")                                 \
  PARAM_DEF(DUT_NEWTONS,                                 0x00000057, L"Newtons",                                     L"autodesk.unit.unit:newtons-1.0.1")                                    \
  PARAM_DEF(DUT_DECANEWTONS,                             0x00000058, L"Dekanewtons",                                 L"autodesk.unit.unit:dekanewtons-1.0.1")                                \
  PARAM_DEF(DUT_KILONEWTONS,                             0x00000059, L"Kilonewtons",                                 L"autodesk.unit.unit:kilonewtons-1.0.1")                                \
  PARAM_DEF(DUT_MEGANEWTONS,                             0x0000005A, L"Meganewtons",                                 L"autodesk.unit.unit:meganewtons-1.0.1")                                \
  PARAM_DEF(DUT_KIPS,                                    0x0000005B, L"Kips",                                        L"autodesk.unit.unit:kips-1.0.1")                                       \
  PARAM_DEF(DUT_KILOGRAMS_FORCE,                         0x0000005C, L"Kilograms force",                             L"autodesk.unit.unit:kilogramsForce-1.0.1")                             \
  PARAM_DEF(DUT_TONNES_FORCE,                            0x0000005D, L"Tonnes force",                                L"autodesk.unit.unit:tonnesForce-1.0.1")                                \
  PARAM_DEF(DUT_POUNDS_FORCE,                            0x0000005E, L"Pounds force",                                L"autodesk.unit.unit:poundsForce-1.0.1")                                \
  PARAM_DEF(DUT_NEWTONS_PER_METER,                       0x0000005F, L"Newtons per meter",                           L"autodesk.unit.unit:newtonsPerMeter-1.0.1")                            \
  PARAM_DEF(DUT_DECANEWTONS_PER_METER,                   0x00000060, L"Dekanewtons per meter",                       L"autodesk.unit.unit:dekanewtonsPerMeter-1.0.1")                        \
  PARAM_DEF(DUT_KILONEWTONS_PER_METER,                   0x00000061, L"Kilonewtons per meter",                       L"autodesk.unit.unit:kilonewtonsPerMeter-1.0.1")                        \
  PARAM_DEF(DUT_MEGANEWTONS_PER_METER,                   0x00000062, L"Meganewtons per meter",                       L"autodesk.unit.unit:meganewtonsPerMeter-1.0.1")                        \
  PARAM_DEF(DUT_KIPS_PER_FOOT,                           0x00000063, L"Kips per foot",                               L"autodesk.unit.unit:kipsPerFoot-1.0.1")                                \
  PARAM_DEF(DUT_KILOGRAMS_FORCE_PER_METER,               0x00000064, L"Kilograms force per meter",                   L"autodesk.unit.unit:kilogramsForcePerMeter-1.0.1")                     \
  PARAM_DEF(DUT_TONNES_FORCE_PER_METER,                  0x00000065, L"Tonnes force per meter",                      L"autodesk.unit.unit:tonnesForcePerMeter-1.0.1")                        \
  PARAM_DEF(DUT_POUNDS_FORCE_PER_FOOT,                   0x00000066, L"Pounds force per foot",                       L"autodesk.unit.unit:poundsForcePerFoot-1.0.1")                         \
  PARAM_DEF(DUT_NEWTONS_PER_SQUARE_METER,                0x00000067, L"Newtons per square meter",                    L"autodesk.unit.unit:newtonsPerSquareMeter-1.0.1")                      \
  PARAM_DEF(DUT_DECANEWTONS_PER_SQUARE_METER,            0x00000068, L"Dekanewtons per square meter",                L"autodesk.unit.unit:dekanewtonsPerSquareMeter-1.0.1")                  \
  PARAM_DEF(DUT_KILONEWTONS_PER_SQUARE_METER,            0x00000069, L"Kilonewtons per square meter",                L"autodesk.unit.unit:kilonewtonsPerSquareMeter-1.0.1")                  \
  PARAM_DEF(DUT_MEGANEWTONS_PER_SQUARE_METER,            0x0000006A, L"Meganewtons per square meter",                L"autodesk.unit.unit:meganewtonsPerSquareMeter-1.0.1")                  \
  PARAM_DEF(DUT_KIPS_PER_SQUARE_FOOT,                    0x0000006B, L"Kips per square foot",                        L"autodesk.unit.unit:kipsPerSquareFoot-1.0.1")                          \
  PARAM_DEF(DUT_KILOGRAMS_FORCE_PER_SQUARE_METER,        0x0000006C, L"Kilograms force per square meter",            L"autodesk.unit.unit:kilogramsForcePerSquareMeter-1.0.1")               \
  PARAM_DEF(DUT_TONNES_FORCE_PER_SQUARE_METER,           0x0000006D, L"Tonnes force per square meter",               L"autodesk.unit.unit:tonnesForcePerSquareMeter-1.0.1")                  \
  PARAM_DEF(DUT_POUNDS_FORCE_PER_SQUARE_FOOT,            0x0000006E, L"Pounds force per square foot",                L"autodesk.unit.unit:poundsForcePerSquareFoot-1.0.1")                   \
  PARAM_DEF(DUT_NEWTON_METERS,                           0x0000006F, L"Newton meters",                               L"autodesk.unit.unit:newtonMeters-1.0.1")                               \
  PARAM_DEF(DUT_DECANEWTON_METERS,                       0x00000070, L"Dekanewton meters",                           L"autodesk.unit.unit:dekanewtonMeters-1.0.1")                           \
  PARAM_DEF(DUT_KILONEWTON_METERS,                       0x00000071, L"Kilonewton meters",                           L"autodesk.unit.unit:kilonewtonMeters-1.0.1")                           \
  PARAM_DEF(DUT_MEGANEWTON_METERS,                       0x00000072, L"Meganewton meters",                           L"autodesk.unit.unit:meganewtonMeters-1.0.1")                           \
  PARAM_DEF(DUT_KIP_FEET,                                0x00000073, L"Kip feet",                                    L"autodesk.unit.unit:kipFeet-1.0.1")                                    \
  PARAM_DEF(DUT_KILOGRAM_FORCE_METERS,                   0x00000074, L"Kilogram force meters",                       L"autodesk.unit.unit:kilogramForceMeters-1.0.1")                        \
  PARAM_DEF(DUT_TONNE_FORCE_METERS,                      0x00000075, L"Tonne force meters",                          L"autodesk.unit.unit:tonneForceMeters-1.0.1")                           \
  PARAM_DEF(DUT_POUND_FORCE_FEET,                        0x00000076, L"Pound force feet",                            L"autodesk.unit.unit:poundForceFeet-1.0.1")                             \
  PARAM_DEF(DUT_METERS_PER_KILONEWTON,                   0x00000077, L"Meters per kilonewton",                       L"autodesk.unit.unit:metersPerKilonewton-1.0.0")                        \
  PARAM_DEF(DUT_FEET_PER_KIP,                            0x00000078, L"Feet per kip",                                L"autodesk.unit.unit:feetPerKip-1.0.0")                                 \
  PARAM_DEF(DUT_SQUARE_METERS_PER_KILONEWTON,            0x00000079, L"Square meters per kilonewton",                L"autodesk.unit.unit:squareMetersPerKilonewton-1.0.1")                  \
  PARAM_DEF(DUT_SQUARE_FEET_PER_KIP,                     0x0000007A, L"Square feet per kip",                         L"autodesk.unit.unit:squareFeetPerKip-1.0.1")                           \
  PARAM_DEF(DUT_CUBIC_METERS_PER_KILONEWTON,             0x0000007B, L"Cubic meters per kilonewton",                 L"autodesk.unit.unit:cubicMetersPerKilonewton-1.0.1")                   \
  PARAM_DEF(DUT_CUBIC_FEET_PER_KIP,                      0x0000007C, L"Cubic feet per kip",                          L"autodesk.unit.unit:cubicFeetPerKip-1.0.1")                            \
  PARAM_DEF(DUT_INV_KILONEWTONS,                         0x0000007D, L"Inverse kilonewtons",                         L"autodesk.unit.unit:inverseKilonewtons-1.0.0")                         \
  PARAM_DEF(DUT_INV_KIPS,                                0x0000007E, L"Inverse kips",                                L"autodesk.unit.unit:inverseKips-1.0.0")                                \
  PARAM_DEF(DUT_FEET_OF_WATER_PER_100FT,                 0x0000007F, L"Feet of water (39.2 \u00B0F) per 100 feet",   L"autodesk.unit.unit:feetOfWater39.2DegreesFahrenheitPer100Feet-1.0.1") \
  PARAM_DEF(DUT_FEET_OF_WATER,                           0x00000080, L"Feet of water (39.2 \u00B0F)",                L"autodesk.unit.unit:feetOfWater39.2DegreesFahrenheit-1.0.1")           \
  PARAM_DEF(DUT_PASCAL_SECONDS,                          0x00000081, L"Pascal seconds",                              L"autodesk.unit.unit:pascalSeconds-1.0.1")                              \
  PARAM_DEF(DUT_POUNDS_MASS_PER_FOOT_SECOND,             0x00000082, L"Pounds mass per foot second",                 L"autodesk.unit.unit:poundsMassPerFootSecond-1.0.1")                    \
  PARAM_DEF(DUT_CENTIPOISES,                             0x00000083, L"Centipoises",                                 L"autodesk.unit.unit:centipoises-1.0.1")                                \
  PARAM_DEF(DUT_FEET_PER_SECOND,                         0x00000084, L"Feet per second",                             L"autodesk.unit.unit:feetPerSecond-1.0.1")                              \
  PARAM_DEF(DUT_KIPS_PER_SQUARE_INCH,                    0x00000085, L"Kips per square inch",                        L"autodesk.unit.unit:kipsPerSquareInch-1.0.1")                          \
  PARAM_DEF(DUT_KILONEWTONS_PER_CUBIC_METER,             0x00000086, L"Kilonewtons per cubic meter",                 L"autodesk.unit.unit:kilonewtonsPerCubicMeter-1.0.1")                   \
  PARAM_DEF(DUT_POUNDS_FORCE_PER_CUBIC_FOOT,             0x00000087, L"Pounds force per cubic foot",                 L"autodesk.unit.unit:poundsForcePerCubicFoot-1.0.1")                    \
  PARAM_DEF(DUT_KIPS_PER_CUBIC_INCH,                     0x00000088, L"Kips per cubic inch",                         L"autodesk.unit.unit:kipsPerCubicInch-1.0.1")                           \
  PARAM_DEF(DUT_INV_FAHRENHEIT,                          0x00000089, L"Inverse degrees Fahrenheit",                  L"autodesk.unit.unit:inverseDegreesFahrenheit-1.0.1")                   \
  PARAM_DEF(DUT_INV_CELSIUS,                             0x0000008A, L"Inverse degrees Celsius",                     L"autodesk.unit.unit:inverseDegreesCelsius-1.0.1")                      \
  PARAM_DEF(DUT_NEWTON_METERS_PER_METER,                 0x0000008B, L"Newton meters per meter",                     L"autodesk.unit.unit:newtonMetersPerMeter-1.0.1")                       \
  PARAM_DEF(DUT_DECANEWTON_METERS_PER_METER,             0x0000008C, L"Dekanewton meters per meter",                 L"autodesk.unit.unit:dekanewtonMetersPerMeter-1.0.1")                   \
  PARAM_DEF(DUT_KILONEWTON_METERS_PER_METER,             0x0000008D, L"Kilonewton meters per meter",                 L"autodesk.unit.unit:kilonewtonMetersPerMeter-1.0.1")                   \
  PARAM_DEF(DUT_MEGANEWTON_METERS_PER_METER,             0x0000008E, L"Meganewton meters per meter",                 L"autodesk.unit.unit:meganewtonMetersPerMeter-1.0.1")                   \
  PARAM_DEF(DUT_KIP_FEET_PER_FOOT,                       0x0000008F, L"Kip feet per foot",                           L"autodesk.unit.unit:kipFeetPerFoot-1.0.1")                             \
  PARAM_DEF(DUT_KILOGRAM_FORCE_METERS_PER_METER,         0x00000090, L"Kilogram force meters per meter",             L"autodesk.unit.unit:kilogramForceMetersPerMeter-1.0.1")                \
  PARAM_DEF(DUT_TONNE_FORCE_METERS_PER_METER,            0x00000091, L"Tonne force meters per meter",                L"autodesk.unit.unit:tonneForceMetersPerMeter-1.0.1")                   \
  PARAM_DEF(DUT_POUND_FORCE_FEET_PER_FOOT,               0x00000092, L"Pound force feet per foot",                   L"autodesk.unit.unit:poundForceFeetPerFoot-1.0.1")                      \
  PARAM_DEF(DUT_POUNDS_MASS_PER_FOOT_HOUR,               0x00000093, L"Pounds mass per foot hour",                   L"autodesk.unit.unit:poundsMassPerFootHour-1.0.1")                      \
  PARAM_DEF(DUT_KIPS_PER_INCH,                           0x00000094, L"Kips per inch",                               L"autodesk.unit.unit:kipsPerInch-1.0.1")                                \
  PARAM_DEF(DUT_KIPS_PER_CUBIC_FOOT,                     0x00000095, L"Kips per cubic foot",                         L"autodesk.unit.unit:kipsPerCubicFoot-1.0.1")                           \
  PARAM_DEF(DUT_KIP_FEET_PER_DEGREE,                     0x00000096, L"Kip feet per degree",                         L"autodesk.unit.unit:kipFeetPerDegree-1.0.1")                           \
  PARAM_DEF(DUT_KILONEWTON_METERS_PER_DEGREE,            0x00000097, L"Kilonewton meters per degree",                L"autodesk.unit.unit:kilonewtonMetersPerDegree-1.0.1")                  \
  PARAM_DEF(DUT_KIP_FEET_PER_DEGREE_PER_FOOT,            0x00000098, L"Kip feet per degree per foot",                L"autodesk.unit.unit:kipFeetPerDegreePerFoot-1.0.1")                    \
  PARAM_DEF(DUT_KILONEWTON_METERS_PER_DEGREE_PER_METER,  0x00000099, L"Kilonewton meters per degree per meter",      L"autodesk.unit.unit:kilonewtonMetersPerDegreePerMeter-1.0.1")          \
  PARAM_DEF(DUT_WATTS_PER_SQUARE_METER_KELVIN,           0x0000009A, L"Watts per square meter kelvin",               L"autodesk.unit.unit:wattsPerSquareMeterKelvin-1.0.1")                  \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_HOUR_SQUARE_FOOT_FAHRENHEIT,0x0000009B,L"British thermal units per hour square foot degree Fahrenheit",L"autodesk.unit.unit:britishThermalUnitsPerHourSquareFootDegreeFahrenheit-1.0.1")\
  PARAM_DEF(DUT_CUBIC_FEET_PER_MINUTE_SQUARE_FOOT,       0x0000009C, L"Cubic feet per minute square foot",           L"autodesk.unit.unit:cubicFeetPerMinuteSquareFoot-1.0.1")               \
  PARAM_DEF(DUT_LITERS_PER_SECOND_SQUARE_METER,          0x0000009D, L"Liters per second square meter",              L"autodesk.unit.unit:litersPerSecondSquareMeter-1.0.1")                 \
  PARAM_DEF(DUT_RATIO_10,                                0x0000009E, L"Ratio : 10",                                  L"autodesk.unit.unit:ratioTo10-1.0.1")                                  \
  PARAM_DEF(DUT_RATIO_12,                                0x0000009F, L"Ratio : 12",                                  L"autodesk.unit.unit:ratioTo12-1.0.1")                                  \
  PARAM_DEF(DUT_SLOPE_DEGREES,                           0x000000A0, L"Degrees",                                     L"autodesk.unit.unit:slopeDegrees-1.0.0")                               \
  PARAM_DEF(DUT_RISE_OVER_INCHES,                        0x000000A1, L"Rise / 12 inches",                            L"autodesk.unit.unit:riseDividedBy12Inches-1.0.1")                      \
  PARAM_DEF(DUT_RISE_OVER_FOOT,                          0x000000A2, L"Rise / 1 foot",                               L"autodesk.unit.unit:riseDividedBy1Foot-1.0.1")                         \
  PARAM_DEF(DUT_RISE_OVER_MMS,                           0x000000A3, L"Rise / 1000 millimeters",                     L"autodesk.unit.unit:riseDividedBy1000Millimeters-1.0.1")               \
  PARAM_DEF(DUT_WATTS_PER_CUBIC_FOOT,                    0x000000A4, L"Watts per cubic foot",                        L"autodesk.unit.unit:wattsPerCubicFoot-1.0.1")                          \
  PARAM_DEF(DUT_WATTS_PER_CUBIC_METER,                   0x000000A5, L"Watts per cubic meter",                       L"autodesk.unit.unit:wattsPerCubicMeter-1.0.1")                         \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_HOUR_SQUARE_FOOT,0x000000A6,L"British thermal units per hour square foot", L"autodesk.unit.unit:britishThermalUnitsPerHourSquareFoot-1.0.1")       \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_HOUR_CUBIC_FOOT,0x000000A7,L"British thermal units per hour cubic foot",   L"autodesk.unit.unit:britishThermalUnitsPerHourCubicFoot-1.0.1")        \
  PARAM_DEF(DUT_TON_OF_REFRIGERATION,                    0x000000A8, L"Tons of refrigeration",                       L"autodesk.unit.unit:tonsOfRefrigeration-1.0.1")                        \
  PARAM_DEF(DUT_CUBIC_FEET_PER_MINUTE_CUBIC_FOOT,        0x000000A9, L"Cubic feet per minute cubic foot",            L"autodesk.unit.unit:cubicFeetPerMinuteCubicFoot-1.0.1")                \
  PARAM_DEF(DUT_LITERS_PER_SECOND_CUBIC_METER,           0x000000AA, L"Liters per second cubic meter",               L"autodesk.unit.unit:litersPerSecondCubicMeter-1.0.1")                  \
  PARAM_DEF(DUT_CUBIC_FEET_PER_MINUTE_TON_OF_REFRIGERATION,0x000000AB,L"Cubic feet per minute ton of refrigeration", L"autodesk.unit.unit:cubicFeetPerMinuteTonOfRefrigeration-1.0.1")       \
  PARAM_DEF(DUT_LITERS_PER_SECOND_KILOWATTS,             0x000000AC, L"Liters per second kilowatt",                  L"autodesk.unit.unit:litersPerSecondKilowatt-1.0.1")                    \
  PARAM_DEF(DUT_SQUARE_FEET_PER_TON_OF_REFRIGERATION,    0x000000AD, L"Square feet per ton of refrigeration",        L"autodesk.unit.unit:squareFeetPerTonOfRefrigeration-1.0.1")            \
  PARAM_DEF(DUT_SQUARE_METERS_PER_KILOWATTS,             0x000000AE, L"Square meters per kilowatt",                  L"autodesk.unit.unit:squareMetersPerKilowatt-1.0.1")                    \
  PARAM_DEF(DUT_CURRENCY,                                0x000000AF, L"Currency",                                    L"autodesk.unit.unit:currency-1.0.0")                                   \
  PARAM_DEF(DUT_LUMENS_PER_WATT,                         0x000000B0, L"Lumens per watt",                             L"autodesk.unit.unit:lumensPerWatt-1.0.1")                              \
  PARAM_DEF(DUT_SQUARE_FEET_PER_THOUSAND_BRITISH_THERMAL_UNITS_PER_HOUR,0x000000B1,L"Square feet per thousand British thermal units per hour",L"autodesk.unit.unit:squareFeetPer1000BritishThermalUnitsPerHour-1.0.1")\
  PARAM_DEF(DUT_KILONEWTONS_PER_SQUARE_CENTIMETER,       0x000000B2, L"Kilonewtons per square centimeter",           L"autodesk.unit.unit:kilonewtonsPerSquareCentimeter-1.0.1")             \
  PARAM_DEF(DUT_NEWTONS_PER_SQUARE_MILLIMETER,           0x000000B3, L"Newtons per square millimeter",               L"autodesk.unit.unit:newtonsPerSquareMillimeter-1.0.1")                 \
  PARAM_DEF(DUT_KILONEWTONS_PER_SQUARE_MILLIMETER,       0x000000B4, L"Kilonewtons per square millimeter",           L"autodesk.unit.unit:kilonewtonsPerSquareMillimeter-1.0.1")             \
  PARAM_DEF(DUT_RISE_OVER_120_INCHES,                    0x000000B5, L"Rise / 120 inches",                           L"autodesk.unit.unit:riseDividedBy120Inches-1.0.1")                     \
  PARAM_DEF(DUT_1_RATIO,                                 0x000000B6, L"1 : Ratio",                                   L"autodesk.unit.unit:1ToRatio-1.0.1")                                   \
  PARAM_DEF(DUT_RISE_OVER_10_FEET,                       0x000000B7, L"Rise / 10 feet",                              L"autodesk.unit.unit:riseDividedBy10Feet-1.0.1")                        \
  PARAM_DEF(DUT_HOUR_SQUARE_FOOT_FAHRENHEIT_PER_BRITISH_THERMAL_UNIT,0x000000B8,L"Hour square foot degrees Fahrenheit per British thermal unit",L"autodesk.unit.unit:hourSquareFootDegreesFahrenheitPerBritishThermalUnit-1.0.1")\
  PARAM_DEF(DUT_SQUARE_METER_KELVIN_PER_WATT,            0x000000B9, L"Square meter kelvins per watt",               L"autodesk.unit.unit:squareMeterKelvinsPerWatt-1.0.1")                  \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNIT_PER_FAHRENHEIT,     0x000000BA, L"British thermal units per degree Fahrenheit", L"autodesk.unit.unit:britishThermalUnitsPerDegreeFahrenheit-1.0.1")     \
  PARAM_DEF(DUT_JOULES_PER_KELVIN,                       0x000000BB, L"Joules per Kelvin",                           L"autodesk.unit.unit:joulesPerKelvin-1.0.1")                            \
  PARAM_DEF(DUT_KILOJOULES_PER_KELVIN,                   0x000000BC, L"Kilojoules per Kelvin",                       L"autodesk.unit.unit:kilojoulesPerKelvin-1.0.1")                        \
  PARAM_DEF(DUT_KILOGRAMS_MASS,                          0x000000BD, L"Kilograms",                                   L"autodesk.unit.unit:kilograms-1.0.0")                                  \
  PARAM_DEF(DUT_TONNES_MASS,                             0x000000BE, L"Tonnes",                                      L"autodesk.unit.unit:tonnes-1.0.1")                                     \
  PARAM_DEF(DUT_POUNDS_MASS,                             0x000000BF, L"Pounds mass",                                 L"autodesk.unit.unit:poundsMass-1.0.1")                                 \
  PARAM_DEF(DUT_METERS_PER_SECOND_SQUARED,               0x000000C0, L"Meters per second squared",                   L"autodesk.unit.unit:metersPerSecondSquared-1.0.1")                     \
  PARAM_DEF(DUT_KILOMETERS_PER_SECOND_SQUARED,           0x000000C1, L"Kilometers per second squared",               L"autodesk.unit.unit:kilometersPerSecondSquared-1.0.1")                 \
  PARAM_DEF(DUT_INCHES_PER_SECOND_SQUARED,               0x000000C2, L"Inches per second squared",                   L"autodesk.unit.unit:inchesPerSecondSquared-1.0.1")                     \
  PARAM_DEF(DUT_FEET_PER_SECOND_SQUARED,                 0x000000C3, L"Feet per second squared",                     L"autodesk.unit.unit:feetPerSecondSquared-1.0.1")                       \
  PARAM_DEF(DUT_MILES_PER_SECOND_SQUARED,                0x000000C4, L"Miles per second squared",                    L"autodesk.unit.unit:milesPerSecondSquared-1.0.1")                      \
  PARAM_DEF(DUT_FEET_TO_THE_FOURTH_POWER,                0x000000C5, L"Feet to the fourth power",                    L"autodesk.unit.unit:feetToTheFourthPower-1.0.1")                       \
  PARAM_DEF(DUT_INCHES_TO_THE_FOURTH_POWER,              0x000000C6, L"Inches to the fourth power",                  L"autodesk.unit.unit:inchesToTheFourthPower-1.0.1")                     \
  PARAM_DEF(DUT_MILLIMETERS_TO_THE_FOURTH_POWER,         0x000000C7, L"Millimeters to the fourth power",             L"autodesk.unit.unit:millimetersToTheFourthPower-1.0.1")                \
  PARAM_DEF(DUT_CENTIMETERS_TO_THE_FOURTH_POWER,         0x000000C8, L"Centimeters to the fourth power",             L"autodesk.unit.unit:centimetersToTheFourthPower-1.0.1")                \
  PARAM_DEF(DUT_METERS_TO_THE_FOURTH_POWER,              0x000000C9, L"Meters to the fourth power",                  L"autodesk.unit.unit:metersToTheFourthPower-1.0.1")                     \
  PARAM_DEF(DUT_FEET_TO_THE_SIXTH_POWER,                 0x000000CA, L"Feet to the sixth power",                     L"autodesk.unit.unit:feetToTheSixthPower-1.0.1")                        \
  PARAM_DEF(DUT_INCHES_TO_THE_SIXTH_POWER,               0x000000CB, L"Inches to the sixth power",                   L"autodesk.unit.unit:inchesToTheSixthPower-1.0.1")                      \
  PARAM_DEF(DUT_MILLIMETERS_TO_THE_SIXTH_POWER,          0x000000CC, L"Millimeters to the sixth power",              L"autodesk.unit.unit:millimetersToTheSixthPower-1.0.1")                 \
  PARAM_DEF(DUT_CENTIMETERS_TO_THE_SIXTH_POWER,          0x000000CD, L"Centimeters to the sixth power",              L"autodesk.unit.unit:centimetersToTheSixthPower-1.0.1")                 \
  PARAM_DEF(DUT_METERS_TO_THE_SIXTH_POWER,               0x000000CE, L"Meters to the sixth power",                   L"autodesk.unit.unit:metersToTheSixthPower-1.0.1")                      \
  PARAM_DEF(DUT_SQUARE_FEET_PER_FOOT,                    0x000000CF, L"Square feet per foot",                        L"autodesk.unit.unit:squareFeetPerFoot-1.0.1")                          \
  PARAM_DEF(DUT_SQUARE_INCHES_PER_FOOT,                  0x000000D0, L"Square inches per foot",                      L"autodesk.unit.unit:squareInchesPerFoot-1.0.1")                        \
  PARAM_DEF(DUT_SQUARE_MILLIMETERS_PER_METER,            0x000000D1, L"Square millimeters per meter",                L"autodesk.unit.unit:squareMillimetersPerMeter-1.0.1")                  \
  PARAM_DEF(DUT_SQUARE_CENTIMETERS_PER_METER,            0x000000D2, L"Square centimeters per meter",                L"autodesk.unit.unit:squareCentimetersPerMeter-1.0.1")                  \
  PARAM_DEF(DUT_SQUARE_METERS_PER_METER,                 0x000000D3, L"Square meters per meter",                     L"autodesk.unit.unit:squareMetersPerMeter-1.0.1")                       \
  PARAM_DEF(DUT_KILOGRAMS_MASS_PER_METER,                0x000000D4, L"Kilograms per meter",                         L"autodesk.unit.unit:kilogramsPerMeter-1.0.1")                          \
  PARAM_DEF(DUT_POUNDS_MASS_PER_FOOT,                    0x000000D5, L"Pounds mass per foot",                        L"autodesk.unit.unit:poundsMassPerFoot-1.0.1")                          \
  PARAM_DEF(DUT_RADIANS,                                 0x000000D6, L"Radians",                                     L"autodesk.unit.unit:radians-1.0.0")                                    \
  PARAM_DEF(DUT_GRADS,                                   0x000000D7, L"Gradians",                                    L"autodesk.unit.unit:gradians-1.0.1")                                   \
  PARAM_DEF(DUT_RADIANS_PER_SECOND,                      0x000000D8, L"Radians per second",                          L"autodesk.unit.unit:radiansPerSecond-1.0.1")                           \
  PARAM_DEF(DUT_MILISECONDS,                             0x000000D9, L"Milliseconds",                                L"autodesk.unit.unit:milliseconds-1.0.1")                               \
  PARAM_DEF(DUT_SECONDS,                                 0x000000DA, L"Seconds",                                     L"autodesk.unit.unit:seconds-1.0.0")                                    \
  PARAM_DEF(DUT_MINUTES,                                 0x000000DB, L"Minutes",                                     L"autodesk.unit.unit:minutes-1.0.1")                                    \
  PARAM_DEF(DUT_HOURS,                                   0x000000DC, L"Hours",                                       L"autodesk.unit.unit:hours-1.0.1")                                      \
  PARAM_DEF(DUT_KILOMETERS_PER_HOUR,                     0x000000DD, L"Kilometers per hour",                         L"autodesk.unit.unit:kilometersPerHour-1.0.1")                          \
  PARAM_DEF(DUT_MILES_PER_HOUR,                          0x000000DE, L"Miles per hour",                              L"autodesk.unit.unit:milesPerHour-1.0.1")                               \
  PARAM_DEF(DUT_KILOJOULES,                              0x000000DF, L"Kilojoules",                                  L"autodesk.unit.unit:kilojoules-1.0.1")                                 \
  PARAM_DEF(DUT_KILOGRAMS_MASS_PER_SQUARE_METER,         0x000000E0, L"Kilograms per square meter",                  L"autodesk.unit.unit:kilogramsPerSquareMeter-1.0.1")                    \
  PARAM_DEF(DUT_POUNDS_MASS_PER_SQUARE_FOOT,             0x000000E1, L"Pounds mass per square foot",                 L"autodesk.unit.unit:poundsMassPerSquareFoot-1.0.1")                    \
  PARAM_DEF(DUT_WATTS_PER_METER_KELVIN,                  0x000000E2, L"Watts per meter kelvin",                      L"autodesk.unit.unit:wattsPerMeterKelvin-1.0.1")                        \
  PARAM_DEF(DUT_JOULES_PER_GRAM_CELSIUS,                 0x000000E3, L"Joules per gram degree Celsius",              L"autodesk.unit.unit:joulesPerGramDegreeCelsius-1.0.1")                 \
  PARAM_DEF(DUT_JOULES_PER_GRAM,                         0x000000E4, L"Joules per gram",                             L"autodesk.unit.unit:joulesPerGram-1.0.1")                              \
  PARAM_DEF(DUT_NANOGRAMS_PER_PASCAL_SECOND_SQUARE_METER,0x000000E5, L"Nanograms per pascal second square meter",    L"autodesk.unit.unit:nanogramsPerPascalSecondSquareMeter-1.0.1")        \
  PARAM_DEF(DUT_OHM_METERS,                              0x000000E6, L"Ohm meters",                                  L"autodesk.unit.unit:ohmMeters-1.0.1")                                  \
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_HOUR_FOOT_FAHRENHEIT,0x000000E7,L"British thermal units per hour foot degree Fahrenheit",L"autodesk.unit.unit:britishThermalUnitsPerHourFootDegreeFahrenheit-1.0.1")\
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_POUND_FAHRENHEIT,0x000000E8,L"British thermal units per pound degree Fahrenheit",L"autodesk.unit.unit:britishThermalUnitsPerPoundDegreeFahrenheit-1.0.1")\
  PARAM_DEF(DUT_BRITISH_THERMAL_UNITS_PER_POUND,         0x000000E9, L"British thermal units per pound",             L"autodesk.unit.unit:britishThermalUnitsPerPound-1.0.1")                \
  PARAM_DEF(DUT_GRAINS_PER_HOUR_SQUARE_FOOT_INCH_MERCURY,0x000000EA, L"Grains per hour square foot inch mercury",    L"autodesk.unit.unit:grainsPerHourSquareFootInchMercury-1.0.1")         \
  PARAM_DEF(DUT_PER_MILLE,                               0x000000EB, L"Per mille",                                   L"autodesk.unit.unit:perMille-1.0.1")                                   \
  PARAM_DEF(DUT_DECIMETERS,                              0x000000EC, L"Decimeters",                                  L"autodesk.unit.unit:decimeters-1.0.1")                                 \
  PARAM_DEF(DUT_JOULES_PER_KILOGRAM_CELSIUS,             0x000000ED, L"Joules per kilogram degree Celsius",          L"autodesk.unit.unit:joulesPerKilogramDegreeCelsius-1.0.1")             \
  PARAM_DEF(DUT_MICROMETERS_PER_METER_CELSIUS,           0x000000EE, L"Micrometers per meter degree Celsius",        L"autodesk.unit.unit:micrometersPerMeterDegreeCelsius-1.0.1")           \
  PARAM_DEF(DUT_MICROINCHES_PER_INCH_FAHRENHEIT,         0x000000EF, L"Microinches per inch degree Fahrenheit",      L"autodesk.unit.unit:microinchesPerInchDegreeFahrenheit-1.0.1")         \
  PARAM_DEF(DUT_USTONNES_MASS,                           0x000000F0, L"US tonnes mass",                              L"autodesk.unit.unit:usTonnesMass-1.0.1")                               \
  PARAM_DEF(DUT_USTONNES_FORCE,                          0x000000F1, L"US tonnes force",                             L"autodesk.unit.unit:usTonnesForce-1.0.1")                              \
  PARAM_DEF(DUT_LITERS_PER_MINUTE,                       0x000000F2, L"Liters per minute",                           L"autodesk.unit.unit:litersPerMinute-1.0.1")                            \
  PARAM_DEF(DUT_FAHRENHEIT_DIFFERENCE,                   0x000000F3, L"Fahrenheit interval",                         L"autodesk.unit.unit:fahrenheitInterval-1.0.1")                         \
  PARAM_DEF(DUT_CELSIUS_DIFFERENCE,                      0x000000F4, L"Celsius interval",                            L"autodesk.unit.unit:celsiusInterval-1.0.1")                            \
  PARAM_DEF(DUT_KELVIN_DIFFERENCE,                       0x000000F5, L"Kelvin interval",                             L"autodesk.unit.unit:kelvinInterval-1.0.0")                             \
  PARAM_DEF(DUT_RANKINE_DIFFERENCE,                      0x000000F6, L"Rankine interval",                            L"autodesk.unit.unit:rankineInterval-1.0.1")                            \
  PARAM_DEF(DUT_STATIONING_METERS,                       0x000000F7, L"Meters",                                      L"autodesk.unit.unit:stationingMeters-1.0.0")                           \
  PARAM_DEF(DUT_STATIONING_FEET,                         0x000000F8, L"Feet",                                        L"autodesk.unit.unit:stationingFeet-1.0.0")                             \
  PARAM_DEF(DUT_CUBIC_FEET_PER_HOUR,                     0x000000F9, L"Cubic feet per hour",                         L"autodesk.unit.unit:cubicFeetPerHour-1.0.0")                           \
  PARAM_DEF(DUT_LITERS_PER_HOUR,                         0x000000FA, L"Liters per hour",                             L"autodesk.unit.unit:litersPerHour-1.0.1")                              \
  PARAM_DEF(DUT_RATIO_TO_1,                              0x000000FB, L"Ratio : 1",                                   L"autodesk.unit.unit:ratioTo1-1.0.0")                                   \
  PARAM_DEF(DUT_DECIMAL_US_SURVEY_FEET,                  0x0000025D, L"US survey feet",                              L"autodesk.unit.unit:usSurveyFeet-1.0.0")                               \

ODBM_ENUMERATION(DisplayUnitType, ODBM_DISPLAYUNITTYPE)

#endif // _BM_DISPLAYUNITTYPE_H_
