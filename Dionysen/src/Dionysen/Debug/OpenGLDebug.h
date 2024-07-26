#pragma once


#include <GL/glew.h>

namespace Dionysen
{
    GLenum glCheckError_(const char* file, int line);
#define glCheckError() glCheckError_(__FILE__, __LINE__)
}  // namespace Dionysen