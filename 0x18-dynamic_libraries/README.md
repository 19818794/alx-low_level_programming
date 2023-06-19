# C - Dynamic libraries

The aim is to learn about dynamic libraries, how it works, how to create one, how to use them, the differences between static and shared libraries, and the primary usage of $LD_LIBRARY_PATH, nm, ldd, ldconfig.

# Technologies

tested on Ubuntu 20.04 LTS.

C files are complied using gcc 9.4.0.

C files are written according to the GNU C89 dialect, which includes some extensions beyond the standard C89.

# Files

All of the following files are programs written in C and Shell:

| Filename               | Description
| ---------------------- | -------------------------------------------------------------------------------------------------------- 
| `libdynamic.so`        | a dynamic library containing all the functions listed in `main.h`.
| `main.h`               | header file includes the prototypes of all functions.
| `1-create_dynamic_lib.sh` | creates a dynamic library called `liball.so` from all the .c files that are in the current directory.
| `liball.so`               | a dynamic library containing all the functions in the current directory.
| `100-operations.so`       | a dynamic library that contains C functions that can be called from Python.
