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
CMAKE_COMMAND = /Users/mmasniy/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Users/mmasniy/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vampireRabbits.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vampireRabbits.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vampireRabbits.dir/flags.make

CMakeFiles/vampireRabbits.dir/main.cpp.o: CMakeFiles/vampireRabbits.dir/flags.make
CMakeFiles/vampireRabbits.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vampireRabbits.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vampireRabbits.dir/main.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/main.cpp

CMakeFiles/vampireRabbits.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vampireRabbits.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/main.cpp > CMakeFiles/vampireRabbits.dir/main.cpp.i

CMakeFiles/vampireRabbits.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vampireRabbits.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/main.cpp -o CMakeFiles/vampireRabbits.dir/main.cpp.s

CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.o: CMakeFiles/vampireRabbits.dir/flags.make
CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.o: ../src/vampireRabbits.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/src/vampireRabbits.cpp

CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/src/vampireRabbits.cpp > CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.i

CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/src/vampireRabbits.cpp -o CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.s

# Object files for target vampireRabbits
vampireRabbits_OBJECTS = \
"CMakeFiles/vampireRabbits.dir/main.cpp.o" \
"CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.o"

# External object files for target vampireRabbits
vampireRabbits_EXTERNAL_OBJECTS =

vampireRabbits: CMakeFiles/vampireRabbits.dir/main.cpp.o
vampireRabbits: CMakeFiles/vampireRabbits.dir/src/vampireRabbits.cpp.o
vampireRabbits: CMakeFiles/vampireRabbits.dir/build.make
vampireRabbits: CMakeFiles/vampireRabbits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vampireRabbits"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vampireRabbits.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vampireRabbits.dir/build: vampireRabbits

.PHONY : CMakeFiles/vampireRabbits.dir/build

CMakeFiles/vampireRabbits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vampireRabbits.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vampireRabbits.dir/clean

CMakeFiles/vampireRabbits.dir/depend:
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03 /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03 /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day01/t03/cmake-build-debug/CMakeFiles/vampireRabbits.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vampireRabbits.dir/depend

