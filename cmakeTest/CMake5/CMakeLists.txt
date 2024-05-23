cmake_minimum_required(VERSION 3.16)
project(test)
# set(SRC add.cpp div.cpp mult.cpp sub.cpp main.cpp)
# aux_source_directory(${PROJECT_SOURCE_DIR} SRC) #ROJECT_SOURCE_DIR is CMakeLists's lujin
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)  #CMAKE_CURRENT_SOURCE_DIR is CMakeLists's lujin
# set(EXECUTABLE_OUTPUT_PATH /home/renzhihao/RZH)
set(LIBRARY_OUTPUT_PATH /home/renzhihao/YYY)
set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
# add_executable(app ${SRC})
# add_library(calc STATIC ${SRC})
add_library(calc SHARED ${SRC})
 LINK_SEARCH_END_STATIC