cmake_minimum_required(VERSION 3.10)
project(ProcessesLibrary)

set(CMAKE_C_STANDARD 99)

# Add the library
add_library(processes_lib
    src/processes.c
)

# Include directories for the header files
target_include_directories(processes_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
