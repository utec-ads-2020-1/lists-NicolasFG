# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lists_NicolasFG_master.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lists_NicolasFG_master.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lists_NicolasFG_master.dir/flags.make

CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.obj: CMakeFiles/lists_NicolasFG_master.dir/flags.make
CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.obj: CMakeFiles/lists_NicolasFG_master.dir/includes_CXX.rsp
CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.obj: ../mock/mocker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lists_NicolasFG_master.dir\mock\mocker.cpp.obj -c C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\mock\mocker.cpp

CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\mock\mocker.cpp > CMakeFiles\lists_NicolasFG_master.dir\mock\mocker.cpp.i

CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\mock\mocker.cpp -o CMakeFiles\lists_NicolasFG_master.dir\mock\mocker.cpp.s

CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.obj: CMakeFiles/lists_NicolasFG_master.dir/flags.make
CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.obj: CMakeFiles/lists_NicolasFG_master.dir/includes_CXX.rsp
CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.obj: ../test/tester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lists_NicolasFG_master.dir\test\tester.cpp.obj -c C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\test\tester.cpp

CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\test\tester.cpp > CMakeFiles\lists_NicolasFG_master.dir\test\tester.cpp.i

CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\test\tester.cpp -o CMakeFiles\lists_NicolasFG_master.dir\test\tester.cpp.s

CMakeFiles/lists_NicolasFG_master.dir/main.cpp.obj: CMakeFiles/lists_NicolasFG_master.dir/flags.make
CMakeFiles/lists_NicolasFG_master.dir/main.cpp.obj: CMakeFiles/lists_NicolasFG_master.dir/includes_CXX.rsp
CMakeFiles/lists_NicolasFG_master.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lists_NicolasFG_master.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lists_NicolasFG_master.dir\main.cpp.obj -c C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\main.cpp

CMakeFiles/lists_NicolasFG_master.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lists_NicolasFG_master.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\main.cpp > CMakeFiles\lists_NicolasFG_master.dir\main.cpp.i

CMakeFiles/lists_NicolasFG_master.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lists_NicolasFG_master.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\main.cpp -o CMakeFiles\lists_NicolasFG_master.dir\main.cpp.s

# Object files for target lists_NicolasFG_master
lists_NicolasFG_master_OBJECTS = \
"CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.obj" \
"CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.obj" \
"CMakeFiles/lists_NicolasFG_master.dir/main.cpp.obj"

# External object files for target lists_NicolasFG_master
lists_NicolasFG_master_EXTERNAL_OBJECTS =

lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/mock/mocker.cpp.obj
lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/test/tester.cpp.obj
lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/main.cpp.obj
lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/build.make
lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/linklibs.rsp
lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/objects1.rsp
lists_NicolasFG_master.exe: CMakeFiles/lists_NicolasFG_master.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lists_NicolasFG_master.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lists_NicolasFG_master.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lists_NicolasFG_master.dir/build: lists_NicolasFG_master.exe

.PHONY : CMakeFiles/lists_NicolasFG_master.dir/build

CMakeFiles/lists_NicolasFG_master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lists_NicolasFG_master.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lists_NicolasFG_master.dir/clean

CMakeFiles/lists_NicolasFG_master.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug C:\Users\Nicolas-PC\Desktop\lists-NicolasFG-master\cmake-build-debug\CMakeFiles\lists_NicolasFG_master.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lists_NicolasFG_master.dir/depend
