# C++ GUI Calculator

A lightweight, hardware-accelerated desktop calculator application. This project demonstrates how to build a modern graphical user interface in C++ using an immediate-mode GUI paradigm, avoiding heavy frameworks while maintaining high performance.

## Technologies Used

* **Language:** C++ (Standard 20)
* **Window/Hardware API:** Raylib
* **GUI Library:** Dear ImGui
* **Bridge:** rlImGui
* **Build System:** CMake

## Features

* Standard arithmetic operations (Addition, Subtraction, Multiplication, Division)
* Zero-latency immediate mode rendering
* Automated dependency fetching script for Windows
* Clean, modular CMake build architecture

## Prerequisites

To compile this project on Windows, you will need the following tools installed and added to your system PATH:

* Git
* CMake
* MinGW-w64 GCC Compiler (Recommended: Installed via MSYS2)
* Make (`mingw32-make`)

## Installation and Build Guide

Follow these steps to download the dependencies and compile the executable.

### 1. Clone the Repository
Open your terminal and clone this repository to your local machine:
```bash
git clone [https://github.com/YOUR-USERNAME/cpp-gui-calculator.git](https://github.com/YOUR-USERNAME/cpp-gui-calculator.git)
cd cpp-gui-calculator
```

### 2. Download Dependencies
Run the included batch script. This will use Git to automatically download Raylib, ImGui, and rlImGui into a local `vendor` folder.
```cmd
.\windowssetup.bat
```

### 3. Compile the Application
Create a build directory and use CMake to generate the required compiler files, then build the executable.
```cmd
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
```

### 4. Run the Calculator
Once the compilation reaches 100%, the executable will be generated in the `build` directory.
```cmd
.\calculator.exe
```

## Repository Structure

* `main.cpp`: Contains the core application loop, math logic, and GUI rendering code.
* `CMakeLists.txt`: The build configuration file that links the source code with the external libraries.
* `windowssetup.bat`: An automation script to fetch the required external repositories via Git.
