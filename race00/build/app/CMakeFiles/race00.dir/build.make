# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/snikolayen/mm/race00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/snikolayen/mm/race00/build

# Include any dependencies generated for this target.
include app/CMakeFiles/race00.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/race00.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/race00.dir/flags.make

app/CMakeFiles/race00.dir/main.cpp.o: app/CMakeFiles/race00.dir/flags.make
app/CMakeFiles/race00.dir/main.cpp.o: ../app/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snikolayen/mm/race00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/race00.dir/main.cpp.o"
	cd /Users/snikolayen/mm/race00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/race00.dir/main.cpp.o -c /Users/snikolayen/mm/race00/app/main.cpp

app/CMakeFiles/race00.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/race00.dir/main.cpp.i"
	cd /Users/snikolayen/mm/race00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/snikolayen/mm/race00/app/main.cpp > CMakeFiles/race00.dir/main.cpp.i

app/CMakeFiles/race00.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/race00.dir/main.cpp.s"
	cd /Users/snikolayen/mm/race00/build/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/snikolayen/mm/race00/app/main.cpp -o CMakeFiles/race00.dir/main.cpp.s

# Object files for target race00
race00_OBJECTS = \
"CMakeFiles/race00.dir/main.cpp.o"

# External object files for target race00
race00_EXTERNAL_OBJECTS =

app/race00: app/CMakeFiles/race00.dir/main.cpp.o
app/race00: app/CMakeFiles/race00.dir/build.make
app/race00: app/src/libsrc.dylib
app/race00: 3dparty/SFML/lib/libsfml-graphics.2.5.1.dylib
app/race00: 3dparty/SFML/lib/libsfml-window.2.5.1.dylib
app/race00: 3dparty/SFML/lib/libsfml-system.2.5.1.dylib
app/race00: app/CMakeFiles/race00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/snikolayen/mm/race00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable race00"
	cd /Users/snikolayen/mm/race00/build/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/race00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/race00.dir/build: app/race00

.PHONY : app/CMakeFiles/race00.dir/build

app/CMakeFiles/race00.dir/clean:
	cd /Users/snikolayen/mm/race00/build/app && $(CMAKE_COMMAND) -P CMakeFiles/race00.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/race00.dir/clean

app/CMakeFiles/race00.dir/depend:
	cd /Users/snikolayen/mm/race00/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/snikolayen/mm/race00 /Users/snikolayen/mm/race00/app /Users/snikolayen/mm/race00/build /Users/snikolayen/mm/race00/build/app /Users/snikolayen/mm/race00/build/app/CMakeFiles/race00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/race00.dir/depend
