cmake_minimum_required(VERSION 3.5)

project(Projectrepo)

add_executable(HelloWorld main.cpp)

set_target_properties(
    HelloWorld PROPERTIES

    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)