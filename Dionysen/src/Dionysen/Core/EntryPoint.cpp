#include "EntryPoint.h"
int main(int argc, char* argv[])
{
    Dionysen::Log::Init();  // First
    DION_CORE_INFO("Init Log!");
    auto app = Dionysen::CreateApplication();  // Second
    app->Run();
    delete app;
}