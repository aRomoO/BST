# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /snap/clion/250/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/250/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fredi/Documents/DS_And_Algorithms/BST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BinaryTrees.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BinaryTrees.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryTrees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryTrees.dir/flags.make

CMakeFiles/BinaryTrees.dir/main.cpp.o: CMakeFiles/BinaryTrees.dir/flags.make
CMakeFiles/BinaryTrees.dir/main.cpp.o: /home/fredi/Documents/DS_And_Algorithms/BST/main.cpp
CMakeFiles/BinaryTrees.dir/main.cpp.o: CMakeFiles/BinaryTrees.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BinaryTrees.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BinaryTrees.dir/main.cpp.o -MF CMakeFiles/BinaryTrees.dir/main.cpp.o.d -o CMakeFiles/BinaryTrees.dir/main.cpp.o -c /home/fredi/Documents/DS_And_Algorithms/BST/main.cpp

CMakeFiles/BinaryTrees.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BinaryTrees.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fredi/Documents/DS_And_Algorithms/BST/main.cpp > CMakeFiles/BinaryTrees.dir/main.cpp.i

CMakeFiles/BinaryTrees.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BinaryTrees.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fredi/Documents/DS_And_Algorithms/BST/main.cpp -o CMakeFiles/BinaryTrees.dir/main.cpp.s

CMakeFiles/BinaryTrees.dir/MyBST.cpp.o: CMakeFiles/BinaryTrees.dir/flags.make
CMakeFiles/BinaryTrees.dir/MyBST.cpp.o: /home/fredi/Documents/DS_And_Algorithms/BST/MyBST.cpp
CMakeFiles/BinaryTrees.dir/MyBST.cpp.o: CMakeFiles/BinaryTrees.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BinaryTrees.dir/MyBST.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BinaryTrees.dir/MyBST.cpp.o -MF CMakeFiles/BinaryTrees.dir/MyBST.cpp.o.d -o CMakeFiles/BinaryTrees.dir/MyBST.cpp.o -c /home/fredi/Documents/DS_And_Algorithms/BST/MyBST.cpp

CMakeFiles/BinaryTrees.dir/MyBST.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BinaryTrees.dir/MyBST.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fredi/Documents/DS_And_Algorithms/BST/MyBST.cpp > CMakeFiles/BinaryTrees.dir/MyBST.cpp.i

CMakeFiles/BinaryTrees.dir/MyBST.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BinaryTrees.dir/MyBST.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fredi/Documents/DS_And_Algorithms/BST/MyBST.cpp -o CMakeFiles/BinaryTrees.dir/MyBST.cpp.s

# Object files for target BinaryTrees
BinaryTrees_OBJECTS = \
"CMakeFiles/BinaryTrees.dir/main.cpp.o" \
"CMakeFiles/BinaryTrees.dir/MyBST.cpp.o"

# External object files for target BinaryTrees
BinaryTrees_EXTERNAL_OBJECTS =

BinaryTrees: CMakeFiles/BinaryTrees.dir/main.cpp.o
BinaryTrees: CMakeFiles/BinaryTrees.dir/MyBST.cpp.o
BinaryTrees: CMakeFiles/BinaryTrees.dir/build.make
BinaryTrees: CMakeFiles/BinaryTrees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable BinaryTrees"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BinaryTrees.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryTrees.dir/build: BinaryTrees
.PHONY : CMakeFiles/BinaryTrees.dir/build

CMakeFiles/BinaryTrees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BinaryTrees.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BinaryTrees.dir/clean

CMakeFiles/BinaryTrees.dir/depend:
	cd /home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fredi/Documents/DS_And_Algorithms/BST /home/fredi/Documents/DS_And_Algorithms/BST /home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug /home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug /home/fredi/Documents/DS_And_Algorithms/BST/cmake-build-debug/CMakeFiles/BinaryTrees.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BinaryTrees.dir/depend
