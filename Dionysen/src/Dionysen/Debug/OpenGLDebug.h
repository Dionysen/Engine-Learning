#pragma once
#include "Base.h"
#include <GL/glew.h>

namespace Dionysen
{
    GLenum DION_API glCheckError_(const char* file, int line);
#define glCheckError() glCheckError_(__FILE__, __LINE__)
}  // namespace Dionysen
