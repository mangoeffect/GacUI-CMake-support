cmake_minimum_required(VERSION 3.14)

project(GacUI CXX)

# C++标准要求
set(CMAKE_CXX_STANDARD 20)

# 设置编译库文件版本后缀
set(CMAKE_DEBUG_POSTFIX "d" CACHE STRING "add a postfix, usually d on windows")
set(CMAKE_RELEASE_POSTFIX "" CACHE STRING "add a postfix, usually empty on windows")
set(CMAKE_RELWITHDEBINFO_POSTFIX "rd" CACHE STRING "add a postfix, usually empty on windows")
set(CMAKE_MINSIZEREL_POSTFIX "s" CACHE STRING "add a postfix, usually empty on windows")
 
if (CMAKE_BUILD_TYPE MATCHES "Release")
    set(CMAKE_BUILD_POSTFIX "${CMAKE_RELEASE_POSTFIX}")
elseif(CMAKE_BUILD_TYPE MATCHES "MinSizeRel")
    set(CMAKE_BUILD_POSTFIX "${CMAKE_MINSIZEREL_POSTFIX}")
elseif(CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo")
    set(CMAKE_BUILD_POSTFIX "${CMAKE_RELWITHDEBINFO_POSTFIX}")
elseif(CMAKE_BUILD_TYPE MATCHES "Debug")
    set(CMAKE_BUILD_POSTFIX "${CMAKE_DEBUG_POSTFIX}")
else()
    set(CMAKE_BUILD_POSTFIX "")
endif()

if(CMAKE_DEBUG_POSTFIX)
    set(CMAKE_CXX_FLAGS_DEBUG
       "${CMAKE_CXX_FLAGS_DEBUG} -DRW_LIBRARY_POSTFIX=${CMAKE_DEBUG_POSTFIX}")
endif()
if(CMAKE_RELEASE_POSTFIX)
set(CMAKE_CXX_FLAGS_RELEASE
       "${CMAKE_CXX_FLAGS_RELEASE} -DRW_LIBRARY_POSTFIX=${CMAKE_RELEASE_POSTFIX}")
endif()
if(CMAKE_RELWITHDEBINFO_POSTFIX)
    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO
       "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -DRW_LIBRARY_POSTFIX=${CMAKE_RELWITHDEBINFO_POSTFIX}")
endif()
if(CMAKE_MINSIZEREL_POSTFIX)
    set(CMAKE_CXX_FLAGS_MINSIZEREL
       "${CMAKE_CXX_FLAGS_MINSIZEREL} -DRW_LIBRARY_POSTFIX=${CMAKE_MINSIZEREL_POSTFIX}")
endif()

# 设置bigob选项
if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")
endif()

# 打开允许创建文件夹的开关
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
# 给cmake自动创建的工程重新命名
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMakeTargets")

# 设置宏定义
add_definitions(-DUNICODE -D_UNICODE)
add_definitions(-DLIB -D_LIB)

add_subdirectory(cmake_export)

#设定安装目录
set(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/install/")

#安装头文件
file(GLOB Headers "./gacui/Import/*.h")
file(GLOB Skins "./gacui/Import/Skins/DarkSkin/*.h")
target_include_directories(GacUI INTERFACE $<INSTALL_INTERFACE:include>) 
target_include_directories(GacUIComplete INTERFACE $<INSTALL_INTERFACE:include>) 
target_include_directories(GacUILite INTERFACE $<INSTALL_INTERFACE:include>) 
install(FILES ${Headers} DESTINATION include)
install(FILES ${Skins} DESTINATION include/Skins/DarkSkin)
install(TARGETS GacUI GacUIComplete GacUILite
	EXPORT GacUI-targets
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)

# 安装cmake配置文件
install(EXPORT GacUI-targets DESTINATION lib/cmake/GacUI)
include(CMakePackageConfigHelpers)
configure_package_config_file(
    "GacUIConfig.cmake.in" "${CMAKE_CURRENT_BINARY_DIR}/GacUIConfig.cmake"
    INSTALL_DESTINATION "lib/cmake/GacUI"
)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/GacUIConfig.cmake" DESTINATION "lib/cmake/GacUI")

# 安装工具
install(DIRECTORY  "${PROJECT_SOURCE_DIR}/gacui/Tools" DESTINATION .)


include_directories(GacUI/Import)
#add_subdirectory(cmake_import)

add_subdirectory(Tutorial)


