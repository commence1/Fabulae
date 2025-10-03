cmake_minimum_required(VERSION 3.16)
project(Fabulae VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} src/main.cpp
        src/decode.cpp
        Include/resources.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/Include)

find_package(SDL3 REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC SDL3::SDL3)

find_package(Vulkan REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC Vulkan::Vulkan)