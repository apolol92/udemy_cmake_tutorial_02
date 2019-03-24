cmake_minimum_required(VERSION 3.10)
project(another_project)
find_package(calculator)

add_executable(my_program hello.cc)
target_link_libraries(my_program command_line_calculator::calculator)