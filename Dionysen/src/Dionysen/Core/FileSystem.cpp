#include "dspch.h"
#include "FileSystem.h"

namespace Dionysen
{

    Buffer FileSystem::ReadFileBinary(const std::filesystem::path& filepath)
    {
        std::ifstream stream(filepath, std::ios::binary | std::ios::ate);

        if (!stream)
        {
            // Failed to open the file
            DION_CORE_ERROR("Failed to open file: {0}", filepath.string());
            return {};
        }

        std::streampos end = stream.tellg();
        stream.seekg(0, std::ios::beg);
        uint64_t size = end - stream.tellg();

        if (size == 0)
        {
            // File is empty
            DION_CORE_ERROR("File is empty: {0}", filepath.string());
            return {};
        }

        Buffer buffer(size);
        stream.read(buffer.As<char>(), size);
        stream.close();
        return buffer;
    }

}  // namespace Dionysen
