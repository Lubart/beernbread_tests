
cmake_minimum_required(VERSION 3.17)

project(beernbread
  VERSION 1.0
  DESCRIPTION "Beer & Bread Crafting"
  LANGUAGES CXX)


find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIRS})
set(Boost_USE_STATIC_LIBS        OFF)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME     OFF)
set(BOOST_ALL_DYN_LINK           ON)

add_executable(${PROJECT_NAME}
  src/main.cpp
  src/add.cpp)

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})

