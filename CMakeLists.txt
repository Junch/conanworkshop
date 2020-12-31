 cmake_minimum_required(VERSION 2.8.12)
 project(conanworkshop)

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(MainTest main.cpp test_fmt.cpp test_catch.cpp)
 set_target_properties(MainTest PROPERTIES 
    CXX_STANDARD 17
    CXX_STANDARD_PROPERTIES YES
    CXX_EXTENSIONS NO
)

target_link_libraries(MainTest ${CONAN_LIBS})
