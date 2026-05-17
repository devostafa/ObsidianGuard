cmake_minimum_required(VERSION 3.16)

project(ObsidianGuard
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(obsidian_guard SHARED src/guard.cpp)

include(GenerateExportHeader)
generate_export_header(obsidian_guard)

target_include_directories(obsidian_guard PRIVATE src/*)

target_include_directories(obsidian_guard PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include 
    ${CMAKE_CURRENT_BINARY_DIR}
)
