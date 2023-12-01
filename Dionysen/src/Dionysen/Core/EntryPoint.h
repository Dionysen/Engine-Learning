#pragma once
#include "Application.h"
#include "Log.h"

extern Dionysen::Application* Dionysen::CreateApplication();

int main(int argc, char* argv[])
{
    Dionysen::Log::Init();  // First
    DION_CORE_INFO("Init Log!");
    auto app = Dionysen::CreateApplication();  // Second
    app->Run();
    delete app;
}