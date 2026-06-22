cmake_minimum_required(VERSION 3.20)
project(LearnCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Good warnings
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# === Automatic discovery of all main.cpp files ===
file(GLOB_RECURSE MAIN_FILES CONFIGURE_DEPENDS "*/main.cpp")

foreach(mainfile IN LISTS MAIN_FILES)
    # Get the folder name (e.g. "Chapter03_Functions")
    get_filename_component(dir ${mainfile} DIRECTORY)
    get_filename_component(name ${dir} NAME)

    # Create executable with the folder name
    add_executable(${name} ${mainfile})
endforeach()