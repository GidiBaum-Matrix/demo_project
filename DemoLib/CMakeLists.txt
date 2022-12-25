
add_library(demoLib STATIC Class.cpp Class.h)

target_include_directories(demoLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})