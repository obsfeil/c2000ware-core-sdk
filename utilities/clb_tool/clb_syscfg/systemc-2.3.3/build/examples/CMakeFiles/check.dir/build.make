# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\systemc-2.3.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\systemc-2.3.3\build

# Utility rule file for check.

# Include the progress variables for this target.
include examples/CMakeFiles/check.dir/progress.make

examples/CMakeFiles/check:
	cd /d C:\systemc-2.3.3\build\examples && "C:\Program Files\CMake\bin\ctest.exe" -C Release

check: examples/CMakeFiles/check
check: examples/CMakeFiles/check.dir/build.make

.PHONY : check

# Rule to build all files generated by this target.
examples/CMakeFiles/check.dir/build: check

.PHONY : examples/CMakeFiles/check.dir/build

examples/CMakeFiles/check.dir/clean:
	cd /d C:\systemc-2.3.3\build\examples && $(CMAKE_COMMAND) -P CMakeFiles\check.dir\cmake_clean.cmake
.PHONY : examples/CMakeFiles/check.dir/clean

examples/CMakeFiles/check.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\systemc-2.3.3 C:\systemc-2.3.3\examples C:\systemc-2.3.3\build C:\systemc-2.3.3\build\examples C:\systemc-2.3.3\build\examples\CMakeFiles\check.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/check.dir/depend
