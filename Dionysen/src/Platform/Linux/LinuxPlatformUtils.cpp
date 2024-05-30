//
// Created by dionysen on 23-12-28.
//

#ifdef DION_PLATFORM_LINUX

#include <GLFW/glfw3.h>
#include "PlatformUtils.h"

#ifdef __has_include
// Check if Qt is available
#if __has_include(<QtWidgets/QApplication>)
#define HAS_QT
#endif

// Check if GTK+ is available
#if __has_include(<gtk/gtk.h>)
#define HAS_GTK
#endif
#endif

#ifdef HAS_QT

#include <QFileDialog>
#include <QString>
#include <QApplication>


namespace Dionysen
{
    std::string FileDialogs::OpenFile(const char* filter)
    {

        int          argc = 0;
        char**       argv = nullptr;
        QApplication app(argc, argv);

        QFileDialog dialog(nullptr, "Open File");

        dialog.setNameFilter(filter);
        dialog.setFileMode(QFileDialog::ExistingFile);
        dialog.setOptions(QFileDialog::DontUseNativeDialog);

        QString currentDir = QDir::currentPath();
        dialog.setDirectory(currentDir);

        if (dialog.exec() == QDialog::Accepted)
        {
            QStringList selectedFiles = dialog.selectedFiles();
            if (!selectedFiles.isEmpty())
            {
                return selectedFiles[0].toStdString();
            }
        }
        return std::string();
    }
    std::string FileDialogs::SaveFile(const char* filter)
    {
        int          argc = 0;
        char**       argv = nullptr;
        QApplication app(argc, argv);

        QString filterStr = QString::fromUtf8(filter).replace(';', ";;");

        QString currentDir = QDir::currentPath();

        QString fileName = QFileDialog::getSaveFileName(nullptr, "Save File", currentDir, filterStr);

        if (!fileName.isEmpty())
            return fileName.toStdString();

        return std::string();
    }
    float Time::GetTime()
    {
        return static_cast<float>(glfwGetTime());
    }

}  // namespace Dionysen

#endif

#endif
