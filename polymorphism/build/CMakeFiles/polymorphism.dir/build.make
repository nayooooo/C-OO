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
CMAKE_SOURCE_DIR = D:\code\CProject\C-OO\polymorphism

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\CProject\C-OO\polymorphism\build

# Include any dependencies generated for this target.
include CMakeFiles/polymorphism.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/polymorphism.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/polymorphism.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/polymorphism.dir/flags.make

CMakeFiles/polymorphism.dir/main.c.obj: CMakeFiles/polymorphism.dir/flags.make
CMakeFiles/polymorphism.dir/main.c.obj: CMakeFiles/polymorphism.dir/includes_C.rsp
CMakeFiles/polymorphism.dir/main.c.obj: D:/code/CProject/C-OO/polymorphism/main.c
CMakeFiles/polymorphism.dir/main.c.obj: CMakeFiles/polymorphism.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\CProject\C-OO\polymorphism\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/polymorphism.dir/main.c.obj"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/polymorphism.dir/main.c.obj -MF CMakeFiles\polymorphism.dir\main.c.obj.d -o CMakeFiles\polymorphism.dir\main.c.obj -c D:\code\CProject\C-OO\polymorphism\main.c

CMakeFiles/polymorphism.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/polymorphism.dir/main.c.i"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\CProject\C-OO\polymorphism\main.c > CMakeFiles\polymorphism.dir\main.c.i

CMakeFiles/polymorphism.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/polymorphism.dir/main.c.s"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\CProject\C-OO\polymorphism\main.c -o CMakeFiles\polymorphism.dir\main.c.s

# Object files for target polymorphism
polymorphism_OBJECTS = \
"CMakeFiles/polymorphism.dir/main.c.obj"

# External object files for target polymorphism
polymorphism_EXTERNAL_OBJECTS =

polymorphism.exe: CMakeFiles/polymorphism.dir/main.c.obj
polymorphism.exe: CMakeFiles/polymorphism.dir/build.make
polymorphism.exe: components/object/libobject.a
polymorphism.exe: components/person/libperson.a
polymorphism.exe: components/man/libman.a
polymorphism.exe: components/person/libperson.a
polymorphism.exe: components/object/libobject.a
polymorphism.exe: CMakeFiles/polymorphism.dir/linkLibs.rsp
polymorphism.exe: CMakeFiles/polymorphism.dir/objects1
polymorphism.exe: CMakeFiles/polymorphism.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\CProject\C-OO\polymorphism\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable polymorphism.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\polymorphism.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/polymorphism.dir/build: polymorphism.exe
.PHONY : CMakeFiles/polymorphism.dir/build

CMakeFiles/polymorphism.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\polymorphism.dir\cmake_clean.cmake
.PHONY : CMakeFiles/polymorphism.dir/clean

CMakeFiles/polymorphism.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\CProject\C-OO\polymorphism D:\code\CProject\C-OO\polymorphism D:\code\CProject\C-OO\polymorphism\build D:\code\CProject\C-OO\polymorphism\build D:\code\CProject\C-OO\polymorphism\build\CMakeFiles\polymorphism.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/polymorphism.dir/depend

