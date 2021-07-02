include_directories(${PROJECT_SOURCE_DIR}/gacui/Import)

file(GLOB_RECURSE GacUILite_SOURCES 
${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.cpp
${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.h
${PROJECT_SOURCE_DIR}/gacui/Import/GacUIWindows.cpp
${PROJECT_SOURCE_DIR}/gacui/Import/GacUIWindows.h
${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.cpp
${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.h
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
)

add_library(GacUILite STATIC
  ${GacUILite_SOURCES}
  WinMain.cpp
)
