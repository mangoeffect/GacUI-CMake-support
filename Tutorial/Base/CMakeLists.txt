
project(Base)

include_directories(../../cmake_export)

add_executable(GetVersionInfo "GetVersionInfo.cpp")
target_link_libraries(GetVersionInfo GacUILite)
set_target_properties(GetVersionInfo PROPERTIES FOLDER "Tutorial")
