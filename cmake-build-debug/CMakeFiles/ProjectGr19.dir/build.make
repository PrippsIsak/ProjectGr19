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
CMAKE_COMMAND = C:\Users\Axelsson\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Axelsson\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Axelsson\Desktop\ProjectGr19

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\ProjectGr19.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\ProjectGr19.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\ProjectGr19.dir\flags.make

CMakeFiles\ProjectGr19.dir\commonFuncs.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\commonFuncs.c.obj: ..\commonFuncs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ProjectGr19.dir/commonFuncs.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\commonFuncs.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\commonFuncs.c
<<

CMakeFiles\ProjectGr19.dir\commonFuncs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/commonFuncs.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\commonFuncs.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\commonFuncs.c
<<

CMakeFiles\ProjectGr19.dir\commonFuncs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/commonFuncs.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\commonFuncs.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\commonFuncs.c
<<

CMakeFiles\ProjectGr19.dir\display.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\display.c.obj: ..\display.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ProjectGr19.dir/display.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\display.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\display.c
<<

CMakeFiles\ProjectGr19.dir\display.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/display.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\display.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\display.c
<<

CMakeFiles\ProjectGr19.dir\display.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/display.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\display.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\display.c
<<

CMakeFiles\ProjectGr19.dir\exceptions.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\exceptions.c.obj: ..\exceptions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ProjectGr19.dir/exceptions.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\exceptions.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\exceptions.c
<<

CMakeFiles\ProjectGr19.dir\exceptions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/exceptions.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\exceptions.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\exceptions.c
<<

CMakeFiles\ProjectGr19.dir\exceptions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/exceptions.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\exceptions.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\exceptions.c
<<

CMakeFiles\ProjectGr19.dir\keypad.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\keypad.c.obj: ..\keypad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ProjectGr19.dir/keypad.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\keypad.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\keypad.c
<<

CMakeFiles\ProjectGr19.dir\keypad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/keypad.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\keypad.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\keypad.c
<<

CMakeFiles\ProjectGr19.dir\keypad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/keypad.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\keypad.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\keypad.c
<<

CMakeFiles\ProjectGr19.dir\lightSensor.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\lightSensor.c.obj: ..\lightSensor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ProjectGr19.dir/lightSensor.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\lightSensor.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\lightSensor.c
<<

CMakeFiles\ProjectGr19.dir\lightSensor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/lightSensor.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\lightSensor.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\lightSensor.c
<<

CMakeFiles\ProjectGr19.dir\lightSensor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/lightSensor.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\lightSensor.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\lightSensor.c
<<

CMakeFiles\ProjectGr19.dir\main.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ProjectGr19.dir/main.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\main.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\main.c
<<

CMakeFiles\ProjectGr19.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/main.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\main.c
<<

CMakeFiles\ProjectGr19.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/main.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\main.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\main.c
<<

CMakeFiles\ProjectGr19.dir\pins.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\pins.c.obj: ..\pins.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ProjectGr19.dir/pins.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\pins.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\pins.c
<<

CMakeFiles\ProjectGr19.dir\pins.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/pins.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\pins.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\pins.c
<<

CMakeFiles\ProjectGr19.dir\pins.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/pins.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\pins.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\pins.c
<<

CMakeFiles\ProjectGr19.dir\servo.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\servo.c.obj: ..\servo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ProjectGr19.dir/servo.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\servo.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\servo.c
<<

CMakeFiles\ProjectGr19.dir\servo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/servo.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\servo.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\servo.c
<<

CMakeFiles\ProjectGr19.dir\servo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/servo.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\servo.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\servo.c
<<

CMakeFiles\ProjectGr19.dir\startup_sam3x.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\startup_sam3x.c.obj: ..\startup_sam3x.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ProjectGr19.dir/startup_sam3x.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\startup_sam3x.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\startup_sam3x.c
<<

CMakeFiles\ProjectGr19.dir\startup_sam3x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/startup_sam3x.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\startup_sam3x.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\startup_sam3x.c
<<

