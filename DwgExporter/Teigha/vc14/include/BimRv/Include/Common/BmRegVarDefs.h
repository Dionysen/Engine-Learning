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

#ifndef ODTBOOL
#define ODTBOOL                 bool                    /* {Secret} */
#endif

#ifndef ODTDIST
#define ODTDIST                 double                  /* {Secret} */
#endif

#ifndef REGVAR_DEF
#define REGVAR_DEF(type, name, unused3, unused4, unused5)                                /* {Secret} */
#endif

#ifndef REGVAR_DEF_ARRAY
#define REGVAR_DEF_ARRAY(type, name, unused3, unused4, unused5)                                /* {Secret} */
#endif

/*** VARDOCS:
  <properties>
    <remarks>
      "\n    PREVIEW_WIDTH specifies the width in pixels of generated preview bitmap images."
    </remarks>
  </properties>
*/
REGVAR_DEF(OdUInt32,            PREVIEW_WIDTH,  (180),                (),       ValidateNone())

/*** VARDOCS:
  <properties>
    <remarks>
      "\n    PREVIEW_HEIGHT specifies the height in pixels of generated preview bitmap images."
    </remarks>
  </properties>
*/
REGVAR_DEF(OdUInt32,            PREVIEW_HEIGHT, (88),                 (),       ValidateNone())

/*** VARDOCS:
  <properties>
    <remarks>
      "\n    PARTITION_U determines the number of partitions in U."
    </remarks>
  </properties>
*/
REGVAR_DEF(OdUInt32,              PARTITION_U,      (9),              (),       ValidateNone())

/*** VARDOCS:
  <properties>
    <remarks>
      "\n    PARTITION_V determines the number of partitions in V"
    </remarks>
  </properties>
*/
REGVAR_DEF(OdUInt32,              PARTITION_V,      (9),              (),       ValidateNone())

/*** VARDOCS:
  <properties>
    <remarks>
      "\n    ISOLINES determines the number of isolines"
    </remarks>
  </properties>
*/
REGVAR_DEF(OdUInt32,              ISOLINES,         (2),              (),       ValidateNone())

/*** VARDOCS:
  <properties>
    <remarks>
      "\n    EXTPARAMSFILENAME determines name of file containing external parameters"
    </remarks>
  </properties>
*/
REGVAR_DEF(OdString,              EXTPARAMSFILENAME,         (""),              (),       ValidateNone())

/*** VARDOCS:
  <properties>
    <remarks>
      "\n   MtMode controls if multi-threading is used (bit-coded)\n   0x1 - MT Loading enabled\n   0x2 - MT Rendering enabled"
    </remarks>
  </properties>
*/
REGVAR_DEF(OdInt16,              MtMode,         (1),              (),       ValidateNone())

#undef ODTBOOL
#undef ODTDIST
#undef REGVAR_DEF_ARRAY
#undef REGVAR_DEF
