# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name

project(Ex1)
# Set the output folder where your program will be created
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

file(GLOB SRCS *.hpp *.cpp)

add_executable(main ${SRCS})
