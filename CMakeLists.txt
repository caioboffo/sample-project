project (my_project)
cmake_minimum_required (VERSION 3.10.2)

# set sources for my library
set (MYADD_SOURCES include/myadd.h include/myadd.cpp)
add_library (myadd STATIC ${MYADD_SOURCES})

#bring the headers into the project
include_directories (include)
#add the sources
file (GLOB SOURCES "src/*.cpp")

add_executable (my_project ${SOURCES})
target_link_libraries (my_project myadd)
