# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\CLionProjects\Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\CLionProjects\Game\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles\Game.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Game.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Game.dir\flags.make

CMakeFiles\Game.dir\main.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\main.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\main.cpp
<<

CMakeFiles\Game.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\main.cpp
<<

CMakeFiles\Game.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\main.cpp.s /c C:\Users\Admin\CLionProjects\Game\main.cpp
<<

CMakeFiles\Game.dir\src\Person.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Person.cpp.obj: ..\src\Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/src/Person.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Person.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Person.cpp
<<

CMakeFiles\Game.dir\src\Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Person.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Person.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Person.cpp
<<

CMakeFiles\Game.dir\src\Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Person.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Person.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Person.cpp
<<

CMakeFiles\Game.dir\src\Arrow.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Arrow.cpp.obj: ..\src\Arrow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/src/Arrow.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Arrow.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Arrow.cpp
<<

CMakeFiles\Game.dir\src\Arrow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Arrow.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Arrow.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Arrow.cpp
<<

CMakeFiles\Game.dir\src\Arrow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Arrow.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Arrow.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Arrow.cpp
<<

CMakeFiles\Game.dir\src\Enemy.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Enemy.cpp.obj: ..\src\Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/src/Enemy.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Enemy.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Enemy.cpp
<<

CMakeFiles\Game.dir\src\Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Enemy.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Enemy.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Enemy.cpp
<<

CMakeFiles\Game.dir\src\Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Enemy.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Enemy.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Enemy.cpp
<<

CMakeFiles\Game.dir\src\Block.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Block.cpp.obj: ..\src\Block.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/src/Block.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Block.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Block.cpp
<<

CMakeFiles\Game.dir\src\Block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Block.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Block.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Block.cpp
<<

CMakeFiles\Game.dir\src\Block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Block.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Block.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Block.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.obj: ..\src\Pull_of_enemies.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Game.dir/src/Pull_of_enemies.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Pull_of_enemies.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Pull_of_enemies.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Pull_of_enemies.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Pull_of_enemies.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Pull_of_enemies.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Pull_of_enemies.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Pull_of_enemies.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.obj: ..\src\Pull_of_platforms.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Game.dir/src/Pull_of_platforms.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Pull_of_platforms.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Pull_of_platforms.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Pull_of_platforms.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Pull_of_platforms.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Pull_of_platforms.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Pull_of_platforms.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Pull_of_platforms.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_floor.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Pull_of_floor.cpp.obj: ..\src\Pull_of_floor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Game.dir/src/Pull_of_floor.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Pull_of_floor.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Pull_of_floor.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_floor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Pull_of_floor.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Pull_of_floor.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Pull_of_floor.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_floor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Pull_of_floor.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Pull_of_floor.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Pull_of_floor.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_background.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Pull_of_background.cpp.obj: ..\src\Pull_of_background.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Game.dir/src/Pull_of_background.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Pull_of_background.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Pull_of_background.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_background.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Pull_of_background.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Pull_of_background.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Pull_of_background.cpp
<<

CMakeFiles\Game.dir\src\Pull_of_background.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Pull_of_background.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Pull_of_background.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Pull_of_background.cpp
<<

CMakeFiles\Game.dir\src\Person_dop_functions.cpp.obj: CMakeFiles\Game.dir\flags.make
CMakeFiles\Game.dir\src\Person_dop_functions.cpp.obj: ..\src\Person_dop_functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Game.dir/src/Person_dop_functions.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Game.dir\src\Person_dop_functions.cpp.obj /FdCMakeFiles\Game.dir\ /FS -c C:\Users\Admin\CLionProjects\Game\src\Person_dop_functions.cpp
<<

CMakeFiles\Game.dir\src\Person_dop_functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Person_dop_functions.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe > CMakeFiles\Game.dir\src\Person_dop_functions.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\Game\src\Person_dop_functions.cpp
<<

CMakeFiles\Game.dir\src\Person_dop_functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Person_dop_functions.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Game.dir\src\Person_dop_functions.cpp.s /c C:\Users\Admin\CLionProjects\Game\src\Person_dop_functions.cpp
<<

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles\Game.dir\main.cpp.obj" \
"CMakeFiles\Game.dir\src\Person.cpp.obj" \
"CMakeFiles\Game.dir\src\Arrow.cpp.obj" \
"CMakeFiles\Game.dir\src\Enemy.cpp.obj" \
"CMakeFiles\Game.dir\src\Block.cpp.obj" \
"CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.obj" \
"CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.obj" \
"CMakeFiles\Game.dir\src\Pull_of_floor.cpp.obj" \
"CMakeFiles\Game.dir\src\Pull_of_background.cpp.obj" \
"CMakeFiles\Game.dir\src\Person_dop_functions.cpp.obj"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game.exe: CMakeFiles\Game.dir\main.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Person.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Arrow.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Enemy.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Block.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Pull_of_enemies.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Pull_of_platforms.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Pull_of_floor.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Pull_of_background.cpp.obj
Game.exe: CMakeFiles\Game.dir\src\Person_dop_functions.cpp.obj
Game.exe: CMakeFiles\Game.dir\build.make
Game.exe: CMakeFiles\Game.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Game.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Game.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x64\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\Game.dir\objects1.rsp @<<
 /out:Game.exe /implib:Game.lib /pdb:C:\Users\Admin\CLionProjects\Game\cmake-build-release\Game.pdb /version:0.0 /machine:x64 /INCREMENTAL:NO /subsystem:console   -LIBPATH:C:\Users\Admin\CLionProjects\Game\ext\SFML\lib  sfml-graphics-s-d.lib sfml-window-s-d.lib sfml-system-s-d.lib opengl32.lib freetype.lib winmm.lib gdi32.lib sfml-audio-s-d.lib openal32.lib flac.lib vorbisenc.lib vorbisfile.lib vorbis.lib ogg.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Game.dir\build: Game.exe
.PHONY : CMakeFiles\Game.dir\build

CMakeFiles\Game.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Game.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Game.dir\clean

CMakeFiles\Game.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Admin\CLionProjects\Game C:\Users\Admin\CLionProjects\Game C:\Users\Admin\CLionProjects\Game\cmake-build-release C:\Users\Admin\CLionProjects\Game\cmake-build-release C:\Users\Admin\CLionProjects\Game\cmake-build-release\CMakeFiles\Game.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Game.dir\depend

