#pragma once
#include "Application.h"
#include "Log.h"

extern Dionysen::Application* Dionysen::CreateApplication();

int main(int argc, char* argv[])
{
    Dionysen::Log::Init();
    DION_CORE_WARN("Init Log!");
    auto app = Dionysen::CreateApplication();
    app->Run();
    delete app;
}