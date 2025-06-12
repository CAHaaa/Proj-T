cmake_minimum_required(VERSION 3.10)

project(BUFFER_TEST)


add_library(utilsLib STATIC 

    src/utils.c

)
include_directories(include)

set(SRC_FILES
    src/main.c
)
add_executable(testPro ${SRC_FILES})
target_link_libraries(testPro utilsLib)
