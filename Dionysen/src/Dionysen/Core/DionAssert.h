//
// Created by dionysen on 24-1-2.
//

#ifndef ENGINE_LEARNING_ASSERT_H
#define ENGINE_LEARNING_ASSERT_H

#ifdef DION_ENABLE_ASSERTS

// Alteratively we could use the same "default" message for both "WITH_MSG" and "NO_MSG" and
// provide support for custom formatting by concatenating the formatting string instead of having the format inside the default message
#define DION_INTERNAL_ASSERT_IMPL(type, check, msg, ...) \
    {                                                    \
        if (!(check))                                    \
        {                                                \
            HZ##type##ERROR(msg, __VA_ARGS__);           \
            DION_DEBUGBREAK();                           \
        }                                                \
    }
#define DION_INTERNAL_ASSERT_WITH_MSG(type, check, ...) DION_INTERNAL_ASSERT_IMPL(type, check, "Assertion failed: {0}", __VA_ARGS__)
#define DION_INTERNAL_ASSERT_NO_MSG(type, check)                                                             \
    DION_INTERNAL_ASSERT_IMPL(type, check, "Assertion '{0}' failed at {1}:{2}", DION_STRINGIFY_MACRO(check), \
                              std::filesystem::path(__FILE__).filename().string(), __LINE__)

#define DION_INTERNAL_ASSERT_GET_MACRO_NAME(arg1, arg2, macro, ...) macro
#define DION_INTERNAL_ASSERT_GET_MACRO(...) \
    DION_EXPAND_MACRO(DION_INTERNAL_ASSERT_GET_MACRO_NAME(__VA_ARGS__, DION_INTERNAL_ASSERT_WITH_MSG, DION_INTERNAL_ASSERT_NO_MSG))

// Currently accepts at least the condition and one additional parameter (the message) being optional
#define DION_ASSERT(...) DION_EXPAND_MACRO(DION_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_, __VA_ARGS__))
#define DION_CORE_ASSERT(...) DION_EXPAND_MACRO(DION_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_CORE_, __VA_ARGS__))
#else
#define DION_ASSERT(...)
#define DION_CORE_ASSERT(...)
#endif


#endif  // ENGINE_LEARNING_ASSERT_H
