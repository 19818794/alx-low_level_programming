# C - Static libraries

The aim is to learn about static libraries, how does it work, how to create one, and how to use them; so as to be familiar with the basic usage of ar, ranlib, nm.

# Technologies

tested on Ubuntu 20.04 LTS.

C files are complied using gcc 9.4.0.

C files are written according to the GNU C89 dialect, which includes some extensions beyond the standard C89.

# Files

All of the following files are programs written in C and shell:

| Filename               | Description
| ---------------------- | -------------------------------------------------------------------------------------------------------- 
| `libmy.a`              | create the static library `libmy.a` containing all the functions listed in `main.h`.
| `create_static_lib.sh` | the shell script creates a static library `liball.a` from all the `.c` files that are in the current directory.
| `main.h`               | header file includes the prototypes of all functions.
