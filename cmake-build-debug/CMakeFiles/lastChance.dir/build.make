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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Desktop/dataStructAndAlgo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lastChance.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lastChance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lastChance.dir/flags.make

CMakeFiles/lastChance.dir/main.c.o: CMakeFiles/lastChance.dir/flags.make
CMakeFiles/lastChance.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lastChance.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lastChance.dir/main.c.o   -c /mnt/d/Desktop/dataStructAndAlgo/main.c

CMakeFiles/lastChance.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lastChance.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Desktop/dataStructAndAlgo/main.c > CMakeFiles/lastChance.dir/main.c.i

CMakeFiles/lastChance.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lastChance.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Desktop/dataStructAndAlgo/main.c -o CMakeFiles/lastChance.dir/main.c.s

# Object files for target lastChance
lastChance_OBJECTS = \
"CMakeFiles/lastChance.dir/main.c.o"

# External object files for target lastChance
lastChance_EXTERNAL_OBJECTS =

lastChance: CMakeFiles/lastChance.dir/main.c.o
lastChance: CMakeFiles/lastChance.dir/build.make
lastChance: CMakeFiles/lastChance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lastChance"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lastChance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lastChance.dir/build: lastChance

.PHONY : CMakeFiles/lastChance.dir/build

CMakeFiles/lastChance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lastChance.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lastChance.dir/clean

CMakeFiles/lastChance.dir/depend:
	cd /mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Desktop/dataStructAndAlgo /mnt/d/Desktop/dataStructAndAlgo /mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug /mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug /mnt/d/Desktop/dataStructAndAlgo/cmake-build-debug/CMakeFiles/lastChance.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lastChance.dir/depend

