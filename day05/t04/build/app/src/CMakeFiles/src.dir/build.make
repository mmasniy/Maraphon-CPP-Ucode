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
CMAKE_SOURCE_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build

# Include any dependencies generated for this target.
include app/src/CMakeFiles/src.dir/depend.make

# Include the progress variables for this target.
include app/src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include app/src/CMakeFiles/src.dir/flags.make

app/src/CMakeFiles/src.dir/Weapon.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/Weapon.cpp.o: ../app/src/Weapon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/src/CMakeFiles/src.dir/Weapon.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/Weapon.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Weapon.cpp

app/src/CMakeFiles/src.dir/Weapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/Weapon.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Weapon.cpp > CMakeFiles/src.dir/Weapon.cpp.i

app/src/CMakeFiles/src.dir/Weapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/Weapon.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Weapon.cpp -o CMakeFiles/src.dir/Weapon.cpp.s

app/src/CMakeFiles/src.dir/Soldier.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/Soldier.cpp.o: ../app/src/Soldier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object app/src/CMakeFiles/src.dir/Soldier.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/Soldier.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Soldier.cpp

app/src/CMakeFiles/src.dir/Soldier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/Soldier.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Soldier.cpp > CMakeFiles/src.dir/Soldier.cpp.i

app/src/CMakeFiles/src.dir/Soldier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/Soldier.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Soldier.cpp -o CMakeFiles/src.dir/Soldier.cpp.s

app/src/CMakeFiles/src.dir/Axe.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/Axe.cpp.o: ../app/src/Axe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object app/src/CMakeFiles/src.dir/Axe.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/Axe.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Axe.cpp

app/src/CMakeFiles/src.dir/Axe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/Axe.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Axe.cpp > CMakeFiles/src.dir/Axe.cpp.i

app/src/CMakeFiles/src.dir/Axe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/Axe.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Axe.cpp -o CMakeFiles/src.dir/Axe.cpp.s

app/src/CMakeFiles/src.dir/ImperialSoldier.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/ImperialSoldier.cpp.o: ../app/src/ImperialSoldier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object app/src/CMakeFiles/src.dir/ImperialSoldier.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/ImperialSoldier.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/ImperialSoldier.cpp

app/src/CMakeFiles/src.dir/ImperialSoldier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/ImperialSoldier.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/ImperialSoldier.cpp > CMakeFiles/src.dir/ImperialSoldier.cpp.i

app/src/CMakeFiles/src.dir/ImperialSoldier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/ImperialSoldier.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/ImperialSoldier.cpp -o CMakeFiles/src.dir/ImperialSoldier.cpp.s

app/src/CMakeFiles/src.dir/StormcloakSoldier.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/StormcloakSoldier.cpp.o: ../app/src/StormcloakSoldier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object app/src/CMakeFiles/src.dir/StormcloakSoldier.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/StormcloakSoldier.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/StormcloakSoldier.cpp

app/src/CMakeFiles/src.dir/StormcloakSoldier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/StormcloakSoldier.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/StormcloakSoldier.cpp > CMakeFiles/src.dir/StormcloakSoldier.cpp.i

app/src/CMakeFiles/src.dir/StormcloakSoldier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/StormcloakSoldier.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/StormcloakSoldier.cpp -o CMakeFiles/src.dir/StormcloakSoldier.cpp.s

app/src/CMakeFiles/src.dir/Sword.cpp.o: app/src/CMakeFiles/src.dir/flags.make
app/src/CMakeFiles/src.dir/Sword.cpp.o: ../app/src/Sword.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object app/src/CMakeFiles/src.dir/Sword.cpp.o"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/Sword.cpp.o -c /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Sword.cpp

app/src/CMakeFiles/src.dir/Sword.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/Sword.cpp.i"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Sword.cpp > CMakeFiles/src.dir/Sword.cpp.i

app/src/CMakeFiles/src.dir/Sword.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/Sword.cpp.s"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src/Sword.cpp -o CMakeFiles/src.dir/Sword.cpp.s

# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/Weapon.cpp.o" \
"CMakeFiles/src.dir/Soldier.cpp.o" \
"CMakeFiles/src.dir/Axe.cpp.o" \
"CMakeFiles/src.dir/ImperialSoldier.cpp.o" \
"CMakeFiles/src.dir/StormcloakSoldier.cpp.o" \
"CMakeFiles/src.dir/Sword.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

app/src/libsrc.a: app/src/CMakeFiles/src.dir/Weapon.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/Soldier.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/Axe.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/ImperialSoldier.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/StormcloakSoldier.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/Sword.cpp.o
app/src/libsrc.a: app/src/CMakeFiles/src.dir/build.make
app/src/libsrc.a: app/src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libsrc.a"
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean_target.cmake
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/src/CMakeFiles/src.dir/build: app/src/libsrc.a

.PHONY : app/src/CMakeFiles/src.dir/build

app/src/CMakeFiles/src.dir/clean:
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : app/src/CMakeFiles/src.dir/clean

app/src/CMakeFiles/src.dir/depend:
	cd /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04 /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/app/src /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src /Users/mmasniy/Desktop/Maraphon-CPP-Ucode/day05/t04/build/app/src/CMakeFiles/src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/src/CMakeFiles/src.dir/depend

