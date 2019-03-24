cmake_minimum_required(VERSION 3.10...3.14 FATAL_ERROR)
project(command_line_calculator CXX)
enable_testing()
add_subdirectory(calculator)
add_subdirectory(app)

if(${BORLAND})
    message("Borland!!")
endif()

set(MY_CACHE_VAR "abc" CACHE STRING "Some user-specified option")
message(${MY_CACHE_VAR})