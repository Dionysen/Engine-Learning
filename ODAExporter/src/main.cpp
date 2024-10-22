
#include "OdaCommon.h"
#include "DbDatabase.h"
#include "DbText.h"
#include "DbLine.h"
#include "DbBlockTable.h"
#include "DbBlockTableRecord.h"
#include <ExHostAppServices.h>
#include <ExSystemServices.h>
#include <iostream>

// Define a Custom Services class that has functionality of ExSystemServices and ExHostAppServices.
class MyServices
    : public ExSystemServices
    , public ExHostAppServices
{
  protected:
    ODRX_USING_HEAP_OPERATORS(ExSystemServices);
};

int WriteDwg()
{
    // 创建主应用服务
    OdRxObjectImpl<MyServices> svcs;  // Services
    // 初始化服务
    odInitialize(&svcs);  // Initialization

    try
    {
        // 使用智能指针创建数据库对象
        OdDbDatabasePtr pDb = svcs.createDatabase(true, OdDb::kEnglish);

        // 获取model space id 用以添加entity
        OdDbBlockTableRecordPtr pMs = pDb->getModelSpaceId().safeOpenObject(OdDb::kForWrite);

        // 创建一个line entity添加到model space中
        OdDbLinePtr pLine = OdDbLine::createObject();
        pLine->setStartPoint(OdGePoint3d(0, 0, 0));
        pLine->setEndPoint(OdGePoint3d(100, 100, 0));
        pMs->appendOdDbEntity(pLine);

        // 创建一个文字entity添加到model space中
        OdDbTextPtr pText = OdDbText::createObject();
        pText->setPosition(OdGePoint3d(50, 50, 0));
        pText->setHeight(10);
        pText->setTextString(L"Hello, DWG! Hello World!");
        pMs->appendOdDbEntity(pText);

        OdDb3dSolidPtr pSolid = OdDb3dSolid::createObject();

        // 保存数据库到dwg文件中
        pDb->writeFile(L"example.dwg", OdDb::kDwg, OdDb::vAC27);  // Choose the DWG version
    }
    catch (const OdError& e)
    {
        // Handle any exceptions
        OdString errorMessage = e.description();
        std::cout << errorMessage.c_str() << std::endl;
    }
    odUninitialize();  // Termination
    return 0;
}
