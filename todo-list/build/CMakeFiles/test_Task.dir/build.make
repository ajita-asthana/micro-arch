# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ajeetaasthana/IdeaProjects/kernel/todo-list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build

# Include any dependencies generated for this target.
include CMakeFiles/test_Task.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_Task.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_Task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_Task.dir/flags.make

CMakeFiles/test_Task.dir/tests/test_Task.cpp.o: CMakeFiles/test_Task.dir/flags.make
CMakeFiles/test_Task.dir/tests/test_Task.cpp.o: /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/tests/test_Task.cpp
CMakeFiles/test_Task.dir/tests/test_Task.cpp.o: CMakeFiles/test_Task.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_Task.dir/tests/test_Task.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_Task.dir/tests/test_Task.cpp.o -MF CMakeFiles/test_Task.dir/tests/test_Task.cpp.o.d -o CMakeFiles/test_Task.dir/tests/test_Task.cpp.o -c /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/tests/test_Task.cpp

CMakeFiles/test_Task.dir/tests/test_Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_Task.dir/tests/test_Task.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/tests/test_Task.cpp > CMakeFiles/test_Task.dir/tests/test_Task.cpp.i

CMakeFiles/test_Task.dir/tests/test_Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_Task.dir/tests/test_Task.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/tests/test_Task.cpp -o CMakeFiles/test_Task.dir/tests/test_Task.cpp.s

CMakeFiles/test_Task.dir/src/Task.cpp.o: CMakeFiles/test_Task.dir/flags.make
CMakeFiles/test_Task.dir/src/Task.cpp.o: /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/src/Task.cpp
CMakeFiles/test_Task.dir/src/Task.cpp.o: CMakeFiles/test_Task.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_Task.dir/src/Task.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_Task.dir/src/Task.cpp.o -MF CMakeFiles/test_Task.dir/src/Task.cpp.o.d -o CMakeFiles/test_Task.dir/src/Task.cpp.o -c /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/src/Task.cpp

CMakeFiles/test_Task.dir/src/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_Task.dir/src/Task.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/src/Task.cpp > CMakeFiles/test_Task.dir/src/Task.cpp.i

CMakeFiles/test_Task.dir/src/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_Task.dir/src/Task.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/src/Task.cpp -o CMakeFiles/test_Task.dir/src/Task.cpp.s

# Object files for target test_Task
test_Task_OBJECTS = \
"CMakeFiles/test_Task.dir/tests/test_Task.cpp.o" \
"CMakeFiles/test_Task.dir/src/Task.cpp.o"

# External object files for target test_Task
test_Task_EXTERNAL_OBJECTS =

test_Task: CMakeFiles/test_Task.dir/tests/test_Task.cpp.o
test_Task: CMakeFiles/test_Task.dir/src/Task.cpp.o
test_Task: CMakeFiles/test_Task.dir/build.make
test_Task: lib/libgtest_main.a
test_Task: lib/libgtest.a
test_Task: CMakeFiles/test_Task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test_Task"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_Task.dir/link.txt --verbose=$(VERBOSE)
	/opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -D TEST_TARGET=test_Task -D TEST_EXECUTABLE=/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_Task -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_Task_TESTS -D CTEST_FILE=/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_Task[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /opt/homebrew/Cellar/cmake/3.29.4/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/test_Task.dir/build: test_Task
.PHONY : CMakeFiles/test_Task.dir/build

CMakeFiles/test_Task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_Task.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_Task.dir/clean

CMakeFiles/test_Task.dir/depend:
	cd /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ajeetaasthana/IdeaProjects/kernel/todo-list /Users/ajeetaasthana/IdeaProjects/kernel/todo-list /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/CMakeFiles/test_Task.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_Task.dir/depend

