# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\C\pointer\OO\packageSimplified

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\C\pointer\OO\packageSimplified\build

# Include any dependencies generated for this target.
include CMakeFiles/packageSimplified.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/packageSimplified.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/packageSimplified.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/packageSimplified.dir/flags.make

CMakeFiles/packageSimplified.dir/main.c.obj: CMakeFiles/packageSimplified.dir/flags.make
CMakeFiles/packageSimplified.dir/main.c.obj: CMakeFiles/packageSimplified.dir/includes_C.rsp
CMakeFiles/packageSimplified.dir/main.c.obj: D:/code/C/pointer/OO/packageSimplified/main.c
CMakeFiles/packageSimplified.dir/main.c.obj: CMakeFiles/packageSimplified.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\C\pointer\OO\packageSimplified\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/packageSimplified.dir/main.c.obj"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/packageSimplified.dir/main.c.obj -MF CMakeFiles\packageSimplified.dir\main.c.obj.d -o CMakeFiles\packageSimplified.dir\main.c.obj -c D:\code\C\pointer\OO\packageSimplified\main.c

CMakeFiles/packageSimplified.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/packageSimplified.dir/main.c.i"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\C\pointer\OO\packageSimplified\main.c > CMakeFiles\packageSimplified.dir\main.c.i

CMakeFiles/packageSimplified.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/packageSimplified.dir/main.c.s"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\C\pointer\OO\packageSimplified\main.c -o CMakeFiles\packageSimplified.dir\main.c.s

# Object files for target packageSimplified
packageSimplified_OBJECTS = \
"CMakeFiles/packageSimplified.dir/main.c.obj"

# External object files for target packageSimplified
packageSimplified_EXTERNAL_OBJECTS =

packageSimplified.exe: CMakeFiles/packageSimplified.dir/main.c.obj
packageSimplified.exe: CMakeFiles/packageSimplified.dir/build.make
packageSimplified.exe: components/Object/libObject.a
packageSimplified.exe: CMakeFiles/packageSimplified.dir/linkLibs.rsp
packageSimplified.exe: CMakeFiles/packageSimplified.dir/objects1
packageSimplified.exe: CMakeFiles/packageSimplified.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\C\pointer\OO\packageSimplified\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable packageSimplified.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\packageSimplified.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/packageSimplified.dir/build: packageSimplified.exe
.PHONY : CMakeFiles/packageSimplified.dir/build

CMakeFiles/packageSimplified.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\packageSimplified.dir\cmake_clean.cmake
.PHONY : CMakeFiles/packageSimplified.dir/clean

CMakeFiles/packageSimplified.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\C\pointer\OO\packageSimplified D:\code\C\pointer\OO\packageSimplified D:\code\C\pointer\OO\packageSimplified\build D:\code\C\pointer\OO\packageSimplified\build D:\code\C\pointer\OO\packageSimplified\build\CMakeFiles\packageSimplified.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/packageSimplified.dir/depend

