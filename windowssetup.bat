@echo off
echo === Starting C++ Dependency Setup for Windows ===

:: Create the vendor directory
if not exist vendor mkdir vendor
cd vendor

echo --^> Downloading Raylib...
git clone https://github.com/raysan5/raylib.git

echo --^> Downloading Dear ImGui...
git clone https://github.com/ocornut/imgui.git

echo --^> Downloading rlImGui...
git clone https://github.com/raylib-extras/rlImGui.git

echo === Setup Complete! All libraries are in the /vendor folder. ===
pause