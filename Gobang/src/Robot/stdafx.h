// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#define WIN32_LEAN_AND_MEAN // 从 Windows 头中排除极少使用的资料
// Windows 头文件:
#if WIN32
#include <SDKDDKVer.h>
#include <tchar.h>
#include <windows.h>
#endif

// C 运行时头文件
#ifdef __APPLE__
#include <sys/malloc.h>
#else
#include <malloc.h>
#endif
#include <memory.h>
#include <stdlib.h>

// TODO: 在此处引用程序需要的其他头文件