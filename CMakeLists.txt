cmake_minimum_required(VERSION 3.0)
project(basicexempel)


add_executable(main main.cpp)
# C++11, C++14 need mac os
target_compile_features(main PRIVATE cxx_lambda_init_captures)
#
target_link_libraries(main)