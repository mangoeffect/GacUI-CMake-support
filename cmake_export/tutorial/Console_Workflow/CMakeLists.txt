project(Console_Workflow)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Import)

add_executable(W01_RunningWorkflowScripts ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W01_RunningWorkflowScripts/Main.cpp)
target_link_libraries(W01_RunningWorkflowScripts GacUIComplete)
set_target_properties(W01_RunningWorkflowScripts PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W02_InvokingCppClasses ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W02_InvokingCppClasses/Main.cpp)
target_link_libraries(W02_InvokingCppClasses GacUIComplete)
set_target_properties(W02_InvokingCppClasses PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W03_InheritingCppInterfaces ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W03_InheritingCppInterfaces/Main.cpp)
target_link_libraries(W03_InheritingCppInterfaces GacUIComplete)
set_target_properties(W03_InheritingCppInterfaces PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W04_InheritingCppClasses ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W04_InheritingCppClasses/Main.cpp)
target_link_libraries(W04_InheritingCppClasses GacUIComplete)
set_target_properties(W04_InheritingCppClasses PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W05_Compile ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_Compile/Main.cpp)
target_link_libraries(W05_Compile GacUIComplete)
set_target_properties(W05_Compile PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W05_DynamicRun ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_DynamicRun/Main.cpp)
target_link_libraries(W05_DynamicRun GacUIComplete)
set_target_properties(W05_DynamicRun PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W05_Lib ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_Lib/W05_Lib.h 
                        ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_Lib/W05_Lib.cpp)
target_link_libraries(W05_Lib GacUIComplete)
set_target_properties(W05_Lib PROPERTIES FOLDER "Tutorial/Console_Workflow")

add_executable(W05_StaticRun ${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_StaticRun/Main.cpp 
${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_StaticRun/Generated/W05Script.h
${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_StaticRun/Generated/W05Script.cpp
${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_StaticRun/Generated/W05ScriptIncludes.h
${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_StaticRun/Generated/W05ScriptReflection.h
${CMAKE_CURRENT_SOURCE_DIR}/../../../gacui/Tutorial/Console_Workflow/W05_StaticRun/Generated/W05ScriptReflection.cpp
)
target_link_libraries(W05_StaticRun GacUIComplete)
set_target_properties(W05_StaticRun PROPERTIES FOLDER "Tutorial/Console_Workflow")




