# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /Users/mmasniy/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug

# Include any dependencies generated for this target.
include app/CMakeFiles/app.dir/depend.make

# Include the progress variables for this target.
include app/CMakeFiles/app.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/app.dir/flags.make

app/CMakeFiles/app.dir/main.cpp.o: app/CMakeFiles/app.dir/flags.make
app/CMakeFiles/app.dir/main.cpp.o: ../app/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/app.dir/main.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/main.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/app/main.cpp

app/CMakeFiles/app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/main.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/app/main.cpp > CMakeFiles/app.dir/main.cpp.i

app/CMakeFiles/app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/main.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/app/main.cpp -o CMakeFiles/app.dir/main.cpp.s

# Object files for target app
app_OBJECTS = \
"CMakeFiles/app.dir/main.cpp.o"

# External object files for target app
app_EXTERNAL_OBJECTS =

app/app: app/CMakeFiles/app.dir/main.cpp.o
app/app: app/CMakeFiles/app.dir/build.make
app/app: app/src/libsrc.a
app/app: app/CMakeFiles/app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable app"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/app.dir/build: app/app

.PHONY : app/CMakeFiles/app.dir/build

app/CMakeFiles/app.dir/clean:
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app && $(CMAKE_COMMAND) -P CMakeFiles/app.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/app.dir/clean

app/CMakeFiles/app.dir/depend:
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05 /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/app /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t05/cmake-build-debug/app/CMakeFiles/app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/app.dir/depend

