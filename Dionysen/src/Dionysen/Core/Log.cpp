#include "Log.h"
#include "dspch.h"

namespace Dionysen
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    void Log::Init()
    {
        // spdlog::set_pattern("[%Y-%m-%d %T] %^[%n] [%l] %v%$");

        spdlog::set_pattern("%^| %P-%t-%n-%L | %v%$");

        s_CoreLogger = spdlog::stdout_color_mt("D");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("A");
        s_ClientLogger->set_level(spdlog::level::trace);
    }
}  // namespace Dionysen
