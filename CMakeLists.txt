cmake_minimum_required(VERSION 3.27)
project(ECommerceSystem)

set(CMAKE_CXX_STANDARD 20)

# ------------------------------ POCO
find_package(Poco 1.13.0 QUIET)
if(NOT Poco_FOUND)
    message("Poco not found. Downloading Poco...")

    include(FetchContent)
    FetchContent_Declare(
            poco
            GIT_REPOSITORY https://github.com/pocoproject/poco.git
            GIT_TAG fe3d9dba5b9a146dcb86929bfa102b742358be52
    )

    FetchContent_MakeAvailable(poco)
endif()
# ------------------------------ END POCO

file(GLOB_RECURSE PROJECT_SOURCES "src/*.cpp")
add_executable(
        ECommerceSystem
        main.cpp
        ${PROJECT_SOURCES}
)

target_include_directories(ECommerceSystem PRIVATE include)
target_include_directories(ECommerceSystem PRIVATE src)

target_link_libraries(ECommerceSystem PRIVATE Poco::Foundation Poco::Net Poco::Util)
