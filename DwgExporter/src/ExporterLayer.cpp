#include "ExporterLayer.h"
#include "RenderCommand.h"
#include "imgui.h"
#include <gtest/gtest.h>
#include "GsBaseModule.h"
#include "DbBody.h"
#include "DbViewportTableRecord.h"
#include "DbViewportTable.h"
#include "DbGsManager.h"

#include "DbDatabase.h"
#include "DbBlockTableRecord.h"
#include "DbViewportTable.h"
#include "DbViewportTableRecord.h"
#include "Db3dSolid.h"
#include "DbGsManager.h"
#include "DbBody.h"
#include "DbRegion.h"
#include "Db3dSolid.h"

#include "RxObjectImpl.h"

#include "ExSystemServices.h"
#include "ExHostAppServices.h"
#include "GiContextForDbDatabase.h"

// #include "ExGsOpenGLGenericDevice.h"
// #include "ExGsGenericScreenDevice.h"

#include "OdFileBuf.h"

#include "RxDynamicModule.h"

namespace Dionysen
{
    ExporterLayer::ExporterLayer()
        : Layer("ODAExporterLayer")
    {
    }
    ExporterLayer::~ExporterLayer()
    {
    }

    void ExporterLayer::OnAttach()
    {
        DION_WARN("OnAttach start");
        // Initialize the Teigha SDK
        odInitialize(&svcs);
        odgsInitialize();
        std::cout << "Developed using " << svcs.product().c_str() << ", " << svcs.versionString().c_str() << std::endl;

        // Create a database and load the drawing into it.
        OdString file = "DwgExporter/assets/example.dwg";
        g_pDb         = svcs.readFile(file, false, false, Oda::kShareDenyNo);

        if (!g_pDb.isNull())
        {

            // Create the rendering context.
            OdGiContextForDbDatabasePtr pDwgContext = OdGiContextForDbDatabase::createObject();


            OdGsModulePtr m = ::odrxDynamicLinker()->loadModule(OD_T("OdWinOpenGLModuleName"));
            if (m.isNull())
            {
                DION_ERROR("Failed to load OdWinOpenGLModuleName");
            }

            g_pDevice = m->createDevice();  // Bug

            // Set the database to be vectorized.
            pDwgContext->setDatabase(g_pDb);

            // Prepare the device to render the active layout in this database.
            g_pDevice = OdDbGsManager::setupActiveLayoutViews(g_pDevice, pDwgContext);
        }

        // Set the screen size for the generated geometry.
        OdGsDCRect screenRect(OdGsDCPoint(0, 600), OdGsDCPoint(800, 0));
        g_pDevice->onSize(screenRect);
    }

    void ExporterLayer::OnDetach()
    {
        g_pDevice.release();
        g_pDb.release();
        odgsUninitialize();
        odUninitialize();
    }

    void ExporterLayer::OnUpdate(Timestep ts)
    {
        RenderCommand::Clear();
        RenderCommand::SetClearColor({ 0.2f, 0.3f, 0.3f, 1 });
        // 绘制 DWG 内容
        DION_WARN("Update start");
        g_pDevice->update();
        DION_WARN("Update end");

        // pView->update();
    }

    void ExporterLayer::OnImGuiRender()
    {
        ImGui::Begin("Settings");
        ImGui::Text("Hello World");

        if (ImGui::Button("Run Tests"))
        {
            ::testing::InitGoogleTest();
            int result = RUN_ALL_TESTS();
            std::cout << "Tests finished with result: " << result << std::endl;
        }

        ImGui::End();
    }

    void ExporterLayer::OnEvent(Event& e)
    {
    }

}  // namespace Dionysen