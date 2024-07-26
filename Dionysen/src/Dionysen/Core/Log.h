#pragma once
#include "Base.h"


#define GLM_ENABLE_EXPERIMENTAL
#include "glm/gtx/string_cast.hpp"

// This ignores all warnings raised inside External headers
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"
#pragma warning(pop)

namespace Dionysen
{
    class DION_API Log
    {
      public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
        {
            return s_CoreLogger;
        }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
        {
            return s_ClientLogger;
        }

      private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}  // namespace Dionysen

template <typename OStream, glm::length_t L, typename T, glm::qualifier Q> inline OStream& operator<<(OStream& os, const glm::vec<L, T, Q>& vector)
{
    return os << glm::to_string(vector);
}

template <typename OStream, glm::length_t C, glm::length_t R, typename T, glm::qualifier Q>
inline OStream& operator<<(OStream& os, const glm::mat<C, R, T, Q>& matrix)
{
    return os << glm::to_string(matrix);
}

template <typename OStream, typename T, glm::qualifier Q> inline OStream& operator<<(OStream& os, glm::qua<T, Q> quaternion)
{
    return os << glm::to_string(quaternion);
}

// Core log macros

#define DION_CORE_TRACE(...) ::Dionysen::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DION_CORE_INFO(...) ::Dionysen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DION_CORE_WARN(...) ::Dionysen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DION_CORE_ERROR(...) ::Dionysen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DION_CORE_CRITICAL(...) ::Dionysen::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros

#define DION_TRACE(...) ::Dionysen::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DION_INFO(...) ::Dionysen::Log::GetClientLogger()->info(__VA_ARGS__)
#define DION_WARN(...) ::Dionysen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DION_ERROR(...) ::Dionysen::Log::GetClientLogger()->error(__VA_ARGS__)
#define DION_CRITICAL(...) ::Dionysen::Log::GetClientLogger()->critical(__VA_ARGS__)
