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
include components/man/CMakeFiles/man.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include components/man/CMakeFiles/man.dir/compiler_depend.make

# Include the progress variables for this target.
include components/man/CMakeFiles/man.dir/progress.make

# Include the compile flags for this target's objects.
include components/man/CMakeFiles/man.dir/flags.make

components/man/CMakeFiles/man.dir/man.c.obj: components/man/CMakeFiles/man.dir/flags.make
components/man/CMakeFiles/man.dir/man.c.obj: components/man/CMakeFiles/man.dir/includes_C.rsp
components/man/CMakeFiles/man.dir/man.c.obj: D:/code/CProject/C-OO/polymorphism/components/man/man.c
components/man/CMakeFiles/man.dir/man.c.obj: components/man/CMakeFiles/man.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\CProject\C-OO\polymorphism\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object components/man/CMakeFiles/man.dir/man.c.obj"
	cd /d D:\code\CProject\C-OO\polymorphism\build\components\man && C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT components/man/CMakeFiles/man.dir/man.c.obj -MF CMakeFiles\man.dir\man.c.obj.d -o CMakeFiles\man.dir\man.c.obj -c D:\code\CProject\C-OO\polymorphism\components\man\man.c

components/man/CMakeFiles/man.dir/man.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/man.dir/man.c.i"
	cd /d D:\code\CProject\C-OO\polymorphism\build\components\man && C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\CProject\C-OO\polymorphism\components\man\man.c > CMakeFiles\man.dir\man.c.i

components/man/CMakeFiles/man.dir/man.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/man.dir/man.c.s"
	cd /d D:\code\CProject\C-OO\polymorphism\build\components\man && C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\CProject\C-OO\polymorphism\components\man\man.c -o CMakeFiles\man.dir\man.c.s

# Object files for target man
man_OBJECTS = \
"CMakeFiles/man.dir/man.c.obj"

# External object files for target man
man_EXTERNAL_OBJECTS =

components/man/libman.a: components/man/CMakeFiles/man.dir/man.c.obj
components/man/libman.a: components/man/CMakeFiles/man.dir/build.make
components/man/libman.a: components/man/CMakeFiles/man.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\CProject\C-OO\polymorphism\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libman.a"
	cd /d D:\code\CProject\C-OO\polymorphism\build\components\man && $(CMAKE_COMMAND) -P CMakeFiles\man.dir\cmake_clean_target.cmake
	cd /d D:\code\CProject\C-OO\polymorphism\build\components\man && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\man.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
components/man/CMakeFiles/man.dir/build: components/man/libman.a
.PHONY : components/man/CMakeFiles/man.dir/build

components/man/CMakeFiles/man.dir/clean:
	cd /d D:\code\CProject\C-OO\polymorphism\build\components\man && $(CMAKE_COMMAND) -P CMakeFiles\man.dir\cmake_clean.cmake
.PHONY : components/man/CMakeFiles/man.dir/clean

components/man/CMakeFiles/man.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\CProject\C-OO\polymorphism D:\code\CProject\C-OO\polymorphism\components\man D:\code\CProject\C-OO\polymorphism\build D:\code\CProject\C-OO\polymorphism\build\components\man D:\code\CProject\C-OO\polymorphism\build\components\man\CMakeFiles\man.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : components/man/CMakeFiles/man.dir/depend

