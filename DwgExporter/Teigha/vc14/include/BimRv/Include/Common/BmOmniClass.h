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

#ifndef __BM_OMNI_CLASS_H__
#define __BM_OMNI_CLASS_H__

#define ODBM_OMBI_CLASSES(DEF, ...)                                            \
  DEF(L"23.10.00.00", L"Site Products")                                          \
  DEF(L"23.10.05.00", L"Ground Anchorages")                                      \
  DEF(L"23.10.05.10", L"Retaining/Stabilizing Ground Anchors")                   \
  DEF(L"23.10.05.10.11", L"Components")                                          \
  DEF(L"23.10.05.10.11.11", L"Anchor Heads")                                     \
  DEF(L"23.10.05.10.11.12", L"Tendons")                                          \
  DEF(L"23.10.05.10.14", L"Grouted Anchors")                                     \
  DEF(L"23.10.05.10.17", L"Plate Anchors")                                       \
  DEF(L"23.10.05.10.21", L"Rock Bolts, Rock Anchors")                            \
  DEF(L"23.10.05.10.24", L"Anchor Tiebacks")                                     \
  DEF(L"23.10.05.20", L"Earth Reinforcement Anchors")                            \
  DEF(L"23.10.05.20.11", L"Soil Nails")                                          \
  DEF(L"23.10.05.99", L"Other Ground Anchorages")                                \
  DEF(L"23.10.10.00", L"Ground Improvement Products")                            \
  DEF(L"23.10.10.12", L"Land/Field Drainage")                                    \
  DEF(L"23.10.10.12.10", L"Piped Drainage")                                      \
  DEF(L"23.10.10.12.10.11", L"Land Drainage Pipes")                              \
  DEF(L"23.10.10.12.20", L"Drainage Blocks")                                     \
  DEF(L"23.10.20.00", L"Retention Structures")                                   \
  DEF(L"23.10.20.11", L"Sheet Piles")                                            \
  DEF(L"23.10.20.14", L"Retaining Walls")                                        \
  DEF(L"23.10.20.14.10", L"Diaphragm Walls")                                     \
  DEF(L"23.10.20.14.10.11", L"Slurry Wall Membranes")                            \
  DEF(L"23.10.20.14.20", L"Continuous Retaining Walls")                          \
  DEF(L"23.10.20.14.30", L"Crib Walls")                                          \
  DEF(L"23.15.10.00", L"Pavements")                                              \
  DEF(L"23.15.10.11", L"Roadways and Runways")                                   \
  DEF(L"23.15.10.11.11", L"Complete Roadway and Runways")                        \
  DEF(L"23.15.10.11.11.11", L"Portable Roadways")                                \
  DEF(L"23.15.10.11.11.14", L"Helicopter Landing Pads")                          \
  DEF(L"23.15.10.11.14", L"Roadway and Runway Surfacing")                        \
  DEF(L"23.15.10.11.14.11", L"Antiskid Texturing")                               \
  DEF(L"23.15.10.11.14.14", L"Paving Blocks, Slabs")                             \
  DEF(L"23.15.10.11.14.14.11", L"Unit Pavers")                                   \
  DEF(L"23.15.10.11.14.14.11.11", L"Asphalt Block Pavers")                       \
  DEF(L"23.15.10.11.14.14.11.14", L"Brick Pavers")                               \
  DEF(L"23.15.10.11.14.14.11.17", L"Interlocking Precast Concrete Pavers")       \
  DEF(L"23.15.10.11.14.14.11.21", L"Precast Concrete Pavers")                    \
  DEF(L"23.15.10.11.14.14.11.24", L"Pressed Pavers")                             \
  DEF(L"23.15.10.11.14.14.11.27", L"Stone Pavers")                               \
  DEF(L"23.15.10.11.14.17", L"Continuous Surface Paving's")                      \
  DEF(L"23.15.10.11.17", L"Roadway and Runway Drainage")                         \
  DEF(L"23.15.10.11.17.11", L"Culverts")                                         \
  DEF(L"23.15.10.11.17.11.11", L"Pipe Culverts")                                 \
  DEF(L"23.15.10.11.17.11.11.11", L"Metal Pipe \u2013 Arch Culverts")                 \
  DEF(L"23.15.10.11.17.11.14", L"Concrete Culverts")                             \
  DEF(L"23.15.10.11.17.11.14.11", L"Concrete Arch Buried Bridge")                \
  DEF(L"23.15.10.11.17.11.14.14", L"Concrete Arch Culverts")                     \
  DEF(L"23.15.10.11.17.11.14.17", L"Concrete Box Culverts")                      \
  DEF(L"23.15.10.11.17.11.14.21", L"Concrete Rigid Frame Culverts")              \
  DEF(L"23.15.10.11.17.14", L"Catch Basins")                                     \
  DEF(L"23.15.10.11.17.17", L"Channels")                                         \
  DEF(L"23.15.10.11.17.21", L"Cleanouts")                                        \
  DEF(L"23.15.10.11.21", L"Traffic Safety Barriers and Protections")             \
  DEF(L"23.15.10.11.21.11", L"Safety Barriers")                                  \
  DEF(L"23.15.10.11.21.11.11",                                                  \
      L"Crash Barriers ( including Impact Attenuating Devices)")                \
  DEF(L"23.15.10.11.21.11.14", L"Median Barriers")                               \
  DEF(L"23.15.10.11.21.11.17", L"Guardrails")                                    \
  DEF(L"23.15.10.11.21.14", L"Noise Barriers")                                   \
  DEF(L"23.15.10.11.21.17", L"Traffic Barriers")                                 \
  DEF(L"23.15.10.11.21.17.11", L"Delineators")                                   \
  DEF(L"23.15.10.11.21.21", L"Traffic Control")                                  \
  DEF(L"23.15.10.11.21.21.11", L"Speed Bumps")                                   \
  DEF(L"23.15.10.11.21.24", L"Curbs and Gutters")                                \
  DEF(L"23.15.10.11.21.27", L"Cattle Guards")                                    \
  DEF(L"23.15.10.14", L"Roadway Monitoring and Control")                         \
  DEF(L"23.15.10.14.11", L"Roadway Signage,")                                    \
  DEF(L"23.15.10.14.14", L"Roadway Markers")                                     \
  DEF(L"23.15.10.14.14.11", L"Roadway Surface Markings")                         \
  DEF(L"23.15.10.14.14.14", L"Roadway Reflectors")                               \
  DEF(L"23.15.10.14.14.17", L"Traffic Cones")                                    \
  DEF(L"23.15.10.14.17", L"Traffic Signals")                                     \
  DEF(L"23.15.10.14.21", L"Traffic Monitoring")                                  \
  DEF(L"23.15.10.14.21.11", L"Roadway Mirrors")                                  \
  DEF(L"23.15.10.14.21.14", L"Cameras")                                          \
  DEF(L"23.15.10.14.21.17", L"Detectors and Sensors")                            \
  DEF(L"23.15.10.14.24", L"Parking Controls")                                    \
  DEF(L"23.15.10.14.24.11", L"Parking Meters")                                   \
  DEF(L"23.15.10.14.24.14", L"Ticket Dispensers")                                \
  DEF(L"23.15.10.14.24.17", L"Coin Machine Units")                               \
  DEF(L"23.15.10.14.24.21", L"Key and Card Control Units")                       \
  DEF(L"23.15.10.14.24.24", L"Parking Gates")                                    \
  DEF(L"23.15.30.21", L"Solid Waste Disposal Plant Products")                    \
  DEF(L"23.15.30.21.11", L"Bins")                                                \
  DEF(L"23.15.30.21.14", L"Chutes and Collectors")                               \
  DEF(L"23.15.30.21.17", L"Pneumatic Waste Equipment")                           \
  DEF(L"23.15.30.21.24", L"Crusher Plant")                                       \
  DEF(L"23.15.30.21.24.11", L"Waste Compactors and Destructors")                 \
  DEF(L"23.15.30.24", L"Pollution Monitoring and Control")                       \
  DEF(L"23.15.30.24.11", L"Air Pollution Monitoring Systems")                    \
  DEF(L"23.15.30.24.14", L"Water Pollution Monitoring Systems")                  \
  DEF(L"23.15.30.27", L"Storage Constructions")                                  \
  DEF(L"23.15.30.27.11", L"Tanks, Reservoirs")                                   \
  DEF(L"23.15.30.27.11.11", L"Elevated Storage Tanks")                           \
  DEF(L"23.15.30.27.11.14", L"Ground Storage Tanks")                             \
  DEF(L"23.15.30.27.11.17", L"Underground Storage Tanks")                        \
  DEF(L"23.15.30.27.11.21", L"Portable Storage Tanks")                           \
  DEF(L"23.15.30.27.11.24", L"Tank Lining")                                      \
  DEF(L"23.15.30.27.21", L"Gas Tanks and Gasholders")                            \
  DEF(L"23.15.99.00", L"Other Utility and Transportation Construction Products") \
  DEF(L"23.20.00.00",                                                           \
      L"General Purpose Construction Accessories and Surfacing Products")       \
  DEF(L"23.20.15.00", L"Mixtures")                                               \
  DEF(L"23.20.15.11", L"Concrete")                                               \
  DEF(L"23.20.15.11.11", L"Cementitious Concrete")                               \
  DEF(L"23.20.15.11.14", L"Resinous Concrete")                                   \
  DEF(L"23.20.15.11.17", L"Hydrocarbon Concrete")                                \
  DEF(L"23.20.15.11.21", L"Low Density Concrete")                                \
  DEF(L"23.20.15.14", L"Mortars")                                                \
  DEF(L"23.20.15.14.11", L"Portland Cement-Lime Mortars")                        \
  DEF(L"23.20.15.14.14", L"Masonry Cement Mortars")                              \
  DEF(L"23.20.15.14.17", L"Mortar Cements")                                      \
  DEF(L"23.20.15.14.21", L"Gypsum Based Mortars")                                \
  DEF(L"23.20.15.14.24", L"Resinous Mortar")                                     \
  DEF(L"23.20.15.14.27", L"Chemical-Resistant Mortar")                           \
  DEF(L"23.20.15.14.31", L"Refractory Mortar")                                   \
  DEF(L"23.20.15.14.34", L"Premixed Mortar")                                     \
  DEF(L"23.20.15.14.37", L"Surface Bonding Mortar")                              \
  DEF(L"23.20.15.14.41", L"Mortar Pigments")                                     \
  DEF(L"23.20.15.17", L"Grouts")                                                 \
  DEF(L"23.20.15.17.11", L"Concrete Grout")                                      \
  DEF(L"23.20.15.17.11.11", L"Shrink-Resistant Concrete Grout")                  \
  DEF(L"23.20.15.17.11.14", L"Catalyzed Metallic Concrete Grout")                \
  DEF(L"23.20.15.17.11.17", L"Epoxy Concrete Grout")                             \
  DEF(L"23.20.15.17.11.21", L"Nonmetallic Concrete Grout")                       \
  DEF(L"23.20.15.17.14", L"Masonry Grout")                                       \
  DEF(L"23.20.15.17.14.11", L"Chemical-Resistant Masonry Grout")                 \
  DEF(L"23.20.20.00", L"Profiles")                                               \
  DEF(L"23.20.20.11", L"Rigid Profiles")                                         \
  DEF(L"23.20.20.11.11", L"Ferrous Metal Rigid Profiles")                        \
  DEF(L"23.20.20.11.14", L"Non-Ferrous Metal Rigid Profiles")                    \
  DEF(L"23.20.20.11.17", L"Wood Rigid Profiles")                                 \
  DEF(L"23.20.20.11.17.11", L"Lumber Rigid Profiles")                            \
  DEF(L"23.20.20.11.17.11.11", L"Hardwood Rigid Profiles")                       \
  DEF(L"23.20.20.11.17.11.14", L"Softwood Rigid Profiles")                       \
  DEF(L"23.20.20.11.17.11.17", L"Laminated Rigid Profiles")                      \
  DEF(L"23.20.20.11.17.14", L"Heavy Timber Rigid Profiles")                      \
  DEF(L"23.20.20.11.21", L"Plastic Rigid Profiles")                              \
  DEF(L"23.20.20.11.24", L"Composite Rigid Profiles")                            \
  DEF(L"23.20.20.14", L"Flexible Profiles")                                      \
  DEF(L"23.20.20.14.11", L"Plastic Flexible Profiles")                           \
  DEF(L"23.20.20.14.14", L"Rubber Flexible Profiles")                            \
  DEF(L"23.20.20.14.14.11", L"Natural Rubber Flexible Profiles")                 \
  DEF(L"23.20.20.14.14.14", L"Butyl Flexible Profiles")                          \
  DEF(L"23.20.20.14.14.17", L"Neoprene Flexible Profiles")                       \
  DEF(L"23.20.20.14.14.21", L"Silicone Flexible Profiles")                       \
  DEF(L"23.20.20.14.14.24", L"Polysulfide Flexible Profiles")                    \
  DEF(L"23.20.20.17", L"Lath")                                                   \
  DEF(L"23.20.20.17.11", L"Gypsum Lath")                                         \
  DEF(L"23.20.20.17.14", L"Lead-Lined Lath")                                     \
  DEF(L"23.20.20.17.17", L"Metal Lath")                                          \
  DEF(L"23.20.20.17.21", L"Veneer Plaster Base Lath")                            \
  DEF(L"23.20.20.17.24", L"Wood Lath")                                           \
  DEF(L"23.20.25.00", L"Sheets, Boards, and Slabs")                              \
  DEF(L"23.20.25.11", L"Thin Flexible Sheets ")                                  \
  DEF(L"23.20.25.11.11", L"Thin Sheets")                                         \
  DEF(L"23.20.25.11.11.11", L"Thin Metal Sheets")                                \
  DEF(L"23.20.25.11.11.14", L"Thin Wood Sheets")                                 \
  DEF(L"23.20.25.11.11.17", L"Building Papers")                                  \
  DEF(L"23.20.25.11.11.21", L"Thin Plastic Sheets")                              \
  DEF(L"23.20.25.11.11.24", L"Thin Rubber Sheets")                               \
  DEF(L"23.20.25.11.14", L"Textiles")                                            \
  DEF(L"23.20.25.11.17", L"Mesh for General Use")                                \
  DEF(L"23.20.25.14", L"Rigid Sheets, Slabs, Plates")                            \
  DEF(L"23.20.25.14.11", L"Solid Sheets")                                        \
  DEF(L"23.20.25.14.11.11", L"Solid Stone Sheets")                               \
  DEF(L"23.20.25.14.11.14", L"Solid Cementitious Sheets")                        \
  DEF(L"23.20.25.14.11.17", L"Solid Mineral Sheets")                             \
  DEF(L"23.20.25.14.11.21", L"Solid Glass Sheets")                               \
  DEF(L"23.20.25.14.11.24", L"Solid Metal Sheets")                               \
  DEF(L"23.20.25.14.11.27", L"Solid Wood-Based Sheets")                          \
  DEF(L"23.20.25.14.11.31", L"Solid Plastic Sheets")                             \
  DEF(L"23.20.25.14.14", L"Hollow Core Sheets")                                  \
  DEF(L"23.20.25.14.14.11", L"Wood-Based Hollow Core Sheets")                    \
  DEF(L"23.20.25.14.14.14", L"Mineral Hollow Core Sheets")                       \
  DEF(L"23.20.25.14.14.17", L"Metal Hollow Core Sheets")                         \
  DEF(L"23.20.25.14.14.21", L"Plastic Hollow Core Sheets")                       \
  DEF(L"23.20.25.17", L"Gratings")                                               \
  DEF(L"23.20.25.21", L"Blankets, Quilts")                                       \
  DEF(L"23.20.30.00", L"Blocks and Bricks")                                      \
  DEF(L"23.20.30.11", L"Blocks")                                                 \
  DEF(L"23.20.30.11.11", L"Concrete Masonry Units")                              \
  DEF(L"23.20.30.11.11.11", L"Concrete Block")                                   \
  DEF(L"23.20.30.11.11.14", L"Exposed Aggregate Concrete Masonry Units")         \
  DEF(L"23.20.30.11.11.17", L"Fluted Concrete Masonry Units")                    \
  DEF(L"23.20.30.11.11.21", L"Interlocking Concrete Masonry Units")              \
  DEF(L"23.20.30.11.11.24", L"Molded-Face Concrete Masonry Units")               \
  DEF(L"23.20.30.11.11.27", L"Prefaced Concrete Masonry Units")                  \
  DEF(L"23.20.30.11.11.31", L"Preinsulated Concrete Masonry Units")              \
  DEF(L"23.20.30.11.11.34", L"Sound-Absorbing Concrete Masonry Units")           \
  DEF(L"23.20.30.11.11.37", L"Split-Face Concrete Masonry Units")                \
  DEF(L"23.20.30.11.14", L"Calcium Silicate Masonry Units")                      \
  DEF(L"23.20.30.11.17", L"Glass Masonry Units")                                 \
  DEF(L"23.20.30.11.21", L"Adobe Masonry Units")                                 \
  DEF(L"23.20.30.11.24", L"Clay Masonry Units")                                  \
  DEF(L"23.20.30.11.24.11", L"Common Brick")                                     \
  DEF(L"23.20.30.11.24.14", L"Face Brick")                                       \
  DEF(L"23.20.30.11.24.17", L"Fire Brick")                                       \
  DEF(L"23.20.30.11.24.21", L"Glazed Brick")                                     \
  DEF(L"23.20.30.11.24.24", L"Ceramic Glazed Clay Masonry Units")                \
  DEF(L"23.20.30.11.24.27", L"Clay Tile")                                        \
  DEF(L"23.20.30.11.24.31", L"Structural Clay Tile")                             \
  DEF(L"23.20.30.11.24.34", L"Clay Flue Lining")                                 \
  DEF(L"23.20.30.11.24.37", L"Terra Cotta")                                      \
  DEF(L"23.20.30.14", L"Masonry Anchorage and Reinforcement")                    \
  DEF(L"23.20.30.14.11", L"Masonry Reinforcing")                                 \
  DEF(L"23.20.30.14.11.11", L"Continuous Joint Reinforcing")                     \
  DEF(L"23.20.30.14.11.14", L"Reinforcing Bars")                                 \
  DEF(L"23.20.30.14.14", L"Masonry Ties")                                        \
  DEF(L"23.20.30.14.14.11", L"Flexible Masonry Ties")                            \
  DEF(L"23.20.30.14.14.14", L"Masonry Veneer Ties")                              \
  DEF(L"23.20.30.14.14.17", L"Rigid Masonry Ties")                               \
  DEF(L"23.20.30.14.17", L"Masonry Anchors")                                     \
  DEF(L"23.20.30.14.17.11", L"Masonry Veneer Anchors")                           \
  DEF(L"23.20.30.14.17.14", L"Stone Masonry Anchors")                            \
  DEF(L"23.20.30.17", L"Special Profiles for Masonry ")                          \
  DEF(L"23.20.30.17.11", L"Special Masonry Shapes")                              \
  DEF(L"23.20.30.17.14", L"Masonry Sills and Thresholds")                        \
  DEF(L"23.20.30.17.17", L"Masonry Moldings")                                    \
  DEF(L"23.20.30.17.21", L"Masonry Copings")                                     \
  DEF(L"23.20.30.17.24", L"Masonry Quoins")                                      \
  DEF(L"23.20.30.17.27", L"Masonry Cornices")                                    \
  DEF(L"23.20.30.21", L"Structural Support for Masonry")                         \
  DEF(L"23.20.30.21.11", L"Lintels")                                             \
  DEF(L"23.20.30.21.11.11", L"Lintel Former Units")                              \
  DEF(L"23.20.30.21.14", L"Wall Connectors and Starters")                        \
  DEF(L"23.20.30.21.17", L"Supports for Masonry")                                \
  DEF(L"23.20.30.21.17.11", L"Masonry Angles")                                   \
  DEF(L"23.20.30.21.17.11.11", L"Masonry Shelf Angles")                          \
  DEF(L"23.20.30.21.17.14", L"Gussets")                                          \
  DEF(L"23.20.30.24", L"Ancillary Products for Masonry")                         \
  DEF(L"23.20.30.24.11", L"Embedded Flashing")                                   \
  DEF(L"23.20.30.24.14", L"Cavity Closers")                                      \
  DEF(L"23.20.30.24.17", L"Cavity Weep and Ventilation Units")                   \
  DEF(L"23.20.30.24.17.11", L"Weeps")                                            \
  DEF(L"23.20.30.24.17.14", L"Cavity Vents")                                     \
  DEF(L"23.20.30.24.17.17", L"Drainage Material")                                \
  DEF(L"23.20.30.24.21", L"Joint Materials")                                     \
  DEF(L"23.20.30.24.21.11", L"Control Joints")                                   \
  DEF(L"23.20.30.24.21.14", L"Expansion Joints")                                 \
  DEF(L"23.20.30.24.24", L"Airbricks")                                           \
  DEF(L"23.20.40.00", L"Mechanical Fasteners, Adhesives, and Sealants")          \
  DEF(L"23.20.40.11", L"Mechanical Fasteners")                                   \
  DEF(L"23.20.40.11.11", L"Cast-In Anchorages")                                  \
  DEF(L"23.20.40.11.11.11", L"Rail Anchors")                                     \
  DEF(L"23.20.40.11.11.14", L"Screw Cases")                                      \
  DEF(L"23.20.40.11.11.17", L"Anchor Blocks")                                    \
  DEF(L"23.20.40.11.11.21", L"Inserts")                                          \
  DEF(L"23.20.40.11.11.21.11", L"Adjustable Wedge")                              \
  DEF(L"23.20.40.11.11.21.14", L"Adjustable Box")                                \
  DEF(L"23.20.40.11.11.21.17", L"Threaded")                                      \
  DEF(L"23.20.40.11.11.24", L"Dovetail Slots")                                   \
  DEF(L"23.20.40.11.14", L"Multi-Purpose Mechanical Fasteners")                  \
  DEF(L"23.20.40.11.14.11", L"Plugs")                                            \
  DEF(L"23.20.40.11.14.14", L"Staples")                                          \
  DEF(L"23.20.40.11.14.17", L"Nails")                                            \
  DEF(L"23.20.40.11.14.21", L"Rivets")                                           \
  DEF(L"23.20.40.11.14.24", L"Screws")                                           \
  DEF(L"23.20.40.11.14.27", L"Bolts and Nuts")                                   \
  DEF(L"23.20.40.11.14.31", L"Threaded Rods and Nuts")                           \
  DEF(L"23.20.40.11.14.34", L"Bandings")                                         \
  DEF(L"23.20.40.11.17",                                                        \
      L"Structural Mechanical Fasteners in Hardened Concrete and Masonry")      \
  DEF(L"23.20.40.11.17.11", L"Expansion Anchors")                                \
  DEF(L"23.20.40.11.17.14", L"Undercut Anchors")                                 \
  DEF(L"23.20.40.11.17.17", L"Bonded Anchors")                                   \
  DEF(L"23.20.40.11.21", L"Mechanical Fasteners for Metal Structures")           \
  DEF(L"23.20.40.11.24", L"Mechanical Fasteners for Wood Structures")            \
  DEF(L"23.20.40.11.24.11", L"Nail Plates")                                      \
  DEF(L"23.20.40.11.24.14", L"Wood Connectors")                                  \
  DEF(L"23.20.40.11.24.17", L"Framing Anchors")                                  \
  DEF(L"23.20.14.24", L"Joint Fillers, Sealants, and Mastics")                   \
  DEF(L"23.20.14.24.11", L"Joint Fillers")                                       \
  DEF(L"23.20.14.24.11.11", L"Backer Rods")                                      \
  DEF(L"23.20.14.24.14", L"Putties")                                             \
  DEF(L"23.20.14.24.17", L"Construction Sealants")                               \
  DEF(L"23.20.14.24.17.11", L"Elastomeric Construction Sealants")                \
  DEF(L"23.20.14.24.17.14", L"Rigid Construction Sealants")                      \
  DEF(L"23.20.14.24.17.17", L"Sanitary Construction Sealants")                   \
  DEF(L"23.20.14.24.17.21", L"Chemical-Resistant Construction Sealants")         \
  DEF(L"23.20.14.24.17.24", L"Water-Immersed Construction Sealants")             \
  DEF(L"23.20.14.24.21", L"Preformed Joint Seals")                               \
  DEF(L"23.20.14.24.21.11", L"Compression Seals")                                \
  DEF(L"23.20.14.24.21.14", L"Joint Gaskets")                                    \
  DEF(L"23.20.14.27", L"Ropes, Wires, and Cables")                               \
  DEF(L"23.20.14.27.11", L"Ropes")                                               \
  DEF(L"23.20.14.27.14", L"Wires")                                               \
  DEF(L"23.20.14.27.17", L"Cables")                                              \
  DEF(L"23.20.50.00", L"Thermal and Moisture Protective Products")              \
  DEF(L"23.20.50.11", L"Fireproofing")                                           \
  DEF(L"23.20.50.11.11", L"Board Fireproofing")                                  \
  DEF(L"23.20.50.11.11.11", L"Calcium Silicate Board Fireproofing")              \
  DEF(L"23.20.50.11.11.14", L"Slag FiberBoard Fireproofing")                     \
  DEF(L"23.20.50.11.14", L"Blanket Fireproofing")                                \
  DEF(L"23.20.50.11.14.11", L"Smoke Containment Barriers")                       \
  DEF(L"23.20.50.11.17", L"Fireproofing Coatings")                               \
  DEF(L"23.20.50.11.17.11", L"Cement Aggregate Fireproofing")                    \
  DEF(L"23.20.50.11.17.14", L"Cementitious Fireproofing")                        \
  DEF(L"23.20.50.11.17.17", L"Foamed Magnesium Oxychloride Fireproofing")        \
  DEF(L"23.20.50.11.17.21", L"Intumescent Mastic Fireproofing")                  \
  DEF(L"23.20.50.11.17.24", L"Magnesium Cement Fireproofing")                    \
  DEF(L"23.20.50.11.17.27", L"Mineral Fiber Cementitious Fireproofing")          \
  DEF(L"23.20.50.11.17.31", L"Miner Fiber Fireproofing")                         \
  DEF(L"23.20.50.14", L"Firestopping")                                           \
  DEF(L"23.20.50.14.11", L"Penetrations Firestopping")                           \
  DEF(L"23.20.50.14.11.11", L"Annular Space Protection")                         \
  DEF(L"23.20.50.14.11.14", L"Fire Resistant Joint Sealants")                    \
  DEF(L"23.20.50.14.11.17", L"Firestopping Foams")                               \
  DEF(L"23.20.50.14.11.17.11", L"Intumescent Firestopping Foams")                \
  DEF(L"23.20.50.14.11.17.14", L"Silicone Firestopping Foams")                   \
  DEF(L"23.20.50.14.11.21", L"Firestopping Mortars")                             \
  DEF(L"23.20.50.14.11.24", L"Firestopping Pillows")                             \
  DEF(L"23.20.50.14.11.27", L"Thermal Barriers for Plastics")                    \
  DEF(L"23.20.50.14.14", L"Fire-Safing")                                         \
  DEF(L"23.20.50.14.14.11", L"Fibrous Blankets")                                 \
  DEF(L"23.20.50.14.14.14", L"Fire-Safing Sealants")                             \
  DEF(L"23.20.50.14.14.17", L"Fire-Safing Clip Anchors")                         \
  DEF(L"23.20.50.17", L"Dampproofings")                                          \
  DEF(L"23.20.50.17.11", L"Dampproofing Membranes")                              \
  DEF(L"23.20.50.17.14", L"Dampproofing Coatings")                               \
  DEF(L"23.20.50.17.14.11", L"Bituminous Dampproofing Coatings")                 \
  DEF(L"23.20.50.17.14.14", L"Cementitious Dampproofing Coatings")               \
  DEF(L"23.20.50.21", L"Waterproofing")                                          \
  DEF(L"23.20.50.21.11", L"Built-Up Bituminous Waterproofing")                   \
  DEF(L"23.20.50.21.14", L"Sheet Waterproofing")                                 \
  DEF(L"23.20.50.21.14.11", L"Bituminous Sheet Waterproofing")                   \
  DEF(L"23.20.50.21.14.14", L"Elastomeric Sheet Waterproofing")                  \
  DEF(L"23.20.50.21.14.17", L"Modified Bituminous Sheet Waterproofing")          \
  DEF(L"23.20.50.21.14.21", L"Thermoplastic Sheet Waterproofing")                \
  DEF(L"23.20.50.21.17", L"Fluid-Applied Waterproofing")                         \
  DEF(L"23.20.50.21.17.11", L"Hot-Applied Rubberized Asphalt")                   \
  DEF(L"23.20.50.21.21", L"Sheet Metal Waterproofing")                           \
  DEF(L"23.20.50.21.24", L"Cementitious and Reactive Waterproofing")             \
  DEF(L"23.20.50.21.24.11", L"Acrylic Modified Cement Waterproofing")            \
  DEF(L"23.20.50.21.24.14", L"Crystalline Waterproofing")                        \
  DEF(L"23.20.50.21.24.17", L"Metal Oxide Waterproofing")                        \
  DEF(L"23.20.50.21.27", L"Bentonite Waterproofing")                             \
  DEF(L"23.20.50.21.27.11", L"Bentonite Panel Waterproofing")                    \
  DEF(L"23.20.50.21.27.14", L"Bentonite Sheet Waterproofing")                    \
  DEF(L"23.20.50.21.31", L"Waterproof Traffic Coatings")                         \
  DEF(L"23.20.50.21.31.11", L"Pedestrian Waterproof Traffic Coatings")           \
  DEF(L"23.20.50.21.31.14", L"Vehicular Waterproof Traffic Coatings")            \
  DEF(L"23.20.50.24", L"Thermal Insulation")                                    \
  DEF(L"23.20.50.24.11", L"Slab and Board Thermal Insulation")                   \
  DEF(L"23.20.50.24.11.11", L"Polystyrene Slab and Board Thermal Insulation")    \
  DEF(L"23.20.50.24.11.11.11",                                                  \
      L"Expanded Polystyrene Slab and Board Thermal Insulation")                \
  DEF(L"23.20.50.24.11.11.14",                                                  \
      L"Extruded Polystyrene Slab and Board Thermal Insulation")                \
  DEF(L"23.20.50.24.11.14", L"Urethane Slab and Board Thermal Insulation")       \
  DEF(L"23.20.50.24.11.17", L"Perlite Slab and Board Thermal Insulation")        \
  DEF(L"23.20.50.24.11.21", L"Fiberglass Slab and Board Thermal Insulation")     \
  DEF(L"23.20.50.24.14", L"Blanket Thermal Insulation")                          \
  DEF(L"23.20.50.24.14.11", L"Fiberglass Blanket Thermal Insulation")            \
  DEF(L"23.20.50.24.14.14", L"Rock Wool Blanket Thermal Insulation")             \
  DEF(L"23.20.50.24.17", L"Thermal Insulation Coatings")                         \
  DEF(L"23.20.50.24.17.11", L"Sprayed Thermal Insulation Coatings")              \
  DEF(L"23.20.50.24.17.11.11", L"Sprayed Cellulose Thermal Insulation Coatings") \
  DEF(L"23.20.50.24.21", L"Loose Fill Thermal Insulation")                       \
  DEF(L"23.20.50.24.21.11", L"Granular Fill Thermal Insulation")                 \
  DEF(L"23.20.50.27", L"Sound Isolation Insulation")                             \
  DEF(L"23.20.50.27.11", L"Slab and Board Sound Isolation Insulation")           \
  DEF(L"23.20.50.27.14",                                                        \
      L"Fiberglass Slab and Board Sound Isolation Insulation")                  \
  DEF(L"23.20.50.27.17", L"Blanket Sound Isolation Insulation")                  \
  DEF(L"23.20.50.27.17.11", L"Fiberglass Blanket Sound Isolation Insulation")    \
  DEF(L"23.20.50.27.17.14", L"Rock Wool Blanket Sound Isolation Insulation")     \
  DEF(L"23.20.50.27.21", L"Sound Isolation Coatings")                            \
  DEF(L"23.20.50.27.24", L"Sound Isolation Loose Fills")                         \
  DEF(L"23.20.50.27.24.11", L"Granular Sound Isolation Loose Fills")             \
  DEF(L"23.25.00.00", L"Structural and Space Division Products")                 \
  DEF(L"23.25.05.00", L"Foundations")                                            \
  DEF(L"23.25.05.11", L"Foundation Piles")                                       \
  DEF(L"23.25.05.11.11", L"Foundation Pile Components")                         \
  DEF(L"23.25.05.11.11.11", L"Pile Casings (Linings)")                           \
  DEF(L"23.25.05.11.11.14", L"Cores and Mandrels")                               \
  DEF(L"23.25.05.11.11.17", L"Pile Extension Pieces")                            \
  DEF(L"23.25.05.11.11.21", L"Pile Shoes")                                       \
  DEF(L"23.25.05.11.11.24", L"Pile Splices")                                     \
  DEF(L"23.25.05.11.11.27", L"Pile Caps")                                        \
  DEF(L"23.25.05.11.14", L"Driven Piles")                                        \
  DEF(L"23.25.05.11.14.11", L"Composite Driven Piles")                           \
  DEF(L"23.25.05.11.14.14", L"Concrete-Filled Steel Driven Piles")               \
  DEF(L"23.25.05.11.14.17", L"Precast Concrete Driven Piles")                    \
  DEF(L"23.25.05.11.14.21", L"Rolled Steel Section Driven Piles")                \
  DEF(L"23.25.05.11.14.24", L"Unfilled Tubular Steel Driven Piles")              \
  DEF(L"23.25.05.11.14.27", L"Wood Driven Piles")                                \
  DEF(L"23.25.05.11.14.31", L"Sheet Driven Piles")                               \
  DEF(L"23.25.05.11.17", L"Screw Piles")                                         \
  DEF(L"23.25.05.14", L"Caissons, Foundation Casings")                           \
  DEF(L"23.25.05.14.11", L"Well Foundation Casings")                             \
  DEF(L"23.25.05.14.14", L"Caissons")                                            \
  DEF(L"23.25.05.17", L"Shallow Foundations")                                    \
  DEF(L"23.25.05.17.11", L"Column Bases")                                        \
  DEF(L"23.25.05.17.14", L"Grade Beams")                                         \
  DEF(L"23.25.05.17.17", L"Strip Foundation Blocks")                             \
  DEF(L"23.25.05.21", L"Special Foundations")                                    \
  DEF(L"23.25.05.21.11", L"Controlled Modulus Columns")                          \
  DEF(L"23.25.05.21.14", L"Other Special Foundations")                           \
  DEF(L"23.25.10.00", L"Structural Concrete Products")                           \
  DEF(L"23.25.10.11", L"Structural Concrete")                                    \
  DEF(L"23.25.10.14", L"Ready Mixed Concrete ")                                  \
  DEF(L"23.25.10.17", L"Permanent Formwork")                                     \
  DEF(L"23.25.10.17.11", L"Structural Permanent Formwork")                       \
  DEF(L"23.25.10.17.11.11", L"Permanent Steel Forms")                            \
  DEF(L"23.25.10.17.11.14", L"Prefabricated Stair Forms")                        \
  DEF(L"23.25.10.21", L"Non-Structural Permanent Formwork")                      \
  DEF(L"23.25.10.24", L"Concrete Forms")                                         \
  DEF(L"23.25.10.27", L"Reinforcement and Prestressing Components")              \
  DEF(L"23.25.10.27.11", L"Reinforcement Components")                            \
  DEF(L"23.25.10.27.11.11", L"Reinforcing Steel")                                \
  DEF(L"23.25.10.27.11.14", L"Reinforcement Steel Mesh")                         \
  DEF(L"23.25.10.27.11.14.11", L"Welded Wire Fabric")                            \
  DEF(L"23.25.10.27.11.17", L"Fibrous Reinforcing")                              \
  DEF(L"23.25.10.27.11.17.11", L"Steel Fibrous Reinforcing")                     \
  DEF(L"23.25.10.27.11.17.14", L"Synthetic Fibrous Reinforcing")                 \
  DEF(L"23.25.10.27.11.21", L"Reinforcement Couplers")                           \
  DEF(L"23.25.10.27.11.24", L"Reinforcement Spacers")                            \
  DEF(L"23.25.10.27.11.27", L"Reinforcement Accessories")                        \
  DEF(L"23.25.10.27.14", L"Prestressing Components")                             \
  DEF(L"23.25.10.27.14.11", L"Stressing Tendons")                                \
  DEF(L"23.25.10.27.14.11.11", L"Steel Stressing Tendons")                       \
  DEF(L"23.25.10.27.14.11.11.11", L"Steel Strand Stressing Tendons")             \
  DEF(L"23.25.10.27.14.11.11.14", L"Steel Wire Stressing Tendons")               \
  DEF(L"23.25.10.27.14.11.11.17", L"Steel Bar Stressing Tendons")                \
  DEF(L"23.25.10.27.14.11.14", L"Glass Fiber")                                   \
  DEF(L"23.25.10.27.14.14", L"Steel Bars")                                       \
  DEF(L"23.25.10.27.14.17", L"Glass Fiber Tendons")                              \
  DEF(L"23.25.10.27.14.21", L"Prestressing Couplers")                            \
  DEF(L"23.25.10.27.14.24", L"Tendon Sheathing")                                 \
  DEF(L"23.25.10.27.14.24.11", L"Tendon Sheathing Ducts")                        \
  DEF(L"23.25.10.27.14.27", L"Prestressing Anchorages")                          \
  DEF(L"23.25.10.27.17", L"Post-Tensioning Products")                            \
  DEF(L"23.25.10.27.21", L"Complete Reinforcement Cages")                        \
  DEF(L"23.25.10.27.24", L"Cast-In Jointing")                                    \
  DEF(L"23.25.10.27.24.11", L"Expansion and Contraction Joints")                 \
  DEF(L"23.25.10.27.24.14", L"Waterstops")                                       \
  DEF(L"23.25.20.00", L"Envelope Enclosure Products")                            \
  DEF(L"23.25.20.11", L"Infill Fa\u0437ades")                                         \
  DEF(L"23.25.20.11.11", L"Exterior Wall Assemblies")                            \
  DEF(L"23.25.20.14", L"Glazed Fa\u0437ade and Roof Structures")                      \
  DEF(L"23.25.20.14.11", L"Curtain Walls")                                       \
  DEF(L"23.25.20.14.11.11", L"Curtain Wall Components")                         \
  DEF(L"23.25.20.14.11.11.11", L"Curtain Wall Frames")                           \
  DEF(L"23.25.20.14.11.11.14", L"Curtain Wall Sections")                         \
  DEF(L"23.25.20.14.11.11.17", L"Infill Panels")                                 \
  DEF(L"23.25.20.14.11.14", L"Metal-Framed Curtain Wall")                        \
  DEF(L"23.25.20.14.11.17", L"Translucent Wall Assemblies")                      \
  DEF(L"23.25.20.14.14", L"Structural Glazing")                                  \
  DEF(L"23.25.20.14.14.11", L"Structural Glass Curtain Walls")                   \
  DEF(L"23.25.20.14.17", L"Suspended Glazing")                                   \
  DEF(L"23.25.20.14.21", L"Patent Glazing  ")                                    \
  DEF(L"23.25.20.14.24", L"Screen and Storm Doors")                              \
  DEF(L"23.25.20.14.24.11", L"Metal Screen and Storm Doors")                     \
  DEF(L"23.25.20.14.24.14", L"Wood and Plastic Screen and Storm Doors")          \
  DEF(L"23.25.20.14.27", L"Glazed Roof Structures")                              \
  DEF(L"23.25.20.14.27.11", L"Sections for Glazed Roofs")                        \
  DEF(L"23.25.20.14.27.14", L"Sloped Glazing Assemblies")                        \
  DEF(L"23.25.20.14.27.17", L"Translucent Roof Assemblies")                      \
  DEF(L"23.25.30.00", L"Structural Framing Products")                            \
  DEF(L"23.25.30.11", L"Structural Frames")                                      \
  DEF(L"23.25.30.11.11", L"Beam-Column Frames")                                  \
  DEF(L"23.25.30.11.14", L"Column-Slab Frames")                                  \
  DEF(L"23.25.30.11.14.11", L"Columns")                                          \
  DEF(L"23.25.30.11.14.14", L"Beams")                                            \
  DEF(L"23.25.30.11.17", L"Portal Frames")                                       \
  DEF(L"23.25.30.11.21", L"Structural Racking")                                  \
  DEF(L"23.25.30.11.24", L"Structural Bearings")                                 \
  DEF(L"23.25.30.11.24.11", L"Roller Bearings")                                  \
  DEF(L"23.25.30.11.24.14", L"Slide Bearings")                                   \
  DEF(L"23.25.30.11.24.17", L"Rocker Bearings")                                  \
  DEF(L"23.25.30.11.24.21", L"Fixed Bearings")                                   \
  DEF(L"23.25.30.11.27", L"Vibration and Earthquake Controls")                   \
  DEF(L"23.25.30.14", L"Space Frames")                                           \
  DEF(L"23.25.30.14.11", L"Booms, Braces")                                       \
  DEF(L"23.25.30.14.14", L"Couplers")                                            \
  DEF(L"23.25.30.14.17", L"Complete Space Frames")                               \
  DEF(L"23.25.30.17", L"Geodesic Structures")                                    \
  DEF(L"23.25.30.21", L"Rafters, Beams, and Joists")                             \
  DEF(L"23.25.30.21.11", L"Rafters, Trussed")                                    \
  DEF(L"23.25.30.21.14", L"Trussed Beams and Joists")                            \
  DEF(L"23.25.30.21.14.11", L"Metal Joists")                                     \
  DEF(L"23.25.30.21.14.14", L"Composite Joist Assemblies")                       \
  DEF(L"23.25.30.21.14.17", L"Metal-Web Wood Joists")                            \
  DEF(L"23.25.30.21.14.21", L"Wood Trusses")                                     \
  DEF(L"23.25.30.21.14.24", L"Metal Trusses")                                    \
  DEF(L"23.25.30.21.17", L"Web Beams and Joists")                                \
  DEF(L"23.25.30.21.17.11", L"Wood I Joists")                                    \
  DEF(L"23.25.30.24", L"Structural Walls")                                       \
  DEF(L"23.25.30.24.11", L"Concrete Structural Walls")                           \
  DEF(L"23.25.30.24.14", L"Masonry Structural Walls")                            \
  DEF(L"23.25.30.24.17", L"Wood Framed Structural Walls")                        \
  DEF(L"23.25.30.24.21", L"Metal Framed Structural Walls")                       \
  DEF(L"23.25.30.24.24", L"Structural Panels")                                   \
  DEF(L"23.25.30.24.24.11", L"Cementitious Reinforced Structural Panels")        \
  DEF(L"23.25.30.24.24.14", L"Stressed Skin Structural Panels")                  \
  DEF(L"23.25.30.24.24.17", L"Structural Insulated Panels ")                     \
  DEF(L"23.25.30.24.99", L"Other Structural Walls")                              \
  DEF(L"23.25.30.27", L"Structural Floors and Flat Roofs")                       \
  DEF(L"23.25.30.27.11", L"Structural Floor Decks")                              \
  DEF(L"23.25.30.27.11.11", L"Concrete Structural Floor Decks")                  \
  DEF(L"23.25.30.27.11.14", L"Metal Structural Floor Decks")                     \
  DEF(L"23.25.30.27.11.14.11", L"Raceway Deck Systems")                          \
  DEF(L"23.25.30.27.11.14.14", L"Acoustical Metal Floor Deck")                   \
  DEF(L"23.25.30.27.11.17", L"Wood Floor Decking")                               \
  DEF(L"23.25.30.27.14", L"Structural Roof Decks")                               \
  DEF(L"23.25.30.27.14.11", L"Concrete Structural Roof Decks")                   \
  DEF(L"23.25.30.27.14.14", L"Metal Structural Roof Decks")                      \
  DEF(L"23.25.30.27.14.14.11", L"Acoustical Metal Roof Deck")                    \
  DEF(L"23.25.30.27.14.17", L"Wood Roof Decking")                                \
  DEF(L"23.25.30.27.17", L"Structural Grating Floors")                           \
  DEF(L"23.25.30.27.21", L"Balconies and Overhang Units")                        \
  DEF(L"23.25.30.27.21.11", L"Balcony Components")                              \
  DEF(L"23.25.30.27.21.11.11", L"Balcony Holders and Mechanical Fasteners")      \
  DEF(L"23.25.30.27.21.14", L"Concrete Balconies and Overhang Units")            \
  DEF(L"23.25.30.27.21.17", L"Metal Balconies and Overhang Units")               \
  DEF(L"23.25.30.27.21.21", L"Wood Balconies and Overhang Units")                \
  DEF(L"23.25.30.31", L"Structural Profiled Roofs")                              \
  DEF(L"23.25.30.31.11", L"Prefabricated Shell Roofs")                           \
  DEF(L"23.25.40.00", L"Space Division Products")                                \
  DEF(L"23.25.40.11", L"Fixed Partitions")                                       \
  DEF(L"23.25.40.11.11", L"Gypsum Board Fixed Partitions")                       \
  DEF(L"23.25.40.11.11.11", L"Metal-Framed Gypsum Board Fixed Partitions")       \
  DEF(L"23.25.40.11.11.14", L"Wood-Framed Gypsum Board Fixed Partitions")        \
  DEF(L"23.25.40.11.14", L"Plaster Fixed Partitions")                            \
  DEF(L"23.25.40.11.14.11", L"Gypsum Plaster Fixed Partitions")                  \
  DEF(L"23.25.40.11.14.14", L"Portland Cement Plaster Fixed Partitions")         \
  DEF(L"23.25.40.11.14.17", L"Metal-Framed Plaster Fixed Partitions")            \
  DEF(L"23.25.40.11.14.21", L"Wood-Framed Plaster Fixed Partitions")             \
  DEF(L"23.25.40.11.17", L"Masonry Fixed Partitions")                            \
  DEF(L"23.25.40.14", L"Demountable Partitions")                                 \
  DEF(L"23.25.40.14.11", L"General Demountable Partitions")                      \
  DEF(L"23.25.40.14.11.11", L"Demountable Partitions Component")                 \
  DEF(L"23.25.40.14.11.11.11", L"Partition Frames")                              \
  DEF(L"23.25.40.14.11.11.14", L"Partition Infill Panels")                       \
  DEF(L"23.25.40.14.11.11.17", L"Mechanical Fasteners for Partitions")           \
  DEF(L"23.25.40.14.11.14", L"Gypsum Board Demountable Partitions")              \
  DEF(L"23.25.40.14.11.17", L"Metal Demountable Partitions")                     \
  DEF(L"23.25.40.14.11.21", L"Wood Demountable Partitions")                      \
  DEF(L"23.25.40.14.14", L"Sanitary Partitions and Cubicles")                    \
  DEF(L"23.25.40.14.14.11", L"Toilet Compartments and Urinal Screens")           \
  DEF(L"23.25.40.14.14.11.11", L"Metal Toilet Compartments and Urinal Screens")  \
  DEF(L"23.25.40.14.14.11.14",                                                  \
      L"Plastic Laminate Toilet Compartments and Urinal Screens")               \
  DEF(L"23.25.40.14.14.11.17",                                                  \
      L"Plastic Toilet Compartments and Urinal Screens")                        \
  DEF(L"23.25.40.14.14.11.21",                                                  \
      L"Particleboard Toilet Compartments and Urinal Screens")                  \
  DEF(L"23.25.40.14.14.11.24", L"Stone Toilet Compartments and Urinal Screens")  \
  DEF(L"23.25.40.14.14.14", L"Shower and Dressing Compartments")                 \
  DEF(L"23.25.40.14.14.14.11", L"Metal Shower and Dressing Compartments")        \
  DEF(L"23.25.40.14.14.14.14",                                                  \
      L"Plastic Laminate Shower and Dressing Compartments")                     \
  DEF(L"23.25.40.14.14.14.17", L"Plastic Shower and Dressing Compartments")      \
  DEF(L"23.25.40.14.14.14.21",                                                  \
      L"Particleboard Shower and Dressing Compartments")                        \
  DEF(L"23.25.40.14.14.14.24", L"Stone Shower and Dressing Compartments")        \
  DEF(L"23.25.40.14.14.17", L"Cubicles")                                         \
  DEF(L"23.25.40.14.14.17.11", L"Cubicle Curtains")                              \
  DEF(L"23.25.40.14.14.17.14", L"Cubicle Track and Hardware")                    \
  DEF(L"23.25.40.14.17", L"Storage Wall Partitions and Compartments")            \
  DEF(L"23.25.40.14.17.11", L"Wire Mesh Partitions")                             \
  DEF(L"23.25.40.17", L"Operable Partitions")                                    \
  DEF(L"23.25.40.17.11", L"Horizontally Sliding Partitions")                     \
  DEF(L"23.25.40.17.14", L"Folding Panel Partitions")                            \
  DEF(L"23.25.40.17.17", L"Accordion Folding Partitions")                        \
  DEF(L"23.25.40.17.21", L"Coiling Partitions")                                  \
  DEF(L"23.25.40.17.24", L"Vertically Sliding Room Dividers")                    \
  DEF(L"23.25.40.21", L"Fences")                                                 \
  DEF(L"23.25.40.21.11", L"Fence Components")                                   \
  DEF(L"23.25.40.21.11.11", L"Fence Posts")                                      \
  DEF(L"23.25.40.21.11.14", L"Fencing Fabric")                                   \
  DEF(L"23.25.40.21.11.17", L"Fence Accessories")                                \
  DEF(L"23.25.40.21.14", L"Fences by Material")                                  \
  DEF(L"23.25.40.21.14.11", L"Wood Fences")                                      \
  DEF(L"23.25.40.21.14.14", L"Metal Fences")                                     \
  DEF(L"23.25.40.21.14.17", L"Plastic Fences")                                   \
  DEF(L"23.25.40.21.14.21", L"Composite Fences")                                 \
  DEF(L"23.25.40.21.17", L"Fences by Type")                                      \
  DEF(L"23.25.40.21.17.11", L"Chain Link Fences")                                \
  DEF(L"23.25.40.21.17.14", L"Wire Fences")                                      \
  DEF(L"23.25.40.21.17.17", L"Ornamental Fences")                                \
  DEF(L"23.25.40.21.17.21", L"Post and Rail Fences")                             \
  DEF(L"23.25.40.21.17.24", L"Panel Fences")                                     \
  DEF(L"23.25.40.21.21", L"Gates")                                               \
  DEF(L"23.25.40.21.21.11", L"Swinging Gates")                                   \
  DEF(L"23.25.40.21.21.14", L"Sliding Gates")                                    \
  DEF(L"23.25.40.21.24", L"Turnstiles")                                          \
  DEF(L"23.25.40.21.27", L"Portable Post and Railing Barriers")                  \
  DEF(L"23.30.00.00", L"Openings, Passages, Protection")                         \
  DEF(L"23.30.10.00", L"Doors")                                                  \
  DEF(L"23.30.10.11", L"Door Components")                                       \
  DEF(L"23.30.10.11.11", L"Door Frames")                                         \
  DEF(L"23.30.10.11.14", L"Door")                                                \
  DEF(L"23.30.10.11.17", L"Preassembled Door and Frame Units")                   \
  DEF(L"23.30.10.11.21", L"Fanlights")                                           \
  DEF(L"23.30.10.11.24", L"Door Sections")                                       \
  DEF(L"23.30.10.11.24.11", L"Structural Door Sections")                         \
  DEF(L"23.30.10.11.24.14", L"Door Cladding Sections")                           \
  DEF(L"23.30.10.11.27", L"Door Linings and Boards")                             \
  DEF(L"23.30.10.11.31", L"Door Renovation Sets")                                \
  DEF(L"23.30.10.11.34", L"Door Accessories")                                    \
  DEF(L"23.30.10.11.34.11", L"Peep Holes")                                       \
  DEF(L"23.30.10.11.34.14", L"Buffers and Stops")                                \
  DEF(L"23.30.10.11.34.17", L"Mail Openings and Slots")                          \
  DEF(L"23.30.10.11.34.21", L"Door Louvers and Lights")                          \
  DEF(L"23.30.10.14", L"Passage Doors by Material")                              \
  DEF(L"23.30.10.14.11", L"Metal Passage Doors")                                 \
  DEF(L"23.30.10.14.14", L"Wood Passage Doors")                                  \
  DEF(L"23.30.10.14.17", L"Plastic Passage Doors")                               \
  DEF(L"23.30.10.14.21", L"Composite Passage Doors")                             \
  DEF(L"23.30.10.14.24", L"Glazed Passage Doors")                                \
  DEF(L"23.30.10.14.27", L"All-Glass Passage Doors")                             \
  DEF(L"23.30.10.17", L"Doors and Grills by Method of Operation")                \
  DEF(L"23.30.10.17.11", L"Sliding Doors")                                       \
  DEF(L"23.30.10.17.14", L"Sliding Grills")                                      \
  DEF(L"23.30.10.17.17", L"Folding Doors and Grilles")                           \
  DEF(L"23.30.10.17.17.11", L"Accordion Folding Doors")                          \
  DEF(L"23.30.10.17.17.14", L"Accordion Folding Grilles")                        \
  DEF(L"23.30.10.17.17.17", L"Folding Fire Doors")                               \
  DEF(L"23.30.10.17.17.21", L"Panel Folding Doors")                              \
  DEF(L"23.30.10.17.17.24", L"Bifold Doors")                                     \
  DEF(L"23.30.10.17.21", L"Revolving Doors")                                     \
  DEF(L"23.30.10.17.24", L"Balanced Doors")                                      \
  DEF(L"23.30.10.17.27", L"Coiling Doors")                                       \
  DEF(L"23.30.10.17.27.11", L"Overhead Coiling")                                 \
  DEF(L"23.30.10.17.27.14", L"Side Coiling")                                     \
  DEF(L"23.30.10.17.31", L"Vertical Lift Doors")                                 \
  DEF(L"23.30.10.17.31.11", L"Multi-Leaf Vertical Lift Doors")                   \
  DEF(L"23.30.10.17.31.14", L"Telescoping Vertical Lift Doors")                  \
  DEF(L"23.30.10.17.34", L"Telescopic Stacking Doors")                           \
  DEF(L"23.30.10.17.37", L"Overhead Doors")                                      \
  DEF(L"23.30.10.17.37.11", L"Single-Panel Overhead Doors")                      \
  DEF(L"23.30.10.17.37.14", L"Sectional Overhead Doors")                         \
  DEF(L"23.30.10.21", L"Special Function Doors")                                 \
  DEF(L"23.30.10.21.11", L"Fire Doors")                                          \
  DEF(L"23.30.10.21.11.11", L"Rolling Fire Doors")                               \
  DEF(L"23.30.10.21.11.14", L"Fire Shutters")                                    \
  DEF(L"23.30.10.21.11.17", L"Swinging Fire Doors")                              \
  DEF(L"23.30.10.21.11.21", L"Temperature Rate of Rise Fire Doors")              \
  DEF(L"23.30.10.21.14", L"Security Doors")                                      \
  DEF(L"23.30.10.21.17", L"Controlled Environment Doors")                        \
  DEF(L"23.30.10.21.17.11", L"Cold Storage Doors")                               \
  DEF(L"23.30.10.21.17.14", L"Sound Control Doors")                              \
  DEF(L"23.30.10.21.17.17", L"Radiation Protection Doors")                       \
  DEF(L"23.30.10.21.17.17.11", L"Electromagnetic Shielding Doors")               \
  DEF(L"23.30.10.21.17.17.14", L"RF Shielding Doors")                            \
  DEF(L"23.30.10.21.17.17.17", L"BO Shielding Doors")                            \
  DEF(L"23.30.10.21.17.17.21", L"Radio Frequency Protection Doors")              \
  DEF(L"23.30.10.21.17.17.24", L"X-Ray Protection Doors")                        \
  DEF(L"23.30.10.21.17.17.27", L"Nuclear Radiation Protection Doors")            \
  DEF(L"23.30.10.21.17.17.31", L"High Energy Magnetic Pulse Protection Doors")   \
  DEF(L"23.30.10.21.21", L"Detention Doors")                                     \
  DEF(L"23.30.10.21.24", L"Hanger Doors")                                        \
  DEF(L"23.30.10.21.27", L"Lightproof Doors")                                    \
  DEF(L"23.30.10.21.27.11", L"Revolving Darkroom Door")                          \
  DEF(L"23.30.10.21.31", L"Traffic Doors")                                       \
  DEF(L"23.30.10.21.31.11", L"Flexible Traffic Doors")                           \
  DEF(L"23.30.10.21.31.14", L"Flexible Strip Doors")                             \
  DEF(L"23.30.10.21.31.17", L"Rigid Panel Traffic Doors")                        \
  DEF(L"23.30.10.21.31.21", L"Rapid Opening Doors")                              \
  DEF(L"23.30.10.21.34", L"Industrial Doors")                                    \
  DEF(L"23.30.10.21.37", L"Pressure-Resistant Doors")                            \
  DEF(L"23.30.10.21.37.11", L"Airtight Doors")                                   \
  DEF(L"23.30.10.21.37.14", L"Blast-Resistant Doors")                            \
  DEF(L"23.30.10.21.37.17", L"Watertight Doors")                                 \
  DEF(L"23.30.10.24", L"Other Doors")                                            \
  DEF(L"23.30.10.24.11", L"Storm Doors")                                         \
  DEF(L"23.30.10.24.14", L"Screen Doors")                                        \
  DEF(L"23.30.10.24.17", L"Other Special Purpose Doors")                         \
  DEF(L"23.30.10.27", L"Access Doors and Panels")                                \
  DEF(L"23.30.10.27.11", L"Trap Doors")                                          \
  DEF(L"23.30.10.27.14", L"Access Panels")                                       \
  DEF(L"23.30.10.27.17", L"Access Doors")                                        \
  DEF(L"23.30.10.27.21", L"Floor Hatches")                                       \
  DEF(L"23.30.10.27.24", L"Roof Hatches")                                        \
  DEF(L"23.30.10.27.27", L"Security Hatches")                                    \
  DEF(L"23.30.20.00", L"Windows")                                                \
  DEF(L"23.30.20.11", L"Window Components")                                     \
  DEF(L"23.30.20.11.11", L"Window Sections")                                     \
  DEF(L"23.30.20.11.14", L"Window Linings and Boards")                           \
  DEF(L"23.30.20.11.17", L"Window Vents")                                        \
  DEF(L"23.30.20.14", L"Windows by Material")                                    \
  DEF(L"23.30.20.14.11", L"Metal Windows")                                       \
  DEF(L"23.30.20.14.14", L"Wood Windows")                                        \
  DEF(L"23.30.20.14.17", L"Plastic Windows")                                     \
  DEF(L"23.30.20.14.21", L"Composite Windows")                                   \
  DEF(L"23.30.20.17", L"Windows by Method of Opening")                           \
  DEF(L"23.30.20.17.11", L"Fixed Windows")                                       \
  DEF(L"23.30.20.17.14", L"Sliding Windows")                                     \
  DEF(L"23.30.20.17.14.11", L"Vertical Sliding Windows")                         \
  DEF(L"23.30.20.17.14.14", L"Horizontal Sliding Windows")                       \
  DEF(L"23.30.20.17.17", L"Hung Windows")                                        \
  DEF(L"23.30.20.17.17.11", L"Single-Hung Windows")                              \
  DEF(L"23.30.20.17.17.14", L"Double-Hung Windows")                              \
  DEF(L"23.30.20.17.17.17", L"Triple-Hung Windows")                              \
  DEF(L"23.30.20.17.21", L"Swinging Windows")                                    \
  DEF(L"23.30.20.17.21.11", L"Awning Windows")                                   \
  DEF(L"23.30.20.17.21.14", L"Casement Windows")                                 \
  DEF(L"23.30.20.17.21.17", L"Projected Windows")                                \
  DEF(L"23.30.20.17.21.21", L"Vertical Pivoted Windows")                         \
  DEF(L"23.30.20.17.21.24", L"Jalousie Windows")                                 \
  DEF(L"23.30.20.17.21.27", L"Jal-Awning Windows")                               \
  DEF(L"23.30.20.21", L"Other Windows")                                          \
  DEF(L"23.30.20.21.11", L"Projecting Windows")                                  \
  DEF(L"23.30.20.21.11.11", L"Bay Windows")                                      \
  DEF(L"23.30.20.21.11.11.11", L"Angled Bay Windows")                            \
  DEF(L"23.30.20.21.11.11.14", L"Box Bay Windows")                               \
  DEF(L"23.30.20.21.11.14", L"Bow Windows")                                      \
  DEF(L"23.30.20.21.11.17", L"Garden Windows")                                   \
  DEF(L"23.30.20.21.14", L"Roof Windows")                                        \
  DEF(L"23.30.20.21.17", L"Pavement Lights")                                     \
  DEF(L"23.30.20.21.17.11", L"Glass Masonry Units")                              \
  DEF(L"23.30.20.24", L"Special Purpose Windows")                                \
  DEF(L"23.30.20.24.11", L"Detention Windows")                                   \
  DEF(L"23.30.20.24.14", L"Pass Windows")                                        \
  DEF(L"23.30.20.24.17", L"Controlled Environment Windows")                      \
  DEF(L"23.30.20.24.17.11", L"Sound Control Windows")                            \
  DEF(L"23.30.20.24.17.14", L"Radiation Protection Windows")                     \
  DEF(L"23.30.20.24.17.14.11", L"Electromagnetic Shielding Windows")             \
  DEF(L"23.30.20.24.17.14.14", L"RF Shielding Windows")                          \
  DEF(L"23.30.20.24.17.14.17", L"BO Shielding Windows")                          \
  DEF(L"23.30.20.24.17.14.21", L"Radio Frequency Protection Windows")            \
  DEF(L"23.30.20.24.17.14.24", L"X-Ray Protection Windows")                      \
  DEF(L"23.30.20.24.17.14.27", L"Nuclear Radiation Protection Windows")          \
  DEF(L"23.30.20.24.17.14.31", L"High Energy Magnetic Pulse Protection Windows") \
  DEF(L"23.30.20.24.21", L"Security Windows")                                    \
  DEF(L"23.30.30.00", L"Skylights ")                                             \
  DEF(L"23.30.30.11", L"Skylight Components")                                   \
  DEF(L"23.30.30.11.11", L"Skylight Hardware")                                   \
  DEF(L"23.30.30.14", L"Unit Skylights")                                         \
  DEF(L"23.30.30.14.11", L"Domed Unit Skylights")                                \
  DEF(L"23.30.30.14.14", L"Pyramidal Unit Skylights")                            \
  DEF(L"23.30.30.14.17", L"Vaulted Unit Skylights")                              \
  DEF(L"23.30.30.17", L"Metal-Framed Skylights")                                 \
  DEF(L"23.30.30.17.11", L"Domed Metal-Framed Skylights")                        \
  DEF(L"23.30.30.17.14", L"Motorized Metal-Framed Skylights")                    \
  DEF(L"23.30.30.17.17", L"Pyramidal Metal-Framed Skylights")                    \
  DEF(L"23.30.30.17.21", L"Ridge Metal-Framed Skylights")                        \
  DEF(L"23.30.30.17.24", L"Vaulted Metal-Framed Skylights")                      \
  DEF(L"23.30.30.21", L"Lantern Lights")                                         \
  DEF(L"23.30.30.24", L"Tubular Skylights")                                      \
  DEF(L"23.30.40.00", L"Hardware for Openings")                                  \
  DEF(L"23.30.40.11", L"Hardware for Doors")                                     \
  DEF(L"23.30.40.11.11", L"Rotation, Pivoting Door Gear")                        \
  DEF(L"23.30.40.11.14", L"Sliding Door Gear")                                   \
  DEF(L"23.30.40.11.17", L"Combined Movement Door Gear")                         \
  DEF(L"23.30.40.11.21", L"Door Guiding Hardware")                               \
  DEF(L"23.30.40.11.24", L"Door Holding Hardware")                               \
  DEF(L"23.30.40.11.24.11", L"Door Hold Open Hardware")                          \
  DEF(L"23.30.40.11.27", L"Door Closing Hardware")                               \
  DEF(L"23.30.40.11.27.11", L"Door Closers")                                     \
  DEF(L"23.30.40.11.27.11.11", L"Floor Door Closers")                            \
  DEF(L"23.30.40.11.27.11.14", L"Surface Door Closers")                          \
  DEF(L"23.30.40.11.27.11.17", L"Concealed Overhead Door Closers")               \
  DEF(L"23.30.40.11.31", L"Door Locking Hardware")                               \
  DEF(L"23.30.40.11.34", L"Automatic Door Controls and Operators")               \
  DEF(L"23.30.40.11.34.11", L"Card Key Door Locking Hardware")                   \
  DEF(L"23.30.40.11.34.14", L"Electrical Door Locking Control")                  \
  DEF(L"23.30.40.11.34.17", L"Electromagnetic Door Holders")                     \
  DEF(L"23.30.40.14", L"Hardware for Windows")                                   \
  DEF(L"23.30.40.14.11", L"Sliding Window Gear")                                 \
  DEF(L"23.30.40.14.11.11", L"Horizontal Sliding Window Gear")                   \
  DEF(L"23.30.40.14.11.14", L"Vertical Sliding Window Gear")                     \
  DEF(L"23.30.40.14.11.17", L"Sliding Projecting Window Gear")                   \
  DEF(L"23.30.40.14.14", L"Horizontal Pivoting Window Gear")                     \
  DEF(L"23.30.40.14.17", L"Window Tilt and Turn Gear")                           \
  DEF(L"23.30.40.14.21", L"Louver Gear")                                         \
  DEF(L"23.30.40.14.24", L"Automatic Window Equipment")                          \
  DEF(L"23.30.40.14.27", L"Window Locks")                                        \
  DEF(L"23.30.40.14.31", L"Window Lifts")                                        \
  DEF(L"23.30.40.14.34", L"Window Operators")                                    \
  DEF(L"23.30.40.17", L"Specialties for Openings")                               \
  DEF(L"23.30.40.17.11", L"Door Specialties")                                    \
  DEF(L"23.30.40.17.14", L"Window Specialties")                                  \
  DEF(L"23.30.40.21", L"Mechanical Fasteners for Openings ")                     \
  DEF(L"23.30.40.24", L"Hinges and Pivots")                                      \
  DEF(L"23.30.40.24.11", L"Hinges")                                              \
  DEF(L"23.30.40.24.14", L"Pivots")                                              \
  DEF(L"23.30.40.27", L"Locks and Latches")                                      \
  DEF(L"23.30.40.27.11", L"Mortise")                                             \
  DEF(L"23.30.40.27.14", L"Cylindrical Latch")                                   \
  DEF(L"23.30.40.27.17", L"Lock Cylinders")                                      \
  DEF(L"23.30.40.27.21", L"Deadbolts")                                           \
  DEF(L"23.30.40.31", L"Handles, Knobs, Levers, and Security Bars")              \
  DEF(L"23.30.40.31.11", L"Security Devices")                                    \
  DEF(L"23.30.40.34", L"Weatherstripping and Seals")                             \
  DEF(L"23.30.40.34.11", L"Door Weatherstripping and Seals")                     \
  DEF(L"23.30.40.34.14", L"Thresholds")                                          \
  DEF(L"23.30.40.34.17", L"Window Weatherstripping and Seals")                   \
  DEF(L"23.30.40.99", L"Other Openings Hardware")                                \
  DEF(L"23.30.40.99.11", L"Door Stops")                                          \
  DEF(L"23.30.50.00", L"Glazing")                                                \
  DEF(L"23.30.50.11", L"Glass Glazing   ")                                       \
  DEF(L"23.30.50.11.11", L"Bent Glass")                                          \
  DEF(L"23.30.50.11.14", L"Chemically-Strengthened Glass")                       \
  DEF(L"23.30.50.11.17", L"Coated Glass")                                        \
  DEF(L"23.30.50.11.21", L"Composite Glass")                                     \
  DEF(L"23.30.50.11.24", L"Decorative Glass")                                    \
  DEF(L"23.30.50.11.27", L"Fire-Rated Glass")                                    \
  DEF(L"23.30.50.11.31", L"Float Glass")                                         \
  DEF(L"23.30.50.11.34", L"Heat-Strengthened Glass")                             \
  DEF(L"23.30.50.11.37", L"Impact Resistant Glass")                              \
  DEF(L"23.30.50.11.41", L"Insulating Glass")                                    \
  DEF(L"23.30.50.11.44", L"Laminated Glass")                                     \
  DEF(L"23.30.50.11.47", L"Low-Emissivity Glass")                                \
  DEF(L"23.30.50.11.51", L"Mirrored Glass")                                      \
  DEF(L"23.30.50.11.54", L"Rolled Glass")                                        \
  DEF(L"23.30.50.11.57", L"Spandrel Glass")                                      \
  DEF(L"23.30.50.11.61", L"Tempered Glass")                                      \
  DEF(L"23.30.50.11.64", L"Wired Glass")                                         \
  DEF(L"23.30.50.14", L"Plastic Glazing")                                        \
  DEF(L"23.30.50.14.11", L"Ballistics-Resistant Plastic Glazing")                \
  DEF(L"23.30.50.14.14", L"Decorative Plastic Glazing")                          \
  DEF(L"23.30.50.14.17", L"Insulating Plastic Glazing")                          \
  DEF(L"23.30.50.14.21", L"Translucent Plastic Glazing")                         \
  DEF(L"23.30.50.14.24", L"Transparent Plastic Glazing")                         \
  DEF(L"23.30.50.14.27", L"Mirrored Plastic Glazing")                            \
  DEF(L"23.30.50.17", L"Glazing by Special Function")                            \
  DEF(L"23.30.50.17.11", L"Security Glazing")                                    \
  DEF(L"23.30.50.17.14", L"Ballistics-Resistant Glass Glazing")                  \
  DEF(L"23.30.50.17.17", L"Pressure-Resistant Glazing")                          \
  DEF(L"23.30.50.17.21", L"Hurricane-Resistant Glazing")                         \
  DEF(L"23.30.50.17.24", L"Radiation-Resistant Glazing")                         \
  DEF(L"23.30.50.17.27", L"Transparent Mirrored Glazing")                        \
  DEF(L"23.30.50.17.31", L"Cable Suspended Glazing")                             \
  DEF(L"23.30.50.21", L"Glazing Components")                                    \
  DEF(L"23.30.50.21.11", L"Glazing Frames")                                      \
  DEF(L"23.30.50.21.14", L"Glazing Sections")                                    \
  DEF(L"23.30.50.21.17", L"Mechanical Glazing Fasteners")                        \
  DEF(L"23.30.50.24", L"Glazing Accessories")                                    \
  DEF(L"23.30.50.24.11", L"Glazing Beads")                                       \
  DEF(L"23.30.50.24.14", L"Condensation Channels")                               \
  DEF(L"23.30.50.24.17", L"Glazing Sealants and Tapes")                          \
  DEF(L"23.30.50.24.21", L"Glazing Gaskets")                                     \
  DEF(L"23.30.50.24.24", L"Glazing Leading Material")                            \
  DEF(L"23.30.50.27", L"Protective Films by Performance")                        \
  DEF(L"23.30.50.27.11", L"Solar Control Films")                                 \
  DEF(L"23.30.50.27.14", L"Safety Films")                                        \
  DEF(L"23.30.50.27.17", L"Security Films")                                      \
  DEF(L"23.30.50.31", L"Glazing Sections, Blocks")                               \
  DEF(L"23.30.50.31.11", L"U Sections")                                          \
  DEF(L"23.30.50.31.14", L"Glass Masonry Units")                                 \
  DEF(L"23.30.60.00", L"Protection of Openings")                                 \
  DEF(L"23.30.60.11", L"Exterior Protection of Openings")                        \
  DEF(L"23.30.60.11.11", L"Projecting Screens")                                  \
  DEF(L"23.30.60.11.11.11", L"Canopies")                                         \
  DEF(L"23.30.60.11.11.11.11", L"Solid Canopies")                                \
  DEF(L"23.30.60.11.11.11.14", L"Louvered Canopies")                             \
  DEF(L"23.30.60.11.11.14", L"Vertical Fins")                                    \
  DEF(L"23.30.60.11.11.14.11", L"Solid Vertical Fins")                           \
  DEF(L"23.30.60.11.11.14.14", L"Louvered Vertical Fins")                        \
  DEF(L"23.30.60.11.11.17", L"Awnings")                                          \
  DEF(L"23.30.60.11.11.17.11", L"Manual Awnings")                                \
  DEF(L"23.30.60.11.11.17.14", L"Powered Awnings")                               \
  DEF(L"23.30.60.11.14", L"Exterior Shutters")                                   \
  DEF(L"23.30.60.11.14.11", L"Shutter Components")                              \
  DEF(L"23.30.60.11.14.11.11", L"Roller Shutter Gear")                           \
  DEF(L"23.30.60.11.14.11.14", L"Roller Shutter Sections")                       \
  DEF(L"23.30.60.11.14.11.17", L"Roller Shutter Casings")                        \
  DEF(L"23.30.60.11.14.14", L"Sliding Exterior Shutters")                        \
  DEF(L"23.30.60.11.14.17", L"Swinging Exterior Shutters")                       \
  DEF(L"23.30.60.11.14.21", L"Coiling Exterior Shutters")                        \
  DEF(L"23.30.60.11.17", L"Exterior Louvers and Grilles")                        \
  DEF(L"23.30.60.11.17.11", L"Fixed Exterior Louvers and Grilles")               \
  DEF(L"23.30.60.11.17.14", L"Roller Exterior Louvers and Grilles")              \
  DEF(L"23.30.60.11.17.17", L"Sliding Exterior Louvers and Grilles")             \
  DEF(L"23.30.60.11.21", L"Storm Panels")                                        \
  DEF(L"23.30.60.11.21.11", L"Demountable Storm Panels")                         \
  DEF(L"23.30.60.11.21.14", L"Movable Storm Panels")                             \
  DEF(L"23.30.60.14", L"Interior Window Treatment")                              \
  DEF(L"23.30.60.14.11", L"Blinds")                                              \
  DEF(L"23.30.60.14.11.11", L"Horizontal Blinds")                                \
  DEF(L"23.30.60.14.11.14", L"Vertical Blinds")                                  \
  DEF(L"23.30.60.14.11.17", L"Blinds Components")                                \
  DEF(L"23.30.60.14.11.17.11", L"Slats")                                         \
  DEF(L"23.30.60.14.11.17.14", L"Vanes")                                         \
  DEF(L"23.30.60.14.11.17.17", L"Blinds Hardware")                               \
  DEF(L"23.30.60.14.14", L"Curtains and Drapes")                                 \
  DEF(L"23.30.60.14.17", L"Interior Shutters")                                   \
  DEF(L"23.30.60.14.21", L"Shades")                                              \
  DEF(L"23.30.60.17", L"Fire and Smoke Shutters and Curtains")                   \
  DEF(L"23.30.60.17.11", L"Fire Shutters")                                       \
  DEF(L"23.30.60.17.11.11", L"Vertical Fire Shutters")                           \
  DEF(L"23.30.60.17.11.14", L"Horizontal Fire Shutters")                         \
  DEF(L"23.30.60.17.14", L"Smoke Curtains and Shutters")                         \
  DEF(L"23.30.60.17.17", L"Water Spray Smoke Curtains")                          \
  DEF(L"23.30.60.21", L"Insect Screens")                                         \
  DEF(L"23.30.60.21.11", L"Complete Insect Screens")                             \
  DEF(L"23.30.60.21.14", L"Components")                                         \
  DEF(L"23.30.60.21.14.11", L"Frames for Insect Screens")                        \
  DEF(L"23.30.60.21.14.14", L"Mesh for Insect Screens")                          \
  DEF(L"23.30.70.00", L"Circulation and Escape")                                 \
  DEF(L"23.30.70.11", L"Ramps")                                                  \
  DEF(L"23.30.70.14", L"Walkways")                                               \
  DEF(L"23.30.70.17", L"Ladders")                                                \
  DEF(L"23.30.70.17.11", L"Ladder Components")                                  \
  DEF(L"23.30.70.17.11.11", L"Ladder Hardware")                                  \
  DEF(L"23.30.70.17.11.14", L"Rungs")                                            \
  DEF(L"23.30.70.17.14", L"Vertical Ladders")                                    \
  DEF(L"23.30.70.17.17", L"Ship\u2019s Ladders")                                      \
  DEF(L"23.30.70.21", L"Stairs")                                                 \
  DEF(L"23.30.70.21.11", L"Stair Components")                                   \
  DEF(L"23.30.70.21.11.11", L"Stair Treads")                                     \
  DEF(L"23.30.70.21.11.11.11", L"Stair Nosings")                                 \
  DEF(L"23.30.70.21.11.11.14", L"Tread Coverings")                               \
  DEF(L"23.30.70.21.11.14", L"Stair Railings")                                   \
  DEF(L"23.30.70.21.11.17", L"Stair Handrails")                                  \
  DEF(L"23.30.70.21.11.21", L"Stair Barrier Gates")                              \
  DEF(L"23.30.70.21.14", L"Spiral Stairs")                                       \
  DEF(L"23.30.70.21.14.11", L"Metal Spiral Stairs")                              \
  DEF(L"23.30.70.21.14.14", L"Wood Spiral Stairs")                               \
  DEF(L"23.30.70.21.17", L"Retractable Stairs")                                  \
  DEF(L"23.30.70.24", L"Fire Escapes")                                           \
  DEF(L"23.30.70.24.11", L"Escape Ladders, Stairs")                              \
  DEF(L"23.30.70.24.11.11", L"Fire Escapes")                                     \
  DEF(L"23.30.70.24.14", L"Escape Slides")                                       \
  DEF(L"23.30.70.24.17", L"Slings")                                              \
  DEF(L"23.30.80.00", L"Circulation Guiding and Protection")                     \
  DEF(L"23.30.80.11", L"Guardrails")                                             \
  DEF(L"23.30.80.11.11", L"Guardrail Components")                               \
  DEF(L"23.30.80.11.11.11", L"Infill Panels")                                    \
  DEF(L"23.30.80.11.11.14", L"Posts, Newel Posts, Pickets")                      \
  DEF(L"23.30.80.11.11.17", L"Railing")                                          \
  DEF(L"23.30.80.14", L"Handrails")                                              \
  DEF(L"23.30.82.11", L"Rope Handrails")                                         \
  DEF(L"23.30.82.12", L"Cappings")                                               \
  DEF(L"23.30.82.13", L"Chain Handrails")                                        \
  DEF(L"23.30.80.17", L"Impact Protection")                                      \
  DEF(L"23.30.80.17.11", L"Impact Guard Rails")                                  \
  DEF(L"23.30.80.17.11.11", L"Bumper Guards")                                    \
  DEF(L"23.30.80.17.14", L"Corner Guards")                                       \
  DEF(L"23.30.80.17.17", L"Column Protectors")                                   \
  DEF(L"23.30.80.17.21", L"Door and Wall Protectors")                            \
  DEF(L"23.30.80.17.21.11", L"Impact-Resistant Wall Protection")                 \
  DEF(L"23.35.00.00", L"Covering, Cladding, and Finishes")                       \
  DEF(L"23.35.05.00", L"Multi-Function Coverings, Claddings, Linings")          \
  DEF(L"23.35.05.11", L"Multi-Function Claddings")                               \
  DEF(L"23.35.05.14", L"Preformed Casings")                                      \
  DEF(L"23.35.05.17", L"Ancillary Products for Coverings and Claddings")         \
  DEF(L"23.35.05.17.11", L"Supports for Coverings and Claddings")                \
  DEF(L"23.35.05.17.14", L"Mechanical Fasteners for Coverings and Claddings")    \
  DEF(L"23.35.05.17.17",                                                        \
      L"Movement and Dividing Joints for Coverings and Claddings")              \
  DEF(L"23.35.05.17.21", L"Joint Coverings, Flashings, Tapes")                   \
  DEF(L"23.35.05.17.24", L"Reinforcements for Coverings and Claddings")          \
  DEF(L"23.35.05.17.27", L"Trims, Edgings, Cappings")                            \
  DEF(L"23.35.05.17.31", L"Spacers")                                             \
  DEF(L"23.35.05.17.34", L"Profile Fillers")                                     \
  DEF(L"23.35.05.17.37", L"Underlays, Linings, Separations")                     \
  DEF(L"23.35.05.17.41", L"Beddings, Adhesives for Coverings and Claddings")     \
  DEF(L"23.35.05.17.44", L"Sealants for Coverings and Claddings")                \
  DEF(L"23.35.06.10", L"Roof and Wall Cladding")                                 \
  DEF(L"23.35.06.11", L"Siding")                                                 \
  DEF(L"23.35.06.11.10", L"Metal Siding")                                        \
  DEF(L"23.35.06.11.20", L"Composition Siding")                                  \
  DEF(L"23.35.06.11.30", L"Mineral Fiber Cement Siding")                         \
  DEF(L"23.35.06.11.40", L"Plastic Siding")                                      \
  DEF(L"23.35.06.11.50", L"Wood Siding")                                         \
  DEF(L"23.35.06.20", L"Multi-Function Linings")                                 \
  DEF(L"23.35.06.21", L"Roof and Wall Panels")                                   \
  DEF(L"23.35.06.21.10", L"Metal Roof and Wall Panels")                          \
  DEF(L"23.35.06.21.20", L"Plastic Roof and Wall Panels")                        \
  DEF(L"23.35.06.21.30", L"Wood Roof and Wall Panels")                           \
  DEF(L"23.35.06.21.40", L"Composite Roof and Wall Panels")                      \
  DEF(L"23.35.06.21.50", L"Faced Roof and Wall Panels")                          \
  DEF(L"23.35.06.21.51", L"Aggregate Coated Panels")                             \
  DEF(L"23.35.06.21.52", L"Porcelain Enameled Faced Panels")                     \
  DEF(L"23.35.06.21.53", L"Tile Faced Panels")                                   \
  DEF(L"23.35.06.21.60", L"Fiber-Reinforced Cementitious Panels")                \
  DEF(L"23.35.06.21.61", L"Glass-Fiber-Reinforced Cementitious Panels")          \
  DEF(L"23.35.06.21.62", L"Miner-Fiber-Reinforced Cementitious Panels")          \
  DEF(L"23.35.06.22", L"Ceiling and Wall Panels")                                \
  DEF(L"23.35.06.22.10", L"Flexible Wood Sheets")                                \
  DEF(L"23.35.06.22.20", L"Acoustical Wall Treatment")                           \
  DEF(L"23.35.06.23", L"Plasters")                                               \
  DEF(L"23.35.10.00", L"Wall Coverings, Claddings, Linings")                     \
  DEF(L"23.35.10.11", L"Wall Cladding Sections")                                 \
  DEF(L"23.35.10.11.11", L"Metal Wall Cladding Sections")                        \
  DEF(L"23.35.10.11.14", L"Wood Wall Cladding Sections")                         \
  DEF(L"23.35.10.11.17", L"Plastics Wall Cladding Sections")                     \
  DEF(L"23.35.10.11.99", L"Other Wall Cladding Sections")                        \
  DEF(L"23.35.10.14", L"Wall Tiles")                                             \
  DEF(L"23.35.10.14.11", L"Stone, Natural and Reconstituted Wall Tiles")         \
  DEF(L"23.35.10.14.14", L"Cementitious Wall Tiles")                             \
  DEF(L"23.35.10.14.17", L"Clay-Based Wall Tiles")                               \
  DEF(L"23.35.10.14.21", L"Metal Wall Tiles")                                    \
  DEF(L"23.35.10.14.24", L"Vegetable-Based Wall Tiles")                          \
  DEF(L"23.35.10.14.27", L"Plastics Wall Tiles")                                 \
  DEF(L"23.35.10.14.31", L"Other Wall Tiles")                                    \
  DEF(L"23.35.10.17", L"Wall Cladding Panels")                                   \
  DEF(L"23.35.10.17.11", L"Stone Facing")                                        \
  DEF(L"23.35.10.17.14", L"Cementitious Wall Cladding Panels")                   \
  DEF(L"23.35.10.17.14.11", L"Precast Concrete Wall Cladding Panels")            \
  DEF(L"23.35.10.17.17", L"Metal Wall Cladding Panels")                          \
  DEF(L"23.35.10.17.21", L"Wood-Based Wall Cladding Panels")                     \
  DEF(L"23.35.10.17.24", L"Plastic Wall Cladding Panels")                        \
  DEF(L"23.35.10.17.24.11", L"Plastic Blocks")                                   \
  DEF(L"23.35.10.17.99", L"Other Wall Cladding Panels")                          \
  DEF(L"23.35.10.21", L"Wall Cladding Sheets")                                   \
  DEF(L"23.35.10.21.11", L"Fiber-Based Wall Cladding Sheets")                    \
  DEF(L"23.35.10.21.14", L"Metal Wall Cladding Sheets")                          \
  DEF(L"23.35.10.21.17", L"Plastic Wall Cladding Sheets")                        \
  DEF(L"23.35.10.24", L"Wall Coverings")                                         \
  DEF(L"23.35.10.24.11", L"Wallpaper")                                           \
  DEF(L"23.35.10.24.14", L"Wall Fabrics")                                        \
  DEF(L"23.35.10.24.17", L"Plastic Wall Coverings")                              \
  DEF(L"23.35.10.24.21", L"Cork Wall Covering")                                  \
  DEF(L"23.35.10.24.24", L"Vinyl-Coated Fabric Wall Covering")                   \
  DEF(L"23.35.10.24.27", L"Vinyl Wall Covering")                                 \
  DEF(L"23.35.10.24.31", L"Wall Carpet")                                         \
  DEF(L"23.35.10.24.34", L"Wall Veneers")                                        \
  DEF(L"23.35.10.27", L"Wall Linings")                                           \
  DEF(L"23.35.10.31", L"Wall Finish Coatings")                                   \
  DEF(L"23.35.10.34", L"Wall Specialties and Trim")                              \
  DEF(L"23.35.10.34.11", L"Pilasters")                                           \
  DEF(L"23.35.10.34.14", L"Niches")                                              \
  DEF(L"23.35.10.34.17", L"Moldings")                                            \
  DEF(L"23.35.10.34.21", L"Renovating Wall Coverings, Claddings")                \
  DEF(L"23.35.10.37", L"Wall Finish Restoration Products")                       \
  DEF(L"23.35.17.10", L"Renders")                                                \
  DEF(L"23.35.17.20", L"Acoustical Wall Finishes")                               \
  DEF(L"23.35.20.00", L"Roof Coverings, Claddings, Linings")                     \
  DEF(L"23.35.20.11", L"Roof Shingles and Tiles")                                \
  DEF(L"23.35.20.11.11", L"Roof Shingle and Tile Components")                   \
  DEF(L"23.35.20.11.11.11", L"Shingles, Shakes")                                 \
  DEF(L"23.35.20.11.11.14", L"Slate, Tile Vents")                                \
  DEF(L"23.35.20.11.11.17", L"Tile and Slate Mechanical Fasteners")              \
  DEF(L"23.35.20.11.11.21", L"Ridges, Rake Edges (Verges  ), Edges")             \
  DEF(L"23.35.20.11.11.24", L"Underlayment")                                     \
  DEF(L"23.35.20.11.14", L"Roof Tiles")                                          \
  DEF(L"23.35.20.11.14.11", L"Clay")                                             \
  DEF(L"23.35.20.11.14.14", L"Concrete")                                         \
  DEF(L"23.35.20.11.14.17", L"Metal")                                            \
  DEF(L"23.35.20.11.14.21", L"Mineral Fiber Cement")                             \
  DEF(L"23.35.20.11.14.24", L"Plastic")                                          \
  DEF(L"23.35.20.11.17", L"Slates")                                              \
  DEF(L"23.35.20.11.21", L"Natural Stone Roofing")                               \
  DEF(L"23.35.20.11.24", L"Roof Shingles")                                       \
  DEF(L"23.35.20.11.24.11", L"Asphalt Roof Shingles")                            \
  DEF(L"23.35.20.11.24.14", L"Fiberglass Reinforced Roof Shingles")              \
  DEF(L"23.35.20.11.24.17", L"Metal Roof Shingles")                              \
  DEF(L"23.35.20.11.24.21", L"Mineral Fiber Cement Roof Shingles")               \
  DEF(L"23.35.20.11.24.24", L"Plastic Roof Shingles")                            \
  DEF(L"23.35.20.11.24.27", L"Porcelain Enamel Roof Shingles")                   \
  DEF(L"23.35.20.11.24.31", L"Wood Shingles")                                    \
  DEF(L"23.35.20.11.27", L"Shakes")                                              \
  DEF(L"23.35.20.11.27.11", L"Wood Shakes")                                      \
  DEF(L"23.35.20.14", L"Roof Cladding")                                          \
  DEF(L"23.35.20.14.11", L"Roof Cladding Sheets")                                \
  DEF(L"23.35.20.14.11.11", L"Metal Roof Panels")                                \
  DEF(L"23.35.20.14.11.14", L"Sheet Metal Roofing")                              \
  DEF(L"23.35.20.14.14", L"Roof Battens")                                        \
  DEF(L"23.35.20.17", L"Roof Coverings")                                         \
  DEF(L"23.35.20.17.11", L"Thatched Roofing")                                    \
  DEF(L"23.35.20.17.14", L"Sod Roofing")                                         \
  DEF(L"23.35.20.17.17", L"Vegetated Covering")                                  \
  DEF(L"23.35.20.21", L"Roof Membranes")                                         \
  DEF(L"23.35.20.21.11", L"Single-Layer Roof Membranes")                         \
  DEF(L"23.35.20.21.11.11", L"Elastomeric Single-Layer Roof Membranes")          \
  DEF(L"23.35.20.21.11.11.11",                                                  \
      L"Chlorinated Polyethylene (CPE) Single-Layer Roof Membranes")            \
  DEF(L"23.35.20.21.11.11.14",                                                  \
      L"Chlorosulfonated Polyethylene (CSPE) Single-Layer Roof Membranes")      \
  DEF(L"23.35.20.21.11.11.17",                                                  \
      L"Copolymer Alloy (CPA) Single-Layer Roof Membranes")                     \
  DEF(L"23.35.20.21.11.11.21",                                                  \
      L"Ethylene Propylene Diene Monomer (EPDM) Single-Layer Roof Membranes")   \
  DEF(L"23.35.20.21.11.11.24",                                                  \
      L"Nitrile Butadiene Polymer (NBP) Single-Layer Roof Membranes")           \
  DEF(L"23.35.20.21.11.11.27",                                                  \
      L"Polyisobutylene (PIB) Single-Layer Roof Membranes")                     \
  DEF(L"23.35.20.21.11.14", L"Thermoplastic Single-Layer Roof Membranes")        \
  DEF(L"23.35.20.21.11.14.11",                                                  \
      L"Ethylene Interpolymer (EIP) Single-Layer Roof Membranes")               \
  DEF(L"23.35.20.21.11.14.14",                                                  \
      L"Polyvinyl chloride (PVC) Single-Layer Roof Membranes")                  \
  DEF(L"23.35.20.21.11.14.17",                                                  \
      L"Thermoplastic Alloy (TPA) Single-Layer Roof Membranes")                 \
  DEF(L"23.35.20.21.14", L"Multi-Layer Roof Membranes")                          \
  DEF(L"23.35.20.21.14.11", L"Built-Up Bituminous Roofing")                      \
  DEF(L"23.35.20.21.14.11.11", L"Asphalt Roofing")                               \
  DEF(L"23.35.20.21.14.11.14", L"Coal-Tar Roofing")                              \
  DEF(L"23.35.20.21.14.14", L"Cold-Applied Bituminous Roofing")                  \
  DEF(L"23.35.20.21.14.14.11", L"Cold-Applied Mastic Roof Membrane")             \
  DEF(L"23.35.20.21.14.14.14",                                                  \
      L"Glass-Fiber-Reinforced Asphalt Emulsion Roofing")                       \
  DEF(L"23.35.20.21.14.17",                                                     \
      L"Modified Bituminous Roof Membranes (APP, SBS, etc)")                   \
  DEF(L"23.35.20.21.17", L"Fluid Applied Roofing")                               \
  DEF(L"23.35.20.21.21", L"Coated Foam Roofing")                                 \
  DEF(L"23.35.20.21.24", L"Roll Roofing")                                        \
  DEF(L"23.35.20.24", L"Roof Decking")                                           \
  DEF(L"23.35.20.24.11", L"Cementitious Roof Deck")                              \
  DEF(L"23.35.20.24.14", L"Lightweight Concrete Roof Insulation")                \
  DEF(L"23.35.20.24.14.11", L"Composite Concrete and Insulation Roof Deck")      \
  DEF(L"23.35.20.24.14.14", L"Lightweight Cellular Concrete Roof Deck")          \
  DEF(L"23.35.20.24.14.17", L"Lightweight Insulating Concrete Roof Deck")        \
  DEF(L"23.35.20.24.17", L"Concrete Roof Topping")                               \
  DEF(L"23.35.20.27", L"Roof Finishing Coatings")                                \
  DEF(L"23.35.20.31", L"Roof Specialties and Accessories")                       \
  DEF(L"23.35.20.31.11", L"Roof Edgings and Trims")                              \
  DEF(L"23.35.20.31.11.11", L"Copings")                                          \
  DEF(L"23.35.20.31.11.14", L"Counterflashing Systems")                          \
  DEF(L"23.35.20.31.11.21", L"Gravel Stops and Facias")                          \
  DEF(L"23.35.20.31.11.24", L"Roof Penetration Flashing")                        \
  DEF(L"23.35.20.31.11.27", L"Reglets")                                          \
  DEF(L"23.35.20.31.11.31", L"Scuppers")                                         \
  DEF(L"23.35.20.31.14", L"Flexible Flashing")                                   \
  DEF(L"23.35.20.31.14.11", L"Laminated Sheet Flexible Flashing")                \
  DEF(L"23.35.20.31.14.14", L"Modified Bituminous Sheet Flexible Flashing")      \
  DEF(L"23.35.20.31.14.17", L"Plastic Sheet Flexible Flashing")                  \
  DEF(L"23.35.20.31.14.21", L"Rubber Sheet Flexible Flashing")                   \
  DEF(L"23.35.20.31.14.24", L"Self-Adhering Sheet Flexible Flashing")            \
  DEF(L"23.35.20.31.17", L"Roof Expansion Joints")                               \
  DEF(L"23.35.20.31.21", L"Roof Vents")                                          \
  DEF(L"23.35.20.31.21.11", L"Relief Vents")                                     \
  DEF(L"23.35.20.31.21.14", L"Ridge Vents")                                      \
  DEF(L"23.35.20.31.21.17", L"Smoke Vents")                                      \
  DEF(L"23.35.20.31.24", L"Roof Walkways")                                       \
  DEF(L"23.35.20.31.24.11", L"Roof Pavers")                                      \
  DEF(L"23.35.20.31.24.11.11", L"Precast Concrete Roof Pavers")                  \
  DEF(L"23.35.20.31.24.11.14", L"Pedestals Roof Pavers")                         \
  DEF(L"23.35.20.31.24.14", L"Roof Treads")                                      \
  DEF(L"23.35.20.31.24.14.11", L"Rubber Roof Treads")                            \
  DEF(L"23.35.20.31.27", L"Roof Accessories")                                    \
  DEF(L"23.35.20.31.27.11", L"Manufactured Roof Curbs")                          \
  DEF(L"23.35.20.31.27.14", L"Snow Guards")                                      \
  DEF(L"23.35.20.31.27.17", L"Piping Portals")                                   \
  DEF(L"23.35.20.31.27.21", L"Roof Domes, Turrets, Lanterns")                    \
  DEF(L"23.35.20.31.31", L"Vegetated Roof Planting Modules")                     \
  DEF(L"23.35.20.31.34",                                                        \
      L"Renovation Products for Roof Coverings and Claddings")                  \
  DEF(L"23.35.50.00", L"Floor Coverings")                                        \
  DEF(L"23.35.50.11", L"Flooring Specialties and Accessories")                   \
  DEF(L"23.35.50.11.11", L"Floor Toppings")                                      \
  DEF(L"23.35.50.11.11.11", L"Concrete Floor Topping")                           \
  DEF(L"23.35.50.11.14", L"Floor Underlayments")                                 \
  DEF(L"23.35.50.11.14.11", L"Cementitious Floor Underlayment")                  \
  DEF(L"23.35.50.11.14.11.11", L"Gypsum Floor Underlayment")                     \
  DEF(L"23.35.50.11.14.11.14", L"Portland Cement Floor Underlayment")            \
  DEF(L"23.35.50.11.14.14", L"Other Floor Underlayments")                        \
  DEF(L"23.35.50.11.21", L"Floor Base and Accessories")                          \
  DEF(L"23.35.50.11.21.11", L"Base and Accessories for Floor Coverings")         \
  DEF(L"23.35.50.11.21.14", L"Acoustic Floor Mountings")                         \
  DEF(L"23.35.50.11.21.17", L"Underlays, Linings, Separations")                  \
  DEF(L"23.35.50.11.24", L"Floor Mats and Grilles")                              \
  DEF(L"23.35.50.11.24.11", L"Floor Mats")                                       \
  DEF(L"23.35.50.11.24.14", L"Floor Grilles")                                    \
  DEF(L"23.35.50.11.24.17", L"Floor Gratings")                                   \
  DEF(L"23.35.50.14", L"Floor Covering Strips, Tiles, Blocks, and Slabs")        \
  DEF(L"23.35.50.14.11", L"Wood Flooring")                                       \
  DEF(L"23.35.50.14.11.11", L"Cushioned Wood Flooring Assemblies")               \
  DEF(L"23.35.50.14.11.14", L"Mastic Set Wood Flooring Assemblies")              \
  DEF(L"23.35.50.14.11.17", L"Resilient Wood Flooring Assemblies")               \
  DEF(L"23.35.50.14.11.21", L"Wood Athletic Flooring")                           \
  DEF(L"23.35.50.14.11.24", L"Wood Block Flooring")                              \
  DEF(L"23.35.50.14.11.27", L"Wood Composition Flooring")                        \
  DEF(L"23.35.50.14.11.31", L"Wood Parquet Flooring")                            \
  DEF(L"23.35.50.14.11.34", L"Wood Strip Flooring")                              \
  DEF(L"23.35.50.14.14", L"Tile Flooring")                                       \
  DEF(L"23.35.50.14.14.11", L"Ceramic Tile Flooring")                            \
  DEF(L"23.35.50.14.14.11.11", L"Ceramic Mosaic Tile Flooring")                  \
  DEF(L"23.35.50.14.14.11.14", L"Conductive Tile Flooring")                      \
  DEF(L"23.35.50.14.14.14", L"Quarry Tile Flooring")                             \
  DEF(L"23.35.52.22.10", L"Chemical-Resistant Quarry Tile Flooring")             \
  DEF(L"23.35.50.14.14.17", L"Porcelain Tile Flooring")                          \
  DEF(L"23.35.50.14.14.21", L"Glass Mosaic Tile Flooring")                       \
  DEF(L"23.35.50.14.14.24", L"Plastic Tile Flooring")                            \
  DEF(L"23.35.50.14.14.27", L"Metal Tile Flooring")                              \
  DEF(L"23.35.50.14.14.31", L"Natural Cut Stone Tile Flooring")                  \
  DEF(L"23.35.50.14.14.34", L"Tile Flooring Restoration Products")               \
  DEF(L"23.35.50.14.17", L"Terrazzo Flooring")                                   \
  DEF(L"23.35.50.14.17.11", L"Portland Cement Terrazzo Flooring")                \
  DEF(L"23.35.50.14.17.14", L"Precast Terrazzo Flooring")                        \
  DEF(L"23.35.50.14.17.17", L"Conductive Terrazzo Flooring")                     \
  DEF(L"23.35.50.14.17.21", L"Plastic matrix Terrazzo Flooring")                 \
  DEF(L"23.35.50.14.17.24", L"Terrazzo Flooring Restoration Products")           \
  DEF(L"23.35.50.14.21", L"Masonry Flooring")                                    \
  DEF(L"23.35.50.14.21.11", L"Brick Flooring")                                   \
  DEF(L"23.35.50.14.21.11.11", L"Chemical-Resistant Brick Flooring")             \
  DEF(L"23.35.50.14.21.14", L"Stone Flooring")                                   \
  DEF(L"23.35.50.14.24", L"Precast Tile and Slab Flooring")                      \
  DEF(L"23.35.50.14.27", L"Metal Flooring")                                      \
  DEF(L"23.35.50.17", L"Resilient Flooring")                                     \
  DEF(L"23.35.50.17.11", L"Cork Flooring")                                       \
  DEF(L"23.35.50.17.14", L"Plastic Flooring")                                    \
  DEF(L"23.35.50.17.17", L"Rubber Flooring")                                     \
  DEF(L"23.35.50.17.21", L"Linoleum Flooring")                                   \
  DEF(L"23.35.50.17.24", L"Mechanical Fasteners for Resilient Floor Coverings")  \
  DEF(L"23.35.50.17.24.11", L"Floor Clips")                                      \
  DEF(L"23.35.50.17.24.14", L"Carpet Grippers")                                  \
  DEF(L"23.35.50.17.24.17", L"Stair Rods")                                       \
  DEF(L"23.35.50.17.27", L"Other Resilient Flooring")                            \
  DEF(L"23.35.50.21", L"Carpet Flooring")                                        \
  DEF(L"23.35.50.21.11", L"Carpet Cushion")                                      \
  DEF(L"23.35.50.21.14", L"Carpet Tile")                                         \
  DEF(L"23.35.50.21.17", L"Indoor and Outdoor Carpet")                           \
  DEF(L"23.35.50.21.21", L"Sheet Carpet")                                        \
  DEF(L"23.35.50.24", L"Preformed Flooring Systems")                             \
  DEF(L"23.35.50.24.11", L"Floating Floors")                                     \
  DEF(L"23.35.50.24.14", L"Portable Floors")                                     \
  DEF(L"23.35.50.24.17", L"Convertible Floors")                                  \
  DEF(L"23.35.50.24.21", L"Gymnasium or Dance Flooring")                         \
  DEF(L"23.35.50.27", L"Access Flooring")                                        \
  DEF(L"23.35.50.27.11", L"Access Flooring Components")                         \
  DEF(L"23.35.50.27.11.11", L"Access Floors, Frames")                            \
  DEF(L"23.35.50.27.11.14", L"Access Floors, Infill Panels")                     \
  DEF(L"23.35.50.27.14", L"Rigid Grid Access Flooring")                          \
  DEF(L"23.35.50.27.17", L"Snap-On Stringer Access Flooring")                    \
  DEF(L"23.35.50.27.21", L"Stringerless Access Flooring")                        \
  DEF(L"23.35.70.00", L"Ceiling Coverings, Claddings, and Linings")              \
  DEF(L"23.35.70.11", L"Ceiling Tiles, Panels, Strips, and Sections")            \
  DEF(L"23.35.70.11.11", L"Ceiling Tiles")                                       \
  DEF(L"23.35.70.11.11.11", L"Acoustical Ceiling Tile")                          \
  DEF(L"23.35.70.11.14", L"Ceiling Panels")                                      \
  DEF(L"23.35.70.11.14.11", L"Acoustical Ceiling Panels")                        \
  DEF(L"23.35.70.11.14.14", L"Mirror Ceiling Panel")                             \
  DEF(L"23.35.70.11.17", L"Ceiling Covering Strips")                             \
  DEF(L"23.35.70.11.17.11", L"Linear Metal Ceiling Covering Strips")             \
  DEF(L"23.35.70.11.17.14", L"Linear Wood Ceiling Covering Strips")              \
  DEF(L"23.35.70.11.21", L"Ceiling Covering Sections")                           \
  DEF(L"23.35.70.11.21.11", L"Suspended Decorative Ceiling Grids")               \
  DEF(L"23.35.70.14", L"Ceiling Finishing Coatings")                             \
  DEF(L"23.35.70.14.11", L"Textured Ceilings")                                   \
  DEF(L"23.35.70.14.11.11", L"Gypsum Panel Textured Ceilings")                   \
  DEF(L"23.35.70.14.11.14", L"Metal Panel Textured Ceilings")                    \
  DEF(L"23.35.70.17", L"Ceiling Specialties and Accessories")                    \
  DEF(L"23.35.70.17.11", L"Roses, Ceiling Centerpieces")                         \
  DEF(L"23.35.70.17.14", L"Ceiling Coving")                                      \
  DEF(L"23.35.70.17.17", L"Cornices, Friezes")                                   \
  DEF(L"23.35.70.21", L"Ceiling Assembly Restoration Products")                  \
  DEF(L"23.35.70.24", L"Ceilings")                                               \
  DEF(L"23.35.70.24.11", L"Suspended Ceilings")                                  \
  DEF(L"23.35.70.24.11.11", L"Suspended Ceiling Components")                    \
  DEF(L"23.35.70.24.11.11.11", L"Suspended Ceilings, Suspension Assembly")       \
  DEF(L"23.35.70.24.11.11.14", L"Suspended Ceilings, Panels and Tiles")          \
  DEF(L"23.35.70.24.11.11.17", L"Suspended Ceilings, Grids")                     \
  DEF(L"23.35.70.24.11.11.21", L"Mechanical Fasteners for Suspended Ceilings")   \
  DEF(L"23.35.70.24.11.14", L"Acoustical Ceilings")                              \
  DEF(L"23.35.70.24.11.14.11", L"Metal Pan Acoustical Ceilings")                 \
  DEF(L"23.35.70.24.11.14.14", L"Acoustical Panel Ceilings")                     \
  DEF(L"23.35.70.24.11.14.17", L"Acoustical Tile Ceilings")                      \
  DEF(L"23.35.70.24.11.17", L"Specialty Ceilings")                               \
  DEF(L"23.35.70.24.11.17.11", L"Integrated Ceilings")                           \
  DEF(L"23.35.70.24.11.17.14", L"Linear Ceilings")                               \
  DEF(L"23.35.70.24.11.17.14.11", L"Metal Linear Ceilings")                      \
  DEF(L"23.35.70.24.11.17.14.14", L"Wood Linear Ceilings")                       \
  DEF(L"23.35.70.24.11.17.17", L"Luminous Ceilings")                             \
  DEF(L"23.35.70.24.11.17.21", L"Mirror Panel Ceilings")                         \
  DEF(L"23.35.70.24.11.17.24", L"Textured Ceilings")                             \
  DEF(L"23.35.70.24.11.17.27", L"Suspended Decorative Grids")                    \
  DEF(L"23.35.70.24.14", L"Stretched Fabric Ceilings")                           \
  DEF(L"23.40.00.00", L"Equipment and Furnishings")                              \
  DEF(L"23.40.05.00", L"Plants and Planting Products")                           \
  DEF(L"23.40.05.11", L"Planting Products")                                      \
  DEF(L"23.40.05.11.14", L"Plant Maintenance Products")                          \
  DEF(L"23.40.05.11.14.17", L"Mowing Equipment")                                 \
  DEF(L"23.40.05.11.14.21", L"Pruning Equipment")                                \
  DEF(L"23.40.05.11.14.24", L"Watering Equipment")                               \
  DEF(L"23.40.05.11.14.27", L"Irrigation System")                                \
  DEF(L"23.40.05.17", L"Exterior Plants")                                        \
  DEF(L"23.40.05.17.11", L"Ground Covers")                                       \
  DEF(L"23.40.05.17.14", L"Plants and Bulbs")                                    \
  DEF(L"23.40.05.17.17", L"Shrubs")                                              \
  DEF(L"23.40.05.17.21", L"Coniferous Trees")                                    \
  DEF(L"23.40.05.17.24", L"Deciduous Trees")                                     \
  DEF(L"23.40.05.21", L"Planting Accessories")                                   \
  DEF(L"23.40.05.21.11", L"Landscaping Edging")                                  \
  DEF(L"23.40.05.21.14", L"Landscape Timbers")                                   \
  DEF(L"23.40.05.21.17", L"Planters")                                            \
  DEF(L"23.40.05.21.21", L"Tree Grates")                                         \
  DEF(L"23.40.05.21.24", L"Tree Grids")                                          \
  DEF(L"23.40.10.00", L"Exterior Equipment and Furnishings")                     \
  DEF(L"23.40.10.11", L"Site Furnishings")                                       \
  DEF(L"23.40.10.11.11", L"Bicycle Racks")                                       \
  DEF(L"23.40.10.11.14", L"Exterior Seating")                                    \
  DEF(L"23.40.10.11.17", L"Exterior Tables")                                     \
  DEF(L"23.40.10.11.21", L"Trash Receptors")                                     \
  DEF(L"23.40.10.11.24", L"Storage Specialties for Services and Maintenance")    \
  DEF(L"23.40.10.14", L"Exterior Specialties")                                   \
  DEF(L"23.40.10.14.11", L"Flagpoles")                                           \
  DEF(L"23.40.10.14.11.11", L"Automatic Flagpoles")                              \
  DEF(L"23.40.10.14.11.14", L"Ground-Set Flagpoles")                             \
  DEF(L"23.40.10.14.11.17", L"Nautical Flagpoles")                               \
  DEF(L"23.40.10.14.11.21", L"Wall-Mounted Flagpoles")                           \
  DEF(L"23.40.10.14.14", L"Manufactured Exterior Specialties")                   \
  DEF(L"23.40.10.14.14.11", L"Weathervanes")                                     \
  DEF(L"23.40.10.14.14.14", L"Clocks")                                           \
  DEF(L"23.40.10.14.14.17", L"Cupolas")                                          \
  DEF(L"23.40.10.14.14.21", L"Spires")                                           \
  DEF(L"23.40.10.14.14.24", L"Steeples")                                         \
  DEF(L"23.40.10.14.14.99", L"Other Manufactured Exterior Specialties")          \
  DEF(L"23.40.10.14.17", L"Memorials and Statuary")                              \
  DEF(L"23.40.10.14.21", L"Markers and Monuments")                               \
  DEF(L"23.40.10.14.24", L"Exterior Signs")                                      \
  DEF(L"23.40.10.14.24.11", L"Signs, Finger Posts")                             \
  DEF(L"23.40.10.14.24.14", L"Street Nameplates")                                \
  DEF(L"23.40.10.14.24.17", L"Illuminated Signs")                                \
  DEF(L"23.40.10.14.27", L"Bollards ")                                           \
  DEF(L"23.40.10.14.31", L"Public Lighting Columns")                             \
  DEF(L"23.40.10.17", L"Garden and Park Furniture")                              \
  DEF(L"23.40.10.17.11", L"Garden/Patio Seating and Tables")                     \
  DEF(L"23.40.10.17.14", L"Garden Umbrellas")                                    \
  DEF(L"23.40.10.17.17", L"Exterior Ornamental Fountains")                       \
  DEF(L"23.40.10.17.21", L"Bird Houses and Feeders")                             \
  DEF(L"23.40.10.17.24", L"Bird Baths")                                          \
  DEF(L"23.40.10.17.27", L"Tubs for Plants")                                     \
  DEF(L"23.40.10.17.31", L"Sundials")                                            \
  DEF(L"23.40.10.17.34", L"Garden Ornaments")                                    \
  DEF(L"23.40.10.21", L"Playfield Equipment, Structures, and Surfacing")         \
  DEF(L"23.40.10.21.11", L"Playground Equipment")                                \
  DEF(L"23.40.10.21.14", L"Play Structures")                                     \
  DEF(L"23.40.10.21.17", L"Athletic or Recreation Screening")                    \
  DEF(L"23.40.10.21.17.11", L"Tennis Court Windbreakers")                        \
  DEF(L"23.40.10.21.21", L"External Pools and Ponds")                            \
  DEF(L"23.40.10.21.24", L"Athletic and Recreational Surfaces")                  \
  DEF(L"23.40.10.21.24.11", L"Sports Field Surfacings")                          \
  DEF(L"23.40.10.21.24.11.11", L"Baseball Field Surfacing")                      \
  DEF(L"23.40.10.21.24.11.14", L"Multi-Purpose Court Surfacing")                 \
  DEF(L"23.40.10.21.24.11.17", L"Resilient Matting")                             \
  DEF(L"23.40.10.21.24.11.21", L"Synthetic Grass Surfacing")                     \
  DEF(L"23.40.10.21.24.11.24", L"Synthetic Running Track Surfacing")             \
  DEF(L"23.40.10.21.24.11.27", L"Tennis Court Surfacing")                        \
  DEF(L"23.40.10.21.24.14", L"Artificial Ski Slopes")                            \
  DEF(L"23.40.10.21.24.17", L"Artificial Ice Rinks")                             \
  DEF(L"23.40.10.21.27", L"Exterior Athletic Equipment")                         \
  DEF(L"23.40.10.21.27.11", L"Goalposts")                                        \
  DEF(L"23.40.10.21.27.11.11", L"Soccer Goalposts")                              \
  DEF(L"23.40.10.21.27.11.14", L"Football Goalposts")                            \
  DEF(L"23.40.10.21.27.14", L"Tennis Court Nets")                                \
  DEF(L"23.40.10.21.27.17", L"Volley Ball Nets")                                 \
  DEF(L"23.40.10.21.27.21", L"Basketball Net and Backstop")                      \
  DEF(L"23.40.10.24", L"Screening Devices")                                      \
  DEF(L"23.40.10.24.11", L"Jet Blast Barriers")                                  \
  DEF(L"23.40.10.24.14", L"Screens and Louvers")                                 \
  DEF(L"23.40.10.24.21", L"Sound Barriers")                                      \
  DEF(L"23.40.20.00", L"General Furniture and Specialties")                      \
  DEF(L"23.40.20.11", L"Wardrobe and Closet Specialties")                        \
  DEF(L"23.40.20.11.11", L"Wardrobes")                                           \
  DEF(L"23.40.20.11.14", L"Chests of Drawers")                                   \
  DEF(L"23.40.20.11.17", L"Lockers")                                             \
  DEF(L"23.40.20.11.21", L"Racks and Hangers")                                   \
  DEF(L"23.40.20.11.21.11", L"Coat Racks")                                       \
  DEF(L"23.40.20.11.21.14", L"Hat Racks")                                        \
  DEF(L"23.40.20.11.21.17", L"Shoe Trees")                                       \
  DEF(L"23.40.20.11.21.21", L"Coat Hooks")                                       \
  DEF(L"23.40.20.11.21.24", L"Coat Hangers and Rails")                           \
  DEF(L"23.40.20.11.24", L"Cloakroom Units")                                     \
  DEF(L"23.40.20.11.27", L"Umbrella Stands")                                     \
  DEF(L"23.40.20.11.31", L"Checkroom Equipment")                                 \
  DEF(L"23.40.20.11.31.11", L"Manual Checkroom Equipment")                       \
  DEF(L"23.40.20.11.31.14", L"Automated Checkroom Equipment")                    \
  DEF(L"23.40.20.14", L"Residential Furniture")                                  \
  DEF(L"23.40.20.14.14", L"Residential Seating")                                 \
  DEF(L"23.40.20.14.14.11", L"Chairs")                                           \
  DEF(L"23.40.20.14.14.14", L"Settees, Sofas")                                   \
  DEF(L"23.40.20.14.14.17", L"Stools")                                           \
  DEF(L"23.40.20.14.14.21", L"Benches")                                          \
  DEF(L"23.40.20.14.14.24", L"Chaises Lounges")                                  \
  DEF(L"23.40.20.14.14.27", L"Sofa Beds, Chair Beds")                            \
  DEF(L"23.40.20.14.17", L"Residential Tables and Cabinets")                     \
  DEF(L"23.40.20.14.17.11", L"Dining Room Tables")                               \
  DEF(L"23.40.20.14.17.14", L"China Cabinets")                                   \
  DEF(L"23.40.20.14.17.17", L"Sideboards")                                       \
  DEF(L"23.40.20.14.17.21", L"End Tables")                                       \
  DEF(L"23.40.20.14.17.24", L"Coffee Tables")                                    \
  DEF(L"23.40.20.17", L"Bedroom Furniture")                                      \
  DEF(L"23.40.20.17.14", L"Bedroom Furniture, Single Units")                     \
  DEF(L"23.40.20.17.14.11", L"Beds")                                             \
  DEF(L"23.40.20.17.14.14", L"Headboards, Footboards")                           \
  DEF(L"23.40.20.17.14.17", L"Cots, Cradles")                                    \
  DEF(L"23.40.20.17.14.21", L"Bedside Units")                                    \
  DEF(L"23.40.20.17.14.24", L"Dressing Tables")                                  \
  DEF(L"23.40.20.17.14.27", L"Nursery/Children's Furniture")                     \
  DEF(L"23.40.20.17.14.31", L"Mattresses")                                       \
  DEF(L"23.40.20.21", L"Toilet and Bath Specialties")                            \
  DEF(L"23.40.20.21.11", L"Bathroom Cabinets")                                   \
  DEF(L"23.40.20.21.14", L"Hand and Hair Dryers")                                \
  DEF(L"23.40.20.21.17", L"Paper Towel Dispensers, Disposal Units")              \
  DEF(L"23.40.20.21.21", L"Toilet Paper Dispensers")                             \
  DEF(L"23.40.20.21.24",                                                        \
      L"Sanitary Napkin and Tampon Dispensers, Disposal Units")                 \
  DEF(L"23.40.20.21.27", L"Towel Bars")                                          \
  DEF(L"23.40.20.21.31", L"Robe Hooks")                                          \
  DEF(L"23.40.20.21.34", L"Soap Holders, Dispensers")                            \
  DEF(L"23.40.20.21.37", L"Diaper Changing Units")                               \
  DEF(L"23.40.20.21.41", L"Bathroom Deodorizers")                                \
  DEF(L"23.40.20.21.44", L"Shower Rods, Curtains")                               \
  DEF(L"23.40.20.21.47", L"Bath Grab Bars")                                      \
  DEF(L"23.40.20.24", L"Non-Clothes Storage Furniture")                          \
  DEF(L"23.40.20.24.11", L"Cupboards")                                           \
  DEF(L"23.40.20.24.14", L"Chests")                                              \
  DEF(L"23.40.20.24.17", L"Sideboards")                                          \
  DEF(L"23.40.20.24.21", L"Dressers")                                            \
  DEF(L"23.40.20.24.24", L"Filing Cabinets")                                     \
  DEF(L"23.40.20.24.27", L"Plan/Map Chests")                                     \
  DEF(L"23.40.20.24.31", L"Desk")                                                \
  DEF(L"23.40.20.24.34", L"Bookcases")                                           \
  DEF(L"23.40.20.24.41", L"Key Hangers")                                         \
  DEF(L"23.40.20.27", L"Storage Shelving")                                       \
  DEF(L"23.40.20.27.11", L"Shelves")                                             \
  DEF(L"23.40.20.27.14", L"Supports")                                            \
  DEF(L"23.40.20.27.17", L"Racking")                                             \
  DEF(L"23.40.20.27.21", L"Mobile Storage Units")                                \
  DEF(L"23.40.20.31", L"Refuse Disposal Furniture")                              \
  DEF(L"23.40.20.31.11", L"Bins")                                                \
  DEF(L"23.40.20.31.14", L"Ash Trays")                                           \
  DEF(L"23.40.20.31.17", L"Refuse Holders")                                      \
  DEF(L"23.40.20.34", L"Fireplaces and Stoves ")                                 \
  DEF(L"23.40.20.34.11", L"Fireplace and Stove Components")                     \
  DEF(L"23.40.20.34.11.11", L"Fire Surrounds")                                   \
  DEF(L"23.40.20.34.11.14", L"Firebacks")                                        \
  DEF(L"23.40.20.34.11.17", L"Fireplace and Stove Fenders")                      \
  DEF(L"23.40.20.34.11.21", L"Fireplace and Stove Hoods")                        \
  DEF(L"23.40.20.34.14", L"Fireplaces")                                          \
  DEF(L"23.40.20.34.14.11", L"Fireplace Inserts")                                \
  DEF(L"23.40.20.34.14.14", L"Fireplace Screens and Doors")                      \
  DEF(L"23.40.20.34.14.17", L"Fireplace Water Heaters")                          \
  DEF(L"23.40.20.34.17", L"Stoves")                                              \
  DEF(L"23.40.20.34.17.11", L"Stove Pipe")                                       \
  DEF(L"23.40.20.34.21", L"Hearths")                                             \
  DEF(L"23.40.35.00", L"Casework")                                               \
  DEF(L"23.40.35.11", L"Casework Components")                                    \
  DEF(L"23.40.35.11.11", L"Cabinets")                                            \
  DEF(L"23.40.35.11.14", L"Hardware")                                            \
  DEF(L"23.40.35.11.17", L"Work Surfaces")                                       \
  DEF(L"23.40.35.14", L"Casework by Type")                                       \
  DEF(L"23.40.35.14.11", L"Modular Casework")                                    \
  DEF(L"23.40.35.14.14", L"Custom-Fabricated Casework")                          \
  DEF(L"23.40.35.17", L"Casework by Purpose")                                    \
  DEF(L"23.40.35.17.11", L"Bank Casework")                                       \
  DEF(L"23.40.35.17.14", L"Hospitality Casework")                                \
  DEF(L"23.40.35.17.17", L"Display Casework")                                    \
  DEF(L"23.40.35.17.21", L"Religious Casework")                                  \
  DEF(L"23.40.35.17.24", L"Library Casework")                                    \
  DEF(L"23.40.35.17.24.11", L"Study Carrels")                                    \
  DEF(L"23.40.35.17.24.14", L"Book Stacks")                                      \
  DEF(L"23.40.35.17.24.17", L"Periodical Racks")                                 \
  DEF(L"23.40.35.17.27", L"Educational Casework")                                \
  DEF(L"23.40.35.17.31", L"Laboratory Casework")                                 \
  DEF(L"23.40.35.17.34", L"Medical Casework")                                    \
  DEF(L"23.40.35.17.34.11", L"Dental Casework")                                  \
  DEF(L"23.40.35.17.34.14", L"Pharmacy Casework")                                \
  DEF(L"23.40.35.17.37", L"Mortuary Casework")                                   \
  DEF(L"23.40.35.17.41", L"Commercial Kitchen Casework")                         \
  DEF(L"23.40.35.17.44", L"Darkroom Casework")                                   \
  DEF(L"23.40.35.17.44.11", L"Photo Transfer Cabinets")                          \
  DEF(L"23.40.35.17.47", L"Residential Casework")                                \
  DEF(L"23.40.35.17.47.11", L"Kitchen Casework")                                 \
  DEF(L"23.40.35.17.47.11.11", L"Complete Kitchen Casework Suites")              \
  DEF(L"23.40.35.17.47.11.14", L"Single Kitchen Casework Units")                 \
  DEF(L"23.40.35.17.47.14", L"Bathroom Casework")                                \
  DEF(L"23.40.40.00", L"Food Service Equipment and Furnishings")                 \
  DEF(L"23.40.40.11", L"Specialized Food Storage and Display Furnishings")       \
  DEF(L"23.40.40.11.11", L"Refrigerators and Freezers")                          \
  DEF(L"23.40.40.11.11.11", L"Refrigerators")                                    \
  DEF(L"23.40.40.11.11.14", L"Freezers")                                         \
  DEF(L"23.40.40.11.11.17", L"Refrigerator-Freezer ")                            \
  DEF(L"23.40.40.11.14", L"Food Storage Coolers")                                \
  DEF(L"23.40.40.11.14.11", L"Walk-In Coolers")                                  \
  DEF(L"23.40.40.11.14.14", L"Display Coolers")                                  \
  DEF(L"23.40.40.11.17", L"Refrigerated Cases")                                  \
  DEF(L"23.40.40.11.21", L"Hot Cabinets")                                        \
  DEF(L"23.40.40.11.24", L"Cold Cabinets")                                       \
  DEF(L"23.40.40.11.27", L"Bottle Racks")                                        \
  DEF(L"23.40.40.11.31", L"Steam Tables")                                        \
  DEF(L"23.40.40.11.34", L"Snack Cabinets")                                      \
  DEF(L"23.40.40.14", L"Food Service Equipment")                                 \
  DEF(L"23.40.40.14.11", L"Food Delivery Carts and Conveyors")                   \
  DEF(L"23.40.40.14.11.11", L"Food Delivery Carts")                              \
  DEF(L"23.40.40.14.11.14", L"Food Delivery Conveyors")                          \
  DEF(L"23.40.40.14.14", L"Food Preparation Equipment")                          \
  DEF(L"23.40.40.14.14.11", L"Food Mixers")                                      \
  DEF(L"23.40.40.14.14.14", L"Drink Making Equipment")                           \
  DEF(L"23.40.40.14.17", L"Food Cooking Equipment")                              \
  DEF(L"23.40.40.14.17.11", L"Cookers, Ovens, Stoves")                           \
  DEF(L"23.40.40.14.17.14", L"Hot Plates")                                       \
  DEF(L"23.40.40.14.17.17", L"Ranges")                                           \
  DEF(L"23.40.40.14.17.21", L"Grills")                                           \
  DEF(L"23.40.40.14.17.24", L"Fryers")                                           \
  DEF(L"23.40.40.14.17.27", L"Barbecues")                                        \
  DEF(L"23.40.40.14.17.31", L"Small Specialized Cooking Equipment")              \
  DEF(L"23.40.40.14.21", L"Hood and Ventilation Equipment")                      \
  DEF(L"23.40.40.14.21.11", L"Food Service Hoods")                               \
  DEF(L"23.40.40.14.21.14", L"Ventilation Equipment")                            \
  DEF(L"23.40.40.14.21.17", L"Fire Suppression Systems")                         \
  DEF(L"23.40.40.14.21.21", L"Catering Ventilation")                             \
  DEF(L"23.40.40.14.24", L"Food Dispensing Equipment")                           \
  DEF(L"23.40.40.14.24.11", L"Bar Equipment")                                    \
  DEF(L"23.40.40.14.24.14", L"Service Line Equipment")                           \
  DEF(L"23.40.40.14.24.17", L"Soda Fountain Equipment")                          \
  DEF(L"23.40.40.14.27", L"Ice Machines")                                        \
  DEF(L"23.40.40.14.31", L"Cleaning and Disposal Equipment")                     \
  DEF(L"23.40.40.17", L"Restaurant Furniture")                                   \
  DEF(L"23.40.40.17.11", L"Bars and Serving Counters")                           \
  DEF(L"23.40.40.17.14", L"Restaurant Chairs")                                   \
  DEF(L"23.40.40.17.17", L"Restaurant Tables")                                   \
  DEF(L"23.40.40.17.21", L"Restaurant Booths")                                   \
  DEF(L"23.40.40.17.24", L"Restaurant Seating Units")                            \
  DEF(L"23.40.40.17.27", L"Bar Stools")                                          \
  DEF(L"23.40.50.00", L"Educational, Cultural Equipment and Furnishings")        \
  DEF(L"23.40.50.11", L"Educational, Entertainment Equipment and Furnishings")   \
  DEF(L"23.40.50.11.11", L"Auditorium Seating")                                  \
  DEF(L"23.40.50.11.11.11", L"Fixed Audience Seating")                           \
  DEF(L"23.40.50.11.11.14", L"Portable Audience Seating")                        \
  DEF(L"23.40.50.11.11.14.11", L"Folding Audience Chairs")                       \
  DEF(L"23.40.50.11.11.14.14", L"Interlocking Audience Chairs")                  \
  DEF(L"23.40.50.11.11.14.17", L"Stacking Audience Chairs")                      \
  DEF(L"23.40.50.11.14", L"Classroom Furniture")                                 \
  DEF(L"23.40.50.11.14.11", L"Seat and Table Assemblies")                        \
  DEF(L"23.40.50.11.14.14", L"Modular Desks")                                    \
  DEF(L"23.40.50.11.17", L"Multiple-Use Fixed Seating")                          \
  DEF(L"23.40.50.11.21", L"Platforms")                                           \
  DEF(L"23.40.50.11.21.11", L"Folding and Portable Stages")                      \
  DEF(L"23.40.50.11.24", L"Educational Play Equipment")                          \
  DEF(L"23.40.50.11.27", L"Language Laboratory Equipment")                       \
  DEF(L"23.40.50.14", L"Theater and Stage Equipment")                            \
  DEF(L"23.40.50.14.11", L"Acoustical Shells")                                   \
  DEF(L"23.40.50.14.14", L"Rigging Systems and Controls")                        \
  DEF(L"23.40.50.14.17", L"Scenery Docks")                                       \
  DEF(L"23.40.50.14.21", L"Suspension Systems")                                  \
  DEF(L"23.40.50.14.24", L"Stage Curtains")                                      \
  DEF(L"23.40.50.17", L"Planetarium Equipment and Furnishings")                  \
  DEF(L"23.40.50.17.11", L"Planetarium Projectors")                              \
  DEF(L"23.40.50.17.14", L"Planetarium Seating")                                 \
  DEF(L"23.40.50.21", L"Observatory Equipment and Furnishings")                  \
  DEF(L"23.40.50.21.11", L"Telescopes")                                          \
  DEF(L"23.40.50.24", L"Ecclesiastical Equipment and Furnishings")               \
  DEF(L"23.40.50.24.11", L"Religious Seating, Pews, and Benches")                \
  DEF(L"23.40.50.24.14", L"Chancel Furnishings")                                 \
  DEF(L"23.40.50.24.14.11", L"Lecterns")                                         \
  DEF(L"23.40.50.24.14.14", L"Pulpits")                                          \
  DEF(L"23.40.50.24.14.17", L"Choir Screens")                                    \
  DEF(L"23.40.50.24.14.21", L"Altars")                                           \
  DEF(L"23.40.50.24.17", L"Baptisteries")                                        \
  DEF(L"23.40.50.24.21", L"Baptismal Fonts")                                     \
  DEF(L"23.40.50.24.24", L"Instrumental Equipment")                              \
  DEF(L"23.40.50.24.24.11", L"Organs, Organ Cases and Screens")                  \
  DEF(L"23.40.50.24.24.14", L"Bells")                                            \
  DEF(L"23.40.50.24.24.17", L"Carillons")                                        \
  DEF(L"23.40.50.24.27", L"Synagogue Furniture")                                 \
  DEF(L"23.40.50.24.31", L"Mosque Furniture")                                    \
  DEF(L"23.40.50.24.34", L"Temple Furniture")                                    \
  DEF(L"23.40.50.27", L"Library and Archive Equipment and Furnishings")          \
  DEF(L"23.40.50.27.11", L"Library Stack Systems")                               \
  DEF(L"23.40.50.27.11.11", L"Library Shelving")                                 \
  DEF(L"23.40.50.27.14", L"Book Depositories")                                   \
  DEF(L"23.40.50.27.17", L"Book Theft Protection Equipment")                     \
  DEF(L"23.40.50.27.21", L"Library Furniture")                                   \
  DEF(L"23.40.50.27.21.11", L"Library Filing Furniture")                         \
  DEF(L"23.40.50.27.21.14", L"Library Display Furniture")                        \
  DEF(L"23.40.50.27.21.17", L"Study Carrels")                                    \
  DEF(L"23.40.50.31", L"Exhibition Equipment and Furnishings")                   \
  DEF(L"23.40.50.31.11", L"Display Furniture")                                   \
  DEF(L"23.40.50.31.11.11", L"Display Cabinets")                                 \
  DEF(L"23.40.50.31.11.14", L"Display Racks")                                    \
  DEF(L"23.40.50.31.11.17", L"Display Carousels")                                \
  DEF(L"23.40.50.31.14", L"Gallery Hanging Systems")                             \
  DEF(L"23.40.50.31.17", L"Stands, Pedestals")                                   \
  DEF(L"23.40.50.31.21", L"Retail Cabinets")                                     \
  DEF(L"23.40.50.31.24", L"Exhibition Stands, Shell Schemes")                    \
  DEF(L"23.40.50.31.27", L"Exhibit Equipment")                                   \
  DEF(L"23.40.50.34", L"Athletic, Recreational, and Therapeutic Equipment")      \
  DEF(L"23.40.50.34.11", L"Arcade Machines")                                     \
  DEF(L"23.40.50.34.14", L"Gymnasium Equipment")                                 \
  DEF(L"23.40.50.34.14.11", L"Backstops")                                        \
  DEF(L"23.40.50.34.14.14", L"Scoreboards and Time Clocks")                      \
  DEF(L"23.40.50.34.14.17", L"Net Posts")                                        \
  DEF(L"23.40.50.34.14.21", L"Floor Sockets")                                    \
  DEF(L"23.40.50.34.14.24", L"Climbing Walls")                                   \
  DEF(L"23.40.50.34.14.27", L"Climbing Ropes")                                   \
  DEF(L"23.40.50.34.17", L"Gymnasium Dividers")                                  \
  DEF(L"23.40.50.34.21", L"Fitness and Exercise Equipment")                      \
  DEF(L"23.40.50.34.24", L"Nets")                                                \
  DEF(L"23.40.50.34.27", L"Bowling Alley Equipment")                             \
  DEF(L"23.40.50.34.31", L"Shooting Range Equipment")                            \
  DEF(L"23.40.50.34.34", L"Equipment Storage Racks")                             \
  DEF(L"23.40.50.34.37", L"Sauna and Steam Room Specialties ")                   \
  DEF(L"23.40.50.34.41", L"Solarium Specialties")                                \
  DEF(L"23.40.50.34.44", L"Therapeutic Equipment")                               \
  DEF(L"23.40.50.34.47", L"Spectator Stands, Seating")                           \
  DEF(L"23.40.50.34.47.11", L"Fixed Stadium and Arena Seating")                  \
  DEF(L"23.40.50.34.47.14", L"Telescoping Stands")                               \
  DEF(L"23.40.50.34.47.14.11", L"Telescoping Bleachers")                         \
  DEF(L"23.40.50.34.47.14.14", L"Telescoping Chair Platforms")                   \
  DEF(L"23.40.70.00", L"Work Environment Equipment and Furnishings")             \
  DEF(L"23.40.70.11", L"Scientific and Medical Equipment and Furnishings")       \
  DEF(L"23.40.70.11.11", L"Laboratory Equipment and Furnishings")                \
  DEF(L"23.40.70.11.11.11", L"Laboratory Equipment")                             \
  DEF(L"23.40.70.11.11.11.11", L"Laboratory Service Fixtures")                   \
  DEF(L"23.40.70.11.11.11.14", L"Laboratory Fume Hoods")                         \
  DEF(L"23.40.70.11.11.11.17", L"Laboratory Incubators")                         \
  DEF(L"23.40.70.11.11.11.21", L"Laboratory Sterilizers")                        \
  DEF(L"23.40.70.11.11.11.24", L"Laboratory Refrigerators")                      \
  DEF(L"23.40.70.11.11.11.27", L"Laboratory Emergency Safety Appliances")        \
  DEF(L"23.40.70.11.11.11.31", L"Laboratory Service Columns")                    \
  DEF(L"23.40.70.11.11.11.34", L"Laboratory Flammables Storage Cabinets")        \
  DEF(L"23.40.70.11.11.14", L"Laboratory Furniture")                             \
  DEF(L"23.40.70.11.14", L"Health Care Equipment and Furnishings")               \
  DEF(L"23.40.70.11.14.11", L"Medical Equipment")                                \
  DEF(L"23.40.70.11.14.11.11", L"Medical Sterilizing Equipment")                 \
  DEF(L"23.40.70.11.14.11.14", L"Examination and Treatment Equipment")           \
  DEF(L"23.40.70.11.14.11.17", L"Patient Care Equipment")                        \
  DEF(L"23.40.70.11.14.11.17.11", L"Patient Hoists")                             \
  DEF(L"23.40.70.11.14.11.17.14", L"Hospital Head Boards")                       \
  DEF(L"23.40.70.11.14.11.17.17", L"Patient Beds")                               \
  DEF(L"23.40.70.11.14.11.21", L"Post-Mortem and Dissection Equipment")          \
  DEF(L"23.40.70.11.14.11.24", L"Operating Room Equipment")                      \
  DEF(L"23.40.70.11.14.11.27", L"Radiology Equipment")                           \
  DEF(L"23.40.70.11.14.14", L"Dental Equipment")                                 \
  DEF(L"23.40.70.11.14.17", L"Optical Equipment")                                \
  DEF(L"23.40.70.11.14.21", L"Health Care Furniture")                            \
  DEF(L"23.40.70.11.17", L"Mortuary Equipment")                                  \
  DEF(L"23.40.70.11.17.11", L"Mortuary Refrigerators")                           \
  DEF(L"23.40.70.11.17.14", L"Crematorium Equipment")                            \
  DEF(L"23.40.70.11.17.17", L"Mortuary Lifts")                                   \
  DEF(L"23.40.70.14", L"Retail and Commercial Equipment and Furnishings")        \
  DEF(L"23.40.70.14.11", L"Hospitality Equipment and Furnishings")               \
  DEF(L"23.40.70.14.14", L"Registration Equipment")                              \
  DEF(L"23.40.70.14.17", L"Checkroom Equipment")                                 \
  DEF(L"23.40.70.14.21", L"Hospitality Furniture")                               \
  DEF(L"23.40.70.14.24", L"Hospitality Furnishings")                             \
  DEF(L"23.40.70.14.24.11", L"Hospitality Bath Furnishings")                     \
  DEF(L"23.40.70.14.24.11.11", L"Hospitality Bath Linens and Towels")            \
  DEF(L"23.40.70.14.24.11.14", L"Hospitality Bath Mats")                         \
  DEF(L"23.40.70.14.24.11.17", L"Hospitality Shower Curtains")                   \
  DEF(L"23.40.70.14.24.14", L"Hospitality Bedroom Furnishings")                  \
  DEF(L"23.40.72.14.21", L"Hospitality Bed Linens")                              \
  DEF(L"23.40.72.14.22", L"Hospitality Pillows")                                 \
  DEF(L"23.40.70.14.27", L"Mercantile Equipment and Furnishings")                \
  DEF(L"23.40.70.14.31", L"Barber Shop Equipment")                               \
  DEF(L"23.40.70.14.34", L"Beauty Shop Equipment")                               \
  DEF(L"23.40.70.14.37", L"Cash Registers and Checkout Equipment")               \
  DEF(L"23.40.70.14.41", L"Display Cases")                                       \
  DEF(L"23.40.70.14.41.11", L"Refrigerated Display Cases")                       \
  DEF(L"23.40.70.14.44", L"Food Processing Equipment")                           \
  DEF(L"23.40.70.14.47", L"Food Weighing and Wrapping Equipment")                \
  DEF(L"23.40.70.14.51", L"Display Casework")                                    \
  DEF(L"23.40.70.14.54", L"Wall Display Systems")                                \
  DEF(L"23.40.70.14.57", L"Office Equipment and Furnishings")                    \
  DEF(L"23.40.70.14.57.11", L"Computers")                                        \
  DEF(L"23.40.70.14.57.14", L"Printers")                                         \
  DEF(L"23.40.70.14.57.17", L"Drafting Equipment")                               \
  DEF(L"23.40.70.14.57.21", L"Plotters")                                         \
  DEF(L"23.40.70.14.57.24", L"Drawing Equipment")                                \
  DEF(L"23.40.70.14.61", L"Mailroom Case Goods")                                 \
  DEF(L"23.40.70.14.64", L"Retail and Commercial Furnishings")                   \
  DEF(L"23.40.70.14.64.11", L"Office Furniture")                                 \
  DEF(L"23.40.70.14.64.14", L"Retail and Commercial Seating Furniture")          \
  DEF(L"23.40.70.14.64.17", L"Office Storage and Filing Furniture")              \
  DEF(L"23.40.70.14.64.17.11", L"Lateral Filing Cabinets")                       \
  DEF(L"23.40.70.14.64.17.14", L"Vertical Filing Cabinets")                      \
  DEF(L"23.40.70.14.64.21", L"Systems Furniture")                                \
  DEF(L"23.40.70.14.64.21.11", L"Panel-Hung Component")                          \
  DEF(L"23.40.70.14.64.21.14", L"Free-Standing Component")                       \
  DEF(L"23.40.70.14.64.21.17", L"Beam System")                                   \
  DEF(L"23.40.70.14.64.21.21", L"Desk System")                                   \
  DEF(L"23.40.70.14.64.24", L"Office Accessories")                               \
  DEF(L"23.40.70.17", L"Industrial and Manufacturing Equipment and Furnishings") \
  DEF(L"23.40.70.17.11", L"Manufacturing Equipment ")                            \
  DEF(L"23.40.70.17.14", L"Manufacturing Furniture")                             \
  DEF(L"23.40.70.17.14.11", L"Flat Work Surface Furniture")                      \
  DEF(L"23.40.70.17.14.14", L"Work Stations ")                                   \
  DEF(L"23.40.70.17.17", L"Shop Equipment")                                      \
  DEF(L"23.40.70.17.21", L"Shop Furniture")                                      \
  DEF(L"23.40.70.17.21.11", L"Counters and Work Surfaces")                       \
  DEF(L"23.40.70.17.21.14", L"Shop Display Specialties")                         \
  DEF(L"23.40.70.17.21.17", L"Shop Storage Fittings")                            \
  DEF(L"23.40.70.21", L"Other Work-Related Equipment and Furnishings")           \
  DEF(L"23.40.70.21.11", L"Darkroom Equipment and Furnishings")                  \
  DEF(L"23.40.70.21.14", L"Darkroom Equipment")                                  \
  DEF(L"23.40.70.21.14.11", L"Darkroom Processing Equipment")                    \
  DEF(L"23.40.70.21.17", L"Darkroom Specialties")                                \
  DEF(L"23.40.70.21.21", L"Vending Equipment")                                   \
  DEF(L"23.40.70.21.24", L"Vending Machines")                                    \
  DEF(L"23.40.70.21.27", L"Ticket Machines")                                     \
  DEF(L"23.40.70.21.31", L"Change Machines")                                     \
  DEF(L"23.40.70.24", L"Vehicle Service Equipment")                              \
  DEF(L"23.40.70.24.11", L"Compressed Air Vehicle Service Equipment")            \
  DEF(L"23.40.70.24.14", L"Fuel Dispensing Equipment")                           \
  DEF(L"23.40.70.24.17", L"Vehicle Lubrication Equipment")                       \
  DEF(L"23.40.70.24.21", L"Tire Changing Equipment")                             \
  DEF(L"23.40.70.24.24", L"Vehicle Washing Equipment")                           \
  DEF(L"23.40.70.24.27", L"Vehicle Hoists")                                      \
  DEF(L"23.40.70.27", L"Security and Vault Equipment and Furnishings")           \
  DEF(L"23.40.70.27.11", L"Safes")                                               \
  DEF(L"23.40.70.27.14", L"Safe Deposit Boxes")                                  \
  DEF(L"23.40.70.27.17", L"Vault Doors and Day Gates")                           \
  DEF(L"23.40.70.27.21", L"Anti-Bandit Screens")                                 \
  DEF(L"23.40.70.27.21.11", L"Gun Ports")                                        \
  DEF(L"23.40.70.27.24", L"Teller and Service Equipment")                        \
  DEF(L"23.40.70.27.24.11", L"Automated Banking Systems")                        \
  DEF(L"23.40.70.27.24.14", L"Money Cart Pass-Through")                          \
  DEF(L"23.40.70.27.24.17", L"Package Transfer Units")                           \
  DEF(L"23.40.70.27.24.21", L"Service and Teller Window Units")                  \
  DEF(L"23.40.70.27.24.24", L"Teller Equipment Systems")                         \
  DEF(L"23.40.70.27.27", L"Secure Point of Sale Units/Tills")                    \
  DEF(L"23.40.70.27.27.11", L"Deal Drawers")                                     \
  DEF(L"23.40.70.27.31", L"Key Security Cabinets")                               \
  DEF(L"23.40.70.27.34", L"Money Counting and Handling Equipment")               \
  DEF(L"23.40.70.31", L"Detention Equipment and Furnishings")                    \
  DEF(L"23.40.70.31.11", L"Detention Enclosures")                                \
  DEF(L"23.40.70.31.14", L"Detention Furnishings and Specialties")               \
  DEF(L"23.40.70.31.17", L"Detention Furniture")                                 \
  DEF(L"23.40.70.34", L"Agricultural Equipment")                                 \
  DEF(L"23.40.70.34.11", L"Milkers")                                             \
  DEF(L"23.40.70.34.14", L"Stock Feeders")                                       \
  DEF(L"23.40.70.34.17", L"Stock Waterers")                                      \
  DEF(L"23.40.70.34.21", L"Waste Clean-Up Equipment")                            \
  DEF(L"23.40.90.00", L"Information and Communication Specialties")              \
  DEF(L"23.40.90.11", L"Information Display Specialties")                        \
  DEF(L"23.40.90.11.11", L"Information Signs")                                   \
  DEF(L"23.40.90.11.14", L"Lettering and Numerals")                              \
  DEF(L"23.40.90.11.17", L"Pin Boards")                                          \
  DEF(L"23.40.90.11.21", L"Writing Boards")                                      \
  DEF(L"23.40.90.11.24", L"Plaques")                                             \
  DEF(L"23.40.90.11.27", L"Poster Display Units")                                \
  DEF(L"23.40.90.11.31", L"Notice Boards")                                       \
  DEF(L"23.40.90.11.34", L"Display Screens")                                     \
  DEF(L"23.40.90.11.37", L"Pictograms")                                          \
  DEF(L"23.40.90.14", L"Communication Specialties")                              \
  DEF(L"23.40.90.14.11", L"Mail Boxes")                                          \
  DEF(L"23.40.90.14.14", L"Mail Racks")                                          \
  DEF(L"23.40.90.14.17", L"Pigeonholes")                                         \
  DEF(L"23.40.90.14.21", L"Mail Trolleys")                                       \
  DEF(L"23.40.90.14.24", L"Mail Handling Equipment")                             \
  DEF(L"23.40.90.14.27", L"Telephone Booths")                                    \
  DEF(L"23.40.90.14.31", L"Acoustic Hoods")                                      \
  DEF(L"23.40.90.14.34", L"Directory Boards")                                    \
  DEF(L"23.40.95.00", L"Furnishings, Ornaments, and Decoration")                 \
  DEF(L"23.40.95.11", L"Soft Furnishings")                                       \
  DEF(L"23.40.95.11.31", L"Movable or Retractable Screens")                      \
  DEF(L"23.40.95.14", L"Plant Display Furniture")                                \
  DEF(L"23.40.95.14.11", L"Decorative Planters")                                 \
  DEF(L"23.40.95.14.14", L"Decorative Vases")                                    \
  DEF(L"23.40.95.17", L"Ornaments and Decoration")                               \
  DEF(L"23.40.95.17.11", L"Interior Ornamental Fountains")                       \
  DEF(L"23.40.95.17.14", L"Ornaments")                                           \
  DEF(L"23.40.95.17.17", L"Mirrors")                                             \
  DEF(L"23.40.95.17.21", L"Ornamental Screens")                                  \
  DEF(L"23.40.95.17.24", L"Artwork")                                             \
  DEF(L"23.40.95.17.27", L"Clocks")                                              \
  DEF(L"23.40.95.17.31", L"Wall Hangings")                                       \
  DEF(L"23.45.00.00", L"Sanitary, Laundry, and Cleaning Equipment")              \
  DEF(L"23.45.05.00", L"Sanitary Equipment")                                     \
  DEF(L"23.45.05.14", L"Plumbing Fixtures - Sanitary Washing Units ")            \
  DEF(L"23.45.05.14.11", L"Sanitary Washing Unit Components")                    \
  DEF(L"23.45.05.14.11.11", L"Splashbacks")                                      \
  DEF(L"23.45.05.14.11.14", L"Bath Panels")                                      \
  DEF(L"23.45.05.14.11.17", L"Shower/Bath Seats")                                \
  DEF(L"23.45.05.14.11.21", L"Shower Receptors")                                 \
  DEF(L"23.45.05.14.11.24", L"Shower/Bath Screens, Curtains")                    \
  DEF(L"23.45.05.14.14", L"Sinks/Lavatories")                                    \
  DEF(L"23.45.05.14.14.11", L"Sacristy")                                         \
  DEF(L"23.45.05.14.14.14", L"Clinic Sinks")                                     \
  DEF(L"23.45.05.14.14.17", L"Plaster Sinks")                                    \
  DEF(L"23.45.05.14.14.21", L"Surgeon\u2019s Scrub-Up Sinks")                         \
  DEF(L"23.45.05.14.14.24", L"Surgeon\u2019s Instrument Sinks")                       \
  DEF(L"23.45.05.14.14.27", L"Service Sinks")                                    \
  DEF(L"23.45.05.14.14.31", L"Darkroom Sinks")                                   \
  DEF(L"23.45.05.14.14.34", L"Hairdressing Sinks")                               \
  DEF(L"23.45.05.14.17", L"Showers")                                             \
  DEF(L"23.45.05.14.17.11", L"Shower Compartments")                              \
  DEF(L"23.45.05.14.17.14", L"Shower Receptors")                                 \
  DEF(L"23.45.05.14.17.17", L"Group Showers")                                    \
  DEF(L"23.45.05.14.21", L"Bathtubs")                                            \
  DEF(L"23.45.05.14.21.11", L"Bath/Shower Units")                                \
  DEF(L"23.45.05.14.21.14", L"Sitz Baths")                                       \
  DEF(L"23.45.05.14.21.17", L"Therapeutic Whirlpool Baths")                      \
  DEF(L"23.45.05.14.24", L"Eye Wash Fountains")                                  \
  DEF(L"23.45.05.14.27", L"Bidets")                                              \
  DEF(L"23.45.05.14.31", L"Combination Toilets")                                 \
  DEF(L"23.45.05.14.31.11", L"Patient\u2019s Combination Toilets")                    \
  DEF(L"23.45.05.14.31.14", L"Detention Combination Toilets")                    \
  DEF(L"23.45.05.14.34", L"Security Plumbing Fixtures")                          \
  DEF(L"23.45.05.14.37", L"Bedpan Washers/Sanitizers")                           \
  DEF(L"23.45.05.14.99", L"Other Sanitary Washing Plumbing Fixtures")            \
  DEF(L"23.45.05.17", L"Sanitary Leisure Units")                                 \
  DEF(L"23.45.05.17.11", L"Sauna Equipment")                                     \
  DEF(L"23.45.05.17.14", L"Steam Room Equipment")                                \
  DEF(L"23.45.05.17.17", L"Leisure Whirlpools")                                  \
  DEF(L"23.45.05.17.21", L"Hot Tubs")                                            \
  DEF(L"23.45.05.21", L"Plumbing Fixtures - Sanitary Disposal Units")           \
  DEF(L"23.45.05.21.11", L"Water Closets")                                      \
  DEF(L"23.45.05.21.11.11", L"Water Operated Water Closets")                     \
  DEF(L"23.45.05.21.11.14", L"Chemical/Biological Sanitary Disposal Units")      \
  DEF(L"23.45.05.21.11.21", L"Urinals")                                          \
  DEF(L"23.45.05.21.11.24", L"Sanitary Macerators")                              \
  DEF(L"23.45.05.21.14", L"Sanitary Disposal Components")                        \
  DEF(L"23.45.05.21.14.11", L"Water Closet Seats")                               \
  DEF(L"23.45.05.21.14.14", L"Water Closet Tanks")                               \
  DEF(L"23.45.05.21.14.17", L"Sanitary Disposal Connectors")                     \
  DEF(L"23.45.30.00", L"Washing and Waste Disposal Equipment")                   \
  DEF(L"23.45.30.11", L"Residential Washing Equipment")                          \
  DEF(L"23.45.30.11.11", L"Residential Dishwashers")                             \
  DEF(L"23.45.30.11.14", L"Residential Waste Disposal Units")                    \
  DEF(L"23.45.30.14", L"Commercial Washing Equipment")                           \
  DEF(L"23.45.30.14.11", L"Commercial Dishwashers")                              \
  DEF(L"23.45.30.14.14", L"Commercial Waste Disposal Units")                     \
  DEF(L"23.45.30.14.21", L"High Pressure Washing Equipment")                     \
  DEF(L"23.45.30.17", L"Drain Boards")                                           \
  DEF(L"23.45.55.00", L"Sanitary Faucets, Wastes")                               \
  DEF(L"23.45.55.11", L"Sanitary Components")                                    \
  DEF(L"23.45.55.11.11", L"Plugs")                                               \
  DEF(L"23.45.55.11.14", L"Chains")                                              \
  DEF(L"23.45.55.11.17", L"Overflow Specialties")                                \
  DEF(L"23.45.55.14", L"Single Faucets")                                         \
  DEF(L"23.45.55.17", L"Mixing Faucets")                                         \
  DEF(L"23.45.55.21", L"Drains (Wastes)")                                        \
  DEF(L"23.45.70.00", L"Laundry and Cleaning Equipment")                         \
  DEF(L"23.45.70.11", L"Laundry Equipment")                                      \
  DEF(L"23.45.70.11.11", L"Residential Laundry Equipment")                       \
  DEF(L"23.45.70.11.11.11", L"Washing Machines")                                 \
  DEF(L"23.45.70.11.11.14", L"Clothes Dryers")                                   \
  DEF(L"23.45.70.11.14", L"Commercial Laundry Equipment")                        \
  DEF(L"23.45.70.11.14.11", L"Washing Machines")                                 \
  DEF(L"23.45.70.11.14.14", L"Extractors")                                       \
  DEF(L"23.45.70.11.14.17", L"Clothes Dryers")                                   \
  DEF(L"23.45.70.11.14.21", L"Clothes Airers")                                   \
  DEF(L"23.45.70.11.14.24", L"Ironing and Pressing Machines")                    \
  DEF(L"23.45.70.11.14.27", L"Laundry Folding Machines")                         \
  DEF(L"23.45.70.11.14.31", L"Commercial Clothes Lines")                         \
  DEF(L"23.45.70.11.14.34", L"Dry Cleaning Equipment")                           \
  DEF(L"23.45.70.14", L"Room Cleaning Equipment")                                \
  DEF(L"23.45.70.14.11", L"Vacuum Cleaning Systems")                             \
  DEF(L"23.45.70.14.14", L"Floor and Wall Cleaning")                             \
  DEF(L"23.45.70.14.17", L"Housekeeping Carts")                                  \
  DEF(L"23.50.00.00", L"Conveying Systems & Material Handling")                  \
  DEF(L"23.50.05.00", L"Vertical Transportation")                                \
  DEF(L"23.50.05.11", L"Elevators")                                              \
  DEF(L"23.50.05.11.11", L"Electric Traction Elevators")                         \
  DEF(L"23.50.05.11.11.11", L"Freight Electric Traction Elevators")              \
  DEF(L"23.50.05.11.11.14", L"Passenger Electric Traction Elevators")            \
  DEF(L"23.50.05.11.11.17", L"Residential Electric Traction Elevators")          \
  DEF(L"23.50.05.11.11.21", L"Service Electric Traction Elevators")              \
  DEF(L"23.50.05.11.14", L"Hydraulic Elevators")                                 \
  DEF(L"23.50.05.11.14.11", L"Freight Hydraulic Elevators")                      \
  DEF(L"23.50.05.11.14.14", L"Passenger Hydraulic Elevators")                    \
  DEF(L"23.50.05.11.14.17", L"Residential Hydraulic Elevators")                  \
  DEF(L"23.50.05.11.14.21", L"Service Hydraulic Elevators")                      \
  DEF(L"23.50.05.11.17", L"Rack and Pinion Elevators")                           \
  DEF(L"23.50.05.11.21", L"Elevator Cabs")                                       \
  DEF(L"23.50.05.11.24", L"Elevator Equipment and Controls")                     \
  DEF(L"23.50.05.11.24.11", L"Elevator Doors")                                   \
  DEF(L"23.50.05.11.24.14", L"Elevator Controls")                                \
  DEF(L"23.50.05.11.27", L"Elevator Restoration Products")                       \
  DEF(L"23.50.05.14", L"Lifts")                                                  \
  DEF(L"23.50.05.14.11", L"Scissors Lifts")                                      \
  DEF(L"23.50.05.14.14", L"Stair Elevators")                                     \
  DEF(L"23.50.05.14.14.11", L"Inclined Platform Lifts")                          \
  DEF(L"23.50.05.14.17", L"Elevating Platforms")                                 \
  DEF(L"23.50.05.14.17.11", L"Platform Lifts")                                   \
  DEF(L"23.50.05.14.17.14", L"Sidewalk Lifts")                                   \
  DEF(L"23.50.05.17", L"Escalators")                                             \
  DEF(L"23.50.20.00", L"Horizontal Transportation")                              \
  DEF(L"23.50.20.11", L"Moving Walks")                                           \
  DEF(L"23.50.20.14", L"People Movers")                                          \
  DEF(L"23.50.20.17", L"Aircraft Passenger Loading")                             \
  DEF(L"23.50.20.17.11", L"Jetways")                                             \
  DEF(L"23.50.20.17.14", L"Gangways")                                            \
  DEF(L"23.50.20.21", L"Monorails")                                              \
  DEF(L"23.50.30.00", L"Materials Handling")                                     \
  DEF(L"23.50.30.11", L"Dumbwaiters")                                            \
  DEF(L"23.50.30.11.11", L"Manual Dumbwaiters")                                  \
  DEF(L"23.50.30.11.14", L"Electric Dumbwaiters")                                \
  DEF(L"23.50.30.11.17", L"Hydraulic Dumbwaiters")                               \
  DEF(L"23.50.30.14", L"Material Transport")                                     \
  DEF(L"23.50.30.14.11", L"Automated Document Filing and Retrieval")             \
  DEF(L"23.50.30.14.14", L"Automated Guided Vehicles")                           \
  DEF(L"23.50.30.14.14.11", L"Guided Vehicle Material Handling")                 \
  DEF(L"23.50.30.14.14.14", L"Track Vehicle Material Handling")                  \
  DEF(L"23.50.30.17", L"Postal Conveying")                                       \
  DEF(L"23.50.30.21", L"Baggage Conveying and Dispensing")                       \
  DEF(L"23.50.30.24", L"Conveyors")                                              \
  DEF(L"23.50.30.24.11", L"Conveyor Components")                                \
  DEF(L"23.50.30.24.11.11", L"Conveyor Belts")                                   \
  DEF(L"23.50.30.24.14", L"Belt Conveyors")                                      \
  DEF(L"23.50.30.24.17", L"Bucket Conveyors")                                    \
  DEF(L"23.50.30.24.21", L"Container Conveyors")                                 \
  DEF(L"23.50.30.24.24", L"Hopper and Track Conveyors")                          \
  DEF(L"23.50.30.24.27", L"Monorail Conveyors")                                  \
  DEF(L"23.50.30.24.31", L"Oscillating Conveyors")                               \
  DEF(L"23.50.30.24.34", L"Pneumatic Conveyors")                                 \
  DEF(L"23.50.30.24.37", L"Roller Conveyors")                                    \
  DEF(L"23.50.30.24.41", L"Scoop Conveyors")                                     \
  DEF(L"23.50.30.24.44", L"Screw Conveyors")                                     \
  DEF(L"23.50.30.24.47", L"Selective Vertical Conveyors")                        \
  DEF(L"23.50.30.34", L"Pneumatic Tubes")                                        \
  DEF(L"23.50.30.34.11", L"Document Conveying Systems")                          \
  DEF(L"23.50.30.37", L"Hoists and Cranes")                                      \
  DEF(L"23.50.30.37.11", L"Cranes")                                              \
  DEF(L"23.50.30.37.11.11", L"Crane Rails")                                      \
  DEF(L"23.50.30.37.11.14", L"Bridge Cranes")                                    \
  DEF(L"23.50.30.37.11.14.11", L"Top-Running Overhead Cranes")                   \
  DEF(L"23.50.30.37.11.14.14", L"Underslung Overhead Cranes")                    \
  DEF(L"23.50.30.37.11.17", L"Gantry Cranes")                                    \
  DEF(L"23.50.30.37.11.21", L"Jib Cranes")                                       \
  DEF(L"23.50.30.37.11.24", L"Tower Cranes")                                     \
  DEF(L"23.50.30.37.11.27", L"Mobile Cranes")                                    \
  DEF(L"23.50.30.37.11.31", L"Derricks")                                         \
  DEF(L"23.50.30.37.14", L"Fixed Hoists")                                        \
  DEF(L"23.50.30.37.14.11", L"Air Powered Fixed Hoists")                         \
  DEF(L"23.50.30.37.14.14", L"Electric Fixed Hoists")                            \
  DEF(L"23.50.30.37.14.17", L"Manual Fixed Hoists")                              \
  DEF(L"23.50.30.37.17", L"Trolley Hoists")                                      \
  DEF(L"23.50.30.37.17.11", L"Air Powered Trolley Hoists")                       \
  DEF(L"23.50.30.37.17.14", L"Electric Trolley Hoists")                          \
  DEF(L"23.50.30.37.17.17", L"Manual Trolley Hoists")                            \
  DEF(L"23.50.50.00", L"Turntables")                                             \
  DEF(L"23.50.50.11", L"Restaurant Turntables")                                  \
  DEF(L"23.50.50.14", L"Stage Turntables")                                       \
  DEF(L"23.50.50.17", L"Exhibit and Display Turntables")                         \
  DEF(L"23.50.50.21", L"Vehicular Turntable")                                    \
  DEF(L"23.50.55.00", L"Parking Systems")                                        \
  DEF(L"23.50.55.11", L"Car Parking Systems")                                    \
  DEF(L"23.50.70.00", L"Loading Dock Equipment")                                 \
  DEF(L"23.50.70.11", L"Dock Bumpers/Seals")                                     \
  DEF(L"23.50.70.14", L"Dock Levelers")                                          \
  DEF(L"23.50.70.14.11", L"Powered Dock Levelers")                               \
  DEF(L"23.50.70.14.14", L"Manual Dock Levelers")                                \
  DEF(L"23.50.70.17", L"Dock Lifts")                                             \
  DEF(L"23.50.70.17.11", L"Powered Dock Lifts")                                  \
  DEF(L"23.50.70.17.14", L"Manual Dock Lifts")                                   \
  DEF(L"23.50.70.21", L"Portable Ramps, Bridges, and Platforms")                 \
  DEF(L"23.50.70.24", L"Seals and Shelters")                                     \
  DEF(L"23.50.70.27", L"Truck Restraints")                                       \
  DEF(L"23.50.85.00", L"Scaffolding")                                            \
  DEF(L"23.50.85.11", L"Suspended Scaffolding")                                  \
  DEF(L"23.50.85.11.11", L"Beam Suspended Scaffolding")                          \
  DEF(L"23.50.85.11.14", L"Carriage Suspended Scaffolding")                      \
  DEF(L"23.50.85.11.17", L"Hook Suspended Scaffolding")                          \
  DEF(L"23.50.85.14", L"Rope Climbers")                                          \
  DEF(L"23.50.85.14.11", L"Manual Rope Climbers")                                \
  DEF(L"23.50.85.14.14", L"Powered Rope Climbers")                               \
  DEF(L"23.50.85.17", L"Telescoping Platforms")                                  \
  DEF(L"23.50.85.17.11", L"Electric and Battery Telescoping Platforms")          \
  DEF(L"23.50.85.17.14", L"Pneumatic Telescoping Platforms")                     \
  DEF(L"23.50.85.21", L"Powered Scaffolding")                                    \
  DEF(L"23.50.90.00", L"Building Maintenance Systems ")                          \
  DEF(L"23.50.90.11", L"Window Washing Systems")                                 \
  DEF(L"23.50.90.14", L"Building Maintenance Cradles and Platforms")             \
  DEF(L"23.50.90.17", L"Roof Trolley Systems")                                   \
  DEF(L"23.50.90.21", L"Traveling Ladder Systems")                               \
  DEF(L"23.50.90.24", L"Ancillary Building Maintenance Items")                   \
  DEF(L"23.50.90.24.11", L"Safety Tracks")                                       \
  DEF(L"23.50.90.24.14", L"Anchors for Building Maintenance")                    \
  DEF(L"23.50.90.27", L"Fall Arrest Systems")                                    \
  DEF(L"23.55.00.00", L"Manufactured Structures")                                \
  DEF(L"23.55.10.00", L"Towers and Superstructures")                             \
  DEF(L"23.55.10.11", L"Industrial Breechings, Chimneys, and Stacks")            \
  DEF(L"23.55.10.11.11", L"Breechings")                                          \
  DEF(L"23.55.10.11.11.11", L"Fabricated Breechings and Accessories")            \
  DEF(L"23.55.10.11.14", L"Chimney Shafts")                                      \
  DEF(L"23.55.10.11.17", L"Chimney Linings")                                     \
  DEF(L"23.55.10.11.21", L"Draft Control Devices")                               \
  DEF(L"23.55.10.11.24", L"Insulated Sectional Chimneys")                        \
  DEF(L"23.55.10.14", L"Towers")                                                 \
  DEF(L"23.55.10.14.11", L"Cooling Towers ")                                     \
  DEF(L"23.55.10.14.14", L"Water Towers")                                        \
  DEF(L"23.60.00.00", L"General Purpose: Services ")                             \
  DEF(L"23.60.10.00", L"General Measuring Instruments")                          \
  DEF(L"23.60.10.11", L"Temperature Measuring Instruments")                      \
  DEF(L"23.60.10.14", L"Pressure Measuring Instruments")                         \
  DEF(L"23.60.10.17", L"Flow Meters")                                            \
  DEF(L"23.60.10.21", L"Concentration Measuring Instruments")                    \
  DEF(L"23.60.10.21.11", L"Humidity Concentration Measuring Instruments")        \
  DEF(L"23.60.10.21.14",                                                        \
      L"Carbon Dioxide (CO\u0406) Concentration Measuring Instruments")              \
  DEF(L"23.60.10.21.17", L"Ozone Concentration Measuring Instruments")           \
  DEF(L"23.60.10.21.21", L"Other Gas Concentration Measuring Instruments")       \
  DEF(L"23.60.10.24", L"Heat Measuring Instruments")                             \
  DEF(L"23.60.10.27", L"Level Measuring Instruments")                            \
  DEF(L"23.60.10.31", L"Weighing Instruments")                                   \
  DEF(L"23.60.30.00", L"General Pipework and Ductwork Products")                 \
  DEF(L"23.60.30.11", L"Pipework Products for General Use")                      \
  DEF(L"23.60.30.11.14", L"Pipework Fittings")                                   \
  DEF(L"23.60.30.11.14.11", L"Water Hammer Arrestors")                           \
  DEF(L"23.60.30.11.14.14", L"Pipe Expansion Compensators")                      \
  DEF(L"23.60.30.11.17", L"Pipework/Ductwork Mechanical Fasteners/Supports")     \
  DEF(L"23.60.30.14", L"Ducting and Wireways for General Use")                   \
  DEF(L"23.60.30.14.11", L"Underfloor Wireways")                                 \
  DEF(L"23.60.30.14.14", L"Service Penetrations")                                \
  DEF(L"23.60.30.17", L"Manholes")                                               \
  DEF(L"23.60.30.21", L"Pumps")                                                  \
  DEF(L"23.60.30.21.11", L"Pump Components")                                    \
  DEF(L"23.60.30.21.14", L"Manual Pumps")                                        \
  DEF(L"23.60.30.21.17", L"Motor Pumps")                                         \
  DEF(L"23.60.30.21.21", L"Pump Sets")                                           \
  DEF(L"23.60.30.21.24", L"Booster Pumps")                                       \
  DEF(L"23.60.30.24", L"Poles for Aerial Networks")                              \
  DEF(L"23.60.30.24.11", L"Utility Poles")                                       \
  DEF(L"23.60.30.24.14", L"Lighting Poles and Standards")                        \
  DEF(L"23.60.30.24.17", L"Antenna Towers")                                      \
  DEF(L"23.60.30.24.21", L"Transmission Towers")                                 \
  DEF(L"23.60.50.00", L"General Purpose Controls")                               \
  DEF(L"23.60.50.11", L"Photoelectric Cells")                                    \
  DEF(L"23.60.50.14", L"Infra Red and Other Remote Controls")                    \
  DEF(L"23.60.50.17", L"Hydraulic Controls")                                     \
  DEF(L"23.60.50.21", L"Pneumatic Controls")                                     \
  DEF(L"23.60.50.24", L"Electric Controls")                                      \
  DEF(L"23.60.50.27", L"Digital Controls")                                       \
  DEF(L"23.60.70.00", L"General Protection for Services")                        \
  DEF(L"23.60.70.11", L"Fireproofing for Services")                              \
  DEF(L"23.60.70.11.11", L"Fire Dampers")                                        \
  DEF(L"23.60.70.14", L"Smoke Seals for Ductwork")                               \
  DEF(L"23.60.70.14.11", L"Smoke Dampers")                                       \
  DEF(L"23.65.00.00", L"Supply and Distribution of Liquids and Gases")           \
  DEF(L"23.65.05.00", L"Complete Supply, Storage and Distribution Systems")      \
  DEF(L"23.65.05.11",                                                           \
      L"Complete Systems for Supply, Storage and Distribution of Liquids")      \
  DEF(L"23.65.05.11.11", L"Water Supply Systems")                                \
  DEF(L"23.65.05.11.14", L"Consumable Liquids Supply Systems")                   \
  DEF(L"23.65.05.11.17", L"Liquid Fuel Supply Systems")                          \
  DEF(L"23.65.05.11.21", L"Liquid Fire Suppression Systems")                     \
  DEF(L"23.65.05.11.99", L"Other Liquid Supply Systems")                         \
  DEF(L"23.65.05.14",                                                           \
      L"Complete Systems for Supply, Storage and Distribution of Gases")        \
  DEF(L"23.65.05.14.11", L"Steam Supply Systems")                                \
  DEF(L"23.65.05.14.14", L"Fuel Gas Supply Systems")                             \
  DEF(L"23.65.05.14.17", L"Medical Gases Supply Systems")                        \
  DEF(L"23.65.05.14.21", L"Gaseous Fire Suppression Systems")                    \
  DEF(L"23.65.05.14.99", L"Other Gas Supply Systems")                            \
  DEF(L"23.65.20.00", L"Storage Vessels for Supplied Liquids and Gases")         \
  DEF(L"23.65.20.11", L"Storage Vessels for Liquids")                            \
  DEF(L"23.65.20.11.11", L"Liquid Storage Components")                          \
  DEF(L"23.65.20.11.11.11", L"Overflow Regulators")                              \
  DEF(L"23.65.20.11.11.14", L"Fill and Valve Caps")                              \
  DEF(L"23.65.20.11.11.17", L"Vents for Liquid Storage Tanks")                   \
  DEF(L"23.65.20.11.14", L"Rainwater Tanks")                                     \
  DEF(L"23.65.20.11.17", L"Supply Water Tanks")                                  \
  DEF(L"23.65.20.11.21", L"Consumable Liquid Storage Vessels")                   \
  DEF(L"23.65.20.11.24", L"Liquid Fuel Storage Vessels")                         \
  DEF(L"23.65.20.11.24.11", L"Fuel Oil Pre-Heaters")                             \
  DEF(L"23.65.20.11.27", L"Other Liquid Storage Vessels")                        \
  DEF(L"23.65.20.14", L"Storage Vessels for Gases")                              \
  DEF(L"23.65.20.14.11", L"Vacuum/Pressurized Air Storage Vessels")              \
  DEF(L"23.65.20.14.14", L"Steam Storage Vessels")                               \
  DEF(L"23.65.20.14.17", L"Medical Gases Storage Vessels")                       \
  DEF(L"23.65.20.14.21", L"Fuel Gas and LPG Storage Vessels")                    \
  DEF(L"23.65.20.14.24", L"Other Gas Storage Vessels")                           \
  DEF(L"23.65.35.00", L"Heaters for Supplied Liquids ")                          \
  DEF(L"23.65.35.11", L"Supply Water Heaters")                                  \
  DEF(L"23.65.35.11.11", L"Storage Water Heaters ")                              \
  DEF(L"23.65.35.11.14", L"Instantaneous Water Heaters")                         \
  DEF(L"23.65.35.11.17", L"Thermodynamic Water Heaters")                         \
  DEF(L"23.65.35.99", L"Heaters for Other Supplied Liquids")                     \
  DEF(L"23.65.50.00", L"Treatment of Supplied Liquids/Gases")                    \
  DEF(L"23.65.50.11", L"Water Treatment")                                        \
  DEF(L"23.65.50.11.11", L"Water Treatment Components")                          \
  DEF(L"23.65.50.11.11.11", L"Water Filters")                                    \
  DEF(L"23.65.50.11.11.14", L"Water Softeners")                                  \
  DEF(L"23.65.50.11.11.17", L"Magnetic/Electronic Water Treatment")              \
  DEF(L"23.65.50.11.11.21", L"Sterilizers")                                      \
  DEF(L"23.65.50.11.11.24", L"Salinators")                                       \
  DEF(L"23.65.50.11.11.27", L"Chlorinators")                                     \
  DEF(L"23.65.50.11.11.31", L"Ionizers, Ozone Treatment")                        \
  DEF(L"23.65.50.11.11.34", L"Additives for Water Treatment")                    \
  DEF(L"23.65.50.11.14", L"Packaged Water Treatment Systems")                    \
  DEF(L"23.65.55.00", L"Distribution of Supplied Liquids/Gases")                 \
  DEF(L"23.65.55.11", L"Supply Pumps and Compressors")                           \
  DEF(L"23.65.55.11.11", L"Gas Compressors/Vacuum Pumps")                        \
  DEF(L"23.65.55.14", L"Valves for Liquid Services")                             \
  DEF(L"23.65.55.14.11", L"Inlet/Outlet Valves for Liquid Services")             \
  DEF(L"23.65.55.14.11.11", L"Fill Valves for Liquid Services")                  \
  DEF(L"23.65.55.14.11.14", L"Bleeding Valves for Liquid Services")              \
  DEF(L"23.65.55.14.11.17", L"Overflow Valves for Liquid Services")              \
  DEF(L"23.65.55.14.14", L"Isolation Valves for Liquid Services")                \
  DEF(L"23.65.55.14.17", L"Adjusting/Controlling Valves for Liquid Services")    \
  DEF(L"23.65.55.14.21", L"Non-Return Valves for Liquid Services")               \
  DEF(L"23.65.55.14.24", L"Mixing Valves for Liquid Services")                   \
  DEF(L"23.65.55.17", L"Valves for Gas Supply Services")                         \
  DEF(L"23.65.55.17.11", L"Inlet/Outlet Valves for Gas Supplies")                \
  DEF(L"23.65.55.17.11.11", L"Steam Outlet Valves")                              \
  DEF(L"23.65.55.17.14", L"Isolation Valves for Gas Supplies")                   \
  DEF(L"23.65.55.17.17", L"Adjusting/Controlling Valves for Gas Supplies")       \
  DEF(L"23.65.55.17.21", L"Non-Return Valves for Gas Supplies")                  \
  DEF(L"23.65.70.00", L"Terminals for Supplied Liquids and Gases")               \
  DEF(L"23.65.70.11", L"Fixtures for Supplied Liquids and Gases")                \
  DEF(L"23.65.70.11.11", L"Fixtures for Liquids")                                \
  DEF(L"23.65.70.11.14", L"Gas Service Fixtures")                                \
  DEF(L"23.65.70.14", L"Fountains")                                              \
  DEF(L"23.65.70.14.11", L"Drinking Fountains/Coolers")                          \
  DEF(L"23.65.70.14.11.11", L"Security Drinking Fountains/Coolers")              \
  DEF(L"23.65.70.17", L"Fire Fighting Terminals")                                \
  DEF(L"23.65.70.17.11", L"Fire Fighting Terminal Components")                   \
  DEF(L"23.65.70.17.11.11", L"Fire Hydrants")                                    \
  DEF(L"23.65.70.17.11.14", L"Fire Hose Reels")                                  \
  DEF(L"23.65.70.17.11.17", L"Fire Hoses")                                       \
  DEF(L"23.65.70.17.11.21", L"Fire Fighting Gas Terminals")                      \
  DEF(L"23.65.70.17.11.24", L"Fire Fighting Sprinkler Heads")                    \
  DEF(L"23.65.70.17.11.27", L"Cabinets for Fire Hoses")                          \
  DEF(L"23.65.70.17.11.31", L"Fire Fighting Media ")                             \
  DEF(L"23.65.70.17.14", L"Water Fire Fighting Terminals")                       \
  DEF(L"23.65.70.17.17", L"Gaseous Fire Fighting Terminals")                     \
  DEF(L"23.65.70.17.21", L"Foam Fire Fighting Terminals")                        \
  DEF(L"23.65.70.17.24", L"Powder Fire Fighting Terminals")                      \
  DEF(L"23.65.70.17.27", L"Fire Extinguishers")                                  \
  DEF(L"23.70.00.00", L"Waste Management")                                       \
  DEF(L"23.70.30.00", L"Solid Waste Handling Products  ")                        \
  DEF(L"23.70.30.11", L"Solid Waste Impelling Equipment")                        \
  DEF(L"23.70.30.14", L"Solid Waste Treatment Equipment")                        \
  DEF(L"23.70.30.14.11", L"Solid Waste Compactors, Destructors, and Balers")     \
  DEF(L"23.70.30.14.14", L"Solid Waste Crushers")                                \
  DEF(L"23.70.30.14.17", L"Solid Waste Pulping Machines")                        \
  DEF(L"23.70.30.14.21", L"Solid Waste Shredding Machines")                      \
  DEF(L"23.70.30.14.24", L"Pneumatic Waste Equipment")                           \
  DEF(L"23.70.30.14.27", L"Incinerators")                                        \
  DEF(L"23.70.30.14.27.11", L"Solid Waste Incinerators")                         \
  DEF(L"23.70.30.14.27.14", L"Packaged Incinerators")                            \
  DEF(L"23.70.30.14.31", L"Recycling Equipment")                                 \
  DEF(L"23.70.30.17", L"Solid Waste Monitoring and Control Equipment")           \
  DEF(L"23.70.30.17.11", L"Solid Waste Metal Detectors")                         \
  DEF(L"23.70.30.17.14", L"Solid Waste Detectors for Other Solids")              \
  DEF(L"23.70.30.21", L"Solid Waste Collection and Removal Products")            \
  DEF(L"23.70.30.21.11", L"Complete Solid Waste Removal Systems")                \
  DEF(L"23.70.30.21.14", L"Solid Waste Bins")                                    \
  DEF(L"23.70.30.21.17", L"Gravity Chute Solid Waste Systems")                   \
  DEF(L"23.70.30.21.21", L"Refuse Disposal Chutes")                              \
  DEF(L"23.70.30.21.21.11", L"Refuse Hoppers")                                   \
  DEF(L"23.70.30.21.21.14", L"Refuse Chute Doors")                               \
  DEF(L"23.70.30.21.21.17", L"Refuse Chute Decontamination Units")               \
  DEF(L"23.70.30.24", L"Solid Waste Handling Systems")                           \
  DEF(L"23.70.30.24.11", L"Refuse Compactors")                                   \
  DEF(L"23.70.30.24.14", L"Refuse Containers")                                   \
  DEF(L"23.70.30.24.17", L"Dust Collectors")                                     \
  DEF(L"23.70.50.00", L"Liquid Waste Handling Services")                         \
  DEF(L"23.70.50.11", L"Pumps for Liquid Waste")                                 \
  DEF(L"23.70.50.11.11", L"Surface Waste Water Pumps")                           \
  DEF(L"23.70.50.11.14", L"Sewage and Sludge Pumps")                             \
  DEF(L"23.70.50.11.14.11", L"Oil-Water Separators")                             \
  DEF(L"23.70.50.11.14.14", L"Packaged Sewage and Sludge Pump Stations")         \
  DEF(L"23.70.50.11.14.17", L"Sewage Ejectors")                                  \
  DEF(L"23.70.50.11.17", L"Combined Macerator-Pumps")                            \
  DEF(L"23.70.50.14", L"Liquid Waste Treatment")                                 \
  DEF(L"23.70.50.14.11", L"Packaged Sewage Treatment Plants")                    \
  DEF(L"23.70.50.14.14", L"General Waste Water Treatment Equipment")             \
  DEF(L"23.70.50.14.14.11", L"Grit Collecting Equipment")                        \
  DEF(L"23.70.50.14.14.14", L"Screening and grinding Equipment")                 \
  DEF(L"23.70.50.14.14.17", L"Sedimentation Tank Equipment")                     \
  DEF(L"23.70.50.14.14.21", L"Scum Removal Equipment")                           \
  DEF(L"23.70.50.14.14.24", L"Chemical Equipment")                               \
  DEF(L"23.70.50.14.14.27", L"Sludge Handling and Treatment Equipment")          \
  DEF(L"23.70.50.14.14.31", L"Filter Underdrains and Media")                     \
  DEF(L"23.70.50.14.14.31.11", L"Filter Bottoms")                                \
  DEF(L"23.70.50.14.14.31.14", L"Filter Media")                                  \
  DEF(L"23.70.50.14.14.31.17", L"Package Filters")                               \
  DEF(L"23.70.50.14.14.34", L"Filter Press Equipment")                           \
  DEF(L"23.70.50.14.14.37", L"Trickling Filter Equipment")                       \
  DEF(L"23.70.50.14.17", L"Other Waste Water Treatment Equipment")               \
  DEF(L"23.70.50.14.17.11", L"Waste Water Compressors")                          \
  DEF(L"23.70.50.14.17.14", L"Waste Water Aeration Equipment")                   \
  DEF(L"23.70.50.14.17.17", L"Waste Water Oxygenation Systems")                  \
  DEF(L"23.70.50.14.17.17.11", L"Waste Water Oxygen Dissolution System")         \
  DEF(L"23.70.50.14.17.17.14", L"Waste Water Oxygen Generators")                 \
  DEF(L"23.70.50.14.17.17.17", L"Waste Water Oxygen Storage Facility")           \
  DEF(L"23.70.50.14.17.21", L"Sludge Digestion Equipment")                       \
  DEF(L"23.70.50.14.17.21.11", L"Sludge Conditioning Systems")                   \
  DEF(L"23.70.50.14.17.21.14", L"Sludge Incinerators")                           \
  DEF(L"23.70.50.14.17.24", L"Digester Mixing Equipment")                        \
  DEF(L"23.70.50.14.17.24.11", L"Digester Covers and Appurtenances")             \
  DEF(L"23.70.50.14.17.24.11.11", L"Fixed Digester Covers")                      \
  DEF(L"23.70.50.14.17.24.11.14", L"Floating Digester Covers")                   \
  DEF(L"23.70.50.14.17.24.11.17", L"Gasholder Covers")                           \
  DEF(L"23.70.50.14.21", L"Septic Tank Systems")                                 \
  DEF(L"23.70.50.14.21.11", L"Drainage Field")                                   \
  DEF(L"23.70.50.14.21.14", L"Grease Interceptor")                               \
  DEF(L"23.70.50.14.21.17", L"Sand Filter")                                      \
  DEF(L"23.70.50.14.21.21", L"Septic Tank")                                      \
  DEF(L"23.70.50.14.21.24", L"Siphon Tank")                                      \
  DEF(L"23.70.50.14.24", L"Bacterial Filter Tanks")                              \
  DEF(L"23.70.50.14.27", L"Liquid Waste Decanters")                              \
  DEF(L"23.70.50.14.31", L"Liquid Waste Separators")                             \
  DEF(L"23.70.50.17", L"Liquid Waste Monitoring and Control")                    \
  DEF(L"23.70.50.17.11", L"Detectors of Water Pollution")                        \
  DEF(L"23.70.50.21", L"Liquid Waste Collection and Removal")                    \
  DEF(L"23.70.50.21.24", L"Waste Water Drains")                                  \
  DEF(L"23.70.50.21.24.11", L"Roof Waste Water Drains")                          \
  DEF(L"23.70.50.21.24.14", L"Deck Waste Water Drains")                          \
  DEF(L"23.70.50.21.27", L"Drainage Pipes, Couplings, Collectors")               \
  DEF(L"23.70.50.21.31", L"Pipework Access Fittings")                            \
  DEF(L"23.70.50.21.34", L"French Drain")                                        \
  DEF(L"23.70.50.21.37", L"Valves for Removal Systems")                          \
  DEF(L"23.70.50.21.37.11", L"Air Inlet Valves for Removal Systems")             \
  DEF(L"23.70.50.21.37.14", L"Non-Return Valves for Removal Systems")            \
  DEF(L"23.70.50.24", L"Rainwater Removal")                                      \
  DEF(L"23.70.50.24.11", L"Roof Gutters/Eavestroughs")                           \
  DEF(L"23.70.50.24.14", L"Downspouts")                                          \
  DEF(L"23.70.50.24.14.11", L"Mechanical Fasteners for Downspouts")              \
  DEF(L"23.70.50.24.14.14", L"Downspout Strainers")                              \
  DEF(L"23.70.50.24.17", L"Siphonic Drains")                                     \
  DEF(L"23.70.70.00", L"Gaseous Waste Handling Services")                        \
  DEF(L"23.70.70.11", L"Gaseous Waste Impelling Equipment")                      \
  DEF(L"23.70.70.11.11", L"Flue Booster Fans")                                   \
  DEF(L"23.70.70.11.14", L"Flue Dilution Fans")                                  \
  DEF(L"23.70.70.11.17", L"Fume Extractor Fans")                                 \
  DEF(L"23.70.70.14", L"Gaseous Waste Treatment")                                \
  DEF(L"23.70.70.14.11", L"Flue Gas Purifiers")                                  \
  DEF(L"23.70.70.17", L"Gaseous Waste Monitoring and Control")                   \
  DEF(L"23.70.70.17.11", L"Air Pollution Detectors")                             \
  DEF(L"23.70.70.17.14", L"Flue Gas Analyzers")                                  \
  DEF(L"23.70.70.21", L"Gaseous Waste Removal")                                  \
  DEF(L"23.70.70.21.11", L"Complete Gaseous Waste Handling Systems")             \
  DEF(L"23.70.70.21.14", L"Complete Flue and Chimney Systems")                   \
  DEF(L"23.70.70.21.14.11", L"Gas Vents")                                        \
  DEF(L"23.70.70.21.14.14", L"Fabricated Stacks")                                \
  DEF(L"23.70.70.21.14.17", L"Fabricated Breechings and Accessories")            \
  DEF(L"23.70.70.21.14.21", L"Insulated Sectional Chimneys")                     \
  DEF(L"23.70.70.21.17", L"Flue and Chimney Systems Components")                 \
  DEF(L"23.70.70.21.17.11", L"Draft Control Devices")                            \
  DEF(L"23.70.70.21.17.14", L"Fireplace Lintels")                                \
  DEF(L"23.70.70.21.17.17", L"Flue Linings")                                     \
  DEF(L"23.70.70.21.17.21", L"Flue Caps, Cowls")                                 \
  DEF(L"23.70.70.21.17.24", L"Access Panels for Chimneys")                       \
  DEF(L"23.70.70.21.17.27", L"Dampers for Chimneys")                             \
  DEF(L"23.70.70.21.17.31", L"Fire Shutter Extinguishers")                       \
  DEF(L"23.75.00.00", L"Climate Control (HVAC)")                                 \
  DEF(L"23.75.10.00", L"Transformation and Conversion of Energy")                \
  DEF(L"23.75.10.11", L"Central Heat Generators")                                \
  DEF(L"23.75.10.11.14", L"Hot Water Heat Generators")                           \
  DEF(L"23.75.10.11.14.11", L"Cast-Iron Boilers")                                \
  DEF(L"23.75.10.11.14.14", L"Condensing Boilers")                               \
  DEF(L"23.75.10.11.14.17", L"Finned Water-Tube Boilers")                        \
  DEF(L"23.75.10.11.14.21", L"Firebox Heating Boilers")                          \
  DEF(L"23.75.10.11.14.24", L"Flexible Water-Tube Boilers")                      \
  DEF(L"23.75.10.11.14.27", L"Pulse Combustion Boilers")                         \
  DEF(L"23.75.10.11.14.31", L"Scotch Marine Boilers")                            \
  DEF(L"23.75.10.11.14.34", L"Steel Water-Tube Boilers")                         \
  DEF(L"23.75.10.11.17", L"Warm Air Heat Generators")                            \
  DEF(L"23.75.10.11.17.11", L"Furnaces")                                         \
  DEF(L"23.75.10.11.17.11.11", L"Electric-Resistance Furnaces")                  \
  DEF(L"23.75.10.11.17.11.14", L"Fuel-Fired Furnaces")                           \
  DEF(L"23.75.10.11.21", L"Steam Heat Generators")                               \
  DEF(L"23.75.10.11.24", L"Heat Generators, Thermal Liquid")                     \
  DEF(L"23.75.10.11.27", L"Fuel Burners")                                        \
  DEF(L"23.75.10.11.27.11", L"Fuel Oil Filters")                                 \
  DEF(L"23.75.10.11.27.14", L"Nozzles")                                          \
  DEF(L"23.75.10.11.27.17", L"Burner Controls")                                  \
  DEF(L"23.75.10.11.31", L"Solid Fuel Transport and Handling Equipment")         \
  DEF(L"23.75.10.11.34", L"Fuel Gas Heat Recovery Devices")                      \
  DEF(L"23.75.10.14", L"Independent Electric Heating Units")                     \
  DEF(L"23.75.10.14.11", L"Electric Convectors")                                 \
  DEF(L"23.75.10.14.11.11", L"Static Convectors")                                \
  DEF(L"23.75.10.14.11.14", L"Fan Convectors")                                   \
  DEF(L"23.75.10.14.14", L"Electric Radiators")                                  \
  DEF(L"23.75.10.14.14.11", L"Storage Heaters")                                  \
  DEF(L"23.75.10.14.14.14", L"Infrared Radiators/Plates")                        \
  DEF(L"23.75.10.14.14.17", L"Ultraviolet Radiators")                            \
  DEF(L"23.75.10.14.14.21", L"Electric Heated Towel Bars")                       \
  DEF(L"23.75.10.14.14.24", L"Electric Heated Ceiling Panels")                   \
  DEF(L"23.75.10.14.14.27", L"Portable Radiators")                               \
  DEF(L"23.75.10.14.17", L"Electric Surface Heating Products")                   \
  DEF(L"23.75.10.14.17.11", L"Heating Sheets for Walls and Ceilings")            \
  DEF(L"23.75.10.14.17.14", L"Heating Sheets for Glazing")                       \
  DEF(L"23.75.10.14.17.17", L"Pipe Heating Tapes/Cable Heating Trace")           \
  DEF(L"23.75.10.14.21", L"Embedded Electric Heating Appliances")                \
  DEF(L"23.75.10.14.21.11", L"Heating Sheets")                                   \
  DEF(L"23.75.10.14.21.14", L"Heating Cables")                                   \
  DEF(L"23.75.10.17", L"Non-Electric Local Heating Units ")                      \
  DEF(L"23.75.10.17.11", L"Non-Electric Stoves")                                 \
  DEF(L"23.75.10.17.14", L"Fuel-Fired Heaters")                                  \
  DEF(L"23.75.10.17.14.11", L"Fuel-Fired Duct Heaters")                          \
  DEF(L"23.75.10.17.14.14", L"Fuel-Fired Radiant Heaters")                       \
  DEF(L"23.75.10.17.14.17", L"Fuel-Fired Unit Heaters")                          \
  DEF(L"23.75.10.17.14.21", L"Fuel-Fired Air Heaters")                           \
  DEF(L"23.75.10.17.14.24", L"Fuel-Fired Domestic Heaters")                      \
  DEF(L"23.75.10.17.17", L"Combined Heating/Cooking Units")                      \
  DEF(L"23.75.10.17.17.11", L"Heat Pumps, Heating Function")                     \
  DEF(L"23.75.10.17.17.14", L"Heat Pumps, Cooling Function")                     \
  DEF(L"23.75.10.17.17.17", L"Heat Pumps, Heating-Cooling Function")             \
  DEF(L"23.75.10.21", L"Heat Pumps")                                             \
  DEF(L"23.75.10.21.11", L"Air-Source Heat Pumps")                               \
  DEF(L"23.75.10.21.14", L"Rooftop Heat Pumps")                                  \
  DEF(L"23.75.10.21.17", L"Water-Source Heat Pumps")                             \
  DEF(L"23.75.10.24", L"Cooling and Freeze Plant")                               \
  DEF(L"23.75.10.24.11", L"Chilled Water Plant")                                 \
  DEF(L"23.75.10.24.14", L"Refrigeration Plant")                                 \
  DEF(L"23.75.10.24.17", L"Cold Room Plant")                                     \
  DEF(L"23.75.10.24.21", L"Cooling and Freeze Components")                       \
  DEF(L"23.75.10.24.21.11", L"Refrigerant Condensing Units")                     \
  DEF(L"23.75.10.24.21.11.11",                                                  \
      L"Packaged Refrigerant Condensing Coils and Fan Units")                   \
  DEF(L"23.75.10.24.21.11.14", L"Refrigerant Condensing Coils")                  \
  DEF(L"23.75.10.24.21.14", L"Refrigerant Evaporators")                          \
  DEF(L"23.75.10.24.21.17", L"Refrigerant Compressors")                          \
  DEF(L"23.75.10.24.21.17.11", L"Centrifugal Refrigerant Compressors")           \
  DEF(L"23.75.10.24.21.17.14", L"Reciprocating Refrigerant Compressors")         \
  DEF(L"23.75.10.24.21.17.17", L"Rotary-Screw Refrigerant Compressors")          \
  DEF(L"23.75.10.24.21.21", L"Packaged Water Chillers")                          \
  DEF(L"23.75.10.24.21.21.11", L"Absorption Water Chillers")                     \
  DEF(L"23.75.10.24.21.21.14", L"Centrifugal Water Chillers")                    \
  DEF(L"23.75.10.24.21.21.17", L"Reciprocating Water Chillers")                  \
  DEF(L"23.75.10.24.21.21.21", L"Rotary-Screw Water Chillers")                   \
  DEF(L"23.75.10.24.21.24", L"Liquid Coolers and Evaporative Condensers")        \
  DEF(L"23.75.10.24.21.27", L"Unitary Air Conditioning Equipment")               \
  DEF(L"23.75.10.24.21.27.11", L"Packaged Air Conditioners")                     \
  DEF(L"23.75.10.24.21.27.14", L"Packaged Rooftop Air Conditioning Units")       \
  DEF(L"23.75.10.24.21.27.17",                                                  \
      L"Packaged Rooftop Make-Up Air Conditioning Units")                       \
  DEF(L"23.75.10.24.21.27.21", L"Packaged Terminal Air Conditioning Units")      \
  DEF(L"23.75.10.24.21.27.24", L"Room Air Conditioners")                         \
  DEF(L"23.75.10.24.21.27.27", L"Split System Air Conditioning Units")           \
  DEF(L"23.75.10.24.21.31", L"Cooling/Freeze Plant Accessories")                 \
  DEF(L"23.75.10.24.21.31.11", L"Refrigerant Liquid")                            \
  DEF(L"23.75.10.27", L"Solar Collectors")                                       \
  DEF(L"23.75.10.27.11", L"Solar Collectors, Complete Systems")                  \
  DEF(L"23.75.10.27.11.11", L"Packaged Solar Equipment")                         \
  DEF(L"23.75.10.27.14", L"Solar Collector Components")                         \
  DEF(L"23.75.10.27.14.11", L"Solar Absorber Plates or Tubing")                  \
  DEF(L"23.75.10.27.14.14", L"Solar Coatings and Surface Treatment")             \
  DEF(L"23.75.10.27.14.17", L"Solar Collector Insulation")                       \
  DEF(L"23.75.10.27.14.21", L"Solar Glazing")                                    \
  DEF(L"23.75.10.27.14.24", L"Solar Housing and Framing")                        \
  DEF(L"23.75.10.27.14.27", L"Solar Reflectors")                                 \
  DEF(L"23.75.10.27.17", L"Solar Collector Units")                               \
  DEF(L"23.75.10.27.17.11", L"Solar Flat Plate Collectors")                      \
  DEF(L"23.75.10.27.17.14", L"Solar Concentrating Collectors")                   \
  DEF(L"23.75.10.27.17.17", L"Solar Vacuum Tube Collectors")                     \
  DEF(L"23.75.10.27.17.21", L"Heat Exchangers, Tubular")                         \
  DEF(L"23.75.10.27.17.24", L"Heat Exchangers, Plate")                           \
  DEF(L"23.75.10.27.17.27", L"Heat Exchangers, Rotary")                          \
  DEF(L"23.75.10.27.21", L"Photovoltaic Collectors")                             \
  DEF(L"23.75.10.31", L"Wind Energy Equipment")                                  \
  DEF(L"23.75.10.34", L"Energy Recovery Equipment")                              \
  DEF(L"23.75.10.34.11", L"Energy Storage Tanks")                                \
  DEF(L"23.75.10.34.14", L"Heat Pipe")                                           \
  DEF(L"23.75.10.34.17", L"Heat Wheels")                                         \
  DEF(L"23.75.10.34.21", L"Heat Exchangers for Ventilation Air")                 \
  DEF(L"23.75.10.37", L"Cooling Towers")                                         \
  DEF(L"23.75.10.37.11", L"Mechanical-Draft Cooling Towers")                     \
  DEF(L"23.75.10.37.14", L"Natural-Draft Cooling Towers")                        \
  DEF(L"23.75.35.00", L"Impelling Equipment")                                    \
  DEF(L"23.75.35.14", L"Air Handling Units")                                     \
  DEF(L"23.75.35.14.11", L"Built-Up Indoor Air Handling Units")                  \
  DEF(L"23.75.35.14.14", L"Customized Rooftop Air Handling Units")               \
  DEF(L"23.75.35.14.17", L"Modular Indoor Air Handling Units")                   \
  DEF(L"23.75.35.14.21", L"Modular Rooftop Air Handling Units")                  \
  DEF(L"23.75.35.17", L"Fans")                                                   \
  DEF(L"23.75.35.17.11", L"Fans for Air Ductwork")                               \
  DEF(L"23.75.35.17.14", L"Fans, Single Units")                                  \
  DEF(L"23.75.35.17.17", L"Room Air Circulation Fans")                           \
  DEF(L"23.75.35.17.17.11", L"Ceiling Fans")                                     \
  DEF(L"23.75.35.17.21", L"Air Curtains")                                        \
  DEF(L"23.75.35.17.24", L"Axial Fans")                                          \
  DEF(L"23.75.35.17.27", L"Centrifugal Fans")                                    \
  DEF(L"23.75.35.21", L"Extractors")                                             \
  DEF(L"23.75.35.21.11", L"Emergency Smoke Extractors")                          \
  DEF(L"23.75.35.21.14", L"Extractors for Process Air")                          \
  DEF(L"23.75.35.21.17", L"Industrial Ventilating Equipment")                    \
  DEF(L"23.75.35.21.21", L"Power Ventilators")                                   \
  DEF(L"23.75.50.00", L"Energy Treatment ")                                      \
  DEF(L"23.75.50.11", L"Treatment of Circulation Liquids")                       \
  DEF(L"23.75.50.11.14", L"Feedwater Equipment")                                 \
  DEF(L"23.75.50.11.14.11", L"Boiler Feedwater Pumps")                           \
  DEF(L"23.75.50.11.14.14", L"Deaerators")                                       \
  DEF(L"23.75.50.11.14.17", L"Packaged Deaerator and Feedwater Equipment")       \
  DEF(L"23.75.50.14", L"Steam Treatment")                                        \
  DEF(L"23.75.50.14.11", L"Steam Dryers")                                        \
  DEF(L"23.75.50.17", L"Supply Air Treatment")                                   \
  DEF(L"23.75.50.17.11", L"Air Filters")                                         \
  DEF(L"23.75.50.17.11.11", L"Air Filter Components")                           \
  DEF(L"23.75.50.17.11.11.11", L"Air Filter Media")                              \
  DEF(L"23.75.50.17.11.14", L"High-Efficiency Air Filters")                      \
  DEF(L"23.75.50.17.11.17", L"ULPA Filters")                                     \
  DEF(L"23.75.50.17.11.21", L"HEPA Filters")                                     \
  DEF(L"23.75.50.17.14", L"Dust Collectors")                                     \
  DEF(L"23.75.50.17.17", L"Electronic Air Cleaners")                             \
  DEF(L"23.75.50.17.21", L"Air Humidifiers")                                     \
  DEF(L"23.75.50.17.24", L"Dehumidifiers")                                       \
  DEF(L"23.75.50.17.24.11", L"Swimming Pool Dehumidification Units")             \
  DEF(L"23.75.50.17.27", L"Air Fresheners")                                      \
  DEF(L"23.75.50.17.31", L"Clean Room Air Treatment")                            \
  DEF(L"23.75.65.00", L"Monitoring and Control Equipment")                       \
  DEF(L"23.75.65.11", L"Monitoring and Control of Internal Climate ")            \
  DEF(L"23.75.65.11.11", L"Heating Controllers")                                 \
  DEF(L"23.75.65.11.14", L"Heating Programmers")                                 \
  DEF(L"23.75.65.11.17", L"Heating Optimizers/Economizers")                      \
  DEF(L"23.75.65.14", L"Industrial Plant Performance Controls")                  \
  DEF(L"23.75.65.14.14", L"Centralized Plant Controls")                          \
  DEF(L"23.75.65.14.14.11", L"Temperature Controls")                             \
  DEF(L"23.75.65.14.14.14", L"Pressure Controls")                                \
  DEF(L"23.75.65.14.14.17", L"Flow Controls")                                    \
  DEF(L"23.75.65.14.14.21", L"Concentration Controls")                           \
  DEF(L"23.75.65.14.17", L"Control and Monitoring Boards/Panels")                \
  DEF(L"23.75.70.00", L"HVAC Distribution Devices")                              \
  DEF(L"23.75.70.11", L"Circulation Pipe Fittings")                              \
  DEF(L"23.75.70.11.11", L"Distribution Collectors")                             \
  DEF(L"23.75.70.11.14", L"Expansion Vessels")                                   \
  DEF(L"23.75.70.11.14.11", L"Air Ducts")                                        \
  DEF(L"23.75.70.11.14.14", L"Dampers for Air Ductwork")                         \
  DEF(L"23.75.70.11.14.17", L"Fire Shutters for Air Ductwork")                   \
  DEF(L"23.75.70.11.14.21", L"Guide Vanes")                                      \
  DEF(L"23.75.70.11.14.24", L"Air Mixers")                                       \
  DEF(L"23.75.70.11.14.27", L"Sound Attenuators")                                \
  DEF(L"23.75.70.14", L"Air Ductwork")                                           \
  DEF(L"23.75.70.14.11", L"Access Fittings for Air Ductwork")                    \
  DEF(L"23.75.70.14.14", L"Couplings for Air Ductwork")                          \
  DEF(L"23.75.70.14.17",                                                        \
      L"Hangers and Supports, Mechanical Fasteners for Air Ductwork")           \
  DEF(L"23.75.70.14.21", L"Fibrous Glass Ducts")                                 \
  DEF(L"23.75.70.14.24", L"Flexible Ducts")                                      \
  DEF(L"23.75.70.14.27", L"Glass-Fiber-Reinforced Plastic Ducts")                \
  DEF(L"23.75.70.14.31", L"Metal Ducts")                                         \
  DEF(L"23.75.70.14.34", L"Air Duct Accessories")                                \
  DEF(L"23.75.70.17",                                                           \
      L"Water Heated and Cooled Terminal Heating and Cooling Units")            \
  DEF(L"23.75.70.17.11", L"Radiators")                                           \
  DEF(L"23.75.70.17.14", L"Convectors")                                          \
  DEF(L"23.75.70.17.17", L"Radiation Panels")                                    \
  DEF(L"23.75.70.17.21", L"Embedded Water Heating Terminals")                    \
  DEF(L"23.75.70.17.24", L"Finned-Tube Radiation")                               \
  DEF(L"23.75.70.17.27", L"Fan Coil Units")                                      \
  DEF(L"23.75.70.17.31", L"Induction Units")                                     \
  DEF(L"23.75.70.17.34", L"Unit Heaters")                                        \
  DEF(L"23.75.70.17.37", L"Unit Ventilators")                                    \
  DEF(L"23.75.70.17.41", L"Water Heated Towel Bars")                             \
  DEF(L"23.75.70.21", L"Terminals for Air")                                      \
  DEF(L"23.75.70.21.11", L"Supports, Mechanical Fasteners")                      \
  DEF(L"23.75.70.21.14", L"Coil Units")                                          \
  DEF(L"23.75.70.21.17", L"Air Curtains")                                        \
  DEF(L"23.75.70.21.21", L"Local Air-Conditioning Units")                        \
  DEF(L"23.75.70.21.24", L"Air Terminal Units")                                  \
  DEF(L"23.75.70.21.24.11", L"Constant Volume Air Terminal Units")               \
  DEF(L"23.75.70.21.24.14", L"Variable Volume Air Terminal Units")               \
  DEF(L"23.75.70.21.27", L"Air Outlets and Inlets")                              \
  DEF(L"23.75.70.21.27.11", L"Diffusers, Registers, and Grilles")                \
  DEF(L"23.75.70.21.27.14", L"Gravity Ventilators")                              \
  DEF(L"23.75.70.21.27.17", L"Intake and Relief Ventilators")                    \
  DEF(L"23.75.70.21.27.21", L"Penthouse Ventilators")                            \
  DEF(L"23.75.70.21.31", L"Exhaust Terminals")                                   \
  DEF(L"23.80.00.00", L"Electric Power and Lighting")                            \
  DEF(L"23.80.10.00", L"Generation and Transformation Equipment")                \
  DEF(L"23.80.10.11", L"Electrical Generators")                                  \
  DEF(L"23.80.10.11.11", L"Electrical Generators, Single Units")                 \
  DEF(L"23.80.10.11.11.11", L"Engine Generators")                                \
  DEF(L"23.80.10.11.11.14", L"Motor Generators")                                 \
  DEF(L"23.80.10.11.14", L"Driven Electrical Generator Sets")                    \
  DEF(L"23.80.10.11.14.11", L"Driving Units")                                    \
  DEF(L"23.80.10.11.14.14", L"Electricity Generation Units")                     \
  DEF(L"23.80.10.11.17", L"Frequency Changers")                                  \
  DEF(L"23.80.10.11.21", L"Rotary Converters")                                   \
  DEF(L"23.80.10.11.24", L"Rotary Uninterruptible Power Units")                  \
  DEF(L"23.80.10.14", L"Transformers")                                           \
  DEF(L"23.80.10.14.11", L"Power Transformers")                                  \
  DEF(L"23.80.10.14.14", L"Current Transformers")                                \
  DEF(L"23.80.10.14.17", L"Safety Transformers")                                 \
  DEF(L"23.80.10.14.21", L"Transformer Accessories")                             \
  DEF(L"23.80.10.14.21.11", L"Transformer Commutators")                          \
  DEF(L"23.80.10.14.21.14", L"Transformer Ballasts")                             \
  DEF(L"23.80.10.17", L"Static Power Converters")                                \
  DEF(L"23.80.10.17.11", L"Static Rectifiers")                                   \
  DEF(L"23.80.10.17.14", L"Ondulators")                                          \
  DEF(L"23.80.10.17.17", L"Combined Converter Sets")                             \
  DEF(L"23.80.10.17.21", L"Battery Chargers")                                    \
  DEF(L"23.80.10.17.24", L"Direct Current (DC) Drive Controllers")               \
  DEF(L"23.80.10.17.27", L"Slip Controllers")                                    \
  DEF(L"23.80.10.17.31", L"Static Frequency Converters")                         \
  DEF(L"23.80.10.17.34", L"Static Uninterruptible Power Supplies")               \
  DEF(L"23.80.10.17.37", L"Variable Frequency Controllers")                      \
  DEF(L"23.80.10.21", L"Electric Motors")                                        \
  DEF(L"23.80.10.21.11", L"Direct Current (DC) Motors")                          \
  DEF(L"23.80.10.21.14", L"Alternating Current (AC) Motors")                     \
  DEF(L"23.80.10.24", L"Power Storage")                                          \
  DEF(L"23.80.10.24.11", L"Batteries")                                           \
  DEF(L"23.80.10.24.11.11", L"Battery Racks")                                    \
  DEF(L"23.80.10.24.11.14", L"Central Battery Equipment")                        \
  DEF(L"23.80.10.24.14", L"Battery Chargers")                                    \
  DEF(L"23.80.10.24.17", L"Uninterrupted Power Supply (UPS) Units")              \
  DEF(L"23.80.25.00", L"Measuring and Recording Devices")                        \
  DEF(L"23.80.25.11", L"Electrical Meters")                                      \
  DEF(L"23.80.25.11.11", L"Power Meters")                                        \
  DEF(L"23.80.25.11.14", L"Voltage Meters")                                      \
  DEF(L"23.80.25.11.17", L"Resistance Meters")                                   \
  DEF(L"23.80.25.11.21", L"Frequency Meters")                                    \
  DEF(L"23.80.25.11.24", L"Multi-Meters")                                        \
  DEF(L"23.80.25.14", L"Electrical Energy Recording Devices")                    \
  DEF(L"23.80.25.14.11", L"Watt-Hour Recorders (Electricity Usage Meters)")      \
  DEF(L"23.80.30.00", L"Distribution Devices")                                   \
  DEF(L"23.80.30.11", L"Power Supply Devices")                                   \
  DEF(L"23.80.30.11.11", L"Main Switches")                                       \
  DEF(L"23.80.30.11.14", L"Inverters")                                           \
  DEF(L"23.80.30.11.17", L"Distribution Boards and Control Panels")              \
  DEF(L"23.80.30.11.21", L"Photoelectric Cells")                                 \
  DEF(L"23.80.30.14", L"Power Distribution")                                     \
  DEF(L"23.80.30.14.24", L"Junction Boxes")                                      \
  DEF(L"23.80.30.17", L"Conduit, Wireways, and Ducts")                           \
  DEF(L"23.80.30.17.11", L"Conduits")                                            \
  DEF(L"23.80.30.17.14", L"Wireways ")                                           \
  DEF(L"23.80.30.17.17", L"Cable Trays and Horizontal Racks")                    \
  DEF(L"23.80.30.17.21", L"Cable Reels")                                         \
  DEF(L"23.80.30.17.24", L"Mechanical Fasteners for Conduits and Trunking")      \
  DEF(L"23.80.30.24", L"Switchgear")                                             \
  DEF(L"23.80.30.24.11", L"Mechanical Switchgear")                               \
  DEF(L"23.80.30.24.14", L"Electronic Switchgear")                               \
  DEF(L"23.80.30.24.17", L"Remote Control Switchgear")                           \
  DEF(L"23.80.30.24.21", L"Time Switchgear")                                     \
  DEF(L"23.80.30.27", L"Variable Power or Resistance Appliances")                \
  DEF(L"23.80.30.27.11", L"Commutators")                                         \
  DEF(L"23.80.30.27.14", L"Rheostats")                                           \
  DEF(L"23.80.30.27.17", L"Dimmers")                                             \
  DEF(L"23.80.30.27.21", L"Speed Controllers")                                   \
  DEF(L"23.80.40.00", L"Electric Power Protection Devices")                      \
  DEF(L"23.80.40.11", L"Earth Connection Electrodes")                            \
  DEF(L"23.80.40.14", L"Circuit Breakers")                                       \
  DEF(L"23.80.40.14.11", L"Automatic Overload Circuit Breakers")                 \
  DEF(L"23.80.40.14.14", L"Ground Fault Intercept (GFI) Circuit Breakers")       \
  DEF(L"23.80.40.14.17", L"Earth Leakage Circuit Breakers")                      \
  DEF(L"23.80.40.21", L"Lightning Protection")                                   \
  DEF(L"23.80.45.00", L"Electric Power Treatment Devices")                       \
  DEF(L"23.80.45.14", L"Harmonic Control Devices")                               \
  DEF(L"23.80.45.14.11", L"Electric Interference Suppressor Filters")            \
  DEF(L"23.80.50.00", L"Terminals for Power Supply")                             \
  DEF(L"23.80.50.11", L"Switches and Receptacles")                               \
  DEF(L"23.80.50.11.11", L"Receptacle Terminal Units")                           \
  DEF(L"23.80.50.11.14", L"Switches")                                            \
  DEF(L"23.80.50.11.17", L"Ground Fault Receptacles")                            \
  DEF(L"23.80.50.14", L"Plug Connectors")                                        \
  DEF(L"23.80.70.00", L"Lighting")                                               \
  DEF(L"23.80.70.11", L"Luminaries for Internal Lighting")                       \
  DEF(L"23.80.70.11.11", L"General Luminaries, Non Directional")                 \
  DEF(L"23.80.70.11.14", L"General Luminaries, Directional")                     \
  DEF(L"23.80.70.11.14.11", L"Downlights")                                       \
  DEF(L"23.80.70.11.14.14", L"Uplights")                                         \
  DEF(L"23.80.70.11.14.17", L"Direct/Indirect")                                  \
  DEF(L"23.80.70.11.14.21", L"Spots and Tracklight Specialties")                 \
  DEF(L"23.80.70.11.17", L"Specialized Lighting by Location or Use")             \
  DEF(L"23.80.70.11.21", L"Emergency Lighting")                                  \
  DEF(L"23.80.70.11.24", L"Fiber Optic Lighting")                                \
  DEF(L"23.80.70.14", L"Luminaries for External Lighting")                       \
  DEF(L"23.80.70.14.11", L"Amenity Lighting")                                    \
  DEF(L"23.80.70.14.11.11", L"Lighting Bollards")                                \
  DEF(L"23.80.70.14.11.14", L"Post-Top Lighting")                                \
  DEF(L"23.80.70.14.11.17", L"Wall or Ceiling Mounted External Lighting")        \
  DEF(L"23.80.70.14.11.21", L"Buried Uplights")                                  \
  DEF(L"23.80.70.14.14", L"Exterior Floodlights")                                \
  DEF(L"23.80.70.14.17", L"Exterior Spotlights")                                 \
  DEF(L"23.80.70.14.21", L"Street and Roadway Lighting")                         \
  DEF(L"23.80.70.14.24", L"Aircraft Paving Lighting")                            \
  DEF(L"23.80.70.14.27", L"Security Lighting")                                   \
  DEF(L"23.80.70.17", L"Communication Lighting Specialties")                     \
  DEF(L"23.80.70.17.11", L"Emergency Signs")                                     \
  DEF(L"23.80.70.17.14", L"Illuminated Signs/Boards")                            \
  DEF(L"23.80.70.17.17", L"Publicity Lighting")                                  \
  DEF(L"23.80.70.17.21", L"Lasers")                                              \
  DEF(L"23.85.00.00", L"Information and Communication")                          \
  DEF(L"23.85.05.00", L"Complete Information Systems")                           \
  DEF(L"23.85.05.14", L"Complete Visual Information Systems")                    \
  DEF(L"23.85.05.14.21", L"Complete Visual Signaling")                           \
  DEF(L"23.85.05.14.21.11", L"Mechanical Signals")                               \
  DEF(L"23.85.05.17", L"Complete Audio-Visual Systems")                          \
  DEF(L"23.85.05.17.11", L"Broadcasting Equipment")                              \
  DEF(L"23.85.05.17.11.11", L"Television Broadcasting Equipment")                \
  DEF(L"23.85.05.17.11.14", L"Multimedia Broadcasting Equipment")                \
  DEF(L"23.85.05.17.11.17", L"Broadcasting Light Signals")                       \
  DEF(L"23.85.10.00", L"General Information Systems")                            \
  DEF(L"23.85.10.11", L"Audio Information, Sound Signals")                       \
  DEF(L"23.85.10.11.11", L"Sound and Signal Devices")                            \
  DEF(L"23.85.10.11.11.11", L"Bells, Carillons, Single Units")                   \
  DEF(L"23.85.10.11.11.14", L"Sirens")                                           \
  DEF(L"23.85.10.11.11.17", L"Aerials")                                          \
  DEF(L"23.85.10.11.11.21", L"Speakers")                                         \
  DEF(L"23.85.10.11.14", L"Audio Equipment")                                     \
  DEF(L"23.85.10.11.14.11", L"Audio Recorders")                                  \
  DEF(L"23.85.10.11.14.14", L"Sound Reinforcement")                              \
  DEF(L"23.85.10.11.14.14.11", L"Microphones")                                   \
  DEF(L"23.85.10.11.14.14.14", L"Loudspeakers")                                  \
  DEF(L"23.85.10.11.14.14.17", L"Sound Amplifiers")                              \
  DEF(L"23.85.10.11.14.14.21", L"Audio Equalizers")                              \
  DEF(L"23.85.10.11.14.17", L"Headphones")                                       \
  DEF(L"23.85.10.11.14.21", L"Audio Reproducing Units")                          \
  DEF(L"23.85.10.11.14.24", L"Audio Information Accessories")                    \
  DEF(L"23.85.10.14", L"Visual Information Systems")                             \
  DEF(L"23.85.10.14.11", L"Cameras")                                             \
  DEF(L"23.85.10.14.11.11", L"Analog Cameras")                                   \
  DEF(L"23.85.10.14.11.14", L"Digital Cameras")                                  \
  DEF(L"23.85.10.14.14", L"Slide Projectors")                                    \
  DEF(L"23.85.10.14.17", L"Overhead Projectors")                                 \
  DEF(L"23.85.10.14.21", L"Presentation Systems")                                \
  DEF(L"23.85.10.14.24", L"Video Monitors")                                      \
  DEF(L"23.85.10.14.24.11", L"Cathode Ray Tube (CRT) Video Monitors")            \
  DEF(L"23.85.10.14.24.14", L"Liquid Crystal Display (LCD) Video Monitors")      \
  DEF(L"23.85.10.14.24.17", L"Plasma Video Monitors")                            \
  DEF(L"23.85.10.14.27", L"Video Walls")                                         \
  DEF(L"23.85.10.14.31", L"Projection Screens")                                  \
  DEF(L"23.85.10.17", L"Audio-Visual Systems")                                   \
  DEF(L"23.85.10.17.11", L"Audio-Visual System Components")                     \
  DEF(L"23.85.10.17.11.11", L"Broadcasting Receiving Equipment")                 \
  DEF(L"23.85.10.17.11.14", L"Audio-Visual Recorders (Cam-Corders)")             \
  DEF(L"23.85.10.17.11.17", L"Film Projectors")                                  \
  DEF(L"23.85.10.17.11.21", L"Data/Multi/Media Projectors")                      \
  DEF(L"23.85.10.17.11.24", L"Video Reproduction")                               \
  DEF(L"23.85.30.00", L"Safety and Security Information Systems")                \
  DEF(L"23.85.30.11", L"Access Controls")                                        \
  DEF(L"23.85.30.11.11", L"Access Control and Counting Systems")                 \
  DEF(L"23.85.30.11.14", L"Centralized Code Reading Systems")                    \
  DEF(L"23.85.30.11.17", L"Electronic Key Systems")                              \
  DEF(L"23.85.30.11.21", L"Pressure Mats")                                       \
  DEF(L"23.85.30.11.24", L"Micro-Switch Contacts for Doors and Windows")         \
  DEF(L"23.85.30.11.27", L"Door Answering")                                      \
  DEF(L"23.85.30.11.31", L"Security Access")                                     \
  DEF(L"23.85.30.14", L"Presence Detection/Registration")                        \
  DEF(L"23.85.30.14.11", L"Clocking-In and Recording")                           \
  DEF(L"23.85.30.14.14", L"Movement/Vibration Detection")                        \
  DEF(L"23.85.30.14.17", L"Break-Glass Detection")                               \
  DEF(L"23.85.30.14.21", L"Surveillance Mirrors")                                \
  DEF(L"23.85.30.14.24", L"Manual Alert Control")                                \
  DEF(L"23.85.30.14.27", L"Microwave Detectors")                                 \
  DEF(L"23.85.30.14.31", L"Infra-Red Radiation Detectors")                       \
  DEF(L"23.85.30.14.34", L"Door Bells, Buzzers")                                 \
  DEF(L"23.85.30.17", L"Closed Circuit Guarding Systems")                        \
  DEF(L"23.85.30.17.11", L"Closed Circuit TV Systems")                           \
  DEF(L"23.85.30.17.14", L"Video Surveillance")                                  \
  DEF(L"23.85.30.17.17", L"Closed Circuit Television Recorders")                 \
  DEF(L"23.85.30.17.17.11", L"Analog Closed Circuit Television Recorders")       \
  DEF(L"23.85.30.17.17.14", L"Digital Closed Circuit Television Recorders")      \
  DEF(L"23.85.30.21", L"Environmental Detection/Registration")                   \
  DEF(L"23.85.30.21.11", L"Fire Detection, Monitoring and Alarm")                \
  DEF(L"23.85.30.21.11.11", L"Fire/Smoke Detectors")                             \
  DEF(L"23.85.30.21.11.11.11", L"Smoke Detectors")                               \
  DEF(L"23.85.30.21.11.11.14", L"Inonization Detectors")                         \
  DEF(L"23.85.30.21.11.11.17", L"Temperature Monitors")                          \
  DEF(L"23.85.30.21.11.14", L"Alarm Panels")                                     \
  DEF(L"23.85.30.21.11.17", L"Other Components")                                 \
  DEF(L"23.85.30.21.14", L"Concentration Detection Components")                  \
  DEF(L"23.85.30.21.14.11", L"Concentration Detection Bells and Sounders")       \
  DEF(L"23.85.30.21.14.14", L"Concentration Detection Alarm Glasses")            \
  DEF(L"23.85.30.21.14.99", L"Other Concentration Detection Components")         \
  DEF(L"23.85.30.24", L"Emergency Call Systems")                                 \
  DEF(L"23.85.30.24.11", L"Call Systems for the Disabled")                       \
  DEF(L"23.85.30.24.14", L"Nurse Call Systems")                                  \
  DEF(L"23.85.30.27", L"Built-In Failure Detection")                             \
  DEF(L"23.85.30.27.11", L"Infiltration Detection")                              \
  DEF(L"23.85.30.27.14", L"Service Leak Detection")                              \
  DEF(L"23.85.30.27.14.11", L"Gas Leak Detection Agents")                        \
  DEF(L"23.85.30.27.14.14", L"Water Leak Detection")                             \
  DEF(L"23.85.50.00", L"Communication Systems")                                  \
  DEF(L"23.85.50.11", L"Communication Circuits")                                 \
  DEF(L"23.85.50.14", L"Telephone and Intercommunication Equipment")             \
  DEF(L"23.85.50.14.11", L"Single Line Telephone Systems")                       \
  DEF(L"23.85.50.14.14", L"Multiple Line Telephone Systems")                     \
  DEF(L"23.85.50.14.17", L"Telephone Equipment")                                 \
  DEF(L"23.85.50.14.21", L"Intercommunication Equipment")                        \
  DEF(L"23.85.50.17", L"Communication and Data Processing Equipment")            \
  DEF(L"23.85.50.17.11", L"Computer Network Equipment")                          \
  DEF(L"23.85.50.17.11.11", L"Computer Servers")                                 \
  DEF(L"23.85.50.17.11.14", L"Network Switchers")                                \
  DEF(L"23.85.50.17.11.17", L"Network Routers")                                  \
  DEF(L"23.85.50.21", L"Cable Transmission and Reception Equipment")             \
  DEF(L"23.85.50.21.11", L"Cable Transmission and Reception Amplifiers")         \
  DEF(L"23.85.50.21.14", L"Cable Transmission and Reception Modulators")         \
  DEF(L"23.85.50.21.17", L"Cable Transmission and Reception Control Equipment")  \
  DEF(L"23.85.50.24", L"Broadcast Transmission and Reception Equipment")         \
  DEF(L"23.85.50.24.11", L"Broadcast Transmitters")                              \
  DEF(L"23.85.50.24.14", L"Broadcast Antennas")                                  \
  DEF(L"23.85.50.24.17", L"Broadcast Amplifiers")                                \
  DEF(L"23.85.50.24.21", L"Broadcast Control Equipment")                         \
  DEF(L"23.85.50.27", L"Microwave Transmission and Reception Equipment")         \
  DEF(L"23.85.50.27.11", L"Microwave Transmitters")                              \
  DEF(L"23.85.50.27.14", L"Microwave Antennas")                                  \
  DEF(L"23.85.50.27.17", L"Satellite Dishes")                                    \
  DEF(L"23.85.50.27.21", L"Microwave Amplifiers")                                \
  DEF(L"23.85.50.27.24", L"Microwave Receivers")                                 \
  DEF(L"23.85.50.31", L"Intercom Systems")                                       \
  DEF(L"23.85.50.31.11", L"Door Entry Telephones")                               \
  DEF(L"23.85.50.99", L"Other Communications Systems")                           \
  DEF(L"23.85.50.99.11", L"Videophone Systems")                                  \
  DEF(L"23.85.50.99.14", L"Conference Systems")                                  \
  DEF(L"23.85.50.99.17", L"Breakdown Call Systems")                              \
  DEF(L"23.85.80.00", L"Building Automation and Control")                        \
  DEF(L"23.85.80.11", L"Building Controls")                                      \
  DEF(L"23.85.80.11.11", L"Clock Controls")                                      \
  DEF(L"23.85.80.11.14", L"Door Controls")                                       \
  DEF(L"23.85.80.11.17", L"Elevator Monitoring and Controls")                    \
  DEF(L"23.85.80.11.21", L"Energy Monitoring and Controls")                      \
  DEF(L"23.85.80.11.24", L"Environmental Controls")                              \
  DEF(L"23.85.80.11.27", L"Lighting Controls")

#endif //__BM_OMNI_CLASS_H__
