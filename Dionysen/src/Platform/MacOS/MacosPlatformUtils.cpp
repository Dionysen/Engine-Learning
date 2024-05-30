


#ifdef DION_PLATFORM_MACOSX
#include <GLFW/glfw3.h>
#include "PlatformUtils.h"

// #include <QFileDialog>
// #include <QTKit/Qwidget>
// #include <QString>
// #include <QApplication>

namespace Dionysen
{
    std::string FileDialogs::OpenFile(const char* filter)
    {

        // int          argc = 0;
        // char**       argv = nullptr;
        // QApplication app(argc, argv);

        // QFileDialog dialog(nullptr, "Open File");

        // dialog.setNameFilter(filter);
        // dialog.setFileMode(QFileDialog::ExistingFile);
        // dialog.setOptions(QFileDialog::DontUseNativeDialog);

        // QString currentDir = QDir::currentPath();
        // dialog.setDirectory(currentDir);

        // if (dialog.exec() == QDialog::Accepted)
        // {
        //     QStringList selectedFiles = dialog.selectedFiles();
        //     if (!selectedFiles.isEmpty())
        //     {
        //         return selectedFiles[0].toStdString();
        //     }
        // }
        return std::string();
    }
    std::string FileDialogs::SaveFile(const char* filter)
    {
        // int          argc = 0;
        // char**       argv = nullptr;
        // QApplication app(argc, argv);

        // QString filterStr = QString::fromUtf8(filter).replace(';', ";;");

        // QString currentDir = QDir::currentPath();

        // QString fileName = QFileDialog::getSaveFileName(nullptr, "Save File", currentDir, filterStr);

        // if (!fileName.isEmpty())
        //     return fileName.toStdString();

        return std::string();
    }
    float Time::GetTime()
    {
        return static_cast<float>(glfwGetTime());
    }

}  // namespace Dionysen

#endif
