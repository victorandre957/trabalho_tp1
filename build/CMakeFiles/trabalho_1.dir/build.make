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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/victor_moraes/Documentos/Unb/TP1/trabalho_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build

# Include any dependencies generated for this target.
include CMakeFiles/trabalho_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/trabalho_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/trabalho_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trabalho_1.dir/flags.make

CMakeFiles/trabalho_1.dir/main.cpp.o: CMakeFiles/trabalho_1.dir/flags.make
CMakeFiles/trabalho_1.dir/main.cpp.o: /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/main.cpp
CMakeFiles/trabalho_1.dir/main.cpp.o: CMakeFiles/trabalho_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trabalho_1.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/trabalho_1.dir/main.cpp.o -MF CMakeFiles/trabalho_1.dir/main.cpp.o.d -o CMakeFiles/trabalho_1.dir/main.cpp.o -c /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/main.cpp

CMakeFiles/trabalho_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trabalho_1.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/main.cpp > CMakeFiles/trabalho_1.dir/main.cpp.i

CMakeFiles/trabalho_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trabalho_1.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/main.cpp -o CMakeFiles/trabalho_1.dir/main.cpp.s

CMakeFiles/trabalho_1.dir/src/Domain.cpp.o: CMakeFiles/trabalho_1.dir/flags.make
CMakeFiles/trabalho_1.dir/src/Domain.cpp.o: /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/src/Domain.cpp
CMakeFiles/trabalho_1.dir/src/Domain.cpp.o: CMakeFiles/trabalho_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/trabalho_1.dir/src/Domain.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/trabalho_1.dir/src/Domain.cpp.o -MF CMakeFiles/trabalho_1.dir/src/Domain.cpp.o.d -o CMakeFiles/trabalho_1.dir/src/Domain.cpp.o -c /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/src/Domain.cpp

CMakeFiles/trabalho_1.dir/src/Domain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trabalho_1.dir/src/Domain.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/src/Domain.cpp > CMakeFiles/trabalho_1.dir/src/Domain.cpp.i

CMakeFiles/trabalho_1.dir/src/Domain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trabalho_1.dir/src/Domain.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/src/Domain.cpp -o CMakeFiles/trabalho_1.dir/src/Domain.cpp.s

# Object files for target trabalho_1
trabalho_1_OBJECTS = \
"CMakeFiles/trabalho_1.dir/main.cpp.o" \
"CMakeFiles/trabalho_1.dir/src/Domain.cpp.o"

# External object files for target trabalho_1
trabalho_1_EXTERNAL_OBJECTS =

trabalho_1: CMakeFiles/trabalho_1.dir/main.cpp.o
trabalho_1: CMakeFiles/trabalho_1.dir/src/Domain.cpp.o
trabalho_1: CMakeFiles/trabalho_1.dir/build.make
trabalho_1: CMakeFiles/trabalho_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable trabalho_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trabalho_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trabalho_1.dir/build: trabalho_1
.PHONY : CMakeFiles/trabalho_1.dir/build

CMakeFiles/trabalho_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trabalho_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trabalho_1.dir/clean

CMakeFiles/trabalho_1.dir/depend:
	cd /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/victor_moraes/Documentos/Unb/TP1/trabalho_1 /home/victor_moraes/Documentos/Unb/TP1/trabalho_1 /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build /home/victor_moraes/Documentos/Unb/TP1/trabalho_1/build/CMakeFiles/trabalho_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trabalho_1.dir/depend

