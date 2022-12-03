project(GacUI_HelloWorlds)

set(gacui_helloworlds_target_list "")
if(WIN32)
    add_executable(HelloWorldCpp WIN32 "HelloWorldsCpp.cpp")
    list (APPEND gacui_helloworlds_target_list HelloWorldCpp)
else()
    message(FATAL_ERROR "not support uninxs like now!!!")
endif()

foreach(tgt ${gacui_helloworlds_target_list})
    target_link_libraries(${tgt} GacUILite)
    set_target_properties(${tgt} PROPERTIES FOLDER "Tutorial/HelloWorlds")
endforeach(gacui_helloworlds_target_list)

