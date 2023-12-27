#pragma once

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


// Define ourself assert. If it's false, the console will print the information of errors
#define DION_ENABLE_ASSERTS

#ifdef DION_ENABLE_ASSERTS
#define DION_ASSERT(x, ...)                                   \
    {                                                         \
        if (!(x))                                             \
        {                                                     \
            DION_ERROR("Assertion Failed: {0}", __VA_ARGS__); \
        }                                                     \
    }
#define DION_CORE_ASSERT(x, ...)                                   \
    {                                                              \
        if (!(x))                                                  \
        {                                                          \
            DION_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); \
        }                                                          \
    }
#else
#define DION_ASSERT(x, ...)
#define DION_CORE_ASSERT(x, ...)
#endif

// #ifdef DION_ENABLE_ASSERTS
// // Alternatively we could use the same "default" message for both "WITH_MSG" and "NO_MSG" and
// // provide support for custom formatting by concatenating the formatting string instead of having the format inside the default message
// #define DION_INTERNAL_ASSERT_IMPL(type, check, msg, ...) \
//     {                                                    \
//         if (!(check))                                    \
//         {                                                \
//             DION##type##ERROR(msg, __VA_ARGS__);         \
//             DION_DEBUGBREAK();                           \
//         }                                                \
//     }
// #define DION_INTERNAL_ASSERT_WITH_MSG(type, check, ...) DION_INTERNAL_ASSERT_IMPL(type, check, "Assertion failed: {0}", __VA_ARGS__)
// #define DION_INTERNAL_ASSERT_NO_MSG(type, check)                                                             \
//     DION_INTERNAL_ASSERT_IMPL(type, check, "Assertion '{0}' failed at {1}:{2}", DION_STRINGIFY_MACRO(check), \
//                               std::filesystem::path(__FILE__).filename().string(), __LINE__)

// #define DION_INTERNAL_ASSERT_GET_MACRO_NAME(arg1, arg2, macro, ...) macro
// #define DION_INTERNAL_ASSERT_GET_MACRO(...) \
//     DION_EXPAND_MACRO(DION_INTERNAL_ASSERT_GET_MACRO_NAME(__VA_ARGS__, DION_INTERNAL_ASSERT_WITH_MSG, DION_INTERNAL_ASSERT_NO_MSG))

// // Currently accepts at least the condition and one additional parameter (the message) being optional
// #define DION_ASSERT(...) DION_EXPAND_MACRO(DION_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_, __VA_ARGS__))
// #define DION_CORE_ASSERT(...) DION_EXPAND_MACRO(DION_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_CORE_, __VA_ARGS__))
// #else
// #define DION_ASSERT(...)
// #define DION_CORE_ASSERT(...)
// #endif