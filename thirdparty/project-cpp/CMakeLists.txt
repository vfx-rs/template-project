cmake_minimum_required(VERSION 3.10)
project(Project)
set(version 1.0)

# Create library
add_library(Project SHARED project.cpp project.h)

# Install and export the targets.
install(FILES project.h DESTINATION include/)
install(TARGETS Project
        DESTINATION lib/
        EXPORT project-targets)
install(EXPORT project-targets
        DESTINATION lib/)

# Create and install package configuration and version files.
configure_file(
    ${TemplateProject_SOURCE_DIR}/pkg/project-config.cmake.in
    ${TemplateProject_BINARY_DIR}/pkg/project-config.cmake @ONLY)

 install(FILES ${TemplateProject_BINARY_DIR}/pkg/project-config.cmake
          DESTINATION lib/)
