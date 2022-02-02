#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' ERR

rm -rf build

project_name="project"
major_version=0
minor_version=1
patch_version=0

# Generate ast json files from parsing c++ bind files
astgen bind -v 1 -u -o build/ast -- \
    -Ithirdparty/project-cpp

# Generate c bindings from parsing json ast
asttoc build/ast -o build -p ${project_name} \
    -major ${major_version} -minor ${minor_version} -patch ${patch_version} \
    -fp Project \
    -tll Project

# Move the actual c++ library source into
# project-sys so that it comes bundled with project-sys.
mkdir -p build/${project_name}-sys/thirdparty
cp -r thirdparty/project-cpp build/${project_name}-sys/thirdparty/project

sed \
    -e "s/PROJECT_NAME/${project_name}/g" \
    -e "s/MAJOR_VERSION/${major_version}/g" \
    -e "s/MINOR_VERSION/${minor_version}/g" \
    -e "s/PATCH_VERSION/${patch_version}/g" \
    scripts/build.rs > build/${project_name}-sys/build.rs

sed \
    -e "s/PROJECT_NAME/${project_name}/g" \
    -e "s/MAJOR_VERSION/${major_version}/g" \
    -e "s/MINOR_VERSION/${minor_version}/g" \
    -e "s/PATCH_VERSION/${patch_version}/g" \
    scripts/Cargo.toml > build/${project_name}-sys/Cargo.toml

# Copy over the readme
cp scripts/README.md build/${project_name}-sys/README.md

# Copy the tests over
cp test.rs build/${project_name}-sys/src
