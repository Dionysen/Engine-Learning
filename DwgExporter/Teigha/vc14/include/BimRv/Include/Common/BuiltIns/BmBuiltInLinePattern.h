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
#ifndef __BM_BUILTLINEPATTERN_H__
#define __BM_BUILTLINEPATTERN_H__



ADD_LINEPATTERN(-3000010, "-3000010"); // solid
    ADD_LINEPATTERN(-3000011, "-3000011"); // solid
    ADD_LINEPATTERN_S(-3000012, "-3000012", 2,
                      {OdBmLineSeg(0.0145, 0), OdBmLineSeg(0.0145, 1)}); // dash
    ADD_LINEPATTERN(-3000013, "-3000013"); // solid
    ADD_LINEPATTERN_S(
        -3000014, "-3000014", 4,
        {OdBmLineSeg(0.0208, 0),OdBmLineSeg(0.0156, 1), OdBmLineSeg(0.0, 2), OdBmLineSeg(0.0156, 1)}); // dash dot
    ADD_LINEPATTERN(-3000015, "-3000015"); // solid
    ADD_LINEPATTERN_S(-3000016, "-3000016", 2,
                      {OdBmLineSeg(0.0313, 0), OdBmLineSeg(0.0145, 1)}); // long dash
    ADD_LINEPATTERN_S(-3000017, "-3000017", 2,
                      {OdBmLineSeg(0.02, 0), OdBmLineSeg(0.024, 1)}); // medium dash
    ADD_LINEPATTERN(-3000018, "-3000018"); // solid
    ADD_LINEPATTERN(-3000019, "-3000019"); // solid
    ADD_LINEPATTERN_S(-3000020, "-3000020", 2,
                      {OdBmLineSeg(0.0055, 0), OdBmLineSeg(0.0055, 1)}); // small dash
    ADD_LINEPATTERN(-3000021, "-3000021"); // solid
    ADD_LINEPATTERN(-3000050, "-3000050"); // solid
    ADD_LINEPATTERN_S(-3000051, "-3000051", 2, {OdBmLineSeg(0.0003, 0), OdBmLineSeg(0.0006, 1)}); // dot

#endif // __BM_BUILTLINEPATTERN_H__
