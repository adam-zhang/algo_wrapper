cmake_minimum_required(VERSION 2.8)
project(algo_wrapper_test)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(sources appMain.cpp)
set(headers algo_wrapper.hpp)
add_executable(algo_wrapper_test ${sources} ${headers})

