# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Assignment4Implementation.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Assignment4Implementation.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Assignment4Implementation.dir\flags.make

CMakeFiles\Assignment4Implementation.dir\main.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment4Implementation.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\main.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\main.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\main.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\main.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\main.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\entity.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\entity.cpp.obj: ..\entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment4Implementation.dir/entity.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\entity.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\entity.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/entity.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\entity.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\entity.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/entity.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\entity.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\entity.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\date.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\date.cpp.obj: ..\date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Assignment4Implementation.dir/date.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\date.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\date.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/date.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\date.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\date.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/date.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\date.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\date.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.obj: ..\childrensbook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Assignment4Implementation.dir/childrensbook.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\childrensbook.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/childrensbook.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\childrensbook.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/childrensbook.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\childrensbook.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.obj: ..\fictionbook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Assignment4Implementation.dir/fictionbook.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\fictionbook.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/fictionbook.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\fictionbook.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/fictionbook.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\fictionbook.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.obj: ..\entityfactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Assignment4Implementation.dir/entityfactory.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\entityfactory.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/entityfactory.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\entityfactory.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/entityfactory.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\entityfactory.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\periodical.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\periodical.cpp.obj: ..\periodical.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Assignment4Implementation.dir/periodical.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\periodical.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\periodical.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\periodical.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/periodical.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\periodical.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\periodical.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\periodical.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/periodical.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\periodical.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\periodical.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\node.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\node.cpp.obj: ..\node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Assignment4Implementation.dir/node.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\node.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\node.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/node.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\node.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\node.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/node.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\node.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\node.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\tree.cpp.obj: CMakeFiles\Assignment4Implementation.dir\flags.make
CMakeFiles\Assignment4Implementation.dir\tree.cpp.obj: ..\tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Assignment4Implementation.dir/tree.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment4Implementation.dir\tree.cpp.obj /FdCMakeFiles\Assignment4Implementation.dir\ /FS -c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\tree.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment4Implementation.dir/tree.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\Assignment4Implementation.dir\tree.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\tree.cpp"
<<

CMakeFiles\Assignment4Implementation.dir\tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment4Implementation.dir/tree.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment4Implementation.dir\tree.cpp.s /c "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\tree.cpp"
<<

# Object files for target Assignment4Implementation
Assignment4Implementation_OBJECTS = \
"CMakeFiles\Assignment4Implementation.dir\main.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\entity.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\date.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\periodical.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\node.cpp.obj" \
"CMakeFiles\Assignment4Implementation.dir\tree.cpp.obj"

# External object files for target Assignment4Implementation
Assignment4Implementation_EXTERNAL_OBJECTS =

Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\main.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\entity.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\date.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\childrensbook.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\fictionbook.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\entityfactory.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\periodical.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\node.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\tree.cpp.obj
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\build.make
Assignment4Implementation.exe: CMakeFiles\Assignment4Implementation.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable Assignment4Implementation.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Assignment4Implementation.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Assignment4Implementation.dir\objects1.rsp @<<
 /out:Assignment4Implementation.exe /implib:Assignment4Implementation.lib /pdb:"C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\Assignment4Implementation.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Assignment4Implementation.dir\build: Assignment4Implementation.exe

.PHONY : CMakeFiles\Assignment4Implementation.dir\build

CMakeFiles\Assignment4Implementation.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment4Implementation.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Assignment4Implementation.dir\clean

CMakeFiles\Assignment4Implementation.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation" "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation" "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug" "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug" "C:\Users\austi\Documents\College\UWB\2021-22\FALL21\CSS 343\Assignment4Implementation\cmake-build-debug\CMakeFiles\Assignment4Implementation.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Assignment4Implementation.dir\depend

