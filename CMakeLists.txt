 cmake_minimum_required(VERSION 2.8.12)
 project(conanworkshop)

 add_definitions("-std=c++11")

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(MainTest main.cpp test_fmt.cpp test_catch.cpp)
 target_link_libraries(MainTest ${CONAN_LIBS})
