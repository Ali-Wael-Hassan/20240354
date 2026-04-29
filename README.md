# Employee Manager (MVC Style)
**Student ID:** 20240354  
**Lab Assignment:** SE Lab 7 (Individual Task)

## What is this?
This is a simple C++ application designed to store and edit employee data. It is built using the Model-View-Controller (MVC) pattern, which is a method used to keep code organized by separating the data, the logic, and the user interface.

## Project Structure
The files are organized into specific folders to keep the project clean:

* **include/**: All header files (.h) categorized into model, view, and controller subfolders.
* **src/**: The implementation logic (.cpp files) for each component.
* **MVCPatternDemo.cpp**: The main entry point that runs the program.
* **bin/**: The folder where the finished application is placed after building.

## How to Build and Run
You can use the following script to get the app ready. Run these commands in your terminal from the main project folder:

```bash
# 1. Create a workspace for the build files
mkdir build
cd build

# 2. Prepare the project configuration
cmake -G "MinGW Makefiles" ..

# 3. Return to the main folder and compile the app
cd ..
cmake --build build