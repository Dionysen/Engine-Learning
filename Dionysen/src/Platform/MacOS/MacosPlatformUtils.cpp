
#include <GLFW/glfw3.h>
#include "PlatformUtils.h"

#ifdef DION_PLATFORM_MACOSX
namespace Dionysen
{
    std::string FileDialogs::OpenFile(const char* filter)
    {
        // todo: implement
        return {};
    }
    std::string FileDialogs::SaveFile(const char* filter)
    {
        // todo: implement
        return {};
    }
    float Time::GetTime()
    {
        return static_cast<float>(glfwGetTime());
    }

}  // namespace Dionysen

#endif