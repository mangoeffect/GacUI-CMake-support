cmake_minimum_required(VERSION 3.14)

project(GacUI_CMake_Test)


if(WIN32)
    # 设置unicode编码
    add_definitions(-DUNICODE -D_UNICODE)
endif()

# 不需要反射
add_definitions(-DVCZH_DEBUG_NO_REFLECTION -DVCZH_DEBUG_NO_REFLECTION)

# 设置GacUI_DIR 为GacUIConfig.cmake文件所在目录
set(GacUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../install/lib/cmake/GacUI)
find_package(GacUI REQUIRED)

if(GacUI_FOUND)
    message(STATUS "Gacui include directories path: ${GacUI_INCLUDE_DIRS}")
else()
    message(FATAL_ERROR "GacUI not found!!!")
endif()


add_subdirectory(helloworlds_cpp)
add_subdirectory(helloworlds_xml)