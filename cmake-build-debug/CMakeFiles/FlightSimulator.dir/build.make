# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /snap/clion/56/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/56/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ben/CLionProjects/FlightSimulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ben/CLionProjects/FlightSimulator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FlightSimulator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FlightSimulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FlightSimulator.dir/flags.make

CMakeFiles/FlightSimulator.dir/main.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FlightSimulator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/main.cpp.o -c /home/ben/CLionProjects/FlightSimulator/main.cpp

CMakeFiles/FlightSimulator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/main.cpp > CMakeFiles/FlightSimulator.dir/main.cpp.i

CMakeFiles/FlightSimulator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/main.cpp -o CMakeFiles/FlightSimulator.dir/main.cpp.s

CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.o: ../Lexer/Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Lexer/Lexer.cpp

CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Lexer/Lexer.cpp > CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.i

CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Lexer/Lexer.cpp -o CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.s

CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.o: ../Lexer/CodeRow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Lexer/CodeRow.cpp

CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Lexer/CodeRow.cpp > CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.i

CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Lexer/CodeRow.cpp -o CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.s

CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.o: ../Parser/Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Parser/Parser.cpp

CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Parser/Parser.cpp > CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.i

CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Parser/Parser.cpp -o CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.o: ../Commands/DefineVar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/DefineVar.cpp

CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/DefineVar.cpp > CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/DefineVar.cpp -o CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.o: ../Commands/OpenServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/OpenServer.cpp

CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/OpenServer.cpp > CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/OpenServer.cpp -o CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.o: ../Commands/Connect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/Connect.cpp

CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/Connect.cpp > CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/Connect.cpp -o CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.o: ../Commands/Condition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/Condition.cpp

CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/Condition.cpp > CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/Condition.cpp -o CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/If.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/If.cpp.o: ../Commands/If.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/If.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/If.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/If.cpp

CMakeFiles/FlightSimulator.dir/Commands/If.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/If.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/If.cpp > CMakeFiles/FlightSimulator.dir/Commands/If.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/If.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/If.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/If.cpp -o CMakeFiles/FlightSimulator.dir/Commands/If.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/While.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/While.cpp.o: ../Commands/While.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/While.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/While.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/While.cpp

CMakeFiles/FlightSimulator.dir/Commands/While.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/While.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/While.cpp > CMakeFiles/FlightSimulator.dir/Commands/While.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/While.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/While.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/While.cpp -o CMakeFiles/FlightSimulator.dir/Commands/While.cpp.s

CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.o: ../Interpreter/Interpreter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Interpreter/Interpreter.cpp

CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Interpreter/Interpreter.cpp > CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.i

CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Interpreter/Interpreter.cpp -o CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.s

CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.o: ../Interpreter/Symbol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Interpreter/Symbol.cpp

CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Interpreter/Symbol.cpp > CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.i

CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Interpreter/Symbol.cpp -o CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.s

CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.o: CMakeFiles/FlightSimulator.dir/flags.make
CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.o: ../Commands/PutVar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.o -c /home/ben/CLionProjects/FlightSimulator/Commands/PutVar.cpp

CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ben/CLionProjects/FlightSimulator/Commands/PutVar.cpp > CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.i

CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ben/CLionProjects/FlightSimulator/Commands/PutVar.cpp -o CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.s

# Object files for target FlightSimulator
FlightSimulator_OBJECTS = \
"CMakeFiles/FlightSimulator.dir/main.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/If.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/While.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.o" \
"CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.o"

# External object files for target FlightSimulator
FlightSimulator_EXTERNAL_OBJECTS =

FlightSimulator: CMakeFiles/FlightSimulator.dir/main.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Lexer/Lexer.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Lexer/CodeRow.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Parser/Parser.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/DefineVar.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/OpenServer.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/Connect.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/Condition.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/If.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/While.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Interpreter/Interpreter.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Interpreter/Symbol.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/Commands/PutVar.cpp.o
FlightSimulator: CMakeFiles/FlightSimulator.dir/build.make
FlightSimulator: CMakeFiles/FlightSimulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable FlightSimulator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FlightSimulator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FlightSimulator.dir/build: FlightSimulator

.PHONY : CMakeFiles/FlightSimulator.dir/build

CMakeFiles/FlightSimulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FlightSimulator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FlightSimulator.dir/clean

CMakeFiles/FlightSimulator.dir/depend:
	cd /home/ben/CLionProjects/FlightSimulator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ben/CLionProjects/FlightSimulator /home/ben/CLionProjects/FlightSimulator /home/ben/CLionProjects/FlightSimulator/cmake-build-debug /home/ben/CLionProjects/FlightSimulator/cmake-build-debug /home/ben/CLionProjects/FlightSimulator/cmake-build-debug/CMakeFiles/FlightSimulator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FlightSimulator.dir/depend

