#!/bin/bash
# setup.sh - One-click dependency installer for the C++ GUI Calculator

echo "=== Starting C++ Dependency Setup ==="

# Create the vendor directory to keep things organized
mkdir -p vendor
cd vendor

echo "--> Downloading Raylib (Hardware Framework)..."
git clone https://github.com/raysan5/raylib.git

echo "--> Downloading Dear ImGui (UI Library)..."
git clone https://github.com/ocornut/imgui.git

echo "--> Downloading rlImGui (The Bridge)..."
git clone https://github.com/raylib-extras/rlImGui.git

echo "=== Setup Complete! All libraries are in the /vendor folder. ==="