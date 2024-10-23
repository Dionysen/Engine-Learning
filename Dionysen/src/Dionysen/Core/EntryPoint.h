#pragma once
#include "dspch.h"
#include "Application.h"
namespace Dionysen
{
    extern Application* CreateApplication(ApplicationCommandLineArgs args);
}

int main(int argc, char* argv[])
{
    Dionysen::Log::Init();  // First
    DION_CORE_INFO("Init Log!");
    auto app = Dionysen::CreateApplication({ argc, argv });  // Second
    app->Run();
    delete app;
    return 0;
}