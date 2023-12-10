cmake_minimum_required(VERSION 3.0)

project(Power_Point_Final)

file(GLOB SOURCE_FILES  "Power_Point_Final/**/*.cpp" "Power_Point_Final/**/**/*.cpp" "Power_Point_Final/main.cpp")

message("${SOURCES}")

set(GLOB HEADERS "Power_Point_Final/**/*.hpp" "Power_Point_Final/**/**/*.hpp")

add_executable(Power_Point_Final ${SOURCE_FILES} ${HEADERS})

target_include_directories(Power_Point_Final PRIVATE include)