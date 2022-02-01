cmake_minimum_required(VERSION 3.17)
project(CPP_08)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01 ex01/main.cpp ex01/Span.cpp ex02/MutanStack.hpp ex02/main.cpp)