cmake_minimum_required(VERSION 3.28)
project("MyProject")
find_package(GTest REQUIRED)
set(CMAKE_CXX_STANDART 20)

add_executable(main main.cpp Functions.cpp Functions.h Tasks.cpp Tasks.h Tests.cpp )
target_link_libraries (main ${GTEST_LIBRARIES})

enable_testing()
add_test(add Google)