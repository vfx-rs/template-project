cmake_minimum_required(VERSION 3.10)
project(Project)
set(version 1.0)

# Create library
add_library(Project SHARED adder.cpp adder.hpp)

# Install and export the targets.
install(FILES adder.hpp DESTINATION include/)
install(TARGETS Project
        DESTINATION lib/
        EXPORT project-targets)
install(EXPORT project-targets
        DESTINATION lib/cmake)

# Create and install package configuration and version files.
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/pkg/project-config.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/pkg/project-config.cmake @ONLY)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pkg/project-config.cmake
          DESTINATION lib/cmake)
