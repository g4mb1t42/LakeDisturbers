cmake_minimum_required(VERSION 3.11)
# Require modern C++
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Games_Engineering)

#### Setup Directories ####
#Main output directory
SET(OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")
# Ouput all DLLs from all libs into main build folder
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIRECTORY})

#### Add External Dependencies ####
add_subdirectory("lib/sfml")
set(SFML_INCS "lib/sfml/include")
link_directories("${CMAKE_BINARY_DIR}/lib/sfml/lib")

## Space invaders
file(GLOB_RECURSE SOURCES 2_invaders/*.cpp 2_invaders/*.h)
add_executable(2_INVADERS ${SOURCES} )
target_include_directories(2_INVADERS SYSTEM PRIVATE ${SFML_INCS})
target_link_libraries(2_INVADERS sfml-graphics)