# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Users/mmasniy/.brew/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /Users/mmasniy/.brew/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build

# Include any dependencies generated for this target.
include CMakeFiles/tesLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tesLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tesLibrary.dir/flags.make

CMakeFiles/tesLibrary.dir/main.cpp.o: CMakeFiles/tesLibrary.dir/flags.make
CMakeFiles/tesLibrary.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tesLibrary.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tesLibrary.dir/main.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/main.cpp

CMakeFiles/tesLibrary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tesLibrary.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/main.cpp > CMakeFiles/tesLibrary.dir/main.cpp.i

CMakeFiles/tesLibrary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tesLibrary.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/main.cpp -o CMakeFiles/tesLibrary.dir/main.cpp.s

# Object files for target tesLibrary
tesLibrary_OBJECTS = \
"CMakeFiles/tesLibrary.dir/main.cpp.o"

# External object files for target tesLibrary
tesLibrary_EXTERNAL_OBJECTS =

tesLibrary: CMakeFiles/tesLibrary.dir/main.cpp.o
tesLibrary: CMakeFiles/tesLibrary.dir/build.make
tesLibrary: CMakeFiles/tesLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tesLibrary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tesLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tesLibrary.dir/build: tesLibrary

.PHONY : CMakeFiles/tesLibrary.dir/build

CMakeFiles/tesLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tesLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tesLibrary.dir/clean

CMakeFiles/tesLibrary.dir/depend:
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03 /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03 /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day03/t03/build/CMakeFiles/tesLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tesLibrary.dir/depend

