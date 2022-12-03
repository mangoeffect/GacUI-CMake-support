include_directories(${PROJECT_SOURCE_DIR}/gacui/Import)

# 不需要反射
add_definitions(-DVCZH_DEBUG_NO_REFLECTION -DVCZH_DEBUG_NO_REFLECTION)

# GacUILite
if(WIN32)
    file(GLOB_RECURSE GacUILite_SOURCES 
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.h
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
    )
else()
    file(GLOB_RECURSE GacUILite_SOURCES 
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/Skins/DarkSkin/DarkSkin.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.h
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.cpp
    ${PROJECT_SOURCE_DIR}/gacui/Import/GacUI.Windows.h
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
    )
endif()

add_library(GacUILite STATIC
  ${GacUILite_SOURCES}
  "WinMain.cpp"
  "Version.cpp"
)
