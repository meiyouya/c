# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "F:\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\projects\clion_work\c\russian-shape

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\projects\clion_work\c\russian-shape\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/russian_shape.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/russian_shape.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/russian_shape.dir/flags.make

CMakeFiles/russian_shape.dir/main.c.obj: CMakeFiles/russian_shape.dir/flags.make
CMakeFiles/russian_shape.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\projects\clion_work\c\russian-shape\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/russian_shape.dir/main.c.obj"
	F:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\russian_shape.dir\main.c.obj   -c E:\projects\clion_work\c\russian-shape\main.c

CMakeFiles/russian_shape.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/russian_shape.dir/main.c.i"
	F:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\projects\clion_work\c\russian-shape\main.c > CMakeFiles\russian_shape.dir\main.c.i

CMakeFiles/russian_shape.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/russian_shape.dir/main.c.s"
	F:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\projects\clion_work\c\russian-shape\main.c -o CMakeFiles\russian_shape.dir\main.c.s

# Object files for target russian_shape
russian_shape_OBJECTS = \
"CMakeFiles/russian_shape.dir/main.c.obj"

# External object files for target russian_shape
russian_shape_EXTERNAL_OBJECTS =

russian_shape.exe: CMakeFiles/russian_shape.dir/main.c.obj
russian_shape.exe: CMakeFiles/russian_shape.dir/build.make
russian_shape.exe: CMakeFiles/russian_shape.dir/linklibs.rsp
russian_shape.exe: CMakeFiles/russian_shape.dir/objects1.rsp
russian_shape.exe: CMakeFiles/russian_shape.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\projects\clion_work\c\russian-shape\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable russian_shape.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\russian_shape.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/russian_shape.dir/build: russian_shape.exe

.PHONY : CMakeFiles/russian_shape.dir/build

CMakeFiles/russian_shape.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\russian_shape.dir\cmake_clean.cmake
.PHONY : CMakeFiles/russian_shape.dir/clean

CMakeFiles/russian_shape.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\projects\clion_work\c\russian-shape E:\projects\clion_work\c\russian-shape E:\projects\clion_work\c\russian-shape\cmake-build-debug E:\projects\clion_work\c\russian-shape\cmake-build-debug E:\projects\clion_work\c\russian-shape\cmake-build-debug\CMakeFiles\russian_shape.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/russian_shape.dir/depend