CMakeFiles\ProjectGr19.dir\startup_sam3x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/startup_sam3x.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\startup_sam3x.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\startup_sam3x.c
<<

CMakeFiles\ProjectGr19.dir\system_sam3x.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\system_sam3x.c.obj: ..\system_sam3x.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/ProjectGr19.dir/system_sam3x.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\system_sam3x.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\system_sam3x.c
<<

CMakeFiles\ProjectGr19.dir\system_sam3x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/system_sam3x.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\system_sam3x.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\system_sam3x.c
<<

CMakeFiles\ProjectGr19.dir\system_sam3x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/system_sam3x.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\system_sam3x.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\system_sam3x.c
<<

CMakeFiles\ProjectGr19.dir\temprature.c.obj: CMakeFiles\ProjectGr19.dir\flags.make
CMakeFiles\ProjectGr19.dir\temprature.c.obj: ..\temprature.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/ProjectGr19.dir/temprature.c.obj"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ProjectGr19.dir\temprature.c.obj /FdCMakeFiles\ProjectGr19.dir\ /FS -c C:\Users\Axelsson\Desktop\ProjectGr19\temprature.c
<<

CMakeFiles\ProjectGr19.dir\temprature.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectGr19.dir/temprature.c.i"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\ProjectGr19.dir\temprature.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Axelsson\Desktop\ProjectGr19\temprature.c
<<

CMakeFiles\ProjectGr19.dir\temprature.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectGr19.dir/temprature.c.s"
	C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ProjectGr19.dir\temprature.c.s /c C:\Users\Axelsson\Desktop\ProjectGr19\temprature.c
<<

# Object files for target ProjectGr19
ProjectGr19_OBJECTS = \
"CMakeFiles\ProjectGr19.dir\commonFuncs.c.obj" \
"CMakeFiles\ProjectGr19.dir\display.c.obj" \
"CMakeFiles\ProjectGr19.dir\exceptions.c.obj" \
"CMakeFiles\ProjectGr19.dir\keypad.c.obj" \
"CMakeFiles\ProjectGr19.dir\lightSensor.c.obj" \
"CMakeFiles\ProjectGr19.dir\main.c.obj" \
"CMakeFiles\ProjectGr19.dir\pins.c.obj" \
"CMakeFiles\ProjectGr19.dir\servo.c.obj" \
"CMakeFiles\ProjectGr19.dir\startup_sam3x.c.obj" \
"CMakeFiles\ProjectGr19.dir\system_sam3x.c.obj" \
"CMakeFiles\ProjectGr19.dir\temprature.c.obj"

# External object files for target ProjectGr19
ProjectGr19_EXTERNAL_OBJECTS =

ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\commonFuncs.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\display.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\exceptions.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\keypad.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\lightSensor.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\main.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\pins.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\servo.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\startup_sam3x.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\system_sam3x.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\temprature.c.obj
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\build.make
ProjectGr19.exe: CMakeFiles\ProjectGr19.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable ProjectGr19.exe"
	C:\Users\Axelsson\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5457.51\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\ProjectGr19.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~3\2019\BUILDT~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\ProjectGr19.dir\objects1.rsp @<<
 /out:ProjectGr19.exe /implib:ProjectGr19.lib /pdb:C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\ProjectGr19.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\ProjectGr19.dir\build: ProjectGr19.exe
.PHONY : CMakeFiles\ProjectGr19.dir\build

CMakeFiles\ProjectGr19.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ProjectGr19.dir\cmake_clean.cmake
.PHONY : CMakeFiles\ProjectGr19.dir\clean

CMakeFiles\ProjectGr19.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Axelsson\Desktop\ProjectGr19 C:\Users\Axelsson\Desktop\ProjectGr19 C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug C:\Users\Axelsson\Desktop\ProjectGr19\cmake-build-debug\CMakeFiles\ProjectGr19.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\ProjectGr19.dir\depend
