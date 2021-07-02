
project(helloworlds_cpp)

add_executable(${PROJECT_NAME} WIN32 "main.cpp")

target_link_libraries(${PROJECT_NAME} GacUILite)
