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
        // 创建一个QFileDialog对象
        QFileDialog dialog(nullptr, "Open File");

        // 设置文件过滤器
        dialog.setNameFilter(filter);

        // 设置对话框选项
        dialog.setFileMode(QFileDialog::ExistingFile);        // 只允许选择现有的文件
        dialog.setOptions(QFileDialog::DontUseNativeDialog);  // 不使用原生对话框（可选）

        // 获取当前工作目录
        QString currentDir = QDir::currentPath();
        dialog.setDirectory(currentDir);

        // 显示对话框并获取用户选择的文件
        if (dialog.exec() == QDialog::Accepted)
        {
            QStringList selectedFiles = dialog.selectedFiles();
            if (!selectedFiles.isEmpty())
            {
                // 返回第一个选择的文件路径
                return selectedFiles[0].toStdString();
            }
        }

        // 如果用户取消了对话框，返回空字符串
        return std::string();
    }
    std::string FileDialogs::SaveFile(const char* filter)
    {
        int          argc = 0;
        char**       argv = nullptr;
        QApplication app(argc, argv);

        QString filterStr = QString::fromUtf8(filter).replace(';', ";;");

        // 获取当前工作目录
        QString currentDir = QDir::currentPath();

        // 打开文件保存对话框
        QString fileName = QFileDialog::getSaveFileName(nullptr,      // 父窗口
                                                        "Save File",  // 对话框标题
                                                        currentDir,   // 初始目录
                                                        filterStr     // 文件过滤器
        );

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