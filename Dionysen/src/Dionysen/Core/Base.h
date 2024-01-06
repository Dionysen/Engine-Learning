#pragma once

#include <memory>

// Define export library for different platforms
#ifdef DION_PLATFORM_WINDOWS
#ifdef DION_BUILD_DLL
#define DION_API __declspec(dllexport)
#else
#define DION_API __declspec(dllimport)
#endif
#else
#define DION_API __attribute((visibility("default")))
#endif

// ?
#define BIT(x) (1 << x)

#define DION_BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }


namespace Dionysen
{
    template <typename T> using Scope = std::shared_ptr<T>;

    // ???
    template <typename T, typename... Args> constexpr Scope<T> CreateScope(Args&... args)
    {
        return std::make_unique<T>(std::forward<Args>(args)...);
    }

    template <typename T> using Ref = std::shared_ptr<T>;

    template <typename T, typename... Args> constexpr Ref<T> CreateRef(Args&&... args)
    {
        return std::make_shared<T>(std::forward<Args>(args)...);
    }
}  // namespace Dionysen