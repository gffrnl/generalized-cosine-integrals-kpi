cmake_minimum_required(VERSION 3.12)
project(GeneralizedCosineIntegralskPi VERSION 1.0.0)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_library(gcikpi SHARED
   include/gcikpi.hpp
   src/gcikpi.cpp
   )
