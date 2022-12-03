project(helloworlds_xml)

include_directories(./xml/source)
 
file(GLOB_RECURSE UI_SOURCE "xml/source/*.cpp")

add_definitions(-DCPP_XML_BIN=L"${CMAKE_CURRENT_SOURCE_DIR}/bin/CppXml.bin")

add_executable(${PROJECT_NAME} WIN32 "main.cpp" ${UI_SOURCE})

target_link_libraries(${PROJECT_NAME} GacUILite)