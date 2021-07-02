
include_directories(${PROJECT_SOURCE_DIR}/gacui/Import)

file(GLOB_RECURSE GacUI_SOURCES 
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIReflection.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIReflection.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIWindows.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIWindows.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkinReflection.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkinReflection.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppParser.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppParser.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppReflection.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppReflection.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppRegex.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppRegex.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowLibrary.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowLibrary.h
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowRuntime.cpp
  ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowRuntime.h
)
add_library(GacUI STATIC
  ${GacUI_SOURCES}
  WinMain.cpp
)
