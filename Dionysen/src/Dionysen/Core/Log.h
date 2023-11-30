#pragma once
#include "Base.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"
namespace Dionysen
{
class DION_API Log
{
  public:
    static void Init();

    inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
    inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

  private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
};

}  // namespace Dionysen

// Core log macros

#define DION_CORE_TRACE(...) ::Dionysen::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DION_CORE_INFO(...) ::Dionysen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DION_CORE_WARN(...) ::Dionysen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DION_CORE_ERROR(...) ::Dionysen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DION_CORE_CRITICAL(...) ::Dionysen::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros

#define DION_CLIENT_TRACE(...) ::Dionysen::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DION_CLIENT_INFO(...) ::Dionysen::Log::GetClientLogger()->info(__VA_ARGS__)
#define DION_CLIENT_WARN(...) ::Dionysen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DION_CLIENT_ERROR(...) ::Dionysen::Log::GetClientLogger()->error(__VA_ARGS__)
#define DION_CLIENT_CRITICAL(...) ::Dionysen::Log::GetClientLogger()->critical(__VA_ARGS__)
