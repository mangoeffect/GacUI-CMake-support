
include_directories(${PROJECT_SOURCE_DIR}/gacui/Import)
include_directories(${PROJECT_SOURCE_DIR}/cmake_export)

# GacUI
if(WIN32)
    file(GLOB_RECURSE GacUI_SOURCES 
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkinReflection.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkinReflection.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIReflection.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIReflection.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.Windows.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppGlrParser.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppGlrParser.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.Windows.cpp
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
else()
    file(GLOB_RECURSE GacUI_SOURCES 
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkinReflection.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkinReflection.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIReflection.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUIReflection.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/Vlpp.linux.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppGlrParser.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppGlrParser.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/VlppOS.linux.cpp
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
endif()

# GacUIComplete
file(GLOB_RECURSE GacUIComplete_SOURCES 
 ${PROJECT_SOURCE_DIR}/gacui/Import/GacUICompiler.cpp
 ${PROJECT_SOURCE_DIR}/gacui/Import/GacUICompiler.h
 ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowCompiler.cpp
 ${PROJECT_SOURCE_DIR}/gacui/Import/VlppWorkflowCompiler.h
) 

add_library(GacUI STATIC
  ${GacUI_SOURCES}
  "WinMain.cpp"
  "lite/Version.cpp"
)

add_library(GacUIComplete STATIC ${GacUIComplete_SOURCES})
target_link_libraries(GacUIComplete GacUI)

add_subdirectory(lite)


set_target_properties(GacUI GacUILite GacUIComplete PROPERTIES FOLDER "GacUI")
