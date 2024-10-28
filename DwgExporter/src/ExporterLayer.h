#pragma once

#include <Dionysen.h>
#include "DWGExporter.h"
#include "DbDatabase.h"
namespace Dionysen
{
    class ExporterLayer : public Layer
    {
      public:
        ExporterLayer();
        virtual ~ExporterLayer();

        virtual void OnAttach() override;
        virtual void OnDetach() override;

        void OnUpdate(Timestep ts) override;
        void OnImGuiRender() override;
        void OnEvent(Event& e) override;

      private:
        OdGsDevicePtr   g_pDevice;
        OdDbDatabasePtr g_pDb;
        // Create a custom Services object.
        OdStaticRxObject<MyServices> svcs;


        OdGsClientViewInfo viewInfo;
    };
}  // namespace Dionysen