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
#ifndef __BM_BUILTINPARAMETERGROUP_H__
#define __BM_BUILTINPARAMETERGROUP_H__

#include "Common/BmExtendedEnum.h"

// AV: Please pay attention that this enum was taken from version 2016 and can
// be not full

#define ODBM_BUILTINPARAMETERGROUP(PARAM_DEF, ...)                                                                 \
/*****************************************************************************************************************/\
/*DEF(NAME,                                              VALUE,    DEFAULT LABEL)                                */\
/*****************************************************************************************************************/\
  PARAM_DEF(PG_IDENTITY_DATA,                            -5000100, L"Identity Data")                               \
  PARAM_DEF(PG_GEOMETRY,                                 -5000101, L"Dimensions")                                  \
  PARAM_DEF(PG_CONSTRUCTION,                             -5000103, L"Construction")                                \
  PARAM_DEF(PG_GRAPHICS,                                 -5000104, L"Graphics")                                    \
  PARAM_DEF(PG_MATERIALS,                                -5000105, L"Materials and Finishes")                      \
  PARAM_DEF(PG_UNDERLAY,                                 -5000106, L"Underlay")                                    \
  PARAM_DEF(PG_STAIR_TREADS,                             -5000107, L"Treads")                                      \
  PARAM_DEF(PG_STAIR_RISERS,                             -5000108, L"Risers")                                      \
  PARAM_DEF(PG_STAIR_STRINGERS,                          -5000109, L"Stringers")                                   \
  PARAM_DEF(PG_ELECTRICAL,                               -5000110, L"Electrical Engineering")                      \
  PARAM_DEF(PG_PLUMBING,                                 -5000111, L"Plumbing")                                    \
  PARAM_DEF(PG_STRUCTURAL,                               -5000112, L"Structural")                                  \
  PARAM_DEF(PG_MECHANICAL,                               -5000113, L"Mechanical")                                  \
  PARAM_DEF(PG_PHASING,                                  -5000114, L"Phasing")                                     \
  PARAM_DEF(PG_CONSTRAINTS,                              -5000119, L"Constraints")                                 \
  PARAM_DEF(PG_PATTERN,                                  -5000120, L"Pattern")                                     \
  PARAM_DEF(PG_VIEW_EXTENTS,                             -5000121, L"Extents")                                     \
  PARAM_DEF(PG_VIEW_CAMERA,                              -5000122, L"Camera")                                      \
  PARAM_DEF(PG_TEXT,                                     -5000123, L"Text")                                        \
  PARAM_DEF(PG_ELECTRICAL_LIGHTING,                      -5000124, L"Electrical - Lighting")                       \
  PARAM_DEF(PG_ELECTRICAL_LOADS,                         -5000125, L"Electrical - Loads")                          \
  PARAM_DEF(PG_MECHANICAL_LOADS,                         -5000126, L"Mechanical - Loads")                          \
  PARAM_DEF(PG_MECHANICAL_AIRFLOW,                       -5000127, L"Mechanical - Flow")                           \
  PARAM_DEF(PG_STRUCTURAL_ANALYSIS,                      -5000128, L"Structural Analysis")                         \
  PARAM_DEF(PG_ENERGY_ANALYSIS,                          -5000129, L"Energy Analysis")                             \
  PARAM_DEF(PG_AELECTRICAL,                              -5000130, L"Electrical")                                  \
  PARAM_DEF(PG_IFC,                                      -5000131, L"IFC Parameters")                              \
  PARAM_DEF(PG_CURTAIN_GRID_VERT,                        -5000133, L"Vertical Grid")                               \
  PARAM_DEF(PG_CURTAIN_GRID_1,                           -5000134, L"Grid 1")                                      \
  PARAM_DEF(PG_CURTAIN_GRID_HORIZ,                       -5000135, L"Horizontal Grid")                             \
  PARAM_DEF(PG_CURTAIN_GRID_2,                           -5000136, L"Grid 2")                                      \
  PARAM_DEF(PG_CURTAIN_MULLION_VERT,                     -5000137, L"Vertical Mullions")                           \
  PARAM_DEF(PG_CURTAIN_MULLION_1,                        -5000138, L"Grid 1 Mullions")                             \
  PARAM_DEF(PG_CURTAIN_MULLION_HORIZ,                    -5000139, L"Horizontal Mullions")                         \
  PARAM_DEF(PG_CURTAIN_MULLION_2,                        -5000140, L"Grid 2 Mullions")                             \
  PARAM_DEF(PG_CURTAIN_GRID,                             -5000141, L"Grid")                                        \
  PARAM_DEF(PG_REBAR_SYSTEM_LAYERS,                      -5000143, L"Layers")                                      \
  PARAM_DEF(PG_REBAR_ARRAY,                              -5000144, L"Rebar Set")                                   \
  PARAM_DEF(PG_ANALYTICAL_MODEL,                         -5000145, L"Analytical Model")                            \
  PARAM_DEF(PG_TRANSLATION_IN,                           -5000146, L"Translation in")                              \
  PARAM_DEF(PG_ROTATION_ABOUT,                           -5000147, L"Rotation about")                              \
  PARAM_DEF(PG_FIRE_PROTECTION,                          -5000148, L"Fire Protection")                             \
  PARAM_DEF(PG_TITLE,                                    -5000149, L"Title Text")                                  \
  PARAM_DEF(PG_TRUSS_FAMILY_VERT_WEB,                    -5000150, L"Vertical Webs")                               \
  PARAM_DEF(PG_TRUSS_FAMILY_DIAG_WEB,                    -5000151, L"Diagonal Webs")                               \
  PARAM_DEF(PG_TRUSS_FAMILY_TOP_CHORD,                   -5000152, L"Top Chords")                                  \
  PARAM_DEF(PG_TRUSS_FAMILY_BOTTOM_CHORD,                -5000153, L"Bottom Chords")                               \
  PARAM_DEF(PG_PROFILE,                                  -5000154, L"Profile")                                     \
  PARAM_DEF(PG_PROFILE_1,                                -5000155, L"Profile 1")                                   \
  PARAM_DEF(PG_PROFILE_2,                                -5000156, L"Profile 2")                                   \
  PARAM_DEF(PG_GREEN_BUILDING,                           -5000157, L"Green Building Properties")                   \
  PARAM_DEF(PG_PATTERN_APPLICATION,                      -5000158, L"Pattern Application")                         \
  PARAM_DEF(PG_LIGHT_PHOTOMETRICS,                       -5000159, L"Photometrics")                                \
  PARAM_DEF(PG_SLAB_SHAPE_EDIT,                          -5000160, L"Slab Shape Edit")                             \
  PARAM_DEF(PG_ANALYSIS_RESULTS,                         -5000161, L"Analysis Results")                            \
  PARAM_DEF(PG_DISPLAY,                                  -5000162, L"Display")                                     \
  PARAM_DEF(PG_CURTAIN_GRID_U,                           -5000163, L"U Grid")                                      \
  PARAM_DEF(PG_CURTAIN_GRID_V,                           -5000164, L"V Grid")                                      \
  PARAM_DEF(PG_ADSK_MODEL_PROPERTIES,                    -5000165, L"Model Properties")                            \
  PARAM_DEF(PG_AREA,                                     -5000166, L"Area")                                        \
  PARAM_DEF(PG_CONCEPTUAL_ENERGY_DATA,                   -5000167, L"Conceptual Energy Data")                      \
  PARAM_DEF(PG_FITTING,                                  -5000168, L"Fittings")                                    \
  PARAM_DEF(PG_ENERGY_ANALYSIS_DETAILED_AND_CONCEPTUAL_MODELS,-5000169,L"Essential")                               \
  PARAM_DEF(PG_ENERGY_ANALYSIS_DETAILED_MODEL,           -5000170, L"Detailed Model")                              \
  PARAM_DEF(PG_ENERGY_ANALYSIS_CONCEPTUAL_MODEL,         -5000171, L"Energy Analytical Model")                     \
  PARAM_DEF(PG_FLEXIBLE,                                 -5000172, L"Adaptive Component")                          \
  PARAM_DEF(PG_GENERAL,                                  -5000173, L"General")                                     \
  PARAM_DEF(PG_ELECTRICAL_CIRCUITING,                    -5000174, L"Electrical - Circuiting")                     \
  PARAM_DEF(PG_DATA,                                     -5000175, L"Data")                                        \
  PARAM_DEF(PG_CONCEPTUAL_ENERGY_DATA_BUILDING_SERVICES, -5000176, L"Energy Model - Building Services")            \
  PARAM_DEF(PG_RAILING_SYSTEM_FAMILY_TOP_RAIL,           -5000177, L"Top Rail")                                    \
  PARAM_DEF(PG_RAILING_SYSTEM_FAMILY_HANDRAILS,          -5000178, L"Handrail 1")                                  \
  PARAM_DEF(PG_RAILING_SYSTEM_FAMILY_SEGMENT_PATTERN,    -5000179, L"Segment Pattern (default)")                   \
  PARAM_DEF(PG_RAILING_SYSTEM_SEGMENT_PATTERN_REPEAT,    -5000180, L"Pattern Repeat")                              \
  PARAM_DEF(PG_RAILING_SYSTEM_SEGMENT_PATTERN_REMAINDER, -5000181, L"Pattern Remainder")                           \
  PARAM_DEF(PG_RAILING_SYSTEM_SEGMENT_POSTS,             -5000182, L"Posts")                                       \
  PARAM_DEF(PG_RAILING_SYSTEM_SEGMENT_U_GRID,            -5000183, L"U Grid")                                      \
  PARAM_DEF(PG_RAILING_SYSTEM_SEGMENT_V_GRID,            -5000184, L"V Grid")                                      \
  PARAM_DEF(PG_SUPPORT,                                  -5000185, L"Supports")                                    \
  PARAM_DEF(PG_VISIBILITY,                               -5000186, L"Visibility")                                  \
  PARAM_DEF(PG_OVERALL_LEGEND,                           -5000187, L"Overall Legend")                              \
  PARAM_DEF(PG_INSULATION,                               -5000188, L"Insulation")                                  \
  PARAM_DEF(PG_LINING,                                   -5000189, L"Lining")                                      \
  PARAM_DEF(PG_SYSTEMTYPE_RISEDROP,                      -5000190, L"Rise / Drop")                                 \
  PARAM_DEF(PG_ANALYTICAL_ALIGNMENT,                     -5000191, L"Analytical Alignment")                        \
  PARAM_DEF(PG_ANALYTICAL_PROPERTIES,                    -5000192, L"Analytical Properties")                       \
  PARAM_DEF(PG_NODES,                                    -5000193, L"Nodes")                                       \
  PARAM_DEF(PG_LENGTH,                                   -5000194, L"Length")                                      \
  PARAM_DEF(PG_SPLIT_PROFILE_DIMENSIONS,                 -5000195, L"Dimensions     (linear units or % of thickness)")\
  PARAM_DEF(PG_STAIRS_CALCULATOR_RULES,                  -5000196, L"Calculation Rules")                           \
  PARAM_DEF(PG_STAIRS_TREADS_RISERS,                     -5000197, L"Threads/Risers")                              \
  PARAM_DEF(PG_TERMINTATION,                             -5000198, L"Terminations")                                \
  PARAM_DEF(PG_RAILING_SYSTEM_SECONDARY_FAMILY_HANDRAILS,-5000199, L"Handrail 2")                                  \
  PARAM_DEF(PG_STAIRS_OPEN_END_CONNECTION,               -5000200, L"End Connection")                              \
  PARAM_DEF(PG_STAIRS_SUPPORTS,                          -5000201, L"Supports")                                    \
  PARAM_DEF(PG_STAIRS_WINDERS,                           -5000202, L"Winders")                                     \
  PARAM_DEF(PG_CONTINUOUSRAIL_BEGIN_BOTTOM_EXTENSION,    -5000203, L"Extension (Beginning/Bottom)")                \
  PARAM_DEF(PG_CONTINUOUSRAIL_END_TOP_EXTENSION,         -5000204, L"Extension (End/Top)")                         \
  PARAM_DEF(PG_SEGMENTS_FITTINGS,                        -5000205, L"Segments and Fittings")                       \
  PARAM_DEF(PG_DIVISION_GEOMETRY,                        -5000206, L"Division Geometry")                           \
  PARAM_DEF(PG_GEOMETRY_POSITIONING,                     -5000207, L"Geometric Position")                          \
  PARAM_DEF(PG_REFERENCE,                                -5000208, L"Reference")                                   \
  PARAM_DEF(PG_FABRICATION_PRODUCT_DATA,                 -5000210, L"Fabrication Product Data")                    \
  PARAM_DEF(PG_FORCES,                                   -5000211, L"Forces")                                      \
  PARAM_DEF(PG_MOMENTS,                                  -5000212, L"Moments")                                     \
  PARAM_DEF(PG_PRIMARY_END,                              -5000213, L"Primary End")                                 \
  PARAM_DEF(PG_SECONDARY_END,                            -5000214, L"Secondary End")                               \
  PARAM_DEF(PG_RELEASES_MEMBER_FORCES,                   -5000216, L"Releases / Member Forces")                    \
  PARAM_DEF(PG_ENERGY_ANALYSIS_ADVANCED,                 -5000217, L"Advanced")                                    \
  PARAM_DEF(PG_COUPLER_ARRAY,                            -5000218, L"Set")                                         \
  PARAM_DEF(PG_ENERGY_ANALYSIS_BUILDING_DATA,            -5000219, L"Building Data")                               \
  PARAM_DEF(PG_ENERGY_ANALYSIS_ROOM_SPACE_DATA,          -5000220, L"Room/Space Data")                             \
  PARAM_DEF(PG_ENERGY_ANALYSIS_BLDG_CONS_MTL_THERMAL_PROPS,-5000221,L"Material Thermal Properties")                \
  PARAM_DEF(PG_STRUCTURAL_SECTION_GEOMETRY,              -5000225, L"Structural Section Geometry")                 \
  PARAM_DEF(PG_GEO_LOCATION,                             -5000226, L"Geolocation")                                 \
  PARAM_DEF(PG_ROUTE_ANALYSIS,                           -5000227, L"Route Analysis")                              \

ODBM_BUILTIN_ENUMERATION(TB_COMMON_EXPORT, BuiltInParameterGroup, ODBM_BUILTINPARAMETERGROUP)

#endif //__BM_BUILTINPARAMETERGROUP_H__
