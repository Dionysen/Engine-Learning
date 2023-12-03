#pragma once
#include "Log.h"
#include "dspch.h"

namespace Dionysen
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    void Log::Init()
    {
        spdlog::set_pattern("[%Y-%m-%d %T] %^[%n] [%l] %v%$");

        s_CoreLogger = spdlog::stdout_color_mt("Dionsen");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("App");
        s_ClientLogger->set_level(spdlog::level::trace);
    }
}  // namespace Dionysen
