include_directories(${PROJECT_SOURCE_DIR}/gacui/Import)

 file(GLOB_RECURSE GacUIComplete_SOURCES 
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUICompiler.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUICompiler.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowCompiler.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowCompiler.h
)   

add_library(GacUIComplete STATIC ${GacUIComplete_SOURCES})
