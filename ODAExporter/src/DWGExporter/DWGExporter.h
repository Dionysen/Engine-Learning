
#include "OdaCommon.h"
#include "DbDatabase.h"
#include "DbText.h"
#include "DbLine.h"
#include "DbBlockTable.h"
#include "DbBlockTableRecord.h"
#include <ExHostAppServices.h>
#include <ExSystemServices.h>
#include <iostream>


class MyServices
    : public ExSystemServices
    , public ExHostAppServices
{
  protected:
    ODRX_USING_HEAP_OPERATORS(ExSystemServices);
};