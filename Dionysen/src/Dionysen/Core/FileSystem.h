#pragma once

#include "BaseBuffer.h"

namespace Dionysen
{

    class FileSystem
    {
      public:
        // TODO: move to FileSystem class
        static Buffer ReadFileBinary(const std::filesystem::path& filepath);
    };

}  // namespace Dionysen
