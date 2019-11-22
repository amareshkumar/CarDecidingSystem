# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Enable C++11 standard
set(CMAKE_CXX_STANDARD 11)  

#set variables
if (UNIX)
set( ENV{CMAKE_SOURCE_DIR} /home/amaresh/CarDecidingSystem )    #needs to be changed 
else() 
set(ENV{CMAKE_SOURCE_DIR} C:/kamaresh/CarDecidingSystem)
endif (UNIX)

project(CarDecidingSystem)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

#add source group		
source_group ("source" ${CMAKE_BINARY_DIR}/source)
source_group ("include" ${CMAKE_BINARY_DIR}/include)

file(GLOB SRC_FILES main.cpp source/*.cpp include/*.hpp include/*.h)

add_executable(CarDecidingSystem ${SRC_FILES})

