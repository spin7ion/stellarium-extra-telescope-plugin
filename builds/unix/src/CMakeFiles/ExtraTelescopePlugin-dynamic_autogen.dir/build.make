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
CMAKE_SOURCE_DIR = /home/spin7ion/tmp/stellarium-extra-telescope-plugin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix

# Utility rule file for ExtraTelescopePlugin-dynamic_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/progress.make

src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target ExtraTelescopePlugin-dynamic"
	cd /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix/src && /usr/bin/cmake -E cmake_autogen /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix/src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/AutogenInfo.json ""

ExtraTelescopePlugin-dynamic_autogen: src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen
ExtraTelescopePlugin-dynamic_autogen: src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/build.make

.PHONY : ExtraTelescopePlugin-dynamic_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/build: ExtraTelescopePlugin-dynamic_autogen

.PHONY : src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/build

src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/clean:
	cd /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix/src && $(CMAKE_COMMAND) -P CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/clean

src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/depend:
	cd /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/spin7ion/tmp/stellarium-extra-telescope-plugin /home/spin7ion/tmp/stellarium-extra-telescope-plugin/src /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix/src /home/spin7ion/tmp/stellarium-extra-telescope-plugin/builds/unix/src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ExtraTelescopePlugin-dynamic_autogen.dir/depend

