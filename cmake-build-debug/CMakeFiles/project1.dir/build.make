# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "Z:\CLion\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "Z:\CLion\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Sora\Documents\COP4534\project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Sora\Documents\COP4534\project1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project1.dir/flags.make

CMakeFiles/project1.dir/file_io.cpp.obj: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/file_io.cpp.obj: CMakeFiles/project1.dir/includes_CXX.rsp
CMakeFiles/project1.dir/file_io.cpp.obj: ../file_io.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Sora\Documents\COP4534\project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project1.dir/file_io.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\project1.dir\file_io.cpp.obj -c D:\Sora\Documents\COP4534\project1\file_io.cpp

CMakeFiles/project1.dir/file_io.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/file_io.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Sora\Documents\COP4534\project1\file_io.cpp > CMakeFiles\project1.dir\file_io.cpp.i

CMakeFiles/project1.dir/file_io.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/file_io.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Sora\Documents\COP4534\project1\file_io.cpp -o CMakeFiles\project1.dir\file_io.cpp.s

CMakeFiles/project1.dir/test/Test1.cpp.obj: CMakeFiles/project1.dir/flags.make
CMakeFiles/project1.dir/test/Test1.cpp.obj: CMakeFiles/project1.dir/includes_CXX.rsp
CMakeFiles/project1.dir/test/Test1.cpp.obj: ../test/Test1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Sora\Documents\COP4534\project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project1.dir/test/Test1.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\project1.dir\test\Test1.cpp.obj -c D:\Sora\Documents\COP4534\project1\test\Test1.cpp

CMakeFiles/project1.dir/test/Test1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project1.dir/test/Test1.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Sora\Documents\COP4534\project1\test\Test1.cpp > CMakeFiles\project1.dir\test\Test1.cpp.i

CMakeFiles/project1.dir/test/Test1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project1.dir/test/Test1.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Sora\Documents\COP4534\project1\test\Test1.cpp -o CMakeFiles\project1.dir\test\Test1.cpp.s

# Object files for target project1
project1_OBJECTS = \
"CMakeFiles/project1.dir/file_io.cpp.obj" \
"CMakeFiles/project1.dir/test/Test1.cpp.obj"

# External object files for target project1
project1_EXTERNAL_OBJECTS =

project1.exe: CMakeFiles/project1.dir/file_io.cpp.obj
project1.exe: CMakeFiles/project1.dir/test/Test1.cpp.obj
project1.exe: CMakeFiles/project1.dir/build.make
project1.exe: CMakeFiles/project1.dir/linklibs.rsp
project1.exe: CMakeFiles/project1.dir/objects1.rsp
project1.exe: CMakeFiles/project1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Sora\Documents\COP4534\project1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable project1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\project1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project1.dir/build: project1.exe

.PHONY : CMakeFiles/project1.dir/build

CMakeFiles/project1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\project1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/project1.dir/clean

CMakeFiles/project1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Sora\Documents\COP4534\project1 D:\Sora\Documents\COP4534\project1 D:\Sora\Documents\COP4534\project1\cmake-build-debug D:\Sora\Documents\COP4534\project1\cmake-build-debug D:\Sora\Documents\COP4534\project1\cmake-build-debug\CMakeFiles\project1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project1.dir/depend
