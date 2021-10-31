# GacUI CMake support
![compile status](https://github.com/mangosroom/GacUI-CMake-support/actions/workflows/build_on_windows.yml/badge.svg)

本项目旨在提供[GacUI](https://github.com/vczh-libraries/Release)库的CMake支持,使用CMake构建GacUI项目并打包安装，支持CMake通用格式导入连接到自己项目中。
使用GacUI之前，请先阅读GacUI原许可[GacUI-License](https://github.com/vczh-libraries/Release/blob/master/LICENSE.md)

**最新版本已更新至1.0.4.0**

# 功能

- CMake构建方式,支持使用不同IDE编译(使用MVSC编译器)。
- 安装导出库文件、Tools工具，库文件支持CMakeLists.txt直接导入
- 库文件区分标记Debug版与Release版本

# 如何编译GacUI

**注意:最新版本(>=1.0.3.0)需要编译器支持C++20标准**

1. 克隆项目，注意要递归下载GacUI源码

```bash
git clone --recursive git@github.com:mangosroom/GacUI-CMake-support.git
```

2. CMake生成Visual Studio解决方案

```bash
mkdir build
cd build
cmake -G "Visual Studio 16 2019" ..
#cmake -G "Visual Studio 15 2017" ..
```
3. 编译安装

使用Visual Studio 2019打开解决方案，右键生成INSTALL项目，编译成功后install目录下生成相应文件

```powershell
├─include
│  │  GacUI.h
│  │  GacUICompiler.h
│  │  GacUIReflection.h
│  │  GacUIWindows.h
│  │  Vlpp.h
│  │  VlppOS.h
│  │  VlppParser.h
│  │  VlppReflection.h
│  │  VlppRegex.h
│  │  VlppWorkflowCompiler.h
│  │  VlppWorkflowLibrary.h
│  │  VlppWorkflowRuntime.h
│  │
│  └─Skins
│      └─DarkSkin
│              DarkSkin.h
│              DarkSkinReflection.h
│
├─lib
│  │  GacUI.lib
│  │  GacUIComplete.lib
│  │  GacUICompleted.lib
│  │  GacUId.lib
│  │  GacUILite.lib
│  │  GacUILited.lib
│  │
│  └─cmake
│      └─GacUI
│              GacUI-targets-debug.cmake
│              GacUI-targets-release.cmake
│              GacUI-targets.cmake
│              GacUIConfig.cmake
│
└─Tools
        CppMerge.exe
        GacBuild.ps1
        GacClear.ps1
        GacCommon.ps1
        GacGen.ps1
        GacGen32.exe
        GacGen64.exe
        ParserGen.exe
        StartProcess.ps1
```

# 如何使用CMake构建GacUI应用项目

如果不熟悉或不想使用CMake构建项目，可以直接使用Visual Studio配置好属性表中的头文件目录(include)、库文件目录(lib)、附加依赖项(*.lib文件),可以参考GacUI原工程轮子哥的配置。以下为使用CMake导入GacUI到项目中的示例。

```cmake
# 1. 设置GacUI_DIR 为GacUIConfig.cmake文件所在目录
set(GacUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../install/lib/cmake/GacUI)
# 2. 查找GacUI
find_package(GacUI REQUIRED)

add_executable(${PROJECT_NAME} WIN32 "main.cpp")
# 3. 链接GacUI依赖(可选GacUILite、GacUI、GacUIComplete)
target_link_libraries(${PROJECT_NAME} GacUILite)
```

1. 示例1(纯cpp方式)

```cmake
project(helloworlds_cpp)

if(WIN32)
    # 设置unicode编码
    add_definitions(-DUNICODE -D_UNICODE)
endif()
# 不需要反射
add_definitions(-DVCZH_DEBUG_NO_REFLECTION -DVCZH_DEBUG_NO_REFLECTION)

# 1. 设置GacUI_DIR 为GacUIConfig.cmake文件所在目录
set(GacUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../install/lib/cmake/GacUI)
# 2. 查找GacUI
find_package(GacUI REQUIRED)

add_executable(${PROJECT_NAME} WIN32 "main.cpp")
# 3. 链接GacUI依赖
target_link_libraries(${PROJECT_NAME} GacUILite)
```

2. 示例2(包含xml资源)

```cmake
project(helloworlds_xml)

if(WIN32)
    # 设置unicode编码
    add_definitions(-DUNICODE -D_UNICODE)
endif()
# 不需要反射
add_definitions(-DVCZH_DEBUG_NO_REFLECTION -DVCZH_DEBUG_NO_REFLECTION)

# xml生成cpp头文件所在目录
include_directories(./xml/source)

# xml生成cpp文件
file(GLOB_RECURSE UI_SOURCE "xml/source/*.cpp")


# 1. 设置GacUI_DIR 为GacUIConfig.cmake文件所在目录
set(GacUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../install/lib/cmake/GacUI)
# 2. 查找GacUI
find_package(GacUI REQUIRED)

add_executable(${PROJECT_NAME} WIN32 "main.cpp" ${UI_SOURCE})
# 3. 链接GacUI依赖
target_link_libraries(${PROJECT_NAME} GacUILite)
```


