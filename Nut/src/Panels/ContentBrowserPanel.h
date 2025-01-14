#pragma once

#include "Texture.h"

#include <filesystem>

namespace Dionysen
{

    class ContentBrowserPanel
    {
      public:
        ContentBrowserPanel();

        void OnImGuiRender();

      private:
        std::filesystem::path m_BaseDirectory;
        std::filesystem::path m_CurrentDirectory;

        Ref<Texture2D> m_DirectoryIcon;
        Ref<Texture2D> m_FileIcon;
    };

}  // namespace Dionysen
