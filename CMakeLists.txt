cmake_minimum_required(VERSION 3.10)
project(CppProCalculator)

set(CMAKE_CXX_STANDARD 20)

# 1. Tell the compiler where the .h header files live
include_directories(
    vendor/raylib/src
    vendor/imgui
    vendor/rlImGui
)

# 2. Collect all the .cpp files needed from your project and the libraries
file(GLOB IMGUI_SOURCES "vendor/imgui/*.cpp")
set(SOURCES 
    main.cpp
    vendor/rlImGui/rlImGui.cpp
    ${IMGUI_SOURCES}
)

# 3. Create the executable name
add_executable(calculator ${SOURCES})

# 4. Link the pre-compiled Raylib binaries (Assuming typical Windows setups)
# If you run into linking errors, we can build raylib from source inside this script
add_subdirectory(vendor/raylib)
target_link_libraries(calculator raylib)