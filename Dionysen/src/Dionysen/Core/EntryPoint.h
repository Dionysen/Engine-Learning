#pragma once
#include "Application.h"
#include "dspch.h"
#include "Log.h"

extern DION_API Dionysen::Application* Dionysen::CreateApplication(Dionysen::ApplicationCommandLineArgs args);

int main(int argc, char* argv[])
{
    Dionysen::Log::Init();  // First
    DION_CORE_INFO("Init Log!");
    auto app = Dionysen::CreateApplication({ argc, argv });  // Second
    app->Run();
    delete app;
    return 0;
}