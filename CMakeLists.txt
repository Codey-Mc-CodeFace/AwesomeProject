cmake_minimum_required(VERSION 3.25)
project(AwesomeProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(AwesomeProject src/main.cpp src/Token.cpp src/Wrapper.cpp
        src/non-const.cpp
        src/dory.cpp)
