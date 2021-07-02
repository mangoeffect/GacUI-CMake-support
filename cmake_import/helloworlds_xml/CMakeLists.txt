project(helloworlds_xml)

include_directories(./xml/source)
 
file(GLOB_RECURSE UI_SOURCE "xml/source/*.cpp")

#设定可执行二进制文件的目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin) 

add_executable(${PROJECT_NAME} WIN32 "main.cpp" ${UI_SOURCE})

target_link_libraries(${PROJECT_NAME} GacUILite)